#ifndef _pymoose_Table_h
#define _pymoose_Table_h
#include "Interpol.h"
namespace pymoose{
    class PyMooseBase;
    class Interpol;
    class Table : public Interpol
    {
      public:
        static const std::string className_;
        Table(std::string className, std::string objectName, Id parentId);
        Table(std::string className, std::string path);
        Table(std::string className, std::string objectName, PyMooseBase& parent);
        Table(Id id);
        Table(std::string path);
        Table(std::string name, Id parentId);
        Table(std::string name, PyMooseBase& parent);
        Table( const Table& src, std::string name, PyMooseBase& parent);
        Table( const Table& src, std::string name, Id& parent);
        Table( const Table& src, std::string path);
        Table( const Id& src, std::string name, Id& parent);
        Table( const Id& src, std::string path);
        ~Table();
        const std::string& getType();
            double __get_input() const;
            void __set_input(double input);
            double __get_output() const;
            void __set_output(double output);
            int __get_step_mode() const;
            void __set_step_mode(int step_mode);
            int __get_stepmode() const;
            void __set_stepmode(int stepmode);
            double __get_stepsize() const;
            void __set_stepsize(double stepsize);
            double __get_threshold() const;
            void __set_threshold(double threshold);
            const string&  __get_fname() const;
            void __set_fname(string fname);
    };

}
#endif
