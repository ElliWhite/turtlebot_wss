// Generated by gencpp from file vrep_common/simRosSetSphericalJointMatrixRequest.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SIMROSSETSPHERICALJOINTMATRIXREQUEST_H
#define VREP_COMMON_MESSAGE_SIMROSSETSPHERICALJOINTMATRIXREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Quaternion.h>

namespace vrep_common
{
template <class ContainerAllocator>
struct simRosSetSphericalJointMatrixRequest_
{
  typedef simRosSetSphericalJointMatrixRequest_<ContainerAllocator> Type;

  simRosSetSphericalJointMatrixRequest_()
    : handle(0)
    , quaternion()  {
    }
  simRosSetSphericalJointMatrixRequest_(const ContainerAllocator& _alloc)
    : handle(0)
    , quaternion(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _handle_type;
  _handle_type handle;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _quaternion_type;
  _quaternion_type quaternion;





  typedef boost::shared_ptr< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> const> ConstPtr;

}; // struct simRosSetSphericalJointMatrixRequest_

typedef ::vrep_common::simRosSetSphericalJointMatrixRequest_<std::allocator<void> > simRosSetSphericalJointMatrixRequest;

typedef boost::shared_ptr< ::vrep_common::simRosSetSphericalJointMatrixRequest > simRosSetSphericalJointMatrixRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosSetSphericalJointMatrixRequest const> simRosSetSphericalJointMatrixRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vrep_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vrep_common': ['/home/elliottwhite/turtlebot2_wss/vrep_ros_interface/src/vrep_common/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b50ec6d9c510b5022a5f97f224455526";
  }

  static const char* value(const ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb50ec6d9c510b502ULL;
  static const uint64_t static_value2 = 0x2a5f97f224455526ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/simRosSetSphericalJointMatrixRequest";
  }

  static const char* value(const ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
int32 handle\n\
geometry_msgs/Quaternion quaternion\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.handle);
      stream.next(m.quaternion);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct simRosSetSphericalJointMatrixRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::simRosSetSphericalJointMatrixRequest_<ContainerAllocator>& v)
  {
    s << indent << "handle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.handle);
    s << indent << "quaternion: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.quaternion);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SIMROSSETSPHERICALJOINTMATRIXREQUEST_H
