import rclpy
from rclpy.node import Node
from person_msgs.srv import Query

rclpy.init()
node = Node("talker")

def cb(request, response):
    if request.light < 45 :
        response.color = 0
    else:
        response.color = 9

    return response

def main():
    srv = node.create_service(Query, "query", cb)
    rclpy.spin(node)
