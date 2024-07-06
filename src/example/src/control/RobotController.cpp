#include "control/RobotController.h"
#include <rcpputils/asserts.hpp>

RobotController::RobotController() : Node("RobotController")
{
    auto qos = rclcpp::QoS(rclcpp::KeepLast(1), rmw_qos_profile_sensor_data);
    actuators_cmds_pub_ptr_ =
        this->create_publisher<communication::msg::ActuatorCmds>(
            topic_prefix_ + "actuators_cmds", qos);

    joints_state_subscription_ =
        this->create_subscription<sensor_msgs::msg::JointState>(
            topic_prefix_ + "joint_states", qos,
            std::bind(&RobotController::joint_callback, this,
                      std::placeholders::_1));

    imu_subscription_ = this->create_subscription<sensor_msgs::msg::Imu>(
        topic_prefix_ + "imu_data", qos,
        std::bind(&RobotController::imu_callback, this, std::placeholders::_1));
}

void RobotController::imu_callback(
    const sensor_msgs::msg::Imu::SharedPtr msg) const
{
    // todo
    (void)msg;
}

void RobotController::joint_callback(
    const sensor_msgs::msg::JointState::SharedPtr msg) const
{
    // todo
    (void)msg;
}

void RobotController::touch_callback(
    const communication::msg::TouchSensor::SharedPtr msg) const
{
    // todo
    (void)msg;
}

void RobotController::init()
{
    inner_loop_thread_ = std::thread(&RobotController::inner_loop, this);
    run_ = true;
}

RobotController::~RobotController()
{
    run_ = false;
    inner_loop_thread_.join();
}

void RobotController::inner_loop()
{
    rclcpp::Rate loop_rate(1.0 / dt_);
    std::this_thread::sleep_for(std::chrono::milliseconds(10));

    std::string joint_name[] = {
        "l_hip_z_joint",
        "l_hip_x_joint",
        "l_hip_y_joint",
        "l_knee_y_joint",
        "l_ankle_y_joint",
        "l_ankle_x_joint",
        "r_hip_z_joint",
        "r_hip_x_joint",
        "r_hip_y_joint",
        "r_knee_y_joint",
        "r_ankle_y_joint",
        "r_ankle_x_joint",

        "l_shld_y_joint",
        "l_shld_x_joint",
        "l_shld_z_joint",
        "l_elb_y_joint",
        "r_shld_y_joint",
        "r_shld_x_joint",
        "r_shld_z_joint",
        "r_elb_y_joint"};

    double joint_pos[] = {
        0,
        0.04,
        -0.5,
        1.0,
        -0.5,
        -0.04,
        0,
        -0.04,
        -0.5,
        1.0,
        -0.5,
        0.04,
        0.7,
        0.2,
        -0.1,
        -1.5,
        0.7,
        -0.2,
        0.1,
        -1.5};

    while (rclcpp::ok() && run_)
    {
        communication::msg::ActuatorCmds actuatorCmds;
        actuatorCmds.header.frame_id = std::string("bot_elf");
        actuatorCmds.header.stamp = this->now();

        for (size_t i = 0; i < joint_name->size(); i++)
        {
            actuatorCmds.actuators_name.emplace_back(joint_name[i]);
            actuatorCmds.pos.emplace_back(joint_pos[i]);
            actuatorCmds.vel.emplace_back(0);
            actuatorCmds.torque.emplace_back(0);

            actuatorCmds.kp.emplace_back(10);
            actuatorCmds.kd.emplace_back(1);
        }

        actuators_cmds_pub_ptr_->publish(actuatorCmds);

        loop_rate.sleep();
    }
}