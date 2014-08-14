#ifndef _pymoose_ExponentialRng_h
#define _pymoose_ExponentialRng_h
#include "RandGenerator.h"
namespace pymoose{
    class PyMooseBase;
    class RandGenerator;
    class ExponentialRng : public RandGenerator
    {
      public:
        static const std::string className_;
        ExponentialRng(std::string className, std::string objectName, Id parentId);
        ExponentialRng(std::string className, std::string path);
        ExponentialRng(std::string className, std::string objectName, PyMooseBase& parent);
        ExponentialRng(Id id);
        ExponentialRng(std::string path);
        ExponentialRng(std::string name, Id parentId);
        ExponentialRng(std::string name, PyMooseBase& parent);
        ExponentialRng( const ExponentialRng& src, std::string name, PyMooseBase& parent);
        ExponentialRng( const ExponentialRng& src, std::string name, Id& parent);
        ExponentialRng( const ExponentialRng& src, std::string path);
        ExponentialRng( const Id& src, std::string name, Id& parent);
        ExponentialRng( const Id& src, std::string path);
        ~ExponentialRng();
        const std::string& getType();
            double __get_mean() const;
            void __set_mean(double mean);
            int __get_method() const;
            void __set_method(int method);
    };

}
#endif
