// Generated by gencpp from file vrep_common/simRosGetIntegerSignalResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETINTEGERSIGNALRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSGETINTEGERSIGNALRESPONSE_H


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
struct simRosGetIntegerSignalResponse_
{
  typedef simRosGetIntegerSignalResponse_<ContainerAllocator> Type;

  simRosGetIntegerSignalResponse_()
    : result(0)
    , signalValue(0)  {
    }
  simRosGetIntegerSignalResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , signalValue(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef int32_t _signalValue_type;
  _signalValue_type signalValue;





  typedef boost::shared_ptr< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetIntegerSignalResponse_

typedef ::vrep_common::simRosGetIntegerSignalResponse_<std::allocator<void> > simRosGetIntegerSignalResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetIntegerSignalResponse > simRosGetIntegerSignalResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetIntegerSignalResponse const> simRosGetIntegerSignalResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7f91774edb9fca91ce9d303aaf91831b";
  }

  static const char* value(const ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7f91774edb9fca91ULL;
  static const uint64_t static_value2 = 0xce9d303aaf91831bULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetIntegerSignalResponse";
  }

  static const char* value(const ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
int32 signalValue\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.signalValue);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosGetIntegerSignalResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetIntegerSignalResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "signalValue: ";
    Printer<int32_t>::stream(s, indent + "  ", v.signalValue);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETINTEGERSIGNALRESPONSE_H
