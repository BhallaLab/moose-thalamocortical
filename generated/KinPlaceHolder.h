#ifndef _pymoose_KinPlaceHolder_h
#define _pymoose_KinPlaceHolder_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class KinPlaceHolder : public Neutral
    {
      public:
        static const std::string className_;
        KinPlaceHolder(std::string className, std::string objectName, Id parentId);
        KinPlaceHolder(std::string className, std::string path);
        KinPlaceHolder(std::string className, std::string objectName, PyMooseBase& parent);
        KinPlaceHolder(Id id);
        KinPlaceHolder(std::string path);
        KinPlaceHolder(std::string name, Id parentId);
        KinPlaceHolder(std::string name, PyMooseBase& parent);
        KinPlaceHolder( const KinPlaceHolder& src, std::string name, PyMooseBase& parent);
        KinPlaceHolder( const KinPlaceHolder& src, std::string name, Id& parent);
        KinPlaceHolder( const KinPlaceHolder& src, std::string path);
        KinPlaceHolder( const Id& src, std::string name, Id& parent);
        KinPlaceHolder( const Id& src, std::string path);
        ~KinPlaceHolder();
        const std::string& getType();
            none __get_proto() const;
            double __get_lambda() const;
            const string&  __get_method() const;
            double __get_loadEstimate() const;
            unsigned int __get_memEstimate() const;
            double __get_sigComptLength() const;
            unsigned int __get_numSigCompts() const;
    };

}
#endif
