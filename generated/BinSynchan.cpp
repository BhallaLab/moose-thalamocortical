#ifndef _pymoose_BinSynchan_cpp
#define _pymoose_BinSynchan_cpp
#include "BinSynchan.h"
using namespace pymoose;
const std::string BinSynchan::className_ = "BinSynchan";
BinSynchan::BinSynchan(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
BinSynchan::BinSynchan(std::string className, std::string path):Neutral(className, path){}
BinSynchan::BinSynchan(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
BinSynchan::BinSynchan(Id id):Neutral(id){}
BinSynchan::BinSynchan(std::string path):Neutral(className_, path){}
BinSynchan::BinSynchan(std::string name, Id parentId):Neutral(className_, name, parentId){}
BinSynchan::BinSynchan(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
BinSynchan::BinSynchan(const BinSynchan& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
BinSynchan::BinSynchan(const BinSynchan& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
BinSynchan::BinSynchan(const BinSynchan& src, std::string path):Neutral(src, path){}
BinSynchan::BinSynchan(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
BinSynchan::BinSynchan(const Id& src, std::string path):Neutral(src, path){}
BinSynchan::~BinSynchan(){}
const std::string& BinSynchan::getType(){ return className_; }
double BinSynchan::__get_Gbar() const
{
    double Gbar;
    get < double > (id_(), "Gbar",Gbar);
    return Gbar;
}
void BinSynchan::__set_Gbar( double Gbar )
{
    set < double > (id_(), "Gbar", Gbar);
}
double BinSynchan::__get_Ek() const
{
    double Ek;
    get < double > (id_(), "Ek",Ek);
    return Ek;
}
void BinSynchan::__set_Ek( double Ek )
{
    set < double > (id_(), "Ek", Ek);
}
double BinSynchan::__get_tau1() const
{
    double tau1;
    get < double > (id_(), "tau1",tau1);
    return tau1;
}
void BinSynchan::__set_tau1( double tau1 )
{
    set < double > (id_(), "tau1", tau1);
}
double BinSynchan::__get_tau2() const
{
    double tau2;
    get < double > (id_(), "tau2",tau2);
    return tau2;
}
void BinSynchan::__set_tau2( double tau2 )
{
    set < double > (id_(), "tau2", tau2);
}
bool BinSynchan::__get_normalizeWeights() const
{
    bool normalizeWeights;
    get < bool > (id_(), "normalizeWeights",normalizeWeights);
    return normalizeWeights;
}
void BinSynchan::__set_normalizeWeights( bool normalizeWeights )
{
    set < bool > (id_(), "normalizeWeights", normalizeWeights);
}
double BinSynchan::__get_Gk() const
{
    double Gk;
    get < double > (id_(), "Gk",Gk);
    return Gk;
}
void BinSynchan::__set_Gk( double Gk )
{
    set < double > (id_(), "Gk", Gk);
}
double BinSynchan::__get_Ik() const
{
    double Ik;
    get < double > (id_(), "Ik",Ik);
    return Ik;
}
void BinSynchan::__set_Ik( double Ik )
{
    set < double > (id_(), "Ik", Ik);
}
unsigned int BinSynchan::__get_numSynapses() const
{
    unsigned int numSynapses;
    get < unsigned int > (id_(), "numSynapses",numSynapses);
    return numSynapses;
}
#endif
