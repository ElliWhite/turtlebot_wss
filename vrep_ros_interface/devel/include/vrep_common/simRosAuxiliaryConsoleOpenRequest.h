// Generated by gencpp from file vrep_common/simRosAuxiliaryConsoleOpenRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSAUXILIARYCONSOLEOPENREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSAUXILIARYCONSOLEOPENREQUEST_H


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
struct simRosAuxiliaryConsoleOpenRequest_
{
  typedef simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> Type;

  simRosAuxiliaryConsoleOpenRequest_()
    : title()
    , maxLines(0)
    , mode(0)
    , position()
    , size()
    , textColor()
    , backgroundColor()  {
    }
  simRosAuxiliaryConsoleOpenRequest_(const ContainerAllocator& _alloc)
    : title(_alloc)
    , maxLines(0)
    , mode(0)
    , position(_alloc)
    , size(_alloc)
    , textColor(_alloc)
    , backgroundColor(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _title_type;
  _title_type title;

   typedef int32_t _maxLines_type;
  _maxLines_type maxLines;

   typedef int32_t _mode_type;
  _mode_type mode;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _position_type;
  _position_type position;

   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _size_type;
  _size_type size;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _textColor_type;
  _textColor_type textColor;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _backgroundColor_type;
  _backgroundColor_type backgroundColor;





  typedef boost::shared_ptr< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosAuxiliaryConsoleOpenRequest_

typedef ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<std::allocator<void> > simRosAuxiliaryConsoleOpenRequest;

typedef boost::shared_ptr< ::vrep_common::simRosAuxiliaryConsoleOpenRequest > simRosAuxiliaryConsoleOpenRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosAuxiliaryConsoleOpenRequest const> simRosAuxiliaryConsoleOpenRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b11b7ee0194549fd289229f6b0fe6c7a";
  }

  static const char* value(const ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb11b7ee0194549fdULL;
  static const uint64_t static_value2 = 0x289229f6b0fe6c7aULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosAuxiliaryConsoleOpenRequest";
  }

  static const char* value(const ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
string title\n\
int32 maxLines\n\
int32 mode\n\
int32[] position\n\
int32[] size\n\
float32[] textColor\n\
float32[] backgroundColor\n\
";
  }

  static const char* value(const ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.title);
      stream.next(m.maxLines);
      stream.next(m.mode);
      stream.next(m.position);
      stream.next(m.size);
      stream.next(m.textColor);
      stream.next(m.backgroundColor);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosAuxiliaryConsoleOpenRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosAuxiliaryConsoleOpenRequest_<ContainerAllocator>& v)
  {
    s << indent << "title: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.title);
    s << indent << "maxLines: ";
    Printer<int32_t>::stream(s, indent + "  ", v.maxLines);
    s << indent << "mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mode);
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "size[]" << std::endl;
    for (size_t i = 0; i < v.size.size(); ++i)
    {
      s << indent << "  size[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.size[i]);
    }
    s << indent << "textColor[]" << std::endl;
    for (size_t i = 0; i < v.textColor.size(); ++i)
    {
      s << indent << "  textColor[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.textColor[i]);
    }
    s << indent << "backgroundColor[]" << std::endl;
    for (size_t i = 0; i < v.backgroundColor.size(); ++i)
    {
      s << indent << "  backgroundColor[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.backgroundColor[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSAUXILIARYCONSOLEOPENREQUEST_H
