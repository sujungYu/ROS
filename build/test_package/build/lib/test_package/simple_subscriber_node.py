import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class MySubscriber(Node):
    def __init__(self):
        super().__init__('my_subscriber')
        self.subscription = self.create_subscription(
            String,
            'topic_A',
            self.lister_callback,
            10
        )
        self.subscription
    def lister_callback(self, msg):
        self.get_logger().info('I heard: %s' % msg.data)

def main():
    rclpy.init()
    my_subscriber = MySubscriber()
    rclpy.spin(my_subscriber)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
