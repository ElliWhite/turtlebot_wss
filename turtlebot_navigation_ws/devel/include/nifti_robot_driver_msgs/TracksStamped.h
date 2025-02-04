// Generated by gencpp from file nifti_robot_driver_msgs/TracksStamped.msg
// DO NOT EDIT!


#ifndef NIFTI_ROBOT_DRIVER_MSGS_MESSAGE_TRACKSSTAMPED_H
#define NIFTI_ROBOT_DRIVER_MSGS_MESSAGE_TRACKSSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace nifti_robot_driver_msgs
{
template <class ContainerAllocator>
struct TracksStamped_
{
  typedef TracksStamped_<ContainerAllocator> Type;

  TracksStamped_()
    : header()
    , left(0.0)
    , right(0.0)  {
    }
  TracksStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , left(0.0)
    , right(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _left_type;
  _left_type left;

   typedef double _right_type;
  _right_type right;





  typedef boost::shared_ptr< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> const> ConstPtr;

}; // struct TracksStamped_

typedef ::nifti_robot_driver_msgs::TracksStamped_<std::allocator<void> > TracksStamped;

typedef boost::shared_ptr< ::nifti_robot_driver_msgs::TracksStamped > TracksStampedPtr;
typedef boost::shared_ptr< ::nifti_robot_driver_msgs::TracksStamped const> TracksStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nifti_robot_driver_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'nifti_robot_driver_msgs': ['/home/elliottwhite/turtlebot2_wss/turtlebot_navigation_ws/src/tradr-msgs/nifti_robot_driver_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8f32685125452f5bdf68130369af5296";
  }

  static const char* value(const ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8f32685125452f5bULL;
  static const uint64_t static_value2 = 0xdf68130369af5296ULL;
};

template<class ContainerAllocator>
struct DataType< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nifti_robot_driver_msgs/TracksStamped";
  }

  static const char* value(const ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64 left\n\
float64 right\n\
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

  static const char* value(const ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.left);
      stream.next(m.right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TracksStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nifti_robot_driver_msgs::TracksStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "left: ";
    Printer<double>::stream(s, indent + "  ", v.left);
    s << indent << "right: ";
    Printer<double>::stream(s, indent + "  ", v.right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIFTI_ROBOT_DRIVER_MSGS_MESSAGE_TRACKSSTAMPED_H
