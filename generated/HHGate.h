#ifndef _pymoose_HHGate_h
#define _pymoose_HHGate_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class HHGate : public Neutral
    {
      public:
        static const std::string className_;
        HHGate(std::string className, std::string objectName, Id parentId);
        HHGate(std::string className, std::string path);
        HHGate(std::string className, std::string objectName, PyMooseBase& parent);
        HHGate(Id id);
        HHGate(std::string path);
        HHGate(std::string name, Id parentId);
        HHGate(std::string name, PyMooseBase& parent);
        HHGate( const HHGate& src, std::string name, PyMooseBase& parent);
        HHGate( const HHGate& src, std::string name, Id& parent);
        HHGate( const HHGate& src, std::string path);
        HHGate( const Id& src, std::string name, Id& parent);
        HHGate( const Id& src, std::string path);
        ~HHGate();
        const std::string& getType();
    };

}
#endif
