#ifndef _pymoose_RandGenerator_h
#define _pymoose_RandGenerator_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class RandGenerator : public Neutral
    {
      public:
        static const std::string className_;
        RandGenerator(std::string className, std::string objectName, Id parentId);
        RandGenerator(std::string className, std::string path);
        RandGenerator(std::string className, std::string objectName, PyMooseBase& parent);
        RandGenerator(Id id);
        RandGenerator(std::string path);
        RandGenerator(std::string name, Id parentId);
        RandGenerator(std::string name, PyMooseBase& parent);
        RandGenerator( const RandGenerator& src, std::string name, PyMooseBase& parent);
        RandGenerator( const RandGenerator& src, std::string name, Id& parent);
        RandGenerator( const RandGenerator& src, std::string path);
        RandGenerator( const Id& src, std::string name, Id& parent);
        RandGenerator( const Id& src, std::string path);
        ~RandGenerator();
        const std::string& getType();
            double __get_sample() const;
            double __get_mean() const;
            double __get_variance() const;
    };

}
#endif
