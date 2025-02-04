// Generated by gencpp from file vrep_common/simRosDisplayDialogResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSDISPLAYDIALOGRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSDISPLAYDIALOGRESPONSE_H


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
struct simRosDisplayDialogResponse_
{
  typedef simRosDisplayDialogResponse_<ContainerAllocator> Type;

  simRosDisplayDialogResponse_()
    : dialogHandle(0)
    , uiHandle(0)  {
    }
  simRosDisplayDialogResponse_(const ContainerAllocator& _alloc)
    : dialogHandle(0)
    , uiHandle(0)  {
  (void)_alloc;
    }



   typedef int32_t _dialogHandle_type;
  _dialogHandle_type dialogHandle;

   typedef int32_t _uiHandle_type;
  _uiHandle_type uiHandle;





  typedef boost::shared_ptr< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosDisplayDialogResponse_

typedef ::vrep_common::simRosDisplayDialogResponse_<std::allocator<void> > simRosDisplayDialogResponse;

typedef boost::shared_ptr< ::vrep_common::simRosDisplayDialogResponse > simRosDisplayDialogResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosDisplayDialogResponse const> simRosDisplayDialogResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/elliottwhite/turtlebot2_wss/turtlebot_navigation_ws/src/tradr-simulation/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ccb73bed17cccbeda47eabda11f7b01f";
  }

  static const char* value(const ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xccb73bed17cccbedULL;
  static const uint64_t static_value2 = 0xa47eabda11f7b01fULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosDisplayDialogResponse";
  }

  static const char* value(const ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 dialogHandle\n\
int32 uiHandle\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dialogHandle);
      stream.next(m.uiHandle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosDisplayDialogResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosDisplayDialogResponse_<ContainerAllocator>& v)
  {
    s << indent << "dialogHandle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dialogHandle);
    s << indent << "uiHandle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.uiHandle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSDISPLAYDIALOGRESPONSE_H
