#ifndef _pymoose_HHChannel2D_h
#define _pymoose_HHChannel2D_h
#include "HHChannel.h"
namespace pymoose{
    class PyMooseBase;
    class HHChannel;
    class HHChannel2D : public HHChannel
    {
      public:
        static const std::string className_;
        HHChannel2D(std::string className, std::string objectName, Id parentId);
        HHChannel2D(std::string className, std::string path);
        HHChannel2D(std::string className, std::string objectName, PyMooseBase& parent);
        HHChannel2D(Id id);
        HHChannel2D(std::string path);
        HHChannel2D(std::string name, Id parentId);
        HHChannel2D(std::string name, PyMooseBase& parent);
        HHChannel2D( const HHChannel2D& src, std::string name, PyMooseBase& parent);
        HHChannel2D( const HHChannel2D& src, std::string name, Id& parent);
        HHChannel2D( const HHChannel2D& src, std::string path);
        HHChannel2D( const Id& src, std::string name, Id& parent);
        HHChannel2D( const Id& src, std::string path);
        ~HHChannel2D();
        const std::string& getType();
            const string&  __get_Xindex() const;
            void __set_Xindex(string Xindex);
            const string&  __get_Yindex() const;
            void __set_Yindex(string Yindex);
            const string&  __get_Zindex() const;
            void __set_Zindex(string Zindex);
    };

}
#endif
