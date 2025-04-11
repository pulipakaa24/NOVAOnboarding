from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='adipu_turtlesim_controller',
            executable='chaser_node',
            name='turtle_chaser'
        ),
        Node(
            package='adipu_turtlesim_controller',
            executable='chaser_flipper_node',
            name='turtle_flipper'
        )
    ])