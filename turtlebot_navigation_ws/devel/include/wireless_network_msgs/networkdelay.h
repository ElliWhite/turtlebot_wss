// Generated by gencpp from file wireless_network_msgs/networkdelay.msg
// DO NOT EDIT!


#ifndef WIRELESS_NETWORK_MSGS_MESSAGE_NETWORKDELAY_H
#define WIRELESS_NETWORK_MSGS_MESSAGE_NETWORKDELAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace wireless_network_msgs
{
template <class ContainerAllocator>
struct networkdelay_
{
  typedef networkdelay_<ContainerAllocator> Type;

  networkdelay_()
    : header()
    , rtt(0)
    , delay(0)
    , alive(false)  {
    }
  networkdelay_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , rtt(0)
    , delay(0)
    , alive(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _rtt_type;
  _rtt_type rtt;

   typedef int32_t _delay_type;
  _delay_type delay;

   typedef uint8_t _alive_type;
  _alive_type alive;





  typedef boost::shared_ptr< ::wireless_network_msgs::networkdelay_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wireless_network_msgs::networkdelay_<ContainerAllocator> const> ConstPtr;

}; // struct networkdelay_

typedef ::wireless_network_msgs::networkdelay_<std::allocator<void> > networkdelay;

typedef boost::shared_ptr< ::wireless_network_msgs::networkdelay > networkdelayPtr;
typedef boost::shared_ptr< ::wireless_network_msgs::networkdelay const> networkdelayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wireless_network_msgs::networkdelay_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wireless_network_msgs::networkdelay_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wireless_network_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'wireless_network_msgs': ['/home/elliottwhite/turtlebot2_wss/turtlebot_navigation_ws/src/tradr-msgs/wireless_network_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wireless_network_msgs::networkdelay_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wireless_network_msgs::networkdelay_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wireless_network_msgs::networkdelay_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wireless_network_msgs::networkdelay_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wireless_network_msgs::networkdelay_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wireless_network_msgs::networkdelay_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wireless_network_msgs::networkdelay_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1e2e10f6c6d892071c552e7897b2292";
  }

  static const char* value(const ::wireless_network_msgs::networkdelay_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1e2e10f6c6d8920ULL;
  static const uint64_t static_value2 = 0x71c552e7897b2292ULL;
};

template<class ContainerAllocator>
struct DataType< ::wireless_network_msgs::networkdelay_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wireless_network_msgs/networkdelay";
  }

  static const char* value(const ::wireless_network_msgs::networkdelay_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wireless_network_msgs::networkdelay_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
#round trip time (rtt) obtained using \"ping\" with ICMO echo request\n\
int32 rtt\n\
\n\
#network delay obtained directly at the application level (ros service call)\n\
int32 delay\n\
\n\
#Flag to check if the link is alive or dead\n\
bool alive\n\
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
";
  }

  static const char* value(const ::wireless_network_msgs::networkdelay_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wireless_network_msgs::networkdelay_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.rtt);
      stream.next(m.delay);
      stream.next(m.alive);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct networkdelay_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wireless_network_msgs::networkdelay_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wireless_network_msgs::networkdelay_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "rtt: ";
    Printer<int32_t>::stream(s, indent + "  ", v.rtt);
    s << indent << "delay: ";
    Printer<int32_t>::stream(s, indent + "  ", v.delay);
    s << indent << "alive: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.alive);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WIRELESS_NETWORK_MSGS_MESSAGE_NETWORKDELAY_H
