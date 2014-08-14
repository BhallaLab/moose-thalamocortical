#ifndef _pymoose_MathFunc_cpp
#define _pymoose_MathFunc_cpp
#include "MathFunc.h"
using namespace pymoose;
const std::string MathFunc::className_ = "MathFunc";
MathFunc::MathFunc(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
MathFunc::MathFunc(std::string className, std::string path):Neutral(className, path){}
MathFunc::MathFunc(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
MathFunc::MathFunc(Id id):Neutral(id){}
MathFunc::MathFunc(std::string path):Neutral(className_, path){}
MathFunc::MathFunc(std::string name, Id parentId):Neutral(className_, name, parentId){}
MathFunc::MathFunc(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
MathFunc::MathFunc(const MathFunc& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
MathFunc::MathFunc(const MathFunc& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
MathFunc::MathFunc(const MathFunc& src, std::string path):Neutral(src, path){}
MathFunc::MathFunc(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
MathFunc::MathFunc(const Id& src, std::string path):Neutral(src, path){}
MathFunc::~MathFunc(){}
const std::string& MathFunc::getType(){ return className_; }
const string&  MathFunc::__get_mathML() const
{
return this->getField("mathML");
}
void MathFunc::__set_mathML( string mathML )
{
    set < string > (id_(), "mathML", mathML);
}
const string&  MathFunc::__get_function() const
{
return this->getField("function");
}
void MathFunc::__set_function( string function )
{
    set < string > (id_(), "function", function);
}
double MathFunc::__get_result() const
{
    double result;
    get < double > (id_(), "result",result);
    return result;
}
void MathFunc::__set_result( double result )
{
    set < double > (id_(), "result", result);
}
#endif
