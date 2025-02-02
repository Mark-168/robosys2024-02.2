import rclpy
from rclpy.node import Node
from person_msgs.srv import Query

rclpy.init()
node = Node("talker")


def cb(request, response):
    if request.name == "武田遊星":
        response.age = 25
    else:
        response.age = 255

    return response


def main():
    srv = node.create_service(Query, "query", cb)
    rclpy.spin(node)

