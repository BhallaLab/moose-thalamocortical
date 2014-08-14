#ifndef _pymoose_RectPanel_h
#define _pymoose_RectPanel_h
#include "Panel.h"
namespace pymoose{
    class PyMooseBase;
    class Panel;
    class RectPanel : public Panel
    {
      public:
        static const std::string className_;
        RectPanel(std::string className, std::string objectName, Id parentId);
        RectPanel(std::string className, std::string path);
        RectPanel(std::string className, std::string objectName, PyMooseBase& parent);
        RectPanel(Id id);
        RectPanel(std::string path);
        RectPanel(std::string name, Id parentId);
        RectPanel(std::string name, PyMooseBase& parent);
        RectPanel( const RectPanel& src, std::string name, PyMooseBase& parent);
        RectPanel( const RectPanel& src, std::string name, Id& parent);
        RectPanel( const RectPanel& src, std::string path);
        RectPanel( const Id& src, std::string name, Id& parent);
        RectPanel( const Id& src, std::string path);
        ~RectPanel();
        const std::string& getType();
    };

}
#endif
