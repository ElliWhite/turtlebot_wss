// Generated by gencpp from file laser_mapper/SaveTrajectoryRequest.msg
// DO NOT EDIT!


#ifndef LASER_MAPPER_MESSAGE_SAVETRAJECTORYREQUEST_H
#define LASER_MAPPER_MESSAGE_SAVETRAJECTORYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace laser_mapper
{
template <class ContainerAllocator>
struct SaveTrajectoryRequest_
{
  typedef SaveTrajectoryRequest_<ContainerAllocator> Type;

  SaveTrajectoryRequest_()
    : file_path()  {
    }
  SaveTrajectoryRequest_(const ContainerAllocator& _alloc)
    : file_path(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _file_path_type;
  _file_path_type file_path;





  typedef boost::shared_ptr< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SaveTrajectoryRequest_

typedef ::laser_mapper::SaveTrajectoryRequest_<std::allocator<void> > SaveTrajectoryRequest;

typedef boost::shared_ptr< ::laser_mapper::SaveTrajectoryRequest > SaveTrajectoryRequestPtr;
typedef boost::shared_ptr< ::laser_mapper::SaveTrajectoryRequest const> SaveTrajectoryRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace laser_mapper

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'roscpp': ['/opt/ros/kinetic/share/roscpp/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/kinetic/share/visualization_msgs/cmake/../msg'], 'tf': ['/opt/ros/kinetic/share/tf/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a1f82596372c52a517e1fe32d1e998e8";
  }

  static const char* value(const ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa1f82596372c52a5ULL;
  static const uint64_t static_value2 = 0x17e1fe32d1e998e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "laser_mapper/SaveTrajectoryRequest";
  }

  static const char* value(const ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string file_path\n\
";
  }

  static const char* value(const ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.file_path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SaveTrajectoryRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::laser_mapper::SaveTrajectoryRequest_<ContainerAllocator>& v)
  {
    s << indent << "file_path: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.file_path);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LASER_MAPPER_MESSAGE_SAVETRAJECTORYREQUEST_H
