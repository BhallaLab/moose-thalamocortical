#ifndef _pymoose_PoissonRng_h
#define _pymoose_PoissonRng_h
#include "RandGenerator.h"
namespace pymoose{
    class PyMooseBase;
    class RandGenerator;
    class PoissonRng : public RandGenerator
    {
      public:
        static const std::string className_;
        PoissonRng(std::string className, std::string objectName, Id parentId);
        PoissonRng(std::string className, std::string path);
        PoissonRng(std::string className, std::string objectName, PyMooseBase& parent);
        PoissonRng(Id id);
        PoissonRng(std::string path);
        PoissonRng(std::string name, Id parentId);
        PoissonRng(std::string name, PyMooseBase& parent);
        PoissonRng( const PoissonRng& src, std::string name, PyMooseBase& parent);
        PoissonRng( const PoissonRng& src, std::string name, Id& parent);
        PoissonRng( const PoissonRng& src, std::string path);
        PoissonRng( const Id& src, std::string name, Id& parent);
        PoissonRng( const Id& src, std::string path);
        ~PoissonRng();
        const std::string& getType();
            double __get_mean() const;
            void __set_mean(double mean);
    };

}
#endif
