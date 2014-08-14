#ifndef _pymoose_SynChan_cpp
#define _pymoose_SynChan_cpp
#include "SynChan.h"
using namespace pymoose;
const std::string SynChan::className_ = "SynChan";
SynChan::SynChan(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
SynChan::SynChan(std::string className, std::string path):Neutral(className, path){}
SynChan::SynChan(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
SynChan::SynChan(Id id):Neutral(id){}
SynChan::SynChan(std::string path):Neutral(className_, path){}
SynChan::SynChan(std::string name, Id parentId):Neutral(className_, name, parentId){}
SynChan::SynChan(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
SynChan::SynChan(const SynChan& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
SynChan::SynChan(const SynChan& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
SynChan::SynChan(const SynChan& src, std::string path):Neutral(src, path){}
SynChan::SynChan(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
SynChan::SynChan(const Id& src, std::string path):Neutral(src, path){}
SynChan::~SynChan(){}
const std::string& SynChan::getType(){ return className_; }
double SynChan::__get_Gbar() const
{
    double Gbar;
    get < double > (id_(), "Gbar",Gbar);
    return Gbar;
}
void SynChan::__set_Gbar( double Gbar )
{
    set < double > (id_(), "Gbar", Gbar);
}
double SynChan::__get_Ek() const
{
    double Ek;
    get < double > (id_(), "Ek",Ek);
    return Ek;
}
void SynChan::__set_Ek( double Ek )
{
    set < double > (id_(), "Ek", Ek);
}
double SynChan::__get_tau1() const
{
    double tau1;
    get < double > (id_(), "tau1",tau1);
    return tau1;
}
void SynChan::__set_tau1( double tau1 )
{
    set < double > (id_(), "tau1", tau1);
}
double SynChan::__get_tau2() const
{
    double tau2;
    get < double > (id_(), "tau2",tau2);
    return tau2;
}
void SynChan::__set_tau2( double tau2 )
{
    set < double > (id_(), "tau2", tau2);
}
bool SynChan::__get_normalizeWeights() const
{
    bool normalizeWeights;
    get < bool > (id_(), "normalizeWeights",normalizeWeights);
    return normalizeWeights;
}
void SynChan::__set_normalizeWeights( bool normalizeWeights )
{
    set < bool > (id_(), "normalizeWeights", normalizeWeights);
}
double SynChan::__get_Gk() const
{
    double Gk;
    get < double > (id_(), "Gk",Gk);
    return Gk;
}
void SynChan::__set_Gk( double Gk )
{
    set < double > (id_(), "Gk", Gk);
}
double SynChan::__get_Ik() const
{
    double Ik;
    get < double > (id_(), "Ik",Ik);
    return Ik;
}
unsigned int SynChan::__get_numSynapses() const
{
    unsigned int numSynapses;
    get < unsigned int > (id_(), "numSynapses",numSynapses);
    return numSynapses;
}
#endif
