import rclpy
from rclpy.node import Node
from person_msgs.srv import Query

rclpy.init()
node = Node("listener")


def main():
    client = node.create_client(Query, 'query')
    while not client.wait_for_service(timeout_sec=1.0):
        node.get_logger().info('待機中')

    req = Query.Request()
    req.light = "43"
    future = client.call_async(req)
    
    while rclpy.ok():
        rclpy.spin_once(node)
        if future.done():
            try:
                value.color = future.result()
            except:
                node.get_logger().info('呼び出し失敗')
            else:
                if value.color == 0:
                    node.get_logger().info("黒")
                elif value.color == 9:
                    node.get_logger().info("白")
                else:
                    node.get_logger().info("不明")
                    
            break
        
    node.destroy_node()
    rclpy.shutdown()
