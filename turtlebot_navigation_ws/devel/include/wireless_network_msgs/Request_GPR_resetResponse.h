// Generated by gencpp from file wireless_network_msgs/Request_GPR_resetResponse.msg
// DO NOT EDIT!


#ifndef WIRELESS_NETWORK_MSGS_MESSAGE_REQUEST_GPR_RESETRESPONSE_H
#define WIRELESS_NETWORK_MSGS_MESSAGE_REQUEST_GPR_RESETRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Int32.h>

namespace wireless_network_msgs
{
template <class ContainerAllocator>
struct Request_GPR_resetResponse_
{
  typedef Request_GPR_resetResponse_<ContainerAllocator> Type;

  Request_GPR_resetResponse_()
    : success()  {
    }
  Request_GPR_resetResponse_(const ContainerAllocator& _alloc)
    : success(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Int32_<ContainerAllocator>  _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> const> ConstPtr;

}; // struct Request_GPR_resetResponse_

typedef ::wireless_network_msgs::Request_GPR_resetResponse_<std::allocator<void> > Request_GPR_resetResponse;

typedef boost::shared_ptr< ::wireless_network_msgs::Request_GPR_resetResponse > Request_GPR_resetResponsePtr;
typedef boost::shared_ptr< ::wireless_network_msgs::Request_GPR_resetResponse const> Request_GPR_resetResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wireless_network_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'wireless_network_msgs': ['/home/elliottwhite/turtlebot2_wss/turtlebot_navigation_ws/src/tradr-msgs/wireless_network_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "049283c52c4041e46fdb992b154d0b41";
  }

  static const char* value(const ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x049283c52c4041e4ULL;
  static const uint64_t static_value2 = 0x6fdb992b154d0b41ULL;
};

template<class ContainerAllocator>
struct DataType< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wireless_network_msgs/Request_GPR_resetResponse";
  }

  static const char* value(const ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
std_msgs/Int32 success\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Int32\n\
int32 data\n\
";
  }

  static const char* value(const ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Request_GPR_resetResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wireless_network_msgs::Request_GPR_resetResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    s << std::endl;
    Printer< ::std_msgs::Int32_<ContainerAllocator> >::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WIRELESS_NETWORK_MSGS_MESSAGE_REQUEST_GPR_RESETRESPONSE_H
