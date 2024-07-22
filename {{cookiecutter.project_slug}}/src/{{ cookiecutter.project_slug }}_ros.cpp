#include "{{ cookiecutter.project_slug }}/{{ cookiecutter.project_slug }}_ros.h"
#
MyClassROS::MyClassROS(ros::NodeHandle& nh) : nh_(nh) {
    // ROS-specific initialization
    pub_ = nh_.advertise<std_msgs::String>("string_topic", 10);
}

void MyClassROS::initialize() {
    // ROS-specific initialization code
}

void MyClassROS::update() {
    // ROS-specific update code
    std_msgs::String msg;
    msg.data = MyClass::getHelloWorldString();  // Use the string from MyClass
    pub_.publish(msg);
}