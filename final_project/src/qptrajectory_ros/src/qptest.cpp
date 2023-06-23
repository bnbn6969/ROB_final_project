#include <ros/ros.h>
#include <geometry_msgs/Point.h>
#include <qptrajectory.h>
#include <nav_msgs/Path.h>  //接收rviz的10個點並將計算後的結果在rviz可視化
#include <tf/transform_datatypes.h>
#include <sub.h>

template<>
void PublisherSubsrciber<nav_msgs::Path, nav_msgs::Path>::subcriber_callback(const nav_msgs::Path::ConstPtr& msg){
  double max;
  double sample=0.02;
  qptrajectory plan;
  path_def path;
  std::vector <trajectory_profile> points_collection; ////將接收到的路徑存入 points_collection
  std::vector<trajectory_profile> data;
  for(int i=0;i<msg->poses.size();i++){               // 這邊修改了原code，讓rviz上點不強制一定要10個點才執行
    trajectory_profile p;
    p.pos.x()=msg->poses[i].pose.position.x;
    p.pos.y()=msg->poses[i].pose.position.y;
    p.pos.z()=msg->poses[i].pose.position.z;
    points_collection.push_back(p);
  }
  if(points_collection.size()>1){
    for(int i=0;i<points_collection.size()-1;i++){
      path.push_back(segments(points_collection[i],points_collection[i+1],3));// 計算兩點之間路徑
    }
  }
  data = plan.get_profile(path ,path.size(),sample);  
  nav_msgs::Path path_msg;      // 創建nav_msgs::Path 用於存儲每一個segment
  path_msg.header.frame_id = "map";

//這段由chatgpt生成  將軌跡數據中的位置和方向信息轉換為 ROS 的 geometry_msgs::PoseStamped 消息格式，並將其添加到 path_msg 的 poses 陣列中。
for (const auto& profile : data) {                   
    geometry_msgs::PoseStamped pose_stamped;
    pose_stamped.header.stamp = ros::Time::now(); 
    geometry_msgs::Pose pose;
    pose.position.x = profile.pos.x();
    pose.position.y = profile.pos.y();
    pose.position.z = profile.pos.z();
    tf::Quaternion quat;
    double yaw = std::atan2(profile.vel.y(), profile.vel.x());
    quat.setRPY(0, 0, yaw);
    pose.orientation.x = quat.x();
    pose.orientation.y = quat.y();
    pose.orientation.z = quat.z();
    pose.orientation.w = quat.w();
    pose_stamped.pose = pose;
    path_msg.poses.push_back(pose_stamped);
}
  publisherObject.publish(path_msg);   //將計算得到的軌跡發佈到/path 
} 

int main(int argc, char **argv)
{
  ros::init(argc, argv, "qptest");
  //ros::Time::init();
  PublisherSubsrciber<nav_msgs::Path, nav_msgs::Path> path_pub_sub("/path","/waypoint",10); 
  std::cout << "Trajectory generator"<<std::endl;
  ros::spin();
  //loop_rate.sleep();

};