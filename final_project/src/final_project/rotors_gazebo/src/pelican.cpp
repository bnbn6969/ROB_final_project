#include <ros/ros.h>
#include <geometry_msgs/PoseStamped.h>
#include <trajectory_msgs/MultiDOFJointTrajectory.h>
#include <Eigen/Core>
#include <Eigen/Geometry>
// /firefly/odometry_sensor1/pose
// /pelican/command/pose
class ObjectController {
public:
    ObjectController() {
        firefly_pose_subscriber = nh.subscribe("/firefly/odometry_sensor1/pose", 1, &ObjectController::object1Callback, this);
        pelican_pose_publisher = nh.advertise<geometry_msgs::PoseStamped>("/pelican/command/pose", 1);
    }

    void object1Callback(const geometry_msgs::Pose::ConstPtr& msg) {
        // 获取物体一的位置信息
        geometry_msgs::PoseStamped pelican_pose;
        pelican_pose.pose.orientation = msg->orientation;
        Eigen::Quaterniond quat;
        quat.w() = msg->orientation.w;
        quat.x() = msg->orientation.x;
        quat.y() = msg->orientation.y;
        quat.z() = msg->orientation.z;
    
    // 将四元数转换为旋转矩阵
    Eigen::Matrix3d rotation_matrix = quat.toRotationMatrix();
    Eigen::AngleAxisd angle_axis(rotation_matrix);
    float follower_goal_x,follower_goal_y;
    follower_goal_x=-1;
    follower_goal_y=1;
    float temp_x = follower_goal_x;
    pelican_pose.pose.position.x = cos(angle_axis.angle()) * temp_x - sin(angle_axis.angle()) * follower_goal_y  + msg->position.x;
    pelican_pose.pose.position.y = sin(angle_axis.angle()) * temp_x + cos(angle_axis.angle()) * follower_goal_y  + msg->position.y;
    pelican_pose.pose.position.z = msg->position.z;
    pelican_pose_publisher.publish(pelican_pose);
    
    }

private:
    ros::NodeHandle nh;
    ros::Subscriber firefly_pose_subscriber;
    ros::Publisher pelican_pose_publisher;
};

int main(int argc, char** argv) {
    ros::init(argc, argv, "object_controller");
    ObjectController objectController;
    ros::spin();

    return 0;
}
