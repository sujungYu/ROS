from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    talker_node = Node(
        package = "test_package_ysj", 
        executable = "simple_publisher_node",
    )

    service_node = Node(
        package = "test_package_ysj",
        executable = "service_server_node",
    )
    ld.add_action(talker_node)
    ld.add_action(service_node)

    return ld