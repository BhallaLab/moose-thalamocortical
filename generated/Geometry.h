#ifndef _pymoose_Geometry_h
#define _pymoose_Geometry_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class Geometry : public Neutral
    {
      public:
        static const std::string className_;
        Geometry(std::string className, std::string objectName, Id parentId);
        Geometry(std::string className, std::string path);
        Geometry(std::string className, std::string objectName, PyMooseBase& parent);
        Geometry(Id id);
        Geometry(std::string path);
        Geometry(std::string name, Id parentId);
        Geometry(std::string name, PyMooseBase& parent);
        Geometry( const Geometry& src, std::string name, PyMooseBase& parent);
        Geometry( const Geometry& src, std::string name, Id& parent);
        Geometry( const Geometry& src, std::string path);
        Geometry( const Id& src, std::string name, Id& parent);
        Geometry( const Id& src, std::string path);
        ~Geometry();
        const std::string& getType();
            double __get_epsilon() const;
            void __set_epsilon(double epsilon);
            double __get_neighdist() const;
            void __set_neighdist(double neighdist);
    };

}
#endif
