// Generated by gencpp from file vrep_common/VrepInfo.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_VREPINFO_H
#define VREP_COMMON_MESSAGE_VREPINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <std_msgs/Int32.h>
#include <std_msgs/Float32.h>
#include <std_msgs/Float32.h>

namespace vrep_common
{
template <class ContainerAllocator>
struct VrepInfo_
{
  typedef VrepInfo_<ContainerAllocator> Type;

  VrepInfo_()
    : headerInfo()
    , simulatorState()
    , simulationTime()
    , timeStep()  {
    }
  VrepInfo_(const ContainerAllocator& _alloc)
    : headerInfo(_alloc)
    , simulatorState(_alloc)
    , simulationTime(_alloc)
    , timeStep(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _headerInfo_type;
  _headerInfo_type headerInfo;

   typedef  ::std_msgs::Int32_<ContainerAllocator>  _simulatorState_type;
  _simulatorState_type simulatorState;

   typedef  ::std_msgs::Float32_<ContainerAllocator>  _simulationTime_type;
  _simulationTime_type simulationTime;

   typedef  ::std_msgs::Float32_<ContainerAllocator>  _timeStep_type;
  _timeStep_type timeStep;





  typedef boost::shared_ptr< ::vrep_common::VrepInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::VrepInfo_<ContainerAllocator> const> ConstPtr;

}; // struct VrepInfo_

typedef ::vrep_common::VrepInfo_<std::allocator<void> > VrepInfo;

typedef boost::shared_ptr< ::vrep_common::VrepInfo > VrepInfoPtr;
typedef boost::shared_ptr< ::vrep_common::VrepInfo const> VrepInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::VrepInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::VrepInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/elliottwhite/turtlebot2_wss/turtlebot_navigation_ws/src/tradr-simulation/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::VrepInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::VrepInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::VrepInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::VrepInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::VrepInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::VrepInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::VrepInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "66334ab2212d3c89226a89b7a37b2f95";
  }

  static const char* value(const ::vrep_common::VrepInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x66334ab2212d3c89ULL;
  static const uint64_t static_value2 = 0x226a89b7a37b2f95ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::VrepInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/VrepInfo";
  }

  static const char* value(const ::vrep_common::VrepInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::VrepInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header headerInfo\n\
std_msgs/Int32 simulatorState\n\
std_msgs/Float32 simulationTime\n\
std_msgs/Float32 timeStep\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: std_msgs/Int32\n\
int32 data\n\
================================================================================\n\
MSG: std_msgs/Float32\n\
float32 data\n\
";
  }

  static const char* value(const ::vrep_common::VrepInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::VrepInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.headerInfo);
      stream.next(m.simulatorState);
      stream.next(m.simulationTime);
      stream.next(m.timeStep);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VrepInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::VrepInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::VrepInfo_<ContainerAllocator>& v)
  {
    s << indent << "headerInfo: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.headerInfo);
    s << indent << "simulatorState: ";
    s << std::endl;
    Printer< ::std_msgs::Int32_<ContainerAllocator> >::stream(s, indent + "  ", v.simulatorState);
    s << indent << "simulationTime: ";
    s << std::endl;
    Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "  ", v.simulationTime);
    s << indent << "timeStep: ";
    s << std::endl;
    Printer< ::std_msgs::Float32_<ContainerAllocator> >::stream(s, indent + "  ", v.timeStep);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_VREPINFO_H
