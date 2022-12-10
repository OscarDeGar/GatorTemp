import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
import numpy as np
import math

class wall_detection(Node):
    def __init__(self):
        
        #build class
        super().__init__("wall_detection")

        #Create subscibers and publishers
        self.sub = self.create_subscription(LaserScan, 'scan', self.injest_scan, 10)

        #allocate variables
        self.current_scan = None
        self.scan_length = 761
        self.front_spread = 15 * math.pi / 180
        self.danger_threshold = 5
        

        

    def injest_scan(self, msg):
        self.current_scan = msg
        self.check_front_area()

    
    def check_front_area(self):
        radians = np.linspace(self.current_scan.angle_min, self.current_scan.angle_max, len(self.current_scan.ranges))
        mapped_list = list(zip(radians,self.current_scan.ranges))
        
        left_start = math.floor((self.scan_length / 2) - (self.front_spread * self.current_scan.angle_increment / 2))
        right_end = math.ceil((self.scan_length / 2) - (self.front_spread * self.current_scan.angle_increment / 2))
        
        cone_ranges = self.current_scan.ranges[left_start:right_end]

        if np.average(cone_ranges) <= self.danger_threshold:
            print("Stop")
        else:
            print("Go")






def main(args=None):
    rclpy.init()         # Initialize communication with ROS
    node = wall_detection()       # Create our Node
    rclpy.spin(node)              # Run the Node until ready to shutdown
    rclpy.shutdown()              # cleanup


if __name__ == '__main__':
    main()
