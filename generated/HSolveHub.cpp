#ifndef _pymoose_HSolveHub_cpp
#define _pymoose_HSolveHub_cpp
#include "HSolveHub.h"
using namespace pymoose;
const std::string HSolveHub::className_ = "HSolveHub";
HSolveHub::HSolveHub(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
HSolveHub::HSolveHub(std::string className, std::string path):Neutral(className, path){}
HSolveHub::HSolveHub(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
HSolveHub::HSolveHub(Id id):Neutral(id){}
HSolveHub::HSolveHub(std::string path):Neutral(className_, path){}
HSolveHub::HSolveHub(std::string name, Id parentId):Neutral(className_, name, parentId){}
HSolveHub::HSolveHub(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
HSolveHub::HSolveHub(const HSolveHub& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
HSolveHub::HSolveHub(const HSolveHub& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
HSolveHub::HSolveHub(const HSolveHub& src, std::string path):Neutral(src, path){}
HSolveHub::HSolveHub(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
HSolveHub::HSolveHub(const Id& src, std::string path):Neutral(src, path){}
HSolveHub::~HSolveHub(){}
const std::string& HSolveHub::getType(){ return className_; }
#endif
