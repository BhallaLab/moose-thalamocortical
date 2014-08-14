#ifndef _pymoose_GenesisParser_cpp
#define _pymoose_GenesisParser_cpp
#include "GenesisParser.h"
using namespace pymoose;
const std::string GenesisParser::className_ = "GenesisParser";
GenesisParser::GenesisParser(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
GenesisParser::GenesisParser(std::string className, std::string path):Neutral(className, path){}
GenesisParser::GenesisParser(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
GenesisParser::GenesisParser(Id id):Neutral(id){}
GenesisParser::GenesisParser(std::string path):Neutral(className_, path){}
GenesisParser::GenesisParser(std::string name, Id parentId):Neutral(className_, name, parentId){}
GenesisParser::GenesisParser(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
GenesisParser::GenesisParser(const GenesisParser& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
GenesisParser::GenesisParser(const GenesisParser& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
GenesisParser::GenesisParser(const GenesisParser& src, std::string path):Neutral(src, path){}
GenesisParser::GenesisParser(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
GenesisParser::GenesisParser(const Id& src, std::string path):Neutral(src, path){}
GenesisParser::~GenesisParser(){}
const std::string& GenesisParser::getType(){ return className_; }
#endif
