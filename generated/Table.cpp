#ifndef _pymoose_Table_cpp
#define _pymoose_Table_cpp
#include "Table.h"
using namespace pymoose;
const std::string Table::className_ = "Table";
Table::Table(std::string className, std::string objectName, Id parentId):Interpol(className, objectName, parentId){}
Table::Table(std::string className, std::string path):Interpol(className, path){}
Table::Table(std::string className, std::string objectName, PyMooseBase& parent):Interpol(className, objectName, parent){}
Table::Table(Id id):Interpol(id){}
Table::Table(std::string path):Interpol(className_, path){}
Table::Table(std::string name, Id parentId):Interpol(className_, name, parentId){}
Table::Table(std::string name, PyMooseBase& parent):Interpol(className_, name, parent){}
Table::Table(const Table& src, std::string objectName, PyMooseBase& parent):Interpol(src, objectName, parent){}
Table::Table(const Table& src, std::string objectName, Id& parent):Interpol(src, objectName, parent){}
Table::Table(const Table& src, std::string path):Interpol(src, path){}
Table::Table(const Id& src, std::string name, Id& parent):Interpol(src, name, parent){}
Table::Table(const Id& src, std::string path):Interpol(src, path){}
Table::~Table(){}
const std::string& Table::getType(){ return className_; }
double Table::__get_input() const
{
    double input;
    get < double > (id_(), "input",input);
    return input;
}
void Table::__set_input( double input )
{
    set < double > (id_(), "input", input);
}
double Table::__get_output() const
{
    double output;
    get < double > (id_(), "output",output);
    return output;
}
void Table::__set_output( double output )
{
    set < double > (id_(), "output", output);
}
int Table::__get_step_mode() const
{
    int step_mode;
    get < int > (id_(), "step_mode",step_mode);
    return step_mode;
}
void Table::__set_step_mode( int step_mode )
{
    set < int > (id_(), "step_mode", step_mode);
}
int Table::__get_stepmode() const
{
    int stepmode;
    get < int > (id_(), "stepmode",stepmode);
    return stepmode;
}
void Table::__set_stepmode( int stepmode )
{
    set < int > (id_(), "stepmode", stepmode);
}
double Table::__get_stepsize() const
{
    double stepsize;
    get < double > (id_(), "stepsize",stepsize);
    return stepsize;
}
void Table::__set_stepsize( double stepsize )
{
    set < double > (id_(), "stepsize", stepsize);
}
double Table::__get_threshold() const
{
    double threshold;
    get < double > (id_(), "threshold",threshold);
    return threshold;
}
void Table::__set_threshold( double threshold )
{
    set < double > (id_(), "threshold", threshold);
}
const string&  Table::__get_fname() const
{
return this->getField("fname");
}
void Table::__set_fname( string fname )
{
    set < string > (id_(), "fname", fname);
}
#endif
