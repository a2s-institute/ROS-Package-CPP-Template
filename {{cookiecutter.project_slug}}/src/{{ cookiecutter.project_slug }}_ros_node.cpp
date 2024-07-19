#include "ros/ros.h"
#include "{{ cookiecutter.project_slug }}/{{ cookiecutter.project_slug }}_ros.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "{{ cookiecutter.project_slug }}");
    ros::NodeHandle nh;

    MyClassROS myobject(nh);
    myobject.initialize();

    ros::Rate loop_rate(10);
    while (ros::ok()) {
        myobject.update();
        ros::spinOnce();
        loop_rate.sleep();
    }

    return 0;
}