// Generated by gencpp from file vrep_common/simRosSetJointTargetPositionRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSSETJOINTTARGETPOSITIONREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSSETJOINTTARGETPOSITIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vrep_common
{
template <class ContainerAllocator>
struct simRosSetJointTargetPositionRequest_
{
  typedef simRosSetJointTargetPositionRequest_<ContainerAllocator> Type;

  simRosSetJointTargetPositionRequest_()
    : handle(0)
    , targetPosition(0.0)  {
    }
  simRosSetJointTargetPositionRequest_(const ContainerAllocator& _alloc)
    : handle(0)
    , targetPosition(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _handle_type;
  _handle_type handle;

   typedef double _targetPosition_type;
  _targetPosition_type targetPosition;





  typedef boost::shared_ptr< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosSetJointTargetPositionRequest_

typedef ::vrep_common::simRosSetJointTargetPositionRequest_<std::allocator<void> > simRosSetJointTargetPositionRequest;

typedef boost::shared_ptr< ::vrep_common::simRosSetJointTargetPositionRequest > simRosSetJointTargetPositionRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosSetJointTargetPositionRequest const> simRosSetJointTargetPositionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/elliottwhite/turtlebot2_wss/turtlebot_navigation_ws/src/tradr-simulation/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6485fab2027885fabc22e244511b58c0";
  }

  static const char* value(const ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6485fab2027885faULL;
  static const uint64_t static_value2 = 0xbc22e244511b58c0ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosSetJointTargetPositionRequest";
  }

  static const char* value(const ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 handle\n\
float64 targetPosition\n\
";
  }

  static const char* value(const ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.handle);
      stream.next(m.targetPosition);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosSetJointTargetPositionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosSetJointTargetPositionRequest_<ContainerAllocator>& v)
  {
    s << indent << "handle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.handle);
    s << indent << "targetPosition: ";
    Printer<double>::stream(s, indent + "  ", v.targetPosition);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSSETJOINTTARGETPOSITIONREQUEST_H
