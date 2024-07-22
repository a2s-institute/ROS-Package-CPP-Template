#ifndef {{ cookiecutter.project_slug|upper }}_{{ cookiecutter.project_slug|upper }}_ROS_H
#define {{ cookiecutter.project_slug|upper }}_{{ cookiecutter.project_slug|upper }}_ROS_H

#include "ros/ros.h"
#include "{{ cookiecutter.project_slug }}/{{ cookiecutter.project_slug }}.h"
#include <std_msgs/String.h>

class MyClassROS {
public:
    MyClassROS(ros::NodeHandle& nh);

    void initialize();
    void update();

private:
    ros::NodeHandle& nh_;
    ros::Publisher pub_;
    MyClass myobject_;
};

#endif // {{ cookiecutter.project_slug|upper }}_{{ cookiecutter.project_slug|upper }}_ROS_H



