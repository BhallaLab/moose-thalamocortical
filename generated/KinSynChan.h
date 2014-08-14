#ifndef _pymoose_KinSynChan_h
#define _pymoose_KinSynChan_h
#include "SynChan.h"
namespace pymoose{
    class PyMooseBase;
    class SynChan;
    class KinSynChan : public SynChan
    {
      public:
        static const std::string className_;
        KinSynChan(std::string className, std::string objectName, Id parentId);
        KinSynChan(std::string className, std::string path);
        KinSynChan(std::string className, std::string objectName, PyMooseBase& parent);
        KinSynChan(Id id);
        KinSynChan(std::string path);
        KinSynChan(std::string name, Id parentId);
        KinSynChan(std::string name, PyMooseBase& parent);
        KinSynChan( const KinSynChan& src, std::string name, PyMooseBase& parent);
        KinSynChan( const KinSynChan& src, std::string name, Id& parent);
        KinSynChan( const KinSynChan& src, std::string path);
        KinSynChan( const Id& src, std::string name, Id& parent);
        KinSynChan( const Id& src, std::string path);
        ~KinSynChan();
        const std::string& getType();
            double __get_rInf() const;
            void __set_rInf(double rInf);
            double __get_tau1() const;
            void __set_tau1(double tau1);
            double __get_pulseWidth() const;
            void __set_pulseWidth(double pulseWidth);
    };

}
#endif
