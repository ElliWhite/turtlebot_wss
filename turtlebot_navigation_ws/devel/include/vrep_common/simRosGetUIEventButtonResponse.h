// Generated by gencpp from file vrep_common/simRosGetUIEventButtonResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETUIEVENTBUTTONRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSGETUIEVENTBUTTONRESPONSE_H


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
struct simRosGetUIEventButtonResponse_
{
  typedef simRosGetUIEventButtonResponse_<ContainerAllocator> Type;

  simRosGetUIEventButtonResponse_()
    : buttonID(0)
    , auxiliaryValues()  {
    }
  simRosGetUIEventButtonResponse_(const ContainerAllocator& _alloc)
    : buttonID(0)
    , auxiliaryValues(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _buttonID_type;
  _buttonID_type buttonID;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _auxiliaryValues_type;
  _auxiliaryValues_type auxiliaryValues;





  typedef boost::shared_ptr< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetUIEventButtonResponse_

typedef ::vrep_common::simRosGetUIEventButtonResponse_<std::allocator<void> > simRosGetUIEventButtonResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetUIEventButtonResponse > simRosGetUIEventButtonResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetUIEventButtonResponse const> simRosGetUIEventButtonResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/elliottwhite/turtlebot2_wss/turtlebot_navigation_ws/src/tradr-simulation/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b728477dc7ef5ede0fdff50ce2320d21";
  }

  static const char* value(const ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb728477dc7ef5edeULL;
  static const uint64_t static_value2 = 0x0fdff50ce2320d21ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetUIEventButtonResponse";
  }

  static const char* value(const ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 buttonID\n\
int32[] auxiliaryValues\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.buttonID);
      stream.next(m.auxiliaryValues);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosGetUIEventButtonResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetUIEventButtonResponse_<ContainerAllocator>& v)
  {
    s << indent << "buttonID: ";
    Printer<int32_t>::stream(s, indent + "  ", v.buttonID);
    s << indent << "auxiliaryValues[]" << std::endl;
    for (size_t i = 0; i < v.auxiliaryValues.size(); ++i)
    {
      s << indent << "  auxiliaryValues[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.auxiliaryValues[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETUIEVENTBUTTONRESPONSE_H
