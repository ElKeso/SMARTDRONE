// Generated by gencpp from file mavros_msgs/Thrust.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_THRUST_H
#define MAVROS_MSGS_MESSAGE_THRUST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct Thrust_
{
  typedef Thrust_<ContainerAllocator> Type;

  Thrust_()
    : header()
    , thrust(0.0)  {
    }
  Thrust_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , thrust(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _thrust_type;
  _thrust_type thrust;





  typedef boost::shared_ptr< ::mavros_msgs::Thrust_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::Thrust_<ContainerAllocator> const> ConstPtr;

}; // struct Thrust_

typedef ::mavros_msgs::Thrust_<std::allocator<void> > Thrust;

typedef boost::shared_ptr< ::mavros_msgs::Thrust > ThrustPtr;
typedef boost::shared_ptr< ::mavros_msgs::Thrust const> ThrustConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::Thrust_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::Thrust_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::Thrust_<ContainerAllocator1> & lhs, const ::mavros_msgs::Thrust_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.thrust == rhs.thrust;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::Thrust_<ContainerAllocator1> & lhs, const ::mavros_msgs::Thrust_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::Thrust_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::Thrust_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::Thrust_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::Thrust_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::Thrust_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::Thrust_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::Thrust_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c61da3a8868a8b502eaf0b0abd839f57";
  }

  static const char* value(const ::mavros_msgs::Thrust_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc61da3a8868a8b50ULL;
  static const uint64_t static_value2 = 0x2eaf0b0abd839f57ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::Thrust_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/Thrust";
  }

  static const char* value(const ::mavros_msgs::Thrust_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::Thrust_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Thrust to send to the FCU\n"
"\n"
"std_msgs/Header header\n"
"\n"
"float32 thrust\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::mavros_msgs::Thrust_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::Thrust_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.thrust);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Thrust_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::Thrust_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::Thrust_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "thrust: ";
    Printer<float>::stream(s, indent + "  ", v.thrust);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_THRUST_H
