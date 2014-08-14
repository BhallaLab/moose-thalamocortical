#ifndef _pymoose_Cell_h
#define _pymoose_Cell_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class Cell : public Neutral
    {
      public:
        static const std::string className_;
        Cell(std::string className, std::string objectName, Id parentId);
        Cell(std::string className, std::string path);
        Cell(std::string className, std::string objectName, PyMooseBase& parent);
        Cell(Id id);
        Cell(std::string path);
        Cell(std::string name, Id parentId);
        Cell(std::string name, PyMooseBase& parent);
        Cell( const Cell& src, std::string name, PyMooseBase& parent);
        Cell( const Cell& src, std::string name, Id& parent);
        Cell( const Cell& src, std::string path);
        Cell( const Id& src, std::string name, Id& parent);
        Cell( const Id& src, std::string path);
        ~Cell();
        const std::string& getType();
            const string&  __get_method() const;
            void __set_method(string method);
            bool __get_variableDt() const;
            bool __get_implicit() const;
            const string&  __get_description() const;
    };

}
#endif
