#ifndef _pymoose_Class_h
#define _pymoose_Class_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class Class : public Neutral
    {
      public:
        static const std::string className_;
        Class(std::string className, std::string objectName, Id parentId);
        Class(std::string className, std::string path);
        Class(std::string className, std::string objectName, PyMooseBase& parent);
        Class(Id id);
        Class(std::string path);
        Class(std::string name, Id parentId);
        Class(std::string name, PyMooseBase& parent);
        Class( const Class& src, std::string name, PyMooseBase& parent);
        Class( const Class& src, std::string name, Id& parent);
        Class( const Class& src, std::string path);
        Class( const Id& src, std::string name, Id& parent);
        Class( const Id& src, std::string path);
        ~Class();
        const std::string& getType();
            const string&  __get_name() const;
            void __set_name(string name);
            vector < string > __get_fields() const;
            const string&  __get_author() const;
            const string&  __get_description() const;
            unsigned int __get_tick() const;
            void __set_tick(unsigned int tick);
            unsigned int __get_stage() const;
            void __set_stage(unsigned int stage);
    };

}
#endif
