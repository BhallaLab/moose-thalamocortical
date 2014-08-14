#ifndef _pymoose_SpherePanel_h
#define _pymoose_SpherePanel_h
#include "Panel.h"
namespace pymoose{
    class PyMooseBase;
    class Panel;
    class SpherePanel : public Panel
    {
      public:
        static const std::string className_;
        SpherePanel(std::string className, std::string objectName, Id parentId);
        SpherePanel(std::string className, std::string path);
        SpherePanel(std::string className, std::string objectName, PyMooseBase& parent);
        SpherePanel(Id id);
        SpherePanel(std::string path);
        SpherePanel(std::string name, Id parentId);
        SpherePanel(std::string name, PyMooseBase& parent);
        SpherePanel( const SpherePanel& src, std::string name, PyMooseBase& parent);
        SpherePanel( const SpherePanel& src, std::string name, Id& parent);
        SpherePanel( const SpherePanel& src, std::string path);
        SpherePanel( const Id& src, std::string name, Id& parent);
        SpherePanel( const Id& src, std::string path);
        ~SpherePanel();
        const std::string& getType();
    };

}
#endif
