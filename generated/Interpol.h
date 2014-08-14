#ifndef _pymoose_Interpol_h
#define _pymoose_Interpol_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class Interpol : public Neutral
    {
      public:
        static const std::string className_;
        Interpol(std::string className, std::string objectName, Id parentId);
        Interpol(std::string className, std::string path);
        Interpol(std::string className, std::string objectName, PyMooseBase& parent);
        Interpol(Id id);
        Interpol(std::string path);
        Interpol(std::string name, Id parentId);
        Interpol(std::string name, PyMooseBase& parent);
        Interpol( const Interpol& src, std::string name, PyMooseBase& parent);
        Interpol( const Interpol& src, std::string name, Id& parent);
        Interpol( const Interpol& src, std::string path);
        Interpol( const Id& src, std::string name, Id& parent);
        Interpol( const Id& src, std::string path);
        ~Interpol();
        const std::string& getType();
            double __get_xmin() const;
            void __set_xmin(double xmin);
            double __get_xmax() const;
            void __set_xmax(double xmax);
            int __get_xdivs() const;
            void __set_xdivs(int xdivs);
            int __get_mode() const;
            void __set_mode(int mode);
            int __get_calc_mode() const;
            void __set_calc_mode(int calc_mode);
            double __get_dx() const;
            void __set_dx(double dx);
            double __get_sy() const;
            void __set_sy(double sy);
            vector < double > __get_tableVector() const;
            void __set_tableVector(vector < double > tableVector);
    };

}
#endif
