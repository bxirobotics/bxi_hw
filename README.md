# bxi_hw_sdk

## 简介
本仓库是半醒科技有限公司机器人软件仓库，提供机器人控制程序以及开发示例，基于`ROS2`开发，主要包含以下几个包（除`bxi_example`包外均为二进制发布）：

1. `communication`：机器人通信包定义，包含自定义的通信包格式，`src/`目录下有相应源码，仅供参考使用，包已经编译进`bxi_hw_release/`目录
2. `description`:机器人描述文件，包含机器人`urdf`文件以及`meshe`文件
3. `mujoco`:机器人仿真环境，用于提前验证算法，所有算法在真机运行之前必须使用仿真环境进行验证
4. `hardware`:机器人硬件控制包，启动后本节点发布机器人所有传感器数据，并接收控制指令
5. `remote_controller`:遥控器，使用`ps4`手柄控制机器人移动，可以控制真机和仿真环境
7. `keyboard_controller`:键盘控制器，使用按键控制机器人移动，建议不要用来控制真机，仅限仿真环境使用
8. `robot_controller`:本公司提供的基础控制程序，可以通过遥控器实现全向移动
9. `src/bix_example`:机器人控制接口使用示例，实现初始化流程和基础的消息接收和发送

## 使用说明

### 系统要求以及依赖
真机已配置好各种环境，到手即可使用，重新安装系统后或者在其他机器运行仿真需重新配置环境
1. 系统版本需为`Ubuntu 22.04`，并安装对应版本`ROS2`
2. 运行自带控制算法需安装`pinocchio 2.7.1`，并设置环境变量`LD_LIBRARY_PATH`
3. 运行`mujoco`仿真需安装`libglfw3-dev`
4. 将`source xxx/bxi_hw_realease/setup.bash`加入`.bashrc`，运行真机需以`root`用户运行

### 软件系统介绍

1. `hw`为`hardware`的缩写，所有带`hw`后缀的`launch`文件代表启动真机，请谨慎运行
2. 仿真环境和真机可以使用完全相同的控制代码，只用切换`launch`文件即可在仿真和真机之间切换，仿真代码的话题使用`simulation/`前缀，真机话题使用`hardware/`前缀，具体可看`src/example`中的话题参数设置
3. 仿真和真机均设置有失控保护，丢失控制指令`100ms`后触发保护，触发保护后电机失能，需重新初始化才可使用

### 仿真与真机差异

1. 仿真环境设置了虚拟悬挂，启动后机器人默认为悬挂状态，需要在初始化时释放悬挂（真机运行时忽略悬挂相关信号）
2. 仿真环境有全局里程计`odm`话题，可以在前期简化算法开发，启动`hardware`时没有这个话题
3. 仿真环境有真足底力传感器`touch_sensor`，真机传感器还在开发中。`hardware`虽然也发布了足底力，但是非常粗略的估计值，有更高的精度要求可以根据四足中的触底状态估计算法进行估计

### 启动流程

仿真和真机启动时电机都处于失能状态，所有参数均不可控，启动流程分为两步，第一步初始化使能电机的位置控制，电机可以设置`pos kp kd`三个参数实现位置控制，第二步初始化使能全部控参数，电机可以设置`pos vel tor kp kd`，具体启动示例可以参考`src/bxi_example`

### 运行示例代码
示例代码简单描述了如何订阅接收传感器消息，调用初始化服务并对机器人进行一个简单的位置控制
1. 编译`src/bxi_example`并加入环境变量
2. 运行`ros2 launch bxi_example example_launch.py`启动仿真程序
3. 运行`ros2 launch bxi_example example_launch_hw.py`启动真机程序
4. 上述命令同时启动机器人节点和一个控制节点

### 运行基础控制程序
TODO:

<!-- ### 启动节点指令

1. `mujoco`仿真环境:`ros2 launch mujoco simulation_bot_elf_launch.py`
2. 遥控器节点:`ros2 launch remote_controller remote_conroller_launch.py`
3. 运行`hardware`节点：`ros2 launch hardware hardware_launch.py`
4. 运行控制程序指令：`ros2 launch robot_controller manager_bot_elf.launch.py` -->

## 注意事项
大尺寸机器人有一定的危险性，每一步操作之前一定仔细检查！所有控制程序必须经过仿真后才可上真机运行，有任何异常及时按停止按钮！


## TODO
TODO:本文档持续完善中,后续会添加更详细的使用步骤说明...