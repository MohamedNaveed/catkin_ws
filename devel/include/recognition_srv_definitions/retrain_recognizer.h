// Generated by gencpp from file recognition_srv_definitions/retrain_recognizer.msg
// DO NOT EDIT!


#ifndef RECOGNITION_SRV_DEFINITIONS_MESSAGE_RETRAIN_RECOGNIZER_H
#define RECOGNITION_SRV_DEFINITIONS_MESSAGE_RETRAIN_RECOGNIZER_H

#include <ros/service_traits.h>


#include <recognition_srv_definitions/retrain_recognizerRequest.h>
#include <recognition_srv_definitions/retrain_recognizerResponse.h>


namespace recognition_srv_definitions
{

struct retrain_recognizer
{

typedef retrain_recognizerRequest Request;
typedef retrain_recognizerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct retrain_recognizer
} // namespace recognition_srv_definitions


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::recognition_srv_definitions::retrain_recognizer > {
  static const char* value()
  {
    return "68f1a1137280e26bfbb288099ac3fce1";
  }

  static const char* value(const ::recognition_srv_definitions::retrain_recognizer&) { return value(); }
};

template<>
struct DataType< ::recognition_srv_definitions::retrain_recognizer > {
  static const char* value()
  {
    return "recognition_srv_definitions/retrain_recognizer";
  }

  static const char* value(const ::recognition_srv_definitions::retrain_recognizer&) { return value(); }
};


// service_traits::MD5Sum< ::recognition_srv_definitions::retrain_recognizerRequest> should match 
// service_traits::MD5Sum< ::recognition_srv_definitions::retrain_recognizer > 
template<>
struct MD5Sum< ::recognition_srv_definitions::retrain_recognizerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::recognition_srv_definitions::retrain_recognizer >::value();
  }
  static const char* value(const ::recognition_srv_definitions::retrain_recognizerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::recognition_srv_definitions::retrain_recognizerRequest> should match 
// service_traits::DataType< ::recognition_srv_definitions::retrain_recognizer > 
template<>
struct DataType< ::recognition_srv_definitions::retrain_recognizerRequest>
{
  static const char* value()
  {
    return DataType< ::recognition_srv_definitions::retrain_recognizer >::value();
  }
  static const char* value(const ::recognition_srv_definitions::retrain_recognizerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::recognition_srv_definitions::retrain_recognizerResponse> should match 
// service_traits::MD5Sum< ::recognition_srv_definitions::retrain_recognizer > 
template<>
struct MD5Sum< ::recognition_srv_definitions::retrain_recognizerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::recognition_srv_definitions::retrain_recognizer >::value();
  }
  static const char* value(const ::recognition_srv_definitions::retrain_recognizerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::recognition_srv_definitions::retrain_recognizerResponse> should match 
// service_traits::DataType< ::recognition_srv_definitions::retrain_recognizer > 
template<>
struct DataType< ::recognition_srv_definitions::retrain_recognizerResponse>
{
  static const char* value()
  {
    return DataType< ::recognition_srv_definitions::retrain_recognizer >::value();
  }
  static const char* value(const ::recognition_srv_definitions::retrain_recognizerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RECOGNITION_SRV_DEFINITIONS_MESSAGE_RETRAIN_RECOGNIZER_H
