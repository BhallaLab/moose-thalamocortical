#ifndef _pymoose_GenesisParser_h
#define _pymoose_GenesisParser_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class GenesisParser : public Neutral
    {
      public:
        static const std::string className_;
        GenesisParser(std::string className, std::string objectName, Id parentId);
        GenesisParser(std::string className, std::string path);
        GenesisParser(std::string className, std::string objectName, PyMooseBase& parent);
        GenesisParser(Id id);
        GenesisParser(std::string path);
        GenesisParser(std::string name, Id parentId);
        GenesisParser(std::string name, PyMooseBase& parent);
        GenesisParser( const GenesisParser& src, std::string name, PyMooseBase& parent);
        GenesisParser( const GenesisParser& src, std::string name, Id& parent);
        GenesisParser( const GenesisParser& src, std::string path);
        GenesisParser( const Id& src, std::string name, Id& parent);
        GenesisParser( const Id& src, std::string path);
        ~GenesisParser();
        const std::string& getType();
    };

}
#endif
