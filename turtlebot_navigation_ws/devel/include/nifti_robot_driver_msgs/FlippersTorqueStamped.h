// Generated by gencpp from file nifti_robot_driver_msgs/FlippersTorqueStamped.msg
// DO NOT EDIT!


#ifndef NIFTI_ROBOT_DRIVER_MSGS_MESSAGE_FLIPPERSTORQUESTAMPED_H
#define NIFTI_ROBOT_DRIVER_MSGS_MESSAGE_FLIPPERSTORQUESTAMPED_H


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
struct FlippersTorqueStamped_
{
  typedef FlippersTorqueStamped_<ContainerAllocator> Type;

  FlippersTorqueStamped_()
    : header()
    , front(0.0)
    , rear(0.0)  {
    }
  FlippersTorqueStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , front(0.0)
    , rear(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _front_type;
  _front_type front;

   typedef double _rear_type;
  _rear_type rear;





  typedef boost::shared_ptr< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> const> ConstPtr;

}; // struct FlippersTorqueStamped_

typedef ::nifti_robot_driver_msgs::FlippersTorqueStamped_<std::allocator<void> > FlippersTorqueStamped;

typedef boost::shared_ptr< ::nifti_robot_driver_msgs::FlippersTorqueStamped > FlippersTorqueStampedPtr;
typedef boost::shared_ptr< ::nifti_robot_driver_msgs::FlippersTorqueStamped const> FlippersTorqueStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d5ab8eb99f0506b019e2e899a4f96426";
  }

  static const char* value(const ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd5ab8eb99f0506b0ULL;
  static const uint64_t static_value2 = 0x19e2e899a4f96426ULL;
};

template<class ContainerAllocator>
struct DataType< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nifti_robot_driver_msgs/FlippersTorqueStamped";
  }

  static const char* value(const ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64 front\n\
float64 rear\n\
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

  static const char* value(const ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.front);
      stream.next(m.rear);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FlippersTorqueStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nifti_robot_driver_msgs::FlippersTorqueStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "front: ";
    Printer<double>::stream(s, indent + "  ", v.front);
    s << indent << "rear: ";
    Printer<double>::stream(s, indent + "  ", v.rear);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIFTI_ROBOT_DRIVER_MSGS_MESSAGE_FLIPPERSTORQUESTAMPED_H
