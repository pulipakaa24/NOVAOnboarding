# NOVAOnboarding
Onboarding for UTD Nova Lab. Demo: https://youtu.be/Avia9JZHDv0

## Procedure
### Container Setup
- Used Ubuntu:jammy image with a container mounted to host volume `dockerShare` in my documents folder
  - Downloaded ros2 dependencies and source code and built (took a couple hours)
  - added `.bashrc` file to auto-source ros2 on container start.
- Exported this install container to a docker image named `ros2SourceRunner`
- Created a new docker network named `main_to_chaser`
- Created two new containers from the docker image ros2SourceRunner, both mounted to the same host volume `dockerShare`, both connected to network `main_to_chaser`
  - Both with x11 forwarding for use with xQuartz to forward the screen output to the main machine

### Ros2 Package Setup
- Created my `adipu_ws` workspace in dockerShare, and ran `ros2 pkg create adipu_turtlesim_controller --build-type ament_python -- dependencies rclpy`
  - This created the package for all my nodes
  - Could then run colcon build in my workspace to build this package (had to downgrade `setuptools`)
- Created `mouse_follow_node` that sends commands to turtle1 based on mouse position on screen
  - Plus, can click on pop up window to pause control and right-click to clear canvas!
  - Added node to `setup.py` entrypoints
  - Based on proportional control, similar to chaser turtle.
    - dist. from imaginary goal is mouse position relative to center of screen
    - angle from imaginary goal is angle to mouse position from center of screen.
- Created `initTurt_launch.py`, which calls both the main `turtlesim_node` as well as `mouse_follow_node` and calls the `spawn` service when available
  - Didn't realize availability checking was built into the service call initially, spent a lot of time messing with `TimerAction()` lol
- Created `chaser_node` and `chaser_flipper_node` that make turtle 2 run toward or away from turtle 1 and flip the behavior of turtle 2, respectively
  - Tested these nodes with Bool message type initially
- Created `adipu_msg` package, added `Flip` message type
  - `Flip` is an empty message type, as `chaser_node` only needs to know when to flip. The rest is handled by the nodes themselves.
  - Learning how to make this package was a bit harder, as I had to use cmakelists and stuff.
- Switched message type to `Flip()` in `chaser_node` and `chaser_flipper_node`
- Created launch file `chaseTurt_launch.py` to launch `chaser_node` and `chaser_flipper_node`

### Running it
- Ran `initTurt_launch.py` in container `mainTurt`
- Ran `chaseTurt_launch.py` in container `chaserTurt`

### dockerShare Volume File Structure
```text
dockerShare
├── .bashrc (included in repo)
├── adipu_ws
│   ├── build
│   ├── install
│   ├── log
│   └── src
│       └── (files included in this repo @ adipu_ws/src/)
├── ros2_humble
│   └── (ros2 source install: build, install, log, src)
├── initTurt_launch.py (included in repo)
└── chaseTurt_launch.py (included in repo)
```
