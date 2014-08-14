#ifndef _pymoose_InterSolverFlux_h
#define _pymoose_InterSolverFlux_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class InterSolverFlux : public Neutral
    {
      public:
        static const std::string className_;
        InterSolverFlux(std::string className, std::string objectName, Id parentId);
        InterSolverFlux(std::string className, std::string path);
        InterSolverFlux(std::string className, std::string objectName, PyMooseBase& parent);
        InterSolverFlux(Id id);
        InterSolverFlux(std::string path);
        InterSolverFlux(std::string name, Id parentId);
        InterSolverFlux(std::string name, PyMooseBase& parent);
        InterSolverFlux( const InterSolverFlux& src, std::string name, PyMooseBase& parent);
        InterSolverFlux( const InterSolverFlux& src, std::string name, Id& parent);
        InterSolverFlux( const InterSolverFlux& src, std::string path);
        InterSolverFlux( const Id& src, std::string name, Id& parent);
        InterSolverFlux( const Id& src, std::string path);
        ~InterSolverFlux();
        const std::string& getType();
            const string&  __get_method() const;
            void __set_method(string method);
    };

}
#endif
