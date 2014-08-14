#ifndef _pymoose_STPSynChan_cpp
#define _pymoose_STPSynChan_cpp
#include "STPSynChan.h"
using namespace pymoose;
const std::string STPSynChan::className_ = "STPSynChan";
STPSynChan::STPSynChan(std::string className, std::string objectName, Id parentId):SynChan(className, objectName, parentId){}
STPSynChan::STPSynChan(std::string className, std::string path):SynChan(className, path){}
STPSynChan::STPSynChan(std::string className, std::string objectName, PyMooseBase& parent):SynChan(className, objectName, parent){}
STPSynChan::STPSynChan(Id id):SynChan(id){}
STPSynChan::STPSynChan(std::string path):SynChan(className_, path){}
STPSynChan::STPSynChan(std::string name, Id parentId):SynChan(className_, name, parentId){}
STPSynChan::STPSynChan(std::string name, PyMooseBase& parent):SynChan(className_, name, parent){}
STPSynChan::STPSynChan(const STPSynChan& src, std::string objectName, PyMooseBase& parent):SynChan(src, objectName, parent){}
STPSynChan::STPSynChan(const STPSynChan& src, std::string objectName, Id& parent):SynChan(src, objectName, parent){}
STPSynChan::STPSynChan(const STPSynChan& src, std::string path):SynChan(src, path){}
STPSynChan::STPSynChan(const Id& src, std::string name, Id& parent):SynChan(src, name, parent){}
STPSynChan::STPSynChan(const Id& src, std::string path):SynChan(src, path){}
STPSynChan::~STPSynChan(){}
const std::string& STPSynChan::getType(){ return className_; }
double STPSynChan::__get_tauD1() const
{
    double tauD1;
    get < double > (id_(), "tauD1",tauD1);
    return tauD1;
}
void STPSynChan::__set_tauD1( double tauD1 )
{
    set < double > (id_(), "tauD1", tauD1);
}
double STPSynChan::__get_tauD2() const
{
    double tauD2;
    get < double > (id_(), "tauD2",tauD2);
    return tauD2;
}
void STPSynChan::__set_tauD2( double tauD2 )
{
    set < double > (id_(), "tauD2", tauD2);
}
double STPSynChan::__get_tauF() const
{
    double tauF;
    get < double > (id_(), "tauF",tauF);
    return tauF;
}
void STPSynChan::__set_tauF( double tauF )
{
    set < double > (id_(), "tauF", tauF);
}
double STPSynChan::__get_deltaF() const
{
    double deltaF;
    get < double > (id_(), "deltaF",deltaF);
    return deltaF;
}
void STPSynChan::__set_deltaF( double deltaF )
{
    set < double > (id_(), "deltaF", deltaF);
}
double STPSynChan::__get_d1() const
{
    double d1;
    get < double > (id_(), "d1",d1);
    return d1;
}
void STPSynChan::__set_d1( double d1 )
{
    set < double > (id_(), "d1", d1);
}
double STPSynChan::__get_d2() const
{
    double d2;
    get < double > (id_(), "d2",d2);
    return d2;
}
void STPSynChan::__set_d2( double d2 )
{
    set < double > (id_(), "d2", d2);
}
#endif
