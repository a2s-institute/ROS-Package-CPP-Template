#ifndef {{ cookiecutter.project_slug|upper }}_{{ cookiecutter.project_slug|upper }}_ROS_H
#define {{ cookiecutter.project_slug|upper }}_{{ cookiecutter.project_slug|upper }}_ROS_H

#include "ros/ros.h"
#include "{{ cookiecutter.project_slug }}/{{ cookiecutter.project_slug }}.h"

class MyObjectROS {
public:
    MyObjectROS(ros::NodeHandle& nh);

    void initialize();
    void update();

private:
    ros::NodeHandle& nh_;
    MyObject myobject_;
};

#endif // {{ cookiecutter.project_slug|upper }}_{{ cookiecutter.project_slug|upper }}_ROS_H



