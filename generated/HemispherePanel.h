#ifndef _pymoose_HemispherePanel_h
#define _pymoose_HemispherePanel_h
#include "Panel.h"
namespace pymoose{
    class PyMooseBase;
    class Panel;
    class HemispherePanel : public Panel
    {
      public:
        static const std::string className_;
        HemispherePanel(std::string className, std::string objectName, Id parentId);
        HemispherePanel(std::string className, std::string path);
        HemispherePanel(std::string className, std::string objectName, PyMooseBase& parent);
        HemispherePanel(Id id);
        HemispherePanel(std::string path);
        HemispherePanel(std::string name, Id parentId);
        HemispherePanel(std::string name, PyMooseBase& parent);
        HemispherePanel( const HemispherePanel& src, std::string name, PyMooseBase& parent);
        HemispherePanel( const HemispherePanel& src, std::string name, Id& parent);
        HemispherePanel( const HemispherePanel& src, std::string path);
        HemispherePanel( const Id& src, std::string name, Id& parent);
        HemispherePanel( const Id& src, std::string path);
        ~HemispherePanel();
        const std::string& getType();
    };

}
#endif
