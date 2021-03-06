#ifndef _pymoose_ExponentialRng_cpp
#define _pymoose_ExponentialRng_cpp
#include "ExponentialRng.h"
using namespace pymoose;
const std::string ExponentialRng::className_ = "ExponentialRng";
ExponentialRng::ExponentialRng(std::string className, std::string objectName, Id parentId):RandGenerator(className, objectName, parentId){}
ExponentialRng::ExponentialRng(std::string className, std::string path):RandGenerator(className, path){}
ExponentialRng::ExponentialRng(std::string className, std::string objectName, PyMooseBase& parent):RandGenerator(className, objectName, parent){}
ExponentialRng::ExponentialRng(Id id):RandGenerator(id){}
ExponentialRng::ExponentialRng(std::string path):RandGenerator(className_, path){}
ExponentialRng::ExponentialRng(std::string name, Id parentId):RandGenerator(className_, name, parentId){}
ExponentialRng::ExponentialRng(std::string name, PyMooseBase& parent):RandGenerator(className_, name, parent){}
ExponentialRng::ExponentialRng(const ExponentialRng& src, std::string objectName, PyMooseBase& parent):RandGenerator(src, objectName, parent){}
ExponentialRng::ExponentialRng(const ExponentialRng& src, std::string objectName, Id& parent):RandGenerator(src, objectName, parent){}
ExponentialRng::ExponentialRng(const ExponentialRng& src, std::string path):RandGenerator(src, path){}
ExponentialRng::ExponentialRng(const Id& src, std::string name, Id& parent):RandGenerator(src, name, parent){}
ExponentialRng::ExponentialRng(const Id& src, std::string path):RandGenerator(src, path){}
ExponentialRng::~ExponentialRng(){}
const std::string& ExponentialRng::getType(){ return className_; }
double ExponentialRng::__get_mean() const
{
    double mean;
    get < double > (id_(), "mean",mean);
    return mean;
}
void ExponentialRng::__set_mean( double mean )
{
    set < double > (id_(), "mean", mean);
}
int ExponentialRng::__get_method() const
{
    int method;
    get < int > (id_(), "method",method);
    return method;
}
void ExponentialRng::__set_method( int method )
{
    set < int > (id_(), "method", method);
}
#endif
