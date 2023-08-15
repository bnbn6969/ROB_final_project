# ROB_final_project


In this project, each team has to complete the following part:

    (10%) Select 10 points and visualize them on Rviz.
    (40%) Implement QP trajectory planning using points you selected in part 1, and visualize trajectories on Rviz.
    (10%) Run UAV's gazebo simulation and make it fly in trajectories you planned with the following topic: "/${arg mav_name}/command/trajectory". Notice that the heading of it should be towards its velocity direction.
    (40%) Construct a UAV formation team with one leader and two followers, the heading direction of them should be the same, and followers should remain behind the direction the leader is facing. (Coordinate transformation is needed)


在RVIZ上選取10個點後以qp trajectory 計算最短路徑後PUBLISH這些點，實現無人機飛行及僚機追隨
![image](https://github.com/bnbn6969/ROB_final_project/blob/master/path.gif)
以下是rqt_graph
![image](https://github.com/bnbn6969/ROB_final_project/blob/master/rqt_graph.gif)
模擬結果
![image](https://github.com/bnbn6969/ROB_final_project/blob/master/result.gif)
