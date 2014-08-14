#ifndef _pymoose_StochSynchan_cpp
#define _pymoose_StochSynchan_cpp
#include "StochSynchan.h"
using namespace pymoose;
const std::string StochSynchan::className_ = "StochSynchan";
StochSynchan::StochSynchan(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
StochSynchan::StochSynchan(std::string className, std::string path):Neutral(className, path){}
StochSynchan::StochSynchan(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
StochSynchan::StochSynchan(Id id):Neutral(id){}
StochSynchan::StochSynchan(std::string path):Neutral(className_, path){}
StochSynchan::StochSynchan(std::string name, Id parentId):Neutral(className_, name, parentId){}
StochSynchan::StochSynchan(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
StochSynchan::StochSynchan(const StochSynchan& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
StochSynchan::StochSynchan(const StochSynchan& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
StochSynchan::StochSynchan(const StochSynchan& src, std::string path):Neutral(src, path){}
StochSynchan::StochSynchan(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
StochSynchan::StochSynchan(const Id& src, std::string path):Neutral(src, path){}
StochSynchan::~StochSynchan(){}
const std::string& StochSynchan::getType(){ return className_; }
double StochSynchan::__get_Gbar() const
{
    double Gbar;
    get < double > (id_(), "Gbar",Gbar);
    return Gbar;
}
void StochSynchan::__set_Gbar( double Gbar )
{
    set < double > (id_(), "Gbar", Gbar);
}
double StochSynchan::__get_Ek() const
{
    double Ek;
    get < double > (id_(), "Ek",Ek);
    return Ek;
}
void StochSynchan::__set_Ek( double Ek )
{
    set < double > (id_(), "Ek", Ek);
}
double StochSynchan::__get_tau1() const
{
    double tau1;
    get < double > (id_(), "tau1",tau1);
    return tau1;
}
void StochSynchan::__set_tau1( double tau1 )
{
    set < double > (id_(), "tau1", tau1);
}
double StochSynchan::__get_tau2() const
{
    double tau2;
    get < double > (id_(), "tau2",tau2);
    return tau2;
}
void StochSynchan::__set_tau2( double tau2 )
{
    set < double > (id_(), "tau2", tau2);
}
bool StochSynchan::__get_normalizeWeights() const
{
    bool normalizeWeights;
    get < bool > (id_(), "normalizeWeights",normalizeWeights);
    return normalizeWeights;
}
void StochSynchan::__set_normalizeWeights( bool normalizeWeights )
{
    set < bool > (id_(), "normalizeWeights", normalizeWeights);
}
double StochSynchan::__get_Gk() const
{
    double Gk;
    get < double > (id_(), "Gk",Gk);
    return Gk;
}
void StochSynchan::__set_Gk( double Gk )
{
    set < double > (id_(), "Gk", Gk);
}
double StochSynchan::__get_Ik() const
{
    double Ik;
    get < double > (id_(), "Ik",Ik);
    return Ik;
}
void StochSynchan::__set_Ik( double Ik )
{
    set < double > (id_(), "Ik", Ik);
}
unsigned int StochSynchan::__get_numSynapses() const
{
    unsigned int numSynapses;
    get < unsigned int > (id_(), "numSynapses",numSynapses);
    return numSynapses;
}
#endif
