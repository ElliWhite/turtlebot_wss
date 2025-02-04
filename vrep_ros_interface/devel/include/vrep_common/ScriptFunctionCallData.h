// Generated by gencpp from file vrep_common/ScriptFunctionCallData.msg
// DO NOT EDIT!


#ifndef VREP_COMMON_MESSAGE_SCRIPTFUNCTIONCALLDATA_H
#define VREP_COMMON_MESSAGE_SCRIPTFUNCTIONCALLDATA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Int32MultiArray.h>
#include <std_msgs/Float32MultiArray.h>
#include <std_msgs/String.h>
#include <std_msgs/String.h>

namespace vrep_common
{
template <class ContainerAllocator>
struct ScriptFunctionCallData_
{
  typedef ScriptFunctionCallData_<ContainerAllocator> Type;

  ScriptFunctionCallData_()
    : intData()
    , floatData()
    , stringData()
    , bufferData()  {
    }
  ScriptFunctionCallData_(const ContainerAllocator& _alloc)
    : intData(_alloc)
    , floatData(_alloc)
    , stringData(_alloc)
    , bufferData(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Int32MultiArray_<ContainerAllocator>  _intData_type;
  _intData_type intData;

   typedef  ::std_msgs::Float32MultiArray_<ContainerAllocator>  _floatData_type;
  _floatData_type floatData;

   typedef  ::std_msgs::String_<ContainerAllocator>  _stringData_type;
  _stringData_type stringData;

   typedef  ::std_msgs::String_<ContainerAllocator>  _bufferData_type;
  _bufferData_type bufferData;





  typedef boost::shared_ptr< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> const> ConstPtr;

}; // struct ScriptFunctionCallData_

typedef ::vrep_common::ScriptFunctionCallData_<std::allocator<void> > ScriptFunctionCallData;

typedef boost::shared_ptr< ::vrep_common::ScriptFunctionCallData > ScriptFunctionCallDataPtr;
typedef boost::shared_ptr< ::vrep_common::ScriptFunctionCallData const> ScriptFunctionCallDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0b1e9358c71aec4e099bb2937a5121eb";
  }

  static const char* value(const ::vrep_common::ScriptFunctionCallData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0b1e9358c71aec4eULL;
  static const uint64_t static_value2 = 0x099bb2937a5121ebULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vrep_common/ScriptFunctionCallData";
  }

  static const char* value(const ::vrep_common::ScriptFunctionCallData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Int32MultiArray intData\n\
std_msgs/Float32MultiArray floatData\n\
std_msgs/String stringData\n\
std_msgs/String bufferData\n\
\n\
================================================================================\n\
MSG: std_msgs/Int32MultiArray\n\
# Please look at the MultiArrayLayout message definition for\n\
# documentation on all multiarrays.\n\
\n\
MultiArrayLayout  layout        # specification of data layout\n\
int32[]           data          # array of data\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/MultiArrayLayout\n\
# The multiarray declares a generic multi-dimensional array of a\n\
# particular data type.  Dimensions are ordered from outer most\n\
# to inner most.\n\
\n\
MultiArrayDimension[] dim # Array of dimension properties\n\
uint32 data_offset        # padding elements at front of data\n\
\n\
# Accessors should ALWAYS be written in terms of dimension stride\n\
# and specified outer-most dimension first.\n\
# \n\
# multiarray(i,j,k) = data[data_offset + dim_stride[1]*i + dim_stride[2]*j + k]\n\
#\n\
# A standard, 3-channel 640x480 image with interleaved color channels\n\
# would be specified as:\n\
#\n\
# dim[0].label  = \"height\"\n\
# dim[0].size   = 480\n\
# dim[0].stride = 3*640*480 = 921600  (note dim[0] stride is just size of image)\n\
# dim[1].label  = \"width\"\n\
# dim[1].size   = 640\n\
# dim[1].stride = 3*640 = 1920\n\
# dim[2].label  = \"channel\"\n\
# dim[2].size   = 3\n\
# dim[2].stride = 3\n\
#\n\
# multiarray(i,j,k) refers to the ith row, jth column, and kth channel.\n\
\n\
================================================================================\n\
MSG: std_msgs/MultiArrayDimension\n\
string label   # label of given dimension\n\
uint32 size    # size of given dimension (in type units)\n\
uint32 stride  # stride of given dimension\n\
================================================================================\n\
MSG: std_msgs/Float32MultiArray\n\
# Please look at the MultiArrayLayout message definition for\n\
# documentation on all multiarrays.\n\
\n\
MultiArrayLayout  layout        # specification of data layout\n\
float32[]         data          # array of data\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
";
  }

  static const char* value(const ::vrep_common::ScriptFunctionCallData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.intData);
      stream.next(m.floatData);
      stream.next(m.stringData);
      stream.next(m.bufferData);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ScriptFunctionCallData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vrep_common::ScriptFunctionCallData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vrep_common::ScriptFunctionCallData_<ContainerAllocator>& v)
  {
    s << indent << "intData: ";
    s << std::endl;
    Printer< ::std_msgs::Int32MultiArray_<ContainerAllocator> >::stream(s, indent + "  ", v.intData);
    s << indent << "floatData: ";
    s << std::endl;
    Printer< ::std_msgs::Float32MultiArray_<ContainerAllocator> >::stream(s, indent + "  ", v.floatData);
    s << indent << "stringData: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.stringData);
    s << indent << "bufferData: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.bufferData);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VREP_COMMON_MESSAGE_SCRIPTFUNCTIONCALLDATA_H
