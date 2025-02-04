// Generated by gencpp from file wireless_network_msgs/RequestRSS_PC_PointRequest.msg
// DO NOT EDIT!


#ifndef WIRELESS_NETWORK_MSGS_MESSAGE_REQUESTRSS_PC_POINTREQUEST_H
#define WIRELESS_NETWORK_MSGS_MESSAGE_REQUESTRSS_PC_POINTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/PointCloud2.h>

namespace wireless_network_msgs
{
template <class ContainerAllocator>
struct RequestRSS_PC_PointRequest_
{
  typedef RequestRSS_PC_PointRequest_<ContainerAllocator> Type;

  RequestRSS_PC_PointRequest_()
    : surveypoints()
    , simulated(false)  {
    }
  RequestRSS_PC_PointRequest_(const ContainerAllocator& _alloc)
    : surveypoints(_alloc)
    , simulated(false)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _surveypoints_type;
  _surveypoints_type surveypoints;

   typedef uint8_t _simulated_type;
  _simulated_type simulated;





  typedef boost::shared_ptr< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RequestRSS_PC_PointRequest_

typedef ::wireless_network_msgs::RequestRSS_PC_PointRequest_<std::allocator<void> > RequestRSS_PC_PointRequest;

typedef boost::shared_ptr< ::wireless_network_msgs::RequestRSS_PC_PointRequest > RequestRSS_PC_PointRequestPtr;
typedef boost::shared_ptr< ::wireless_network_msgs::RequestRSS_PC_PointRequest const> RequestRSS_PC_PointRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wireless_network_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'wireless_network_msgs': ['/home/elliottwhite/turtlebot2_wss/turtlebot_navigation_ws/src/tradr-msgs/wireless_network_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a1eff866a893a5993088749855d0ac2";
  }

  static const char* value(const ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a1eff866a893a59ULL;
  static const uint64_t static_value2 = 0x93088749855d0ac2ULL;
};

template<class ContainerAllocator>
struct DataType< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wireless_network_msgs/RequestRSS_PC_PointRequest";
  }

  static const char* value(const ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
sensor_msgs/PointCloud2 surveypoints\n\
bool simulated\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointCloud2\n\
# This message holds a collection of N-dimensional points, which may\n\
# contain additional information such as normals, intensity, etc. The\n\
# point data is stored as a binary blob, its layout described by the\n\
# contents of the \"fields\" array.\n\
\n\
# The point cloud data may be organized 2d (image-like) or 1d\n\
# (unordered). Point clouds organized as 2d images may be produced by\n\
# camera depth sensors such as stereo or time-of-flight.\n\
\n\
# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n\
# points).\n\
Header header\n\
\n\
# 2D structure of the point cloud. If the cloud is unordered, height is\n\
# 1 and width is the length of the point cloud.\n\
uint32 height\n\
uint32 width\n\
\n\
# Describes the channels and their layout in the binary data blob.\n\
PointField[] fields\n\
\n\
bool    is_bigendian # Is this data bigendian?\n\
uint32  point_step   # Length of a point in bytes\n\
uint32  row_step     # Length of a row in bytes\n\
uint8[] data         # Actual point data, size is (row_step*height)\n\
\n\
bool is_dense        # True if there are no invalid points\n\
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
MSG: sensor_msgs/PointField\n\
# This message holds the description of one point entry in the\n\
# PointCloud2 message format.\n\
uint8 INT8    = 1\n\
uint8 UINT8   = 2\n\
uint8 INT16   = 3\n\
uint8 UINT16  = 4\n\
uint8 INT32   = 5\n\
uint8 UINT32  = 6\n\
uint8 FLOAT32 = 7\n\
uint8 FLOAT64 = 8\n\
\n\
string name      # Name of field\n\
uint32 offset    # Offset from start of point struct\n\
uint8  datatype  # Datatype enumeration, see above\n\
uint32 count     # How many elements in the field\n\
";
  }

  static const char* value(const ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.surveypoints);
      stream.next(m.simulated);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RequestRSS_PC_PointRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wireless_network_msgs::RequestRSS_PC_PointRequest_<ContainerAllocator>& v)
  {
    s << indent << "surveypoints: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.surveypoints);
    s << indent << "simulated: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.simulated);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WIRELESS_NETWORK_MSGS_MESSAGE_REQUESTRSS_PC_POINTREQUEST_H
