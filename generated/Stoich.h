#ifndef _pymoose_Stoich_h
#define _pymoose_Stoich_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class Stoich : public Neutral
    {
      public:
        static const std::string className_;
        Stoich(std::string className, std::string objectName, Id parentId);
        Stoich(std::string className, std::string path);
        Stoich(std::string className, std::string objectName, PyMooseBase& parent);
        Stoich(Id id);
        Stoich(std::string path);
        Stoich(std::string name, Id parentId);
        Stoich(std::string name, PyMooseBase& parent);
        Stoich( const Stoich& src, std::string name, PyMooseBase& parent);
        Stoich( const Stoich& src, std::string name, Id& parent);
        Stoich( const Stoich& src, std::string path);
        Stoich( const Id& src, std::string name, Id& parent);
        Stoich( const Id& src, std::string path);
        ~Stoich();
        const std::string& getType();
            unsigned int __get_nMols() const;
            unsigned int __get_nVarMols() const;
            unsigned int __get_nSumTot() const;
            unsigned int __get_nBuffered() const;
            unsigned int __get_nReacs() const;
            unsigned int __get_nEnz() const;
            unsigned int __get_nMMenz() const;
            unsigned int __get_nExternalRates() const;
            bool __get_useOneWayReacs() const;
            void __set_useOneWayReacs(bool useOneWayReacs);
            const string&  __get_path() const;
            void __set_path(string path);
            none __get_pathVec() const;
            void __set_pathVec(none pathVec);
            unsigned int __get_rateVectorSize() const;
    };

}
#endif
