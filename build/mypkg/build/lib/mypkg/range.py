import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16
from person_msgs.srv import Query

class Value(Node):
    def __init__(self):
        super().__init__("safety")
        self.pub = self.create_publisher(Int16, "safety", 10)
        self.safety = 0
        srv = self.create_service(Query, "query", self.cb)

    def cb(self, request, response): 
        msg = Int16()
        self.safety += request.safety
        msg.data = self.safety
        response.total = self.safety
        self.pub.publish(msg)
        if self.safety >= 100:
            self.get_logger().info("Value reached 100. shutdown")
            response.total = self.safety
            self.destroy_node()
            rclpy.shutdown()
            return response
        return response


def main():
    rclpy.init()
    node = Value()
    rclpy.spin(node)
    

