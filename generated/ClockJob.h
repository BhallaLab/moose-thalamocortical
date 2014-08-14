#ifndef _pymoose_ClockJob_h
#define _pymoose_ClockJob_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class ClockJob : public Neutral
    {
      public:
        static const std::string className_;
        ClockJob(std::string className, std::string objectName, Id parentId);
        ClockJob(std::string className, std::string path);
        ClockJob(std::string className, std::string objectName, PyMooseBase& parent);
        ClockJob(Id id);
        ClockJob(std::string path);
        ClockJob(std::string name, Id parentId);
        ClockJob(std::string name, PyMooseBase& parent);
        ClockJob( const ClockJob& src, std::string name, PyMooseBase& parent);
        ClockJob( const ClockJob& src, std::string name, Id& parent);
        ClockJob( const ClockJob& src, std::string path);
        ClockJob( const Id& src, std::string name, Id& parent);
        ClockJob( const Id& src, std::string path);
        ~ClockJob();
        const std::string& getType();
            double __get_runTime() const;
            void __set_runTime(double runTime);
            double __get_currentTime() const;
            int __get_nsteps() const;
            void __set_nsteps(int nsteps);
            int __get_currentStep() const;
            int __get_autoschedule() const;
            void __set_autoschedule(int autoschedule);
    };

}
#endif
