#ifndef _pymoose_MathFunc_h
#define _pymoose_MathFunc_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class MathFunc : public Neutral
    {
      public:
        static const std::string className_;
        MathFunc(std::string className, std::string objectName, Id parentId);
        MathFunc(std::string className, std::string path);
        MathFunc(std::string className, std::string objectName, PyMooseBase& parent);
        MathFunc(Id id);
        MathFunc(std::string path);
        MathFunc(std::string name, Id parentId);
        MathFunc(std::string name, PyMooseBase& parent);
        MathFunc( const MathFunc& src, std::string name, PyMooseBase& parent);
        MathFunc( const MathFunc& src, std::string name, Id& parent);
        MathFunc( const MathFunc& src, std::string path);
        MathFunc( const Id& src, std::string name, Id& parent);
        MathFunc( const Id& src, std::string path);
        ~MathFunc();
        const std::string& getType();
            const string&  __get_mathML() const;
            void __set_mathML(string mathML);
            const string&  __get_function() const;
            void __set_function(string function);
            double __get_result() const;
            void __set_result(double result);
    };

}
#endif
