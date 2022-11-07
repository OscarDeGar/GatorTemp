import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
import time
import numpy as Np
import random

class wall_detection(Node):
    def __init__(self):
        super().__init__("wall_detection")
        self.sub = self.create_subscription(LaserScan, 'scan', self.injest_scan, 10)

    def injest_scan(self, msg):





def main(args=None):
    rclpy.init(args=args)         # Initialize communication with ROS
    node = (wall_detection)       # Create our Node
    rclpy.spin(node)              # Run the Node until ready to shutdown
    rclpy.shutdown()              # cleanup


if __name__ == '__main__':
    main()
