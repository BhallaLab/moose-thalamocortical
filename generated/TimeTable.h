#ifndef _pymoose_TimeTable_h
#define _pymoose_TimeTable_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class TimeTable : public Neutral
    {
      public:
        static const std::string className_;
        TimeTable(std::string className, std::string objectName, Id parentId);
        TimeTable(std::string className, std::string path);
        TimeTable(std::string className, std::string objectName, PyMooseBase& parent);
        TimeTable(Id id);
        TimeTable(std::string path);
        TimeTable(std::string name, Id parentId);
        TimeTable(std::string name, PyMooseBase& parent);
        TimeTable( const TimeTable& src, std::string name, PyMooseBase& parent);
        TimeTable( const TimeTable& src, std::string name, Id& parent);
        TimeTable( const TimeTable& src, std::string path);
        TimeTable( const Id& src, std::string name, Id& parent);
        TimeTable( const Id& src, std::string path);
        ~TimeTable();
        const std::string& getType();
            const string&  __get_filename() const;
            void __set_filename(string filename);
            int __get_method() const;
            void __set_method(int method);
            vector < double > __get_tableVector() const;
            void __set_tableVector(vector < double > tableVector);
            unsigned int __get_tableSize() const;
            void __set_tableSize(unsigned int tableSize);
            double __get_state() const;
    };

}
#endif
