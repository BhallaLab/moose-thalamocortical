#ifndef _pymoose_TriPanel_h
#define _pymoose_TriPanel_h
#include "Panel.h"
namespace pymoose{
    class PyMooseBase;
    class Panel;
    class TriPanel : public Panel
    {
      public:
        static const std::string className_;
        TriPanel(std::string className, std::string objectName, Id parentId);
        TriPanel(std::string className, std::string path);
        TriPanel(std::string className, std::string objectName, PyMooseBase& parent);
        TriPanel(Id id);
        TriPanel(std::string path);
        TriPanel(std::string name, Id parentId);
        TriPanel(std::string name, PyMooseBase& parent);
        TriPanel( const TriPanel& src, std::string name, PyMooseBase& parent);
        TriPanel( const TriPanel& src, std::string name, Id& parent);
        TriPanel( const TriPanel& src, std::string path);
        TriPanel( const Id& src, std::string name, Id& parent);
        TriPanel( const Id& src, std::string path);
        ~TriPanel();
        const std::string& getType();
    };

}
#endif
