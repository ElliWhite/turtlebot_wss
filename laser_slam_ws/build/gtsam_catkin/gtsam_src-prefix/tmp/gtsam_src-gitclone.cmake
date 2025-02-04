if("687ae3d2511b9c296af08ec2f2e717b0627a8d68" STREQUAL "")
  message(FATAL_ERROR "Tag for git checkout should not be empty.")
endif()

set(run 0)

if("/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src-stamp/gtsam_src-gitinfo.txt" IS_NEWER_THAN "/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src-stamp/gtsam_src-gitclone-lastrun.txt")
  set(run 1)
endif()

if(NOT run)
  message(STATUS "Avoiding repeated git clone, stamp file is up to date: '/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src-stamp/gtsam_src-gitclone-lastrun.txt'")
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E remove_directory "/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src'")
endif()

# try the clone 3 times incase there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git" clone --origin "origin" "https://bitbucket.org/gtborg/gtsam.git" "gtsam_src"
    WORKING_DIRECTORY "/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src"
    RESULT_VARIABLE error_code
    )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once:
          ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://bitbucket.org/gtborg/gtsam.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git" checkout 687ae3d2511b9c296af08ec2f2e717b0627a8d68
  WORKING_DIRECTORY "/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '687ae3d2511b9c296af08ec2f2e717b0627a8d68'")
endif()

execute_process(
  COMMAND "/usr/bin/git" submodule init 
  WORKING_DIRECTORY "/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to init submodules in: '/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src'")
endif()

execute_process(
  COMMAND "/usr/bin/git" submodule update --recursive 
  WORKING_DIRECTORY "/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy
    "/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src-stamp/gtsam_src-gitinfo.txt"
    "/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src-stamp/gtsam_src-gitclone-lastrun.txt"
  WORKING_DIRECTORY "/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src"
  RESULT_VARIABLE error_code
  )
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/elliottwhite/turtlebot2_wss/laser_slam_ws/build/gtsam_catkin/gtsam_src-prefix/src/gtsam_src-stamp/gtsam_src-gitclone-lastrun.txt'")
endif()

