#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
import tkinter as tk
from std_srvs.srv import Empty
from math import sqrt, pow, atan2, sin, cos

CA = 10
CL = 0.01

def distFromGoal(x, y, centerx, centery):
  return sqrt(pow(x - centerx, 2) + pow(y - centery, 2))

def angleFromGoal(x, y, centerx, centery):
  return atan2(y - centery, x - centerx)

class Turtle1Controller(Node):
  def __init__(self):
    super().__init__("mouse_follow")
    self.create_timer(0.1, self.publish_cmdVel)
    self.root = tk.Tk()
    self.cmdVelMsg=tk.StringVar()
    self.pause_resume_info = tk.StringVar()
    self.prStat = "PAUSE"
    self.pause_resume_info.set(f"Click here to {self.prStat} turtle1 control, right click to clear drawing")
    self.paused = False
    self.lin = 0.0
    self.ang = 0.0
    self.cmdPub = self.create_publisher(Twist, '/turtle1/cmd_vel', 1) # always most up-to-date, queue size 1
    self.poseSub = self.create_subscription(Pose, '/turtle1/pose', self.update_theta, 1)
    self.theta = 0
    self.root.geometry("500x500")
    self.root.title("Aditya's Turtle1 Controller")
    self.canvas = tk.Canvas(self.root, width=500, height=500)
    self.canvas.pack(fill=tk.BOTH, expand=True)
    self.position_label = tk.Label(self.canvas, textvariable=self.cmdVelMsg)
    self.position_label.pack(pady=20)
    self.pause_resume_label = tk.Label(self.canvas, textvariable=self.pause_resume_info)
    self.pause_resume_label.place(relx=0.5, rely=0.5, anchor=tk.CENTER)
    self.root.bind('<Button-1>', self.pauseResume)
    self.clear_client = self.create_client(Empty, '/clear')
    self.root.bind('<Button-3>', self.clear_background)

  def update_theta(self, data):
    self.theta = data.theta

  def publish_cmdVel(self):
    if self.paused:
      self.root.update_idletasks()
      self.root.update()
      return
    
    self.calcGoal()
    msg = Twist()
    msg.linear.x = self.lin
    msg.angular.z = self.ang
    self.cmdPub.publish(msg)

    self.cmdVelMsg.set(f"lin.x: {self.lin:.2f}, ang.z: {self.ang:.2f}") #for tkinter display

    self.root.update_idletasks()
    self.root.update()

  def calcGoal(self):
    x = self.root.winfo_pointerx()
    y = self.root.winfo_screenheight() - self.root.winfo_pointery()
    center_x = self.root.winfo_screenwidth() // 2
    center_y = self.root.winfo_screenheight() // 2
    dist = distFromGoal(x, y, center_x, center_y)
    angle = angleFromGoal(x, y, center_x, center_y)
    self.ang = CA*atan2(sin(angle - self.theta), cos(angle - self.theta)) 
    self.lin = CL * dist 
    
  def pauseResume(self, event):
    self.paused = not self.paused
    self.prStat = "RESUME" if self.paused else "PAUSE"
    self.pause_resume_info.set(f"Click here to {self.prStat} turtle1 control, right click to clear drawing")
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