#ifndef _pymoose_KinPlaceHolder_cpp
#define _pymoose_KinPlaceHolder_cpp
#include "KinPlaceHolder.h"
using namespace pymoose;
const std::string KinPlaceHolder::className_ = "KinPlaceHolder";
KinPlaceHolder::KinPlaceHolder(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
KinPlaceHolder::KinPlaceHolder(std::string className, std::string path):Neutral(className, path){}
KinPlaceHolder::KinPlaceHolder(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
KinPlaceHolder::KinPlaceHolder(Id id):Neutral(id){}
KinPlaceHolder::KinPlaceHolder(std::string path):Neutral(className_, path){}
KinPlaceHolder::KinPlaceHolder(std::string name, Id parentId):Neutral(className_, name, parentId){}
KinPlaceHolder::KinPlaceHolder(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
KinPlaceHolder::KinPlaceHolder(const KinPlaceHolder& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
KinPlaceHolder::KinPlaceHolder(const KinPlaceHolder& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
KinPlaceHolder::KinPlaceHolder(const KinPlaceHolder& src, std::string path):Neutral(src, path){}
KinPlaceHolder::KinPlaceHolder(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
KinPlaceHolder::KinPlaceHolder(const Id& src, std::string path):Neutral(src, path){}
KinPlaceHolder::~KinPlaceHolder(){}
const std::string& KinPlaceHolder::getType(){ return className_; }
none KinPlaceHolder::__get_proto() const
{
    none proto;
    get < none > (id_(), "proto",proto);
    return proto;
}
double KinPlaceHolder::__get_lambda() const
{
    double lambda;
    get < double > (id_(), "lambda",lambda);
    return lambda;
}
const string&  KinPlaceHolder::__get_method() const
{
return this->getField("method");
}
double KinPlaceHolder::__get_loadEstimate() const
{
    double loadEstimate;
    get < double > (id_(), "loadEstimate",loadEstimate);
    return loadEstimate;
}
unsigned int KinPlaceHolder::__get_memEstimate() const
{
    unsigned int memEstimate;
    get < unsigned int > (id_(), "memEstimate",memEstimate);
    return memEstimate;
}
double KinPlaceHolder::__get_sigComptLength() const
{
    double sigComptLength;
    get < double > (id_(), "sigComptLength",sigComptLength);
    return sigComptLength;
}
unsigned int KinPlaceHolder::__get_numSigCompts() const
{
    unsigned int numSigCompts;
    get < unsigned int > (id_(), "numSigCompts",numSigCompts);
    return numSigCompts;
}
#endif
