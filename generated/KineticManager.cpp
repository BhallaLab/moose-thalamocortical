#ifndef _pymoose_KineticManager_cpp
#define _pymoose_KineticManager_cpp
#include "KineticManager.h"
using namespace pymoose;
const std::string KineticManager::className_ = "KineticManager";
KineticManager::KineticManager(std::string className, std::string objectName, Id parentId):KinCompt(className, objectName, parentId){}
KineticManager::KineticManager(std::string className, std::string path):KinCompt(className, path){}
KineticManager::KineticManager(std::string className, std::string objectName, PyMooseBase& parent):KinCompt(className, objectName, parent){}
KineticManager::KineticManager(Id id):KinCompt(id){}
KineticManager::KineticManager(std::string path):KinCompt(className_, path){}
KineticManager::KineticManager(std::string name, Id parentId):KinCompt(className_, name, parentId){}
KineticManager::KineticManager(std::string name, PyMooseBase& parent):KinCompt(className_, name, parent){}
KineticManager::KineticManager(const KineticManager& src, std::string objectName, PyMooseBase& parent):KinCompt(src, objectName, parent){}
KineticManager::KineticManager(const KineticManager& src, std::string objectName, Id& parent):KinCompt(src, objectName, parent){}
KineticManager::KineticManager(const KineticManager& src, std::string path):KinCompt(src, path){}
KineticManager::KineticManager(const Id& src, std::string name, Id& parent):KinCompt(src, name, parent){}
KineticManager::KineticManager(const Id& src, std::string path):KinCompt(src, path){}
KineticManager::~KineticManager(){}
const std::string& KineticManager::getType(){ return className_; }
bool KineticManager::__get_auto() const
{
    bool auto;
    get < bool > (id_(), "auto",auto);
    return auto;
}
void KineticManager::__set_auto( bool auto )
{
    set < bool > (id_(), "auto", auto);
}
bool KineticManager::__get_stochastic() const
{
    bool stochastic;
    get < bool > (id_(), "stochastic",stochastic);
    return stochastic;
}
void KineticManager::__set_stochastic( bool stochastic )
{
    set < bool > (id_(), "stochastic", stochastic);
}
bool KineticManager::__get_spatial() const
{
    bool spatial;
    get < bool > (id_(), "spatial",spatial);
    return spatial;
}
void KineticManager::__set_spatial( bool spatial )
{
    set < bool > (id_(), "spatial", spatial);
}
const string&  KineticManager::__get_method() const
{
return this->getField("method");
}
void KineticManager::__set_method( string method )
{
    set < string > (id_(), "method", method);
}
bool KineticManager::__get_variableDt() const
{
    bool variableDt;
    get < bool > (id_(), "variableDt",variableDt);
    return variableDt;
}
bool KineticManager::__get_singleParticle() const
{
    bool singleParticle;
    get < bool > (id_(), "singleParticle",singleParticle);
    return singleParticle;
}
bool KineticManager::__get_multiscale() const
{
    bool multiscale;
    get < bool > (id_(), "multiscale",multiscale);
    return multiscale;
}
bool KineticManager::__get_implicit() const
{
    bool implicit;
    get < bool > (id_(), "implicit",implicit);
    return implicit;
}
const string&  KineticManager::__get_description() const
{
return this->getField("description");
}
double KineticManager::__get_recommendedDt() const
{
    double recommendedDt;
    get < double > (id_(), "recommendedDt",recommendedDt);
    return recommendedDt;
}
double KineticManager::__get_loadEstimate() const
{
    double loadEstimate;
    get < double > (id_(), "loadEstimate",loadEstimate);
    return loadEstimate;
}
unsigned int KineticManager::__get_memEstimate() const
{
    unsigned int memEstimate;
    get < unsigned int > (id_(), "memEstimate",memEstimate);
    return memEstimate;
}
double KineticManager::__get_eulerError() const
{
    double eulerError;
    get < double > (id_(), "eulerError",eulerError);
    return eulerError;
}
void KineticManager::__set_eulerError( double eulerError )
{
    set < double > (id_(), "eulerError", eulerError);
}
#endif
