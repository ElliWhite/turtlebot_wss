// Generated by gencpp from file nifti_robot_driver_msgs/ControllersStatus.msg
// DO NOT EDIT!


#ifndef NIFTI_ROBOT_DRIVER_MSGS_MESSAGE_CONTROLLERSSTATUS_H
#define NIFTI_ROBOT_DRIVER_MSGS_MESSAGE_CONTROLLERSSTATUS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nifti_robot_driver_msgs
{
template <class ContainerAllocator>
struct ControllersStatus_
{
  typedef ControllersStatus_<ContainerAllocator> Type;

  ControllersStatus_()
    : core(0)
    , track_left(0)
    , track_right(0)
    , flipper_front_left(0)
    , flipper_front_right(0)
    , flipper_rear_left(0)
    , flipper_rear_right(0)  {
    }
  ControllersStatus_(const ContainerAllocator& _alloc)
    : core(0)
    , track_left(0)
    , track_right(0)
    , flipper_front_left(0)
    , flipper_front_right(0)
    , flipper_rear_left(0)
    , flipper_rear_right(0)  {
  (void)_alloc;
    }



   typedef int32_t _core_type;
  _core_type core;

   typedef int32_t _track_left_type;
  _track_left_type track_left;

   typedef int32_t _track_right_type;
  _track_right_type track_right;

   typedef int32_t _flipper_front_left_type;
  _flipper_front_left_type flipper_front_left;

   typedef int32_t _flipper_front_right_type;
  _flipper_front_right_type flipper_front_right;

   typedef int32_t _flipper_rear_left_type;
  _flipper_rear_left_type flipper_rear_left;

   typedef int32_t _flipper_rear_right_type;
  _flipper_rear_right_type flipper_rear_right;





  typedef boost::shared_ptr< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> const> ConstPtr;

}; // struct ControllersStatus_

typedef ::nifti_robot_driver_msgs::ControllersStatus_<std::allocator<void> > ControllersStatus;

typedef boost::shared_ptr< ::nifti_robot_driver_msgs::ControllersStatus > ControllersStatusPtr;
typedef boost::shared_ptr< ::nifti_robot_driver_msgs::ControllersStatus const> ControllersStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nifti_robot_driver_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'nifti_robot_driver_msgs': ['/home/elliottwhite/turtlebot2_wss/turtlebot_navigation_ws/src/tradr-msgs/nifti_robot_driver_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dd206d136b46c978abb3dde3682bb506";
  }

  static const char* value(const ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdd206d136b46c978ULL;
  static const uint64_t static_value2 = 0xabb3dde3682bb506ULL;
};

template<class ContainerAllocator>
struct DataType< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nifti_robot_driver_msgs/ControllersStatus";
  }

  static const char* value(const ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 core\n\
int32 track_left\n\
int32 track_right\n\
int32 flipper_front_left\n\
int32 flipper_front_right\n\
int32 flipper_rear_left\n\
int32 flipper_rear_right\n\
";
  }

  static const char* value(const ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.core);
      stream.next(m.track_left);
      stream.next(m.track_right);
      stream.next(m.flipper_front_left);
      stream.next(m.flipper_front_right);
      stream.next(m.flipper_rear_left);
      stream.next(m.flipper_rear_right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControllersStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nifti_robot_driver_msgs::ControllersStatus_<ContainerAllocator>& v)
  {
    s << indent << "core: ";
    Printer<int32_t>::stream(s, indent + "  ", v.core);
    s << indent << "track_left: ";
    Printer<int32_t>::stream(s, indent + "  ", v.track_left);
    s << indent << "track_right: ";
    Printer<int32_t>::stream(s, indent + "  ", v.track_right);
    s << indent << "flipper_front_left: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flipper_front_left);
    s << indent << "flipper_front_right: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flipper_front_right);
    s << indent << "flipper_rear_left: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flipper_rear_left);
    s << indent << "flipper_rear_right: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flipper_rear_right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NIFTI_ROBOT_DRIVER_MSGS_MESSAGE_CONTROLLERSSTATUS_H
