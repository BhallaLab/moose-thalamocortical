#ifndef _pymoose_Molecule_h
#define _pymoose_Molecule_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class Molecule : public Neutral
    {
      public:
        static const std::string className_;
        Molecule(std::string className, std::string objectName, Id parentId);
        Molecule(std::string className, std::string path);
        Molecule(std::string className, std::string objectName, PyMooseBase& parent);
        Molecule(Id id);
        Molecule(std::string path);
        Molecule(std::string name, Id parentId);
        Molecule(std::string name, PyMooseBase& parent);
        Molecule( const Molecule& src, std::string name, PyMooseBase& parent);
        Molecule( const Molecule& src, std::string name, Id& parent);
        Molecule( const Molecule& src, std::string path);
        Molecule( const Id& src, std::string name, Id& parent);
        Molecule( const Id& src, std::string path);
        ~Molecule();
        const std::string& getType();
            double __get_n() const;
            void __set_n(double n);
            double __get_nInit() const;
            void __set_nInit(double nInit);
            double __get_volumeScale() const;
            void __set_volumeScale(double volumeScale);
            int __get_mode() const;
            void __set_mode(int mode);
            int __get_slave_enable() const;
            void __set_slave_enable(int slave_enable);
            double __get_conc() const;
            void __set_conc(double conc);
            double __get_concInit() const;
            void __set_concInit(double concInit);
            double __get_D() const;
            void __set_D(double D);
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
