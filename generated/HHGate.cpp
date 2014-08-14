#ifndef _pymoose_HHGate_cpp
#define _pymoose_HHGate_cpp
#include "HHGate.h"
using namespace pymoose;
const std::string HHGate::className_ = "HHGate";
HHGate::HHGate(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
HHGate::HHGate(std::string className, std::string path):Neutral(className, path){}
HHGate::HHGate(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
HHGate::HHGate(Id id):Neutral(id){}
HHGate::HHGate(std::string path):Neutral(className_, path){}
HHGate::HHGate(std::string name, Id parentId):Neutral(className_, name, parentId){}
HHGate::HHGate(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
HHGate::HHGate(const HHGate& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
HHGate::HHGate(const HHGate& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
HHGate::HHGate(const HHGate& src, std::string path):Neutral(src, path){}
HHGate::HHGate(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
HHGate::HHGate(const Id& src, std::string path):Neutral(src, path){}
HHGate::~HHGate(){}
const std::string& HHGate::getType(){ return className_; }
#endif
