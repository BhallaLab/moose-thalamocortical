#ifndef _pymoose_GssaStoich_cpp
#define _pymoose_GssaStoich_cpp
#include "GssaStoich.h"
using namespace pymoose;
const std::string GssaStoich::className_ = "GssaStoich";
GssaStoich::GssaStoich(std::string className, std::string objectName, Id parentId):Stoich(className, objectName, parentId){}
GssaStoich::GssaStoich(std::string className, std::string path):Stoich(className, path){}
GssaStoich::GssaStoich(std::string className, std::string objectName, PyMooseBase& parent):Stoich(className, objectName, parent){}
GssaStoich::GssaStoich(Id id):Stoich(id){}
GssaStoich::GssaStoich(std::string path):Stoich(className_, path){}
GssaStoich::GssaStoich(std::string name, Id parentId):Stoich(className_, name, parentId){}
GssaStoich::GssaStoich(std::string name, PyMooseBase& parent):Stoich(className_, name, parent){}
GssaStoich::GssaStoich(const GssaStoich& src, std::string objectName, PyMooseBase& parent):Stoich(src, objectName, parent){}
GssaStoich::GssaStoich(const GssaStoich& src, std::string objectName, Id& parent):Stoich(src, objectName, parent){}
GssaStoich::GssaStoich(const GssaStoich& src, std::string path):Stoich(src, path){}
GssaStoich::GssaStoich(const Id& src, std::string name, Id& parent):Stoich(src, name, parent){}
GssaStoich::GssaStoich(const Id& src, std::string path):Stoich(src, path){}
GssaStoich::~GssaStoich(){}
const std::string& GssaStoich::getType(){ return className_; }
const string&  GssaStoich::__get_method() const
{
return this->getField("method");
}
void GssaStoich::__set_method( string method )
{
    set < string > (id_(), "method", method);
}
#endif
