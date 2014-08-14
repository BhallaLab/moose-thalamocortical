#ifndef _pymoose_HSolveHub_h
#define _pymoose_HSolveHub_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class HSolveHub : public Neutral
    {
      public:
        static const std::string className_;
        HSolveHub(std::string className, std::string objectName, Id parentId);
        HSolveHub(std::string className, std::string path);
        HSolveHub(std::string className, std::string objectName, PyMooseBase& parent);
        HSolveHub(Id id);
        HSolveHub(std::string path);
        HSolveHub(std::string name, Id parentId);
        HSolveHub(std::string name, PyMooseBase& parent);
        HSolveHub( const HSolveHub& src, std::string name, PyMooseBase& parent);
        HSolveHub( const HSolveHub& src, std::string name, Id& parent);
        HSolveHub( const HSolveHub& src, std::string path);
        HSolveHub( const Id& src, std::string name, Id& parent);
        HSolveHub( const Id& src, std::string path);
        ~HSolveHub();
        const std::string& getType();
    };

}
#endif
