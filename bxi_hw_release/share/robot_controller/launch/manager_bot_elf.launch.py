import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, TimerAction
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    use_sim_time = LaunchConfiguration("use_sim_time", default="false")

    urdf_file = os.path.join(
        get_package_share_directory("description"),
        "model/urdf/bot_elf/urdf/bot_elf.urdf"
    )

    gait_file = os.path.join(
        get_package_share_directory("robot_controller"),
        "config/bot_elf_gait.info"
    )

    model_info_file = os.path.join(
        get_package_share_directory("robot_controller"),
        "config/bot_elf_model.info"
    )

    task_file = os.path.join(
        get_package_share_directory("robot_controller"),
        "config/bot_elf_task.info"
    )

    return LaunchDescription(
        [
            TimerAction(
                period=2.0,
                actions=[
                    Node(
                        package="robot_controller",
                        executable="robot_controller",
                        name="robot_controller",
                        output="screen",
                        parameters=[
                            {"/urdf_file": urdf_file},
                            {"/gait_file": gait_file},
                            {"/model_info_file": model_info_file},
                            {"/task_file": task_file},
                        ],
                        emulate_tty=True,
                        arguments=[("__log_level:=debug")],
                    )
                ]),
        ]
    )
