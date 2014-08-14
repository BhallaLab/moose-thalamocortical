#ifndef _pymoose_GssaStoich_h
#define _pymoose_GssaStoich_h
#include "Stoich.h"
namespace pymoose{
    class PyMooseBase;
    class Stoich;
    class GssaStoich : public Stoich
    {
      public:
        static const std::string className_;
        GssaStoich(std::string className, std::string objectName, Id parentId);
        GssaStoich(std::string className, std::string path);
        GssaStoich(std::string className, std::string objectName, PyMooseBase& parent);
        GssaStoich(Id id);
        GssaStoich(std::string path);
        GssaStoich(std::string name, Id parentId);
        GssaStoich(std::string name, PyMooseBase& parent);
        GssaStoich( const GssaStoich& src, std::string name, PyMooseBase& parent);
        GssaStoich( const GssaStoich& src, std::string name, Id& parent);
        GssaStoich( const GssaStoich& src, std::string path);
        GssaStoich( const Id& src, std::string name, Id& parent);
        GssaStoich( const Id& src, std::string path);
        ~GssaStoich();
        const std::string& getType();
            const string&  __get_method() const;
            void __set_method(string method);
    };

}
#endif
