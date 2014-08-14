#ifndef _pymoose_StochSynchan_h
#define _pymoose_StochSynchan_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class StochSynchan : public Neutral
    {
      public:
        static const std::string className_;
        StochSynchan(std::string className, std::string objectName, Id parentId);
        StochSynchan(std::string className, std::string path);
        StochSynchan(std::string className, std::string objectName, PyMooseBase& parent);
        StochSynchan(Id id);
        StochSynchan(std::string path);
        StochSynchan(std::string name, Id parentId);
        StochSynchan(std::string name, PyMooseBase& parent);
        StochSynchan( const StochSynchan& src, std::string name, PyMooseBase& parent);
        StochSynchan( const StochSynchan& src, std::string name, Id& parent);
        StochSynchan( const StochSynchan& src, std::string path);
        StochSynchan( const Id& src, std::string name, Id& parent);
        StochSynchan( const Id& src, std::string path);
        ~StochSynchan();
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
