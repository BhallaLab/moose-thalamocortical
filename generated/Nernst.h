#ifndef _pymoose_Nernst_h
#define _pymoose_Nernst_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class Nernst : public Neutral
    {
      public:
        static const std::string className_;
        Nernst(std::string className, std::string objectName, Id parentId);
        Nernst(std::string className, std::string path);
        Nernst(std::string className, std::string objectName, PyMooseBase& parent);
        Nernst(Id id);
        Nernst(std::string path);
        Nernst(std::string name, Id parentId);
        Nernst(std::string name, PyMooseBase& parent);
        Nernst( const Nernst& src, std::string name, PyMooseBase& parent);
        Nernst( const Nernst& src, std::string name, Id& parent);
        Nernst( const Nernst& src, std::string path);
        Nernst( const Id& src, std::string name, Id& parent);
        Nernst( const Id& src, std::string path);
        ~Nernst();
        const std::string& getType();
            double __get_E() const;
            double __get_Temperature() const;
            void __set_Temperature(double Temperature);
            int __get_valence() const;
            void __set_valence(int valence);
            double __get_Cin() const;
            void __set_Cin(double Cin);
            double __get_Cout() const;
            void __set_Cout(double Cout);
            double __get_scale() const;
            void __set_scale(double scale);
    };

}
#endif
