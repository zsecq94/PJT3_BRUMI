# Deprecated, kept for ROS 1 bridge.
# Use SpawnEntity
string model_name                 # name of the model to be spawn
string model_xml                  # this should be an urdf or gazebo xml
string robot_namespace            # spawn robot and all ROS interfaces under this namespace
geometry_msgs/Pose initial_pose   # only applied to canonical body
string reference_frame            # initial_pose is defined relative to the frame of this model/body
                                  # if left empty or "world", then gazebo world frame is used
                                  # if non-existent model/body is specified, an error is returned
                                  #   and the model is not spawned
