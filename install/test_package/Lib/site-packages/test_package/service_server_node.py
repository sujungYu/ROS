import rclpy
from rclpy.node import node

from example_interfaces.srv import AddTwoInts
from mt_interfaces_ysj.srv import AddThressInts

class MyServiceServer(Node):
    def __init__(self):
        super().__init__('server_node')
        self.srv = self.create_service(AddTwoInts,'add_two_ints', self.add_two_ints_callback)
    
    def add_two_ints_callback(self, request, response):
        response.sum = request.a + request.b + request.c
        self.get_logger().info('Incoming request.. a: %d b: %d c: %d' % (request.a, request.b, request.c))
        return response

def main(args=None):
    rclpy.init(args=args)
    node = MyServiceServer()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()