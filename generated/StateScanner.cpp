#ifndef _pymoose_StateScanner_cpp
#define _pymoose_StateScanner_cpp
#include "StateScanner.h"
using namespace pymoose;
const std::string StateScanner::className_ = "StateScanner";
StateScanner::StateScanner(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
StateScanner::StateScanner(std::string className, std::string path):Neutral(className, path){}
StateScanner::StateScanner(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
StateScanner::StateScanner(Id id):Neutral(id){}
StateScanner::StateScanner(std::string path):Neutral(className_, path){}
StateScanner::StateScanner(std::string name, Id parentId):Neutral(className_, name, parentId){}
StateScanner::StateScanner(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
StateScanner::StateScanner(const StateScanner& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
StateScanner::StateScanner(const StateScanner& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
StateScanner::StateScanner(const StateScanner& src, std::string path):Neutral(src, path){}
StateScanner::StateScanner(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
StateScanner::StateScanner(const Id& src, std::string path):Neutral(src, path){}
StateScanner::~StateScanner(){}
const std::string& StateScanner::getType(){ return className_; }
double StateScanner::__get_settleTime() const
{
    double settleTime;
    get < double > (id_(), "settleTime",settleTime);
    return settleTime;
}
void StateScanner::__set_settleTime( double settleTime )
{
    set < double > (id_(), "settleTime", settleTime);
}
double StateScanner::__get_solutionSeparation() const
{
    double solutionSeparation;
    get < double > (id_(), "solutionSeparation",solutionSeparation);
    return solutionSeparation;
}
void StateScanner::__set_solutionSeparation( double solutionSeparation )
{
    set < double > (id_(), "solutionSeparation", solutionSeparation);
}
bool StateScanner::__get_useLog() const
{
    bool useLog;
    get < bool > (id_(), "useLog",useLog);
    return useLog;
}
void StateScanner::__set_useLog( bool useLog )
{
    set < bool > (id_(), "useLog", useLog);
}
bool StateScanner::__get_useSS() const
{
    bool useSS;
    get < bool > (id_(), "useSS",useSS);
    return useSS;
}
void StateScanner::__set_useSS( bool useSS )
{
    set < bool > (id_(), "useSS", useSS);
}
bool StateScanner::__get_useRisingDose() const
{
    bool useRisingDose;
    get < bool > (id_(), "useRisingDose",useRisingDose);
    return useRisingDose;
}
void StateScanner::__set_useRisingDose( bool useRisingDose )
{
    set < bool > (id_(), "useRisingDose", useRisingDose);
}
bool StateScanner::__get_useBufferDose() const
{
    bool useBufferDose;
    get < bool > (id_(), "useBufferDose",useBufferDose);
    return useBufferDose;
}
void StateScanner::__set_useBufferDose( bool useBufferDose )
{
    set < bool > (id_(), "useBufferDose", useBufferDose);
}
unsigned int StateScanner::__get_classification() const
{
    unsigned int classification;
    get < unsigned int > (id_(), "classification",classification);
    return classification;
}
#endif
