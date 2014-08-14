#ifndef _pymoose_HHChannel2D_cpp
#define _pymoose_HHChannel2D_cpp
#include "HHChannel2D.h"
using namespace pymoose;
const std::string HHChannel2D::className_ = "HHChannel2D";
HHChannel2D::HHChannel2D(std::string className, std::string objectName, Id parentId):HHChannel(className, objectName, parentId){}
HHChannel2D::HHChannel2D(std::string className, std::string path):HHChannel(className, path){}
HHChannel2D::HHChannel2D(std::string className, std::string objectName, PyMooseBase& parent):HHChannel(className, objectName, parent){}
HHChannel2D::HHChannel2D(Id id):HHChannel(id){}
HHChannel2D::HHChannel2D(std::string path):HHChannel(className_, path){}
HHChannel2D::HHChannel2D(std::string name, Id parentId):HHChannel(className_, name, parentId){}
HHChannel2D::HHChannel2D(std::string name, PyMooseBase& parent):HHChannel(className_, name, parent){}
HHChannel2D::HHChannel2D(const HHChannel2D& src, std::string objectName, PyMooseBase& parent):HHChannel(src, objectName, parent){}
HHChannel2D::HHChannel2D(const HHChannel2D& src, std::string objectName, Id& parent):HHChannel(src, objectName, parent){}
HHChannel2D::HHChannel2D(const HHChannel2D& src, std::string path):HHChannel(src, path){}
HHChannel2D::HHChannel2D(const Id& src, std::string name, Id& parent):HHChannel(src, name, parent){}
HHChannel2D::HHChannel2D(const Id& src, std::string path):HHChannel(src, path){}
HHChannel2D::~HHChannel2D(){}
const std::string& HHChannel2D::getType(){ return className_; }
const string&  HHChannel2D::__get_Xindex() const
{
return this->getField("Xindex");
}
void HHChannel2D::__set_Xindex( string Xindex )
{
    set < string > (id_(), "Xindex", Xindex);
}
const string&  HHChannel2D::__get_Yindex() const
{
return this->getField("Yindex");
}
void HHChannel2D::__set_Yindex( string Yindex )
{
    set < string > (id_(), "Yindex", Yindex);
}
const string&  HHChannel2D::__get_Zindex() const
{
return this->getField("Zindex");
}
void HHChannel2D::__set_Zindex( string Zindex )
{
    set < string > (id_(), "Zindex", Zindex);
}
#endif
