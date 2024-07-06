import os
from ament_index_python.packages import get_package_share_path
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    # xml_file_name = "model/xml/atlas/atlas_v5.xml"
    # xml_file_name = "model/xml/cassie/biped.xml"
    # # xml_file = os.path.join(get_package_share_path("description_cassie"), xml_file_name)
    # xml_file = xml_file_name

    return LaunchDescription(
        [
            Node(
                package="hardware",
                executable="hardware",
                name="hardware",
                output="screen",
                parameters=[
                    # {"simulation/model_file": xml_file},
                ],
                emulate_tty=True,
                arguments=[("__log_level:=debug")],
            ),
        ]
    )
