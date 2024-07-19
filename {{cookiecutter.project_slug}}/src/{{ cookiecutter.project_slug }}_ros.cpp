#include "{{ cookiecutter.project_slug }}/{{ cookiecutter.project_slug }}_ros.h"

MyClassROS::MyClassROS(ros::NodeHandle& nh) : nh_(nh) {
    // ROS-specific initialization
}

void MyClassROS::initialize() {
    // ROS-specific initialization code
}

void MyClassROS::update() {
    // ROS-specific update code
}