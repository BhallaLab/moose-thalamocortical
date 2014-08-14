#ifndef _pymoose_BinSynchan_h
#define _pymoose_BinSynchan_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class BinSynchan : public Neutral
    {
      public:
        static const std::string className_;
        BinSynchan(std::string className, std::string objectName, Id parentId);
        BinSynchan(std::string className, std::string path);
        BinSynchan(std::string className, std::string objectName, PyMooseBase& parent);
        BinSynchan(Id id);
        BinSynchan(std::string path);
        BinSynchan(std::string name, Id parentId);
        BinSynchan(std::string name, PyMooseBase& parent);
        BinSynchan( const BinSynchan& src, std::string name, PyMooseBase& parent);
        BinSynchan( const BinSynchan& src, std::string name, Id& parent);
        BinSynchan( const BinSynchan& src, std::string path);
        BinSynchan( const Id& src, std::string name, Id& parent);
        BinSynchan( const Id& src, std::string path);
        ~BinSynchan();
        const std::string& getType();
            double __get_Gbar() const;
            void __set_Gbar(double Gbar);
            double __get_Ek() const;
            void __set_Ek(double Ek);
            double __get_tau1() const;
            void __set_tau1(double tau1);
            double __get_tau2() const;
            void __set_tau2(double tau2);
            bool __get_normalizeWeights() const;
            void __set_normalizeWeights(bool normalizeWeights);
            double __get_Gk() const;
            void __set_Gk(double Gk);
            double __get_Ik() const;
            void __set_Ik(double Ik);
            unsigned int __get_numSynapses() const;
    };

}
#endif
