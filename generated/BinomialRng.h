#ifndef _pymoose_BinomialRng_h
#define _pymoose_BinomialRng_h
#include "RandGenerator.h"
namespace pymoose{
    class PyMooseBase;
    class RandGenerator;
    class BinomialRng : public RandGenerator
    {
      public:
        static const std::string className_;
        BinomialRng(std::string className, std::string objectName, Id parentId);
        BinomialRng(std::string className, std::string path);
        BinomialRng(std::string className, std::string objectName, PyMooseBase& parent);
        BinomialRng(Id id);
        BinomialRng(std::string path);
        BinomialRng(std::string name, Id parentId);
        BinomialRng(std::string name, PyMooseBase& parent);
        BinomialRng( const BinomialRng& src, std::string name, PyMooseBase& parent);
        BinomialRng( const BinomialRng& src, std::string name, Id& parent);
        BinomialRng( const BinomialRng& src, std::string path);
        BinomialRng( const Id& src, std::string name, Id& parent);
        BinomialRng( const Id& src, std::string path);
        ~BinomialRng();
        const std::string& getType();
            double __get_n() const;
            void __set_n(double n);
            double __get_p() const;
            void __set_p(double p);
    };

}
#endif
