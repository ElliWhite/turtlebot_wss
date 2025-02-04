// Generated by gencpp from file wireless_network_msgs/RequestRSS_PC_PointResponse.msg
// DO NOT EDIT!


#ifndef WIRELESS_NETWORK_MSGS_MESSAGE_REQUESTRSS_PC_POINTRESPONSE_H
#define WIRELESS_NETWORK_MSGS_MESSAGE_REQUESTRSS_PC_POINTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace wireless_network_msgs
{
template <class ContainerAllocator>
struct RequestRSS_PC_PointResponse_
{
  typedef RequestRSS_PC_PointResponse_<ContainerAllocator> Type;

  RequestRSS_PC_PointResponse_()
    : bestpointrssi()  {
    }
  RequestRSS_PC_PointResponse_(const ContainerAllocator& _alloc)
    : bestpointrssi(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _bestpointrssi_type;
  _bestpointrssi_type bestpointrssi;





  typedef boost::shared_ptr< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> const> ConstPtr;

}; // struct RequestRSS_PC_PointResponse_

typedef ::wireless_network_msgs::RequestRSS_PC_PointResponse_<std::allocator<void> > RequestRSS_PC_PointResponse;

typedef boost::shared_ptr< ::wireless_network_msgs::RequestRSS_PC_PointResponse > RequestRSS_PC_PointResponsePtr;
typedef boost::shared_ptr< ::wireless_network_msgs::RequestRSS_PC_PointResponse const> RequestRSS_PC_PointResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f80e1d4c0f3d38a55fc7a0fe0e83ecc";
  }

  static const char* value(const ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f80e1d4c0f3d38aULL;
  static const uint64_t static_value2 = 0x55fc7a0fe0e83eccULL;
};

template<class ContainerAllocator>
struct DataType< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wireless_network_msgs/RequestRSS_PC_PointResponse";
  }

  static const char* value(const ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
geometry_msgs/Point bestpointrssi\n\
\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.bestpointrssi);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RequestRSS_PC_PointResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wireless_network_msgs::RequestRSS_PC_PointResponse_<ContainerAllocator>& v)
  {
    s << indent << "bestpointrssi: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.bestpointrssi);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WIRELESS_NETWORK_MSGS_MESSAGE_REQUESTRSS_PC_POINTRESPONSE_H
