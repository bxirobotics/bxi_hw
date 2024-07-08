# bxi_hw_sdk

## 简介
本仓库是半醒科技有限公司机器人软件仓库，提供机器人控制程序以及开发示例，基于ROS2开发，主要包含以下几个包（除`example`包外均为二进制发布）：

1. `communication`：机器人通信包定义，包含自定义的通信包格式，`src/`目录下有相应源码，仅供参考使用，包已经编译进`bxi_hw_release/`目录
2. `description`:机器人描述文件，包含机器人`urdf`文件以及`meshe`文件
3. `mujoco`:机器人仿真环境，用于提前验证算法，所有算法在真机运行之前必须使用仿真环境进行验证
4. `hardware`:机器人硬件控制包，启动后本节点发布机器人所有传感器数据，并接收控制指令
5. `remote_controller`:遥控器，使用`ps4`手柄控制机器人移动
6. `robot_controller`:本公司提供的基础控制程序，可以通过遥控器实现全向移动
7. `src/example`:机器人控制接口使用示例，实现基础的消息接收和发送

## 使用说明

### 系统要求以及依赖
真机已配置好各种环境，到手即可使用，重新安装系统后或者在其他机器运行仿真需重新配置环境
1. 系统版本需为`Ubuntu 22.04`，并安装对应版本`ROS2`
2. 运行控制算法需安装`pinocchio 2.7.1`，并设置环境变量`LD_LIBRARY_PATH`
3. 运行`mujoco`仿真需安装`libglfw3-dev`

### 启动节点指令
需提前将`source bxi_hw_realease/setup.bash`加入`.bashrc`
1. `mujoco`仿真环境:`ros2 launch mujoco simulation_bot_elf_launch.py`
2. 遥控器节点:`ros2 launch remote_controller remote_conroller_launch.py`
3. 运行`hardware`节点：`ros2 launch hardware hardware_launch.py`
4. 运行控制程序指令：`ros2 launch robot_controller manager_bot_elf.launch.py`

## 注意事项
大尺寸机器人有一定的危险性，每一步操作之前一定仔细检查！所有控制程序必须经过仿真后才可上真机运行，有任何异常及时按停止按钮！


## TODO
TODO:本文档持续完善中,后续会添加更详细的使用步骤说明...