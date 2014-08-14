#ifndef _pymoose_HHChannel_h
#define _pymoose_HHChannel_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class HHChannel : public Neutral
    {
      public:
        static const std::string className_;
        HHChannel(std::string className, std::string objectName, Id parentId);
        HHChannel(std::string className, std::string path);
        HHChannel(std::string className, std::string objectName, PyMooseBase& parent);
        HHChannel(Id id);
        HHChannel(std::string path);
        HHChannel(std::string name, Id parentId);
        HHChannel(std::string name, PyMooseBase& parent);
        HHChannel( const HHChannel& src, std::string name, PyMooseBase& parent);
        HHChannel( const HHChannel& src, std::string name, Id& parent);
        HHChannel( const HHChannel& src, std::string path);
        HHChannel( const Id& src, std::string name, Id& parent);
        HHChannel( const Id& src, std::string path);
        ~HHChannel();
        const std::string& getType();
            double __get_Gbar() const;
            void __set_Gbar(double Gbar);
            double __get_Ek() const;
            void __set_Ek(double Ek);
            double __get_Xpower() const;
            void __set_Xpower(double Xpower);
            double __get_Ypower() const;
            void __set_Ypower(double Ypower);
            double __get_Zpower() const;
            void __set_Zpower(double Zpower);
            int __get_instant() const;
            void __set_instant(int instant);
            double __get_Gk() const;
            void __set_Gk(double Gk);
            double __get_Ik() const;
            double __get_X() const;
            void __set_X(double X);
            double __get_Y() const;
            void __set_Y(double Y);
            double __get_Z() const;
            void __set_Z(double Z);
            int __get_useConcentration() const;
            void __set_useConcentration(int useConcentration);
    };

}
#endif
