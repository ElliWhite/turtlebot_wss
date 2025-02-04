// Generated by gencpp from file wireless_network_msgs/networkerrors.msg
// DO NOT EDIT!


#ifndef WIRELESS_NETWORK_MSGS_MESSAGE_NETWORKERRORS_H
#define WIRELESS_NETWORK_MSGS_MESSAGE_NETWORKERRORS_H


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
struct networkerrors_
{
  typedef networkerrors_<ContainerAllocator> Type;

  networkerrors_()
    : header()
    , retransmits(0)
    , badsegments(0)
    , udperrors(0)
    , tx_retires(0)
    , rx_dropped(0)
    , nic_tx_errors(0)
    , nic_rx_errors(0)
    , nic_tx_dropped(0)
    , nic_rx_dropped(0)  {
    }
  networkerrors_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , retransmits(0)
    , badsegments(0)
    , udperrors(0)
    , tx_retires(0)
    , rx_dropped(0)
    , nic_tx_errors(0)
    , nic_rx_errors(0)
    , nic_tx_dropped(0)
    , nic_rx_dropped(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int64_t _retransmits_type;
  _retransmits_type retransmits;

   typedef int64_t _badsegments_type;
  _badsegments_type badsegments;

   typedef int64_t _udperrors_type;
  _udperrors_type udperrors;

   typedef int64_t _tx_retires_type;
  _tx_retires_type tx_retires;

   typedef int64_t _rx_dropped_type;
  _rx_dropped_type rx_dropped;

   typedef int64_t _nic_tx_errors_type;
  _nic_tx_errors_type nic_tx_errors;

   typedef int64_t _nic_rx_errors_type;
  _nic_rx_errors_type nic_rx_errors;

   typedef int64_t _nic_tx_dropped_type;
  _nic_tx_dropped_type nic_tx_dropped;

   typedef int64_t _nic_rx_dropped_type;
  _nic_rx_dropped_type nic_rx_dropped;





  typedef boost::shared_ptr< ::wireless_network_msgs::networkerrors_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wireless_network_msgs::networkerrors_<ContainerAllocator> const> ConstPtr;

}; // struct networkerrors_

typedef ::wireless_network_msgs::networkerrors_<std::allocator<void> > networkerrors;

typedef boost::shared_ptr< ::wireless_network_msgs::networkerrors > networkerrorsPtr;
typedef boost::shared_ptr< ::wireless_network_msgs::networkerrors const> networkerrorsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wireless_network_msgs::networkerrors_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wireless_network_msgs::networkerrors_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::wireless_network_msgs::networkerrors_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wireless_network_msgs::networkerrors_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wireless_network_msgs::networkerrors_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wireless_network_msgs::networkerrors_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wireless_network_msgs::networkerrors_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wireless_network_msgs::networkerrors_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wireless_network_msgs::networkerrors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "235edb359781a06294f8b29034894b78";
  }

  static const char* value(const ::wireless_network_msgs::networkerrors_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x235edb359781a062ULL;
  static const uint64_t static_value2 = 0x94f8b29034894b78ULL;
};

template<class ContainerAllocator>
struct DataType< ::wireless_network_msgs::networkerrors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wireless_network_msgs/networkerrors";
  }

  static const char* value(const ::wireless_network_msgs::networkerrors_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wireless_network_msgs::networkerrors_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
#segment errors at (tcp) protocol level\n\
int64 retransmits\n\
int64 badsegments\n\
\n\
#errors in udp transmission\n\
int64 udperrors\n\
\n\
#system level (MAC layer) errors\n\
int64 tx_retires\n\
int64 rx_dropped\n\
\n\
\n\
#interface level (NIC statistics) errors\n\
int64 nic_tx_errors\n\
int64 nic_rx_errors\n\
int64 nic_tx_dropped\n\
int64 nic_rx_dropped\n\
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

  static const char* value(const ::wireless_network_msgs::networkerrors_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wireless_network_msgs::networkerrors_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.retransmits);
      stream.next(m.badsegments);
      stream.next(m.udperrors);
      stream.next(m.tx_retires);
      stream.next(m.rx_dropped);
      stream.next(m.nic_tx_errors);
      stream.next(m.nic_rx_errors);
      stream.next(m.nic_tx_dropped);
      stream.next(m.nic_rx_dropped);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct networkerrors_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wireless_network_msgs::networkerrors_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wireless_network_msgs::networkerrors_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "retransmits: ";
    Printer<int64_t>::stream(s, indent + "  ", v.retransmits);
    s << indent << "badsegments: ";
    Printer<int64_t>::stream(s, indent + "  ", v.badsegments);
    s << indent << "udperrors: ";
    Printer<int64_t>::stream(s, indent + "  ", v.udperrors);
    s << indent << "tx_retires: ";
    Printer<int64_t>::stream(s, indent + "  ", v.tx_retires);
    s << indent << "rx_dropped: ";
    Printer<int64_t>::stream(s, indent + "  ", v.rx_dropped);
    s << indent << "nic_tx_errors: ";
    Printer<int64_t>::stream(s, indent + "  ", v.nic_tx_errors);
    s << indent << "nic_rx_errors: ";
    Printer<int64_t>::stream(s, indent + "  ", v.nic_rx_errors);
    s << indent << "nic_tx_dropped: ";
    Printer<int64_t>::stream(s, indent + "  ", v.nic_tx_dropped);
    s << indent << "nic_rx_dropped: ";
    Printer<int64_t>::stream(s, indent + "  ", v.nic_rx_dropped);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WIRELESS_NETWORK_MSGS_MESSAGE_NETWORKERRORS_H
