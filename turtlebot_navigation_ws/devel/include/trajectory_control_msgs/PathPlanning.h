// Generated by gencpp from file trajectory_control_msgs/PathPlanning.msg
// DO NOT EDIT!


#ifndef TRAJECTORY_CONTROL_MSGS_MESSAGE_PATHPLANNING_H
#define TRAJECTORY_CONTROL_MSGS_MESSAGE_PATHPLANNING_H

#include <ros/service_traits.h>


#include <trajectory_control_msgs/PathPlanningRequest.h>
#include <trajectory_control_msgs/PathPlanningResponse.h>


namespace trajectory_control_msgs
{

struct PathPlanning
{

typedef PathPlanningRequest Request;
typedef PathPlanningResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PathPlanning
} // namespace trajectory_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::trajectory_control_msgs::PathPlanning > {
  static const char* value()
  {
    return "249cbd5d21a9bf348c5b7b36bffd0e9e";
  }

  static const char* value(const ::trajectory_control_msgs::PathPlanning&) { return value(); }
};

template<>
struct DataType< ::trajectory_control_msgs::PathPlanning > {
  static const char* value()
  {
    return "trajectory_control_msgs/PathPlanning";
  }

  static const char* value(const ::trajectory_control_msgs::PathPlanning&) { return value(); }
};


// service_traits::MD5Sum< ::trajectory_control_msgs::PathPlanningRequest> should match 
// service_traits::MD5Sum< ::trajectory_control_msgs::PathPlanning > 
template<>
struct MD5Sum< ::trajectory_control_msgs::PathPlanningRequest>
{
  static const char* value()
  {
    return MD5Sum< ::trajectory_control_msgs::PathPlanning >::value();
  }
  static const char* value(const ::trajectory_control_msgs::PathPlanningRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::trajectory_control_msgs::PathPlanningRequest> should match 
// service_traits::DataType< ::trajectory_control_msgs::PathPlanning > 
template<>
struct DataType< ::trajectory_control_msgs::PathPlanningRequest>
{
  static const char* value()
  {
    return DataType< ::trajectory_control_msgs::PathPlanning >::value();
  }
  static const char* value(const ::trajectory_control_msgs::PathPlanningRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::trajectory_control_msgs::PathPlanningResponse> should match 
// service_traits::MD5Sum< ::trajectory_control_msgs::PathPlanning > 
template<>
struct MD5Sum< ::trajectory_control_msgs::PathPlanningResponse>
{
  static const char* value()
  {
    return MD5Sum< ::trajectory_control_msgs::PathPlanning >::value();
  }
  static const char* value(const ::trajectory_control_msgs::PathPlanningResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::trajectory_control_msgs::PathPlanningResponse> should match 
// service_traits::DataType< ::trajectory_control_msgs::PathPlanning > 
template<>
struct DataType< ::trajectory_control_msgs::PathPlanningResponse>
{
  static const char* value()
  {
    return DataType< ::trajectory_control_msgs::PathPlanning >::value();
  }
  static const char* value(const ::trajectory_control_msgs::PathPlanningResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TRAJECTORY_CONTROL_MSGS_MESSAGE_PATHPLANNING_H
