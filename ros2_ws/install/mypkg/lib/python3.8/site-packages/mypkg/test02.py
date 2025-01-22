import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16


class Listener(Node):
    def __init__(self):
        super().__init__("listener")
        self.sub = self.create_subscription(Int16, "value",self.cb, 10)


    def cb(self, msg):
        self.get_logger().info("count: %d" % msg.data) 


def main():
    rclpy.init()
    node = Listener()
    rclpy.spin(node)
