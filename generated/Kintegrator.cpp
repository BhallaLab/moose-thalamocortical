#ifndef _pymoose_Kintegrator_cpp
#define _pymoose_Kintegrator_cpp
#include "Kintegrator.h"
using namespace pymoose;
const std::string Kintegrator::className_ = "Kintegrator";
Kintegrator::Kintegrator(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
Kintegrator::Kintegrator(std::string className, std::string path):Neutral(className, path){}
Kintegrator::Kintegrator(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
Kintegrator::Kintegrator(Id id):Neutral(id){}
Kintegrator::Kintegrator(std::string path):Neutral(className_, path){}
Kintegrator::Kintegrator(std::string name, Id parentId):Neutral(className_, name, parentId){}
Kintegrator::Kintegrator(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
Kintegrator::Kintegrator(const Kintegrator& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
Kintegrator::Kintegrator(const Kintegrator& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
Kintegrator::Kintegrator(const Kintegrator& src, std::string path):Neutral(src, path){}
Kintegrator::Kintegrator(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
Kintegrator::Kintegrator(const Id& src, std::string path):Neutral(src, path){}
Kintegrator::~Kintegrator(){}
const std::string& Kintegrator::getType(){ return className_; }
bool Kintegrator::__get_isInitiatilized() const
{
    bool isInitiatilized;
    get < bool > (id_(), "isInitiatilized",isInitiatilized);
    return isInitiatilized;
}
const string&  Kintegrator::__get_method() const
{
return this->getField("method");
}
void Kintegrator::__set_method( string method )
{
    set < string > (id_(), "method", method);
}
#endif
