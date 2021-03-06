// Generated by gencpp from file incremental_object_learning_srv_definitions/clear.msg
// DO NOT EDIT!


#ifndef INCREMENTAL_OBJECT_LEARNING_SRV_DEFINITIONS_MESSAGE_CLEAR_H
#define INCREMENTAL_OBJECT_LEARNING_SRV_DEFINITIONS_MESSAGE_CLEAR_H

#include <ros/service_traits.h>


#include <incremental_object_learning_srv_definitions/clearRequest.h>
#include <incremental_object_learning_srv_definitions/clearResponse.h>


namespace incremental_object_learning_srv_definitions
{

struct clear
{

typedef clearRequest Request;
typedef clearResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct clear
} // namespace incremental_object_learning_srv_definitions


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::incremental_object_learning_srv_definitions::clear > {
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::incremental_object_learning_srv_definitions::clear&) { return value(); }
};

template<>
struct DataType< ::incremental_object_learning_srv_definitions::clear > {
  static const char* value()
  {
    return "incremental_object_learning_srv_definitions/clear";
  }

  static const char* value(const ::incremental_object_learning_srv_definitions::clear&) { return value(); }
};


// service_traits::MD5Sum< ::incremental_object_learning_srv_definitions::clearRequest> should match 
// service_traits::MD5Sum< ::incremental_object_learning_srv_definitions::clear > 
template<>
struct MD5Sum< ::incremental_object_learning_srv_definitions::clearRequest>
{
  static const char* value()
  {
    return MD5Sum< ::incremental_object_learning_srv_definitions::clear >::value();
  }
  static const char* value(const ::incremental_object_learning_srv_definitions::clearRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::incremental_object_learning_srv_definitions::clearRequest> should match 
// service_traits::DataType< ::incremental_object_learning_srv_definitions::clear > 
template<>
struct DataType< ::incremental_object_learning_srv_definitions::clearRequest>
{
  static const char* value()
  {
    return DataType< ::incremental_object_learning_srv_definitions::clear >::value();
  }
  static const char* value(const ::incremental_object_learning_srv_definitions::clearRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::incremental_object_learning_srv_definitions::clearResponse> should match 
// service_traits::MD5Sum< ::incremental_object_learning_srv_definitions::clear > 
template<>
struct MD5Sum< ::incremental_object_learning_srv_definitions::clearResponse>
{
  static const char* value()
  {
    return MD5Sum< ::incremental_object_learning_srv_definitions::clear >::value();
  }
  static const char* value(const ::incremental_object_learning_srv_definitions::clearResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::incremental_object_learning_srv_definitions::clearResponse> should match 
// service_traits::DataType< ::incremental_object_learning_srv_definitions::clear > 
template<>
struct DataType< ::incremental_object_learning_srv_definitions::clearResponse>
{
  static const char* value()
  {
    return DataType< ::incremental_object_learning_srv_definitions::clear >::value();
  }
  static const char* value(const ::incremental_object_learning_srv_definitions::clearResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // INCREMENTAL_OBJECT_LEARNING_SRV_DEFINITIONS_MESSAGE_CLEAR_H
