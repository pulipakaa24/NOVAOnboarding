import rclpy
from rclpy.node import Node
from adipu_turtlesim_controller.msg import Flip

class Turtle2Flipper(Node):
  def __init__(self):
    super().__init__("turtle_flip")
    self.flipPub = self.create_publisher(Flip, '/turtle2/flipper', 1)
    self.create_timer(10, self.flip)
  
  def flip(self):
    msg = Flip()
    self.flipPub.publish(msg)


def main(args=None):
  rclpy.init(args=args)
  node = Turtle2Flipper()
  rclpy.spin(node)
  rclpy.shutdown()