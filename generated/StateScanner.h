#ifndef _pymoose_StateScanner_h
#define _pymoose_StateScanner_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class StateScanner : public Neutral
    {
      public:
        static const std::string className_;
        StateScanner(std::string className, std::string objectName, Id parentId);
        StateScanner(std::string className, std::string path);
        StateScanner(std::string className, std::string objectName, PyMooseBase& parent);
        StateScanner(Id id);
        StateScanner(std::string path);
        StateScanner(std::string name, Id parentId);
        StateScanner(std::string name, PyMooseBase& parent);
        StateScanner( const StateScanner& src, std::string name, PyMooseBase& parent);
        StateScanner( const StateScanner& src, std::string name, Id& parent);
        StateScanner( const StateScanner& src, std::string path);
        StateScanner( const Id& src, std::string name, Id& parent);
        StateScanner( const Id& src, std::string path);
        ~StateScanner();
        const std::string& getType();
            double __get_settleTime() const;
            void __set_settleTime(double settleTime);
            double __get_solutionSeparation() const;
            void __set_solutionSeparation(double solutionSeparation);
            bool __get_useLog() const;
            void __set_useLog(bool useLog);
            bool __get_useSS() const;
            void __set_useSS(bool useSS);
            bool __get_useRisingDose() const;
            void __set_useRisingDose(bool useRisingDose);
            bool __get_useBufferDose() const;
            void __set_useBufferDose(bool useBufferDose);
            unsigned int __get_classification() const;
    };

}
#endif
