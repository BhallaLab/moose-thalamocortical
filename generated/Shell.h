#ifndef _pymoose_Shell_h
#define _pymoose_Shell_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class Shell : public Neutral
    {
      public:
        static const std::string className_;
        Shell(std::string className, std::string objectName, Id parentId);
        Shell(std::string className, std::string path);
        Shell(std::string className, std::string objectName, PyMooseBase& parent);
        Shell(Id id);
        Shell(std::string path);
        Shell(std::string name, Id parentId);
        Shell(std::string name, PyMooseBase& parent);
        Shell( const Shell& src, std::string name, PyMooseBase& parent);
        Shell( const Shell& src, std::string name, Id& parent);
        Shell( const Shell& src, std::string path);
        Shell( const Id& src, std::string name, Id& parent);
        Shell( const Id& src, std::string path);
        ~Shell();
        const std::string& getType();
            none __get_cwe() const;
            void __set_cwe(none cwe);
            int __get_numNodes() const;
            int __get_myNode() const;
    };

}
#endif
