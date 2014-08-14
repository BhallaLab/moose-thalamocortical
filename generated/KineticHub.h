#ifndef _pymoose_KineticHub_h
#define _pymoose_KineticHub_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class KineticHub : public Neutral
    {
      public:
        static const std::string className_;
        KineticHub(std::string className, std::string objectName, Id parentId);
        KineticHub(std::string className, std::string path);
        KineticHub(std::string className, std::string objectName, PyMooseBase& parent);
        KineticHub(Id id);
        KineticHub(std::string path);
        KineticHub(std::string name, Id parentId);
        KineticHub(std::string name, PyMooseBase& parent);
        KineticHub( const KineticHub& src, std::string name, PyMooseBase& parent);
        KineticHub( const KineticHub& src, std::string name, Id& parent);
        KineticHub( const KineticHub& src, std::string path);
        KineticHub( const Id& src, std::string name, Id& parent);
        KineticHub( const Id& src, std::string path);
        ~KineticHub();
        const std::string& getType();
            unsigned int __get_nVarMol() const;
            unsigned int __get_nReac() const;
            unsigned int __get_nEnz() const;
            bool __get_zombifySeparate() const;
            void __set_zombifySeparate(bool zombifySeparate);
    };

}
#endif
