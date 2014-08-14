#ifndef _pymoose_Class_cpp
#define _pymoose_Class_cpp
#include "Class.h"
using namespace pymoose;
const std::string Class::className_ = "Class";
Class::Class(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
Class::Class(std::string className, std::string path):Neutral(className, path){}
Class::Class(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
Class::Class(Id id):Neutral(id){}
Class::Class(std::string path):Neutral(className_, path){}
Class::Class(std::string name, Id parentId):Neutral(className_, name, parentId){}
Class::Class(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
Class::Class(const Class& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
Class::Class(const Class& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
Class::Class(const Class& src, std::string path):Neutral(src, path){}
Class::Class(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
Class::Class(const Id& src, std::string path):Neutral(src, path){}
Class::~Class(){}
const std::string& Class::getType(){ return className_; }
const string&  Class::__get_name() const
{
return this->getField("name");
}
void Class::__set_name( string name )
{
    set < string > (id_(), "name", name);
}
vector < string > Class::__get_fields() const
{
    vector < string > fields;
    get < vector < string > > (id_(), "fields",fields);
    return fields;
}
const string&  Class::__get_author() const
{
return this->getField("author");
}
const string&  Class::__get_description() const
{
return this->getField("description");
}
unsigned int Class::__get_tick() const
{
    unsigned int tick;
    get < unsigned int > (id_(), "tick",tick);
    return tick;
}
void Class::__set_tick( unsigned int tick )
{
    set < unsigned int > (id_(), "tick", tick);
}
unsigned int Class::__get_stage() const
{
    unsigned int stage;
    get < unsigned int > (id_(), "stage",stage);
    return stage;
}
void Class::__set_stage( unsigned int stage )
{
    set < unsigned int > (id_(), "stage", stage);
}
#endif
