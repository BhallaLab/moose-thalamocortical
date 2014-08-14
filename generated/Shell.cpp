#ifndef _pymoose_Shell_cpp
#define _pymoose_Shell_cpp
#include "Shell.h"
using namespace pymoose;
const std::string Shell::className_ = "Shell";
Shell::Shell(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
Shell::Shell(std::string className, std::string path):Neutral(className, path){}
Shell::Shell(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
Shell::Shell(Id id):Neutral(id){}
Shell::Shell(std::string path):Neutral(className_, path){}
Shell::Shell(std::string name, Id parentId):Neutral(className_, name, parentId){}
Shell::Shell(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
Shell::Shell(const Shell& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
Shell::Shell(const Shell& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
Shell::Shell(const Shell& src, std::string path):Neutral(src, path){}
Shell::Shell(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
Shell::Shell(const Id& src, std::string path):Neutral(src, path){}
Shell::~Shell(){}
const std::string& Shell::getType(){ return className_; }
none Shell::__get_cwe() const
{
    none cwe;
    get < none > (id_(), "cwe",cwe);
    return cwe;
}
void Shell::__set_cwe( none cwe )
{
    set < none > (id_(), "cwe", cwe);
}
int Shell::__get_numNodes() const
{
    int numNodes;
    get < int > (id_(), "numNodes",numNodes);
    return numNodes;
}
int Shell::__get_myNode() const
{
    int myNode;
    get < int > (id_(), "myNode",myNode);
    return myNode;
}
#endif
