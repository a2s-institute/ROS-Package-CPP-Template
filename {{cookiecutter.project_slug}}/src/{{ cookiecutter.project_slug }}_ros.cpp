#include "{{ cookiecutter.project_slug }}/{{ cookiecutter.project_slug }}_ros.h"
#
MyObjectROS::MyClassROS(ros::NodeHandle& nh) : nh_(nh) {
    // ROS-specific initialization
}

void MyObjectROS::initialize() {
    // ROS-specific initialization code
}

void MyObjectROS::update() {
    // ROS-specific update code
}