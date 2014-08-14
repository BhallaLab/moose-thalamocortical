#ifndef _pymoose_ParTick_h
#define _pymoose_ParTick_h
#include "Tick.h"
namespace pymoose{
    class PyMooseBase;
    class Tick;
    class ParTick : public Tick
    {
      public:
        static const std::string className_;
        ParTick(std::string className, std::string objectName, Id parentId);
        ParTick(std::string className, std::string path);
        ParTick(std::string className, std::string objectName, PyMooseBase& parent);
        ParTick(Id id);
        ParTick(std::string path);
        ParTick(std::string name, Id parentId);
        ParTick(std::string name, PyMooseBase& parent);
        ParTick( const ParTick& src, std::string name, PyMooseBase& parent);
        ParTick( const ParTick& src, std::string name, Id& parent);
        ParTick( const ParTick& src, std::string path);
        ParTick( const Id& src, std::string name, Id& parent);
        ParTick( const Id& src, std::string path);
        ~ParTick();
        const std::string& getType();
            int __get_barrier() const;
            void __set_barrier(int barrier);
            bool __get_doSync() const;
            void __set_doSync(bool doSync);
    };

}
#endif
