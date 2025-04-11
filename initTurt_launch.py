from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess, TimerAction

def generate_launch_description():
  launchDesc = LaunchDescription([
    Node(
      package='turtlesim',
      executable='turtlesim_node',
      name='sim'
    ),
    Node(
      package='adipu_turtlesim_controller',
      executable='mouse_follow_node',
      name='mouse'
    )
  ])
        
  launchDesc.add_action(
    ExecuteProcess(
      cmd=[
        "ros2",
        "service",
        "call",
        "/spawn",
        "turtlesim/srv/Spawn",
        "{x: 2.0, y: 2.0, theta: 0.0, name: 'turtle2'}"
      ],
      output='screen'
    )
  )
  return launchDesc