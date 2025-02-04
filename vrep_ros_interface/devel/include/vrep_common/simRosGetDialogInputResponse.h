// Generated by gencpp from file vrep_common/simRosGetDialogInputResponse.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSGETDIALOGINPUTRESPONSE_H
#define VREP_COMMON_MESSAGE_SIMROSGETDIALOGINPUTRESPONSE_H


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
struct simRosGetDialogInputResponse_
{
  typedef simRosGetDialogInputResponse_<ContainerAllocator> Type;

  simRosGetDialogInputResponse_()
    : result(0)
    , input()  {
    }
  simRosGetDialogInputResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , input(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> const> ConstPtr;

}; // struct simRosGetDialogInputResponse_

typedef ::vrep_common::simRosGetDialogInputResponse_<std::allocator<void> > simRosGetDialogInputResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetDialogInputResponse > simRosGetDialogInputResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetDialogInputResponse const> simRosGetDialogInputResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/elliottwhite/turtlebot2_wss/vrep_ros_interface/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4dbece23a7f7a45b3aee510311b5c901";
  }

  static const char* value(const ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4dbece23a7f7a45bULL;
  static const uint64_t static_value2 = 0x3aee510311b5c901ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosGetDialogInputResponse";
  }

  static const char* value(const ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
string input\n\
\n\
";
  }

  static const char* value(const ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosGetDialogInputResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosGetDialogInputResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "input: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSGETDIALOGINPUTRESPONSE_H
