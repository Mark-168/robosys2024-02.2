import rclpy
from rclpy.node import Node
from person_msgs.srv import Query

rclpy.init()
node = Node("range")

def cb(request, response):
    if request.light > 40 and request.light < 60 :
        response.color = 8
    elif request.light <= 40:
        response.color = 0
    else:
        response.color = 9

    return response

def main():
    srv = node.create_service(Query, "query", cb)
    rclpy.spin(node)
