#ifndef _pymoose_TimeTable_cpp
#define _pymoose_TimeTable_cpp
#include "TimeTable.h"
using namespace pymoose;
const std::string TimeTable::className_ = "TimeTable";
TimeTable::TimeTable(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
TimeTable::TimeTable(std::string className, std::string path):Neutral(className, path){}
TimeTable::TimeTable(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
TimeTable::TimeTable(Id id):Neutral(id){}
TimeTable::TimeTable(std::string path):Neutral(className_, path){}
TimeTable::TimeTable(std::string name, Id parentId):Neutral(className_, name, parentId){}
TimeTable::TimeTable(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
TimeTable::TimeTable(const TimeTable& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
TimeTable::TimeTable(const TimeTable& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
TimeTable::TimeTable(const TimeTable& src, std::string path):Neutral(src, path){}
TimeTable::TimeTable(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
TimeTable::TimeTable(const Id& src, std::string path):Neutral(src, path){}
TimeTable::~TimeTable(){}
const std::string& TimeTable::getType(){ return className_; }
const string&  TimeTable::__get_filename() const
{
return this->getField("filename");
}
void TimeTable::__set_filename( string filename )
{
    set < string > (id_(), "filename", filename);
}
int TimeTable::__get_method() const
{
    int method;
    get < int > (id_(), "method",method);
    return method;
}
void TimeTable::__set_method( int method )
{
    set < int > (id_(), "method", method);
}
vector < double > TimeTable::__get_tableVector() const
{
    vector < double > tableVector;
    get < vector < double > > (id_(), "tableVector",tableVector);
    return tableVector;
}
void TimeTable::__set_tableVector( vector < double > tableVector )
{
    set < vector < double > > (id_(), "tableVector", tableVector);
}
unsigned int TimeTable::__get_tableSize() const
{
    unsigned int tableSize;
    get < unsigned int > (id_(), "tableSize",tableSize);
    return tableSize;
}
void TimeTable::__set_tableSize( unsigned int tableSize )
{
    set < unsigned int > (id_(), "tableSize", tableSize);
}
double TimeTable::__get_state() const
{
    double state;
    get < double > (id_(), "state",state);
    return state;
}
#endif
