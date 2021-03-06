#ifndef _pymoose_Surface_h
#define _pymoose_Surface_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class Surface : public Neutral
    {
      public:
        static const std::string className_;
        Surface(std::string className, std::string objectName, Id parentId);
        Surface(std::string className, std::string path);
        Surface(std::string className, std::string objectName, PyMooseBase& parent);
        Surface(Id id);
        Surface(std::string path);
        Surface(std::string name, Id parentId);
        Surface(std::string name, PyMooseBase& parent);
        Surface( const Surface& src, std::string name, PyMooseBase& parent);
        Surface( const Surface& src, std::string name, Id& parent);
        Surface( const Surface& src, std::string path);
        Surface( const Id& src, std::string name, Id& parent);
        Surface( const Id& src, std::string path);
        ~Surface();
        const std::string& getType();
            double __get_volume() const;
    };

}
#endif
