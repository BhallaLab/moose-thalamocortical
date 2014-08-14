#ifndef _pymoose_Cell_cpp
#define _pymoose_Cell_cpp
#include "Cell.h"
using namespace pymoose;
const std::string Cell::className_ = "Cell";
Cell::Cell(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
Cell::Cell(std::string className, std::string path):Neutral(className, path){}
Cell::Cell(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
Cell::Cell(Id id):Neutral(id){}
Cell::Cell(std::string path):Neutral(className_, path){}
Cell::Cell(std::string name, Id parentId):Neutral(className_, name, parentId){}
Cell::Cell(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
Cell::Cell(const Cell& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
Cell::Cell(const Cell& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
Cell::Cell(const Cell& src, std::string path):Neutral(src, path){}
Cell::Cell(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
Cell::Cell(const Id& src, std::string path):Neutral(src, path){}
Cell::~Cell(){}
const std::string& Cell::getType(){ return className_; }
const string&  Cell::__get_method() const
{
return this->getField("method");
}
void Cell::__set_method( string method )
{
    set < string > (id_(), "method", method);
}
bool Cell::__get_variableDt() const
{
    bool variableDt;
    get < bool > (id_(), "variableDt",variableDt);
    return variableDt;
}
bool Cell::__get_implicit() const
{
    bool implicit;
    get < bool > (id_(), "implicit",implicit);
    return implicit;
}
const string&  Cell::__get_description() const
{
return this->getField("description");
}
#endif
