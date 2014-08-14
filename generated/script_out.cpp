#ifndef _pymoose_script_out_cpp
#define _pymoose_script_out_cpp
#include "script_out.h"
using namespace pymoose;
const std::string script_out::className_ = "script_out";
script_out::script_out(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
script_out::script_out(std::string className, std::string path):Neutral(className, path){}
script_out::script_out(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
script_out::script_out(Id id):Neutral(id){}
script_out::script_out(std::string path):Neutral(className_, path){}
script_out::script_out(std::string name, Id parentId):Neutral(className_, name, parentId){}
script_out::script_out(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
script_out::script_out(const script_out& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
script_out::script_out(const script_out& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
script_out::script_out(const script_out& src, std::string path):Neutral(src, path){}
script_out::script_out(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
script_out::script_out(const Id& src, std::string path):Neutral(src, path){}
script_out::~script_out(){}
const std::string& script_out::getType(){ return className_; }
int script_out::__get_action() const
{
    int action;
    get < int > (id_(), "action",action);
    return action;
}
void script_out::__set_action( int action )
{
    set < int > (id_(), "action", action);
}
double script_out::__get_bar_x() const
{
    double bar_x;
    get < double > (id_(), "bar_x",bar_x);
    return bar_x;
}
void script_out::__set_bar_x( double bar_x )
{
    set < double > (id_(), "bar_x", bar_x);
}
double script_out::__get_bar_y() const
{
    double bar_y;
    get < double > (id_(), "bar_y",bar_y);
    return bar_y;
}
void script_out::__set_bar_y( double bar_y )
{
    set < double > (id_(), "bar_y", bar_y);
}
double script_out::__get_bar_h() const
{
    double bar_h;
    get < double > (id_(), "bar_h",bar_h);
    return bar_h;
}
void script_out::__set_bar_h( double bar_h )
{
    set < double > (id_(), "bar_h", bar_h);
}
double script_out::__get_bar_w() const
{
    double bar_w;
    get < double > (id_(), "bar_w",bar_w);
    return bar_w;
}
void script_out::__set_bar_w( double bar_w )
{
    set < double > (id_(), "bar_w", bar_w);
}
double script_out::__get_bar_dx() const
{
    double bar_dx;
    get < double > (id_(), "bar_dx",bar_dx);
    return bar_dx;
}
void script_out::__set_bar_dx( double bar_dx )
{
    set < double > (id_(), "bar_dx", bar_dx);
}
double script_out::__get_bar_dy() const
{
    double bar_dy;
    get < double > (id_(), "bar_dy",bar_dy);
    return bar_dy;
}
void script_out::__set_bar_dy( double bar_dy )
{
    set < double > (id_(), "bar_dy", bar_dy);
}
#endif
