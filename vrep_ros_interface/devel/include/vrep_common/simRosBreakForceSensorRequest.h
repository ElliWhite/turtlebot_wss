// Generated by gencpp from file vrep_common/simRosBreakForceSensorRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSBREAKFORCESENSORREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSBREAKFORCESENSORREQUEST_H


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
struct simRosBreakForceSensorRequest_
{
  typedef simRosBreakForceSensorRequest_<ContainerAllocator> Type;

  simRosBreakForceSensorRequest_()
    : objectHandle(0)  {
    }
  simRosBreakForceSensorRequest_(const ContainerAllocator& _alloc)
    : objectHandle(0)  {
  (void)_alloc;
    }



   typedef int32_t _objectHandle_type;
  _objectHandle_type objectHandle;





  typedef boost::shared_ptr< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosBreakForceSensorRequest_

typedef ::vrep_common::simRosBreakForceSensorRequest_<std::allocator<void> > simRosBreakForceSensorRequest;

typedef boost::shared_ptr< ::vrep_common::simRosBreakForceSensorRequest > simRosBreakForceSensorRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosBreakForceSensorRequest const> simRosBreakForceSensorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/elliottwhite/turtlebot2_wss/vrep_ros_interface/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c941d9606c863e83c4461ed050c749de";
  }

  static const char* value(const ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc941d9606c863e83ULL;
  static const uint64_t static_value2 = 0xc4461ed050c749deULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosBreakForceSensorRequest";
  }

  static const char* value(const ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 objectHandle\n\
";
  }

  static const char* value(const ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.objectHandle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosBreakForceSensorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosBreakForceSensorRequest_<ContainerAllocator>& v)
  {
    s << indent << "objectHandle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.objectHandle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSBREAKFORCESENSORREQUEST_H
