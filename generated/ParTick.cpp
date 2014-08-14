#ifndef _pymoose_ParTick_cpp
#define _pymoose_ParTick_cpp
#include "ParTick.h"
using namespace pymoose;
const std::string ParTick::className_ = "ParTick";
ParTick::ParTick(std::string className, std::string objectName, Id parentId):Tick(className, objectName, parentId){}
ParTick::ParTick(std::string className, std::string path):Tick(className, path){}
ParTick::ParTick(std::string className, std::string objectName, PyMooseBase& parent):Tick(className, objectName, parent){}
ParTick::ParTick(Id id):Tick(id){}
ParTick::ParTick(std::string path):Tick(className_, path){}
ParTick::ParTick(std::string name, Id parentId):Tick(className_, name, parentId){}
ParTick::ParTick(std::string name, PyMooseBase& parent):Tick(className_, name, parent){}
ParTick::ParTick(const ParTick& src, std::string objectName, PyMooseBase& parent):Tick(src, objectName, parent){}
ParTick::ParTick(const ParTick& src, std::string objectName, Id& parent):Tick(src, objectName, parent){}
ParTick::ParTick(const ParTick& src, std::string path):Tick(src, path){}
ParTick::ParTick(const Id& src, std::string name, Id& parent):Tick(src, name, parent){}
ParTick::ParTick(const Id& src, std::string path):Tick(src, path){}
ParTick::~ParTick(){}
const std::string& ParTick::getType(){ return className_; }
int ParTick::__get_barrier() const
{
    int barrier;
    get < int > (id_(), "barrier",barrier);
    return barrier;
}
void ParTick::__set_barrier( int barrier )
{
    set < int > (id_(), "barrier", barrier);
}
bool ParTick::__get_doSync() const
{
    bool doSync;
    get < bool > (id_(), "doSync",doSync);
    return doSync;
}
void ParTick::__set_doSync( bool doSync )
{
    set < bool > (id_(), "doSync", doSync);
}
#endif
