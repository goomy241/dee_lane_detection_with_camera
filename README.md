# dee_lane_detection_with_camera
This project provides code examples for setting up and running lane detection with camera on Autoware. The code is based on the Camera Perception [Hands-On Tutorial](https://gitlab.com/ApexAI/autowareclass2020/-/blob/master/lectures/08_Perception_Camera/Camera-Hands-On.md) provided by ApexAI.
## Requirement
- ROS2 Humble
- Autoware
## Basic setup
- Clone the repo to local ros workshop
- Download the video captured by the front camera of a car while driving on a road from [google drive](https://drive.google.com/file/d/1x8_8fqdhw1h1oX_-HRVgyvJ3Jx4Xued0/view?usp=share_link)
- Put it under `path/to/workshop/src/lane_detection_data_loader/` folder and unzip it
## How to run it
- Build and source the workshop
- Open four terminals and run the following four commands separately:
  - `$ ros2 run lane_detection_data_loader lane_detection_data_loader_node`
  - `$ ros2 run lane_detection_projection lane_detection_projection_node`
  - `$ ros2 run lane_detection_visualization lane_detection_visualization_node`
  - `$ rviz2`

You should be able to view the Rviz window that pops up, following the follow steps to view the data:
- Choose 'add' -> 'By topic' -> 'Image' and you should see the video data showing up
<img width="1247" alt="image" src="https://user-images.githubusercontent.com/90799662/232354985-dd03fb8d-1832-4c1e-a58b-5535260b4ec0.png">

- Choose 'add' -> 'By topic' -> 'Marker' and you should see the detected lanes showing up. If not, try rotating or zooming the camera view
<img width="1238" alt="image" src="https://user-images.githubusercontent.com/90799662/232355227-d80997f4-fdc7-4c77-a007-408be8d53b38.png">

- The image below is a sample
<img width="1243" alt="image" src="https://user-images.githubusercontent.com/90799662/232355521-98ff4e7f-4456-40d9-a1a3-783e291f96ff.png">
