#ifndef _pymoose_Tick_h
#define _pymoose_Tick_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class Tick : public Neutral
    {
      public:
        static const std::string className_;
        Tick(std::string className, std::string objectName, Id parentId);
        Tick(std::string className, std::string path);
        Tick(std::string className, std::string objectName, PyMooseBase& parent);
        Tick(Id id);
        Tick(std::string path);
        Tick(std::string name, Id parentId);
        Tick(std::string name, PyMooseBase& parent);
        Tick( const Tick& src, std::string name, PyMooseBase& parent);
        Tick( const Tick& src, std::string name, Id& parent);
        Tick( const Tick& src, std::string path);
        Tick( const Id& src, std::string name, Id& parent);
        Tick( const Id& src, std::string path);
        ~Tick();
        const std::string& getType();
            double __get_dt() const;
            void __set_dt(double dt);
            int __get_stage() const;
            void __set_stage(int stage);
            int __get_ordinal() const;
            double __get_nextTime() const;
            const string&  __get_path() const;
            void __set_path(string path);
    };

}
#endif
