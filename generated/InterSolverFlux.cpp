#ifndef _pymoose_InterSolverFlux_cpp
#define _pymoose_InterSolverFlux_cpp
#include "InterSolverFlux.h"
using namespace pymoose;
const std::string InterSolverFlux::className_ = "InterSolverFlux";
InterSolverFlux::InterSolverFlux(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
InterSolverFlux::InterSolverFlux(std::string className, std::string path):Neutral(className, path){}
InterSolverFlux::InterSolverFlux(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
InterSolverFlux::InterSolverFlux(Id id):Neutral(id){}
InterSolverFlux::InterSolverFlux(std::string path):Neutral(className_, path){}
InterSolverFlux::InterSolverFlux(std::string name, Id parentId):Neutral(className_, name, parentId){}
InterSolverFlux::InterSolverFlux(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
InterSolverFlux::InterSolverFlux(const InterSolverFlux& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
InterSolverFlux::InterSolverFlux(const InterSolverFlux& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
InterSolverFlux::InterSolverFlux(const InterSolverFlux& src, std::string path):Neutral(src, path){}
InterSolverFlux::InterSolverFlux(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
InterSolverFlux::InterSolverFlux(const Id& src, std::string path):Neutral(src, path){}
InterSolverFlux::~InterSolverFlux(){}
const std::string& InterSolverFlux::getType(){ return className_; }
const string&  InterSolverFlux::__get_method() const
{
return this->getField("method");
}
void InterSolverFlux::__set_method( string method )
{
    set < string > (id_(), "method", method);
}
#endif
