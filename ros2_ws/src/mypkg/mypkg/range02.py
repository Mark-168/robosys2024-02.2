import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16
from person_msgs.srv import Query

class Sensor(Node):
    def __init__(self):
        super().__init__("sensor")
        self.pub = self.create_publisher(Int16, "value", 10)
        self.value = 0
        srv = self.create_service(Query, "query", self.cb)

    def cb(self, request, response): 
        msg = Int16()
        msg.data = self.value
        self.pub.publish(msg)
        self.value += request.value 
        response.total = self.value
        if self.value >= 100:
            self.get_logger().info("Value reached 100")
            rclpy.shutdown() 
            response.total = self.value
            return
        return response


def main():
    rclpy.init()
    node = Sensor()
    rclpy.spin(node)
    

