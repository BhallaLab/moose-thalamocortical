#ifndef _pymoose_HemispherePanel_cpp
#define _pymoose_HemispherePanel_cpp
#include "HemispherePanel.h"
using namespace pymoose;
const std::string HemispherePanel::className_ = "HemispherePanel";
HemispherePanel::HemispherePanel(std::string className, std::string objectName, Id parentId):Panel(className, objectName, parentId){}
HemispherePanel::HemispherePanel(std::string className, std::string path):Panel(className, path){}
HemispherePanel::HemispherePanel(std::string className, std::string objectName, PyMooseBase& parent):Panel(className, objectName, parent){}
HemispherePanel::HemispherePanel(Id id):Panel(id){}
HemispherePanel::HemispherePanel(std::string path):Panel(className_, path){}
HemispherePanel::HemispherePanel(std::string name, Id parentId):Panel(className_, name, parentId){}
HemispherePanel::HemispherePanel(std::string name, PyMooseBase& parent):Panel(className_, name, parent){}
HemispherePanel::HemispherePanel(const HemispherePanel& src, std::string objectName, PyMooseBase& parent):Panel(src, objectName, parent){}
HemispherePanel::HemispherePanel(const HemispherePanel& src, std::string objectName, Id& parent):Panel(src, objectName, parent){}
HemispherePanel::HemispherePanel(const HemispherePanel& src, std::string path):Panel(src, path){}
HemispherePanel::HemispherePanel(const Id& src, std::string name, Id& parent):Panel(src, name, parent){}
HemispherePanel::HemispherePanel(const Id& src, std::string path):Panel(src, path){}
HemispherePanel::~HemispherePanel(){}
const std::string& HemispherePanel::getType(){ return className_; }
#endif
