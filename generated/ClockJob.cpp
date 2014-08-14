#ifndef _pymoose_ClockJob_cpp
#define _pymoose_ClockJob_cpp
#include "ClockJob.h"
using namespace pymoose;
const std::string ClockJob::className_ = "ClockJob";
ClockJob::ClockJob(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
ClockJob::ClockJob(std::string className, std::string path):Neutral(className, path){}
ClockJob::ClockJob(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
ClockJob::ClockJob(Id id):Neutral(id){}
ClockJob::ClockJob(std::string path):Neutral(className_, path){}
ClockJob::ClockJob(std::string name, Id parentId):Neutral(className_, name, parentId){}
ClockJob::ClockJob(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
ClockJob::ClockJob(const ClockJob& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
ClockJob::ClockJob(const ClockJob& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
ClockJob::ClockJob(const ClockJob& src, std::string path):Neutral(src, path){}
ClockJob::ClockJob(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
ClockJob::ClockJob(const Id& src, std::string path):Neutral(src, path){}
ClockJob::~ClockJob(){}
const std::string& ClockJob::getType(){ return className_; }
double ClockJob::__get_runTime() const
{
    double runTime;
    get < double > (id_(), "runTime",runTime);
    return runTime;
}
void ClockJob::__set_runTime( double runTime )
{
    set < double > (id_(), "runTime", runTime);
}
double ClockJob::__get_currentTime() const
{
    double currentTime;
    get < double > (id_(), "currentTime",currentTime);
    return currentTime;
}
int ClockJob::__get_nsteps() const
{
    int nsteps;
    get < int > (id_(), "nsteps",nsteps);
    return nsteps;
}
void ClockJob::__set_nsteps( int nsteps )
{
    set < int > (id_(), "nsteps", nsteps);
}
int ClockJob::__get_currentStep() const
{
    int currentStep;
    get < int > (id_(), "currentStep",currentStep);
    return currentStep;
}
int ClockJob::__get_autoschedule() const
{
    int autoschedule;
    get < int > (id_(), "autoschedule",autoschedule);
    return autoschedule;
}
void ClockJob::__set_autoschedule( int autoschedule )
{
    set < int > (id_(), "autoschedule", autoschedule);
}
#endif
