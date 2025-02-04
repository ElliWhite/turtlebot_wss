// Generated by gencpp from file stamped_msgs/Int64Array.msg
// DO NOT EDIT!


#ifndef STAMPED_MSGS_MESSAGE_INT64ARRAY_H
#define STAMPED_MSGS_MESSAGE_INT64ARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace stamped_msgs
{
template <class ContainerAllocator>
struct Int64Array_
{
  typedef Int64Array_<ContainerAllocator> Type;

  Int64Array_()
    : header()
    , data()  {
    }
  Int64Array_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::stamped_msgs::Int64Array_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::stamped_msgs::Int64Array_<ContainerAllocator> const> ConstPtr;

}; // struct Int64Array_

typedef ::stamped_msgs::Int64Array_<std::allocator<void> > Int64Array;

typedef boost::shared_ptr< ::stamped_msgs::Int64Array > Int64ArrayPtr;
typedef boost::shared_ptr< ::stamped_msgs::Int64Array const> Int64ArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::stamped_msgs::Int64Array_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::stamped_msgs::Int64Array_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace stamped_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'stamped_msgs': ['/home/elliottwhite/turtlebot2_wss/turtlebot_navigation_ws/src/tradr-msgs/stamped_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::stamped_msgs::Int64Array_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::stamped_msgs::Int64Array_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stamped_msgs::Int64Array_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::stamped_msgs::Int64Array_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stamped_msgs::Int64Array_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::stamped_msgs::Int64Array_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::stamped_msgs::Int64Array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3c62002f0defb2682656f1d354eeffd4";
  }

  static const char* value(const ::stamped_msgs::Int64Array_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3c62002f0defb268ULL;
  static const uint64_t static_value2 = 0x2656f1d354eeffd4ULL;
};

template<class ContainerAllocator>
struct DataType< ::stamped_msgs::Int64Array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "stamped_msgs/Int64Array";
  }

  static const char* value(const ::stamped_msgs::Int64Array_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::stamped_msgs::Int64Array_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int64[] data\n\
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

  static const char* value(const ::stamped_msgs::Int64Array_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::stamped_msgs::Int64Array_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Int64Array_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::stamped_msgs::Int64Array_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::stamped_msgs::Int64Array_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // STAMPED_MSGS_MESSAGE_INT64ARRAY_H
