#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from adipu_msg.msg import Flip
from math import pow, atan2, sqrt, pi, sin, cos

CL = 1
CA = 5

class Turtle2Controller(Node):
  def __init__(self):
    super().__init__("turtle_chase")
    #always have latest data, set queue size to 1
    self.turt1poseSub = self.create_subscription(Pose, '/turtle1/pose', self.update_goal, 1)
    self.turt2poseSub = self.create_subscription(Pose, '/turtle2/pose', self.update_start, 1) 
    self.turt2velPub = self.create_publisher(Twist, '/turtle2/cmd_vel', 1) 
    self.turtFlipSub = self.create_subscription(Flip, '/turtle2/flipper', self.flip, 1)
    self.runAway = False
    self.create_timer(0.05, self.approach_goal)

    self.pose = Pose()
    self.goal_pose = Pose()
    self.tolerance = 0.1
    self.away_thresh = 7

  def update_start(self, data):
    self.pose = data
    self.pose.x = round(self.pose.x, 4)
    self.pose.y = round(self.pose.y, 4)

  def update_goal(self, data):
    self.goal_pose = data
    self.goal_pose.x = round(self.goal_pose.x, 4)
    self.goal_pose.y = round(self.goal_pose.y, 4)

  def flip(self, data):
    self.runAway = not self.runAway

  def distFromGoal(self):
    return sqrt(pow(self.goal_pose.x - self.pose.x, 2) 
            + pow(self.goal_pose.y - self.pose.y, 
              2)) if not self.runAway else self.away_thresh - sqrt(pow(self.goal_pose.x - self.pose.x, 2) 
                                             + pow(self.goal_pose.y - self.pose.y, 2))
  
  def angleFromGoal(self):
    return atan2(self.goal_pose.y - self.pose.y, 
                 self.goal_pose.x - self.pose.x) if not self.runAway else pi + atan2(self.goal_pose.y - 
                                                        self.pose.y, self.goal_pose.x - self.pose.x)
  
  def approach_goal(self):
    turt2_cmd = Twist()
    dist = self.distFromGoal()
    angFromGoal = self.angleFromGoal()
    # normalize angle difference, to account for -180 to 180 jump
    ang = atan2(sin(angFromGoal - self.pose.theta), cos(angFromGoal - self.pose.theta))
    directionalCoeff = 1 - abs(ang)*2/pi # filter movement so it only works constructively to our goal.
    if dist >= self.tolerance:
      turt2_cmd.linear.x = CL * dist * directionalCoeff
      turt2_cmd.angular.z = CA*ang # proportional control, as outlined in https://wiki.ros.org/turtlesim/Tutorials/Go%20to%20Goal

    else:
      turt2_cmd.linear.x = 0.0
      turt2_cmd.angular.z = 0.0

    self.turt2velPub.publish(turt2_cmd)
    self.get_logger().info(f"command: lin.x={turt2_cmd.linear.x:.2f}, ang.z={turt2_cmd.angular.z:.2f}")

def main(args=None):
  rclpy.init(args=args)
  node = Turtle2Controller()
  rclpy.spin(node)
  rclpy.shutdown()

if __name__=='__main__':
  main()