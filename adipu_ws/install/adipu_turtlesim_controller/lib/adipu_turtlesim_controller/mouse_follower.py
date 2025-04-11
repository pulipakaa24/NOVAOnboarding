#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import tkinter as tk
from std_srvs.srv import Empty

CA = 5
CL = 5

class Turtle1Controller(Node):
  def __init__(self):
    super().__init__("mouse_follow")
    self.create_timer(0.1, self.publish_cmdVel)
    self.root = tk.Tk()
    self.cmdVelMsg=tk.StringVar()
    self.pause_resume_info = tk.StringVar()
    self.prStat = "PAUSE"
    self.pause_resume_info.set(f"Click anywhere to {self.prStat} turtle1 control, right click to clear drawing")
    self.paused = False
    self.lin = 0.0
    self.ang = 0.0
    self.cmdPub = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
    self.root.geometry("500x500")
    self.canvas = tk.Canvas(self.root, width=500, height=500)
    self.canvas.pack(fill=tk.BOTH, expand=True)
    self.canvas.create_line(100, 100, 90, 30, 10, 10, smooth=True, arrow=tk.LAST, width=10, arrowshape=(10, 10, 10))
    self.canvas.create_line(100, 400, 90, 470, 10, 490, smooth=True, arrow=tk.LAST, width=10, arrowshape=(10, 10, 10))
    self.canvas.create_line(400, 100, 410, 30, 490, 10, smooth=True, arrow=tk.LAST, width=10, arrowshape=(10, 10, 10))
    self.canvas.create_line(400, 400, 410, 470, 490, 490, smooth=True, arrow=tk.LAST, width=10, arrowshape=(10, 10, 10))
    self.position_label = tk.Label(self.canvas, textvariable=self.cmdVelMsg)
    self.position_label.pack(pady=20)
    self.pause_resume_label = tk.Label(self.canvas, textvariable=self.pause_resume_info)
    self.pause_resume_label.place(relx=0.5, rely=0.5, anchor=tk.CENTER)
    self.root.bind('<Motion>', self.motion)
    self.root.bind('<Button-1>', self.pauseResume)
    self.clear_client = self.create_client(Empty, '/clear')
    self.root.bind('<Button-3>', self.clear_background)

  def publish_cmdVel(self):
    if self.paused:
      self.root.update_idletasks()
      self.root.update()
      return
    msg = Twist()
    msg.linear.x = self.lin
    msg.angular.z = self.ang
    self.cmdPub.publish(msg)

    self.cmdVelMsg.set(f"lin.x: {self.lin:.2f}, ang.z: {self.ang:.2f}")
    self.get_logger().info(f"Command: lin.x={self.lin:.2f}, ang.z={self.ang:.2f}")

    self.root.update_idletasks()
    self.root.update()

  def motion(self, event):
    x = self.root.winfo_pointerx() - self.root.winfo_rootx()
    y = self.root.winfo_pointery() - self.root.winfo_rooty()
    center_x = self.root.winfo_width() // 2
    center_y = self.root.winfo_height() // 2
    self.ang = CA*(x - center_x) * 2/self.root.winfo_width() # x from -C to C for angular
    self.lin = -1*CL*(y - center_y)*2/self.root.winfo_height() # y from -C to C for linear
    if self.lin > 0: self.ang *= -1
    
  def pauseResume(self, event):
    self.paused = not self.paused
    self.prStat = "RESUME" if self.paused else "PAUSE"
    self.pause_resume_info.set(f"Click anywhere to {self.prStat} turtle1 control, right click to clear drawing")
    msg = Twist()
    msg.linear.x = 0.0
    msg.angular.z = 0.0
    self.cmdPub.publish(msg)
    self.get_logger().info("Paused" if self.paused else "Resumed")

  def clear_background(self, event):
    if not self.clear_client.wait_for_service(timeout_sec=1.0):
      self.get_logger().warn('/clear doesn\'t exist yet :(')
      return
    
    req = Empty.Request()
    asyncreq = self.clear_client.call_async(req)

def main(args=None):
  rclpy.init(args=args)

  node = Turtle1Controller()
  rclpy.spin(node)
  rclpy.shutdown()

if __name__=='__main__':
  main()