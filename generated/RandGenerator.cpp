#ifndef _pymoose_RandGenerator_cpp
#define _pymoose_RandGenerator_cpp
#include "RandGenerator.h"
using namespace pymoose;
const std::string RandGenerator::className_ = "RandGenerator";
RandGenerator::RandGenerator(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
RandGenerator::RandGenerator(std::string className, std::string path):Neutral(className, path){}
RandGenerator::RandGenerator(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
RandGenerator::RandGenerator(Id id):Neutral(id){}
RandGenerator::RandGenerator(std::string path):Neutral(className_, path){}
RandGenerator::RandGenerator(std::string name, Id parentId):Neutral(className_, name, parentId){}
RandGenerator::RandGenerator(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
RandGenerator::RandGenerator(const RandGenerator& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
RandGenerator::RandGenerator(const RandGenerator& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
RandGenerator::RandGenerator(const RandGenerator& src, std::string path):Neutral(src, path){}
RandGenerator::RandGenerator(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
RandGenerator::RandGenerator(const Id& src, std::string path):Neutral(src, path){}
RandGenerator::~RandGenerator(){}
const std::string& RandGenerator::getType(){ return className_; }
double RandGenerator::__get_sample() const
{
    double sample;
    get < double > (id_(), "sample",sample);
    return sample;
}
double RandGenerator::__get_mean() const
{
    double mean;
    get < double > (id_(), "mean",mean);
    return mean;
}
double RandGenerator::__get_variance() const
{
    double variance;
    get < double > (id_(), "variance",variance);
    return variance;
}
#endif
