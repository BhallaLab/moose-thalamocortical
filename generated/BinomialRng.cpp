#ifndef _pymoose_BinomialRng_cpp
#define _pymoose_BinomialRng_cpp
#include "BinomialRng.h"
using namespace pymoose;
const std::string BinomialRng::className_ = "BinomialRng";
BinomialRng::BinomialRng(std::string className, std::string objectName, Id parentId):RandGenerator(className, objectName, parentId){}
BinomialRng::BinomialRng(std::string className, std::string path):RandGenerator(className, path){}
BinomialRng::BinomialRng(std::string className, std::string objectName, PyMooseBase& parent):RandGenerator(className, objectName, parent){}
BinomialRng::BinomialRng(Id id):RandGenerator(id){}
BinomialRng::BinomialRng(std::string path):RandGenerator(className_, path){}
BinomialRng::BinomialRng(std::string name, Id parentId):RandGenerator(className_, name, parentId){}
BinomialRng::BinomialRng(std::string name, PyMooseBase& parent):RandGenerator(className_, name, parent){}
BinomialRng::BinomialRng(const BinomialRng& src, std::string objectName, PyMooseBase& parent):RandGenerator(src, objectName, parent){}
BinomialRng::BinomialRng(const BinomialRng& src, std::string objectName, Id& parent):RandGenerator(src, objectName, parent){}
BinomialRng::BinomialRng(const BinomialRng& src, std::string path):RandGenerator(src, path){}
BinomialRng::BinomialRng(const Id& src, std::string name, Id& parent):RandGenerator(src, name, parent){}
BinomialRng::BinomialRng(const Id& src, std::string path):RandGenerator(src, path){}
BinomialRng::~BinomialRng(){}
const std::string& BinomialRng::getType(){ return className_; }
double BinomialRng::__get_n() const
{
    double n;
    get < double > (id_(), "n",n);
    return n;
}
void BinomialRng::__set_n( double n )
{
    set < double > (id_(), "n", n);
}
double BinomialRng::__get_p() const
{
    double p;
    get < double > (id_(), "p",p);
    return p;
}
void BinomialRng::__set_p( double p )
{
    set < double > (id_(), "p", p);
}
#endif
