#ifndef _pymoose_UniformRng_h
#define _pymoose_UniformRng_h
#include "RandGenerator.h"
namespace pymoose{
    class PyMooseBase;
    class RandGenerator;
    class UniformRng : public RandGenerator
    {
      public:
        static const std::string className_;
        UniformRng(std::string className, std::string objectName, Id parentId);
        UniformRng(std::string className, std::string path);
        UniformRng(std::string className, std::string objectName, PyMooseBase& parent);
        UniformRng(Id id);
        UniformRng(std::string path);
        UniformRng(std::string name, Id parentId);
        UniformRng(std::string name, PyMooseBase& parent);
        UniformRng( const UniformRng& src, std::string name, PyMooseBase& parent);
        UniformRng( const UniformRng& src, std::string name, Id& parent);
        UniformRng( const UniformRng& src, std::string path);
        UniformRng( const Id& src, std::string name, Id& parent);
        UniformRng( const Id& src, std::string path);
        ~UniformRng();
        const std::string& getType();
            double __get_min() const;
            void __set_min(double min);
            double __get_max() const;
            void __set_max(double max);
    };

}
#endif
