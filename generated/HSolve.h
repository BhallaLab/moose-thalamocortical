#ifndef _pymoose_HSolve_h
#define _pymoose_HSolve_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class HSolve : public Neutral
    {
      public:
        static const std::string className_;
        HSolve(std::string className, std::string objectName, Id parentId);
        HSolve(std::string className, std::string path);
        HSolve(std::string className, std::string objectName, PyMooseBase& parent);
        HSolve(Id id);
        HSolve(std::string path);
        HSolve(std::string name, Id parentId);
        HSolve(std::string name, PyMooseBase& parent);
        HSolve( const HSolve& src, std::string name, PyMooseBase& parent);
        HSolve( const HSolve& src, std::string name, Id& parent);
        HSolve( const HSolve& src, std::string path);
        HSolve( const Id& src, std::string name, Id& parent);
        HSolve( const Id& src, std::string path);
        ~HSolve();
        const std::string& getType();
            const string&  __get_path() const;
            int __get_CaAdvance() const;
            void __set_CaAdvance(int CaAdvance);
            int __get_VDiv() const;
            void __set_VDiv(int VDiv);
            double __get_VMin() const;
            void __set_VMin(double VMin);
            double __get_VMax() const;
            void __set_VMax(double VMax);
            int __get_CaDiv() const;
            void __set_CaDiv(int CaDiv);
            double __get_CaMin() const;
            void __set_CaMin(double CaMin);
            double __get_CaMax() const;
            void __set_CaMax(double CaMax);
    };

}
#endif
