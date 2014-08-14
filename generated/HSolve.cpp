#ifndef _pymoose_HSolve_cpp
#define _pymoose_HSolve_cpp
#include "HSolve.h"
using namespace pymoose;
const std::string HSolve::className_ = "HSolve";
HSolve::HSolve(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
HSolve::HSolve(std::string className, std::string path):Neutral(className, path){}
HSolve::HSolve(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
HSolve::HSolve(Id id):Neutral(id){}
HSolve::HSolve(std::string path):Neutral(className_, path){}
HSolve::HSolve(std::string name, Id parentId):Neutral(className_, name, parentId){}
HSolve::HSolve(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
HSolve::HSolve(const HSolve& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
HSolve::HSolve(const HSolve& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
HSolve::HSolve(const HSolve& src, std::string path):Neutral(src, path){}
HSolve::HSolve(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
HSolve::HSolve(const Id& src, std::string path):Neutral(src, path){}
HSolve::~HSolve(){}
const std::string& HSolve::getType(){ return className_; }
const string&  HSolve::__get_path() const
{
return this->getField("path");
}
int HSolve::__get_CaAdvance() const
{
    int CaAdvance;
    get < int > (id_(), "CaAdvance",CaAdvance);
    return CaAdvance;
}
void HSolve::__set_CaAdvance( int CaAdvance )
{
    set < int > (id_(), "CaAdvance", CaAdvance);
}
int HSolve::__get_VDiv() const
{
    int VDiv;
    get < int > (id_(), "VDiv",VDiv);
    return VDiv;
}
void HSolve::__set_VDiv( int VDiv )
{
    set < int > (id_(), "VDiv", VDiv);
}
double HSolve::__get_VMin() const
{
    double VMin;
    get < double > (id_(), "VMin",VMin);
    return VMin;
}
void HSolve::__set_VMin( double VMin )
{
    set < double > (id_(), "VMin", VMin);
}
double HSolve::__get_VMax() const
{
    double VMax;
    get < double > (id_(), "VMax",VMax);
    return VMax;
}
void HSolve::__set_VMax( double VMax )
{
    set < double > (id_(), "VMax", VMax);
}
int HSolve::__get_CaDiv() const
{
    int CaDiv;
    get < int > (id_(), "CaDiv",CaDiv);
    return CaDiv;
}
void HSolve::__set_CaDiv( int CaDiv )
{
    set < int > (id_(), "CaDiv", CaDiv);
}
double HSolve::__get_CaMin() const
{
    double CaMin;
    get < double > (id_(), "CaMin",CaMin);
    return CaMin;
}
void HSolve::__set_CaMin( double CaMin )
{
    set < double > (id_(), "CaMin", CaMin);
}
double HSolve::__get_CaMax() const
{
    double CaMax;
    get < double > (id_(), "CaMax",CaMax);
    return CaMax;
}
void HSolve::__set_CaMax( double CaMax )
{
    set < double > (id_(), "CaMax", CaMax);
}
#endif
