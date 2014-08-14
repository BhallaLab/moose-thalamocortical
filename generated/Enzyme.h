#ifndef _pymoose_Enzyme_h
#define _pymoose_Enzyme_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class Enzyme : public Neutral
    {
      public:
        static const std::string className_;
        Enzyme(std::string className, std::string objectName, Id parentId);
        Enzyme(std::string className, std::string path);
        Enzyme(std::string className, std::string objectName, PyMooseBase& parent);
        Enzyme(Id id);
        Enzyme(std::string path);
        Enzyme(std::string name, Id parentId);
        Enzyme(std::string name, PyMooseBase& parent);
        Enzyme( const Enzyme& src, std::string name, PyMooseBase& parent);
        Enzyme( const Enzyme& src, std::string name, Id& parent);
        Enzyme( const Enzyme& src, std::string path);
        Enzyme( const Id& src, std::string name, Id& parent);
        Enzyme( const Id& src, std::string path);
        ~Enzyme();
        const std::string& getType();
            double __get_k1() const;
            void __set_k1(double k1);
            double __get_k2() const;
            void __set_k2(double k2);
            double __get_k3() const;
            void __set_k3(double k3);
            double __get_Km() const;
            void __set_Km(double Km);
            double __get_kcat() const;
            void __set_kcat(double kcat);
            bool __get_mode() const;
            void __set_mode(bool mode);
            double __get_nInitComplex() const;
            void __set_nInitComplex(double nInitComplex);
            double __get_concInitComplex() const;
            void __set_concInitComplex(double concInitComplex);
            double __get_x() const;
            void __set_x(double x);
            double __get_y() const;
            void __set_y(double y);
            const string&  __get_xtree_textfg_req() const;
            void __set_xtree_textfg_req(string xtree_textfg_req);
            const string&  __get_xtree_fg_req() const;
            void __set_xtree_fg_req(string xtree_fg_req);
    };

}
#endif
