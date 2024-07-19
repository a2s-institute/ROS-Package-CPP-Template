#include <ros/ros.h>
#include <gtest/gtest.h>

TEST(TestSuite, testCase1)
{
    EXPECT_EQ(1, 1);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    ros::init(argc, argv, "test_{{ cookiecutter.project_slug }}");
    ros::NodeHandle nh;
    return RUN_ALL_TESTS();
}
