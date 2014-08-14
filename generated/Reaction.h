#ifndef _pymoose_Reaction_h
#define _pymoose_Reaction_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class Reaction : public Neutral
    {
      public:
        static const std::string className_;
        Reaction(std::string className, std::string objectName, Id parentId);
        Reaction(std::string className, std::string path);
        Reaction(std::string className, std::string objectName, PyMooseBase& parent);
        Reaction(Id id);
        Reaction(std::string path);
        Reaction(std::string name, Id parentId);
        Reaction(std::string name, PyMooseBase& parent);
        Reaction( const Reaction& src, std::string name, PyMooseBase& parent);
        Reaction( const Reaction& src, std::string name, Id& parent);
        Reaction( const Reaction& src, std::string path);
        Reaction( const Id& src, std::string name, Id& parent);
        Reaction( const Id& src, std::string path);
        ~Reaction();
        const std::string& getType();
            double __get_kf() const;
            void __set_kf(double kf);
            double __get_kb() const;
            void __set_kb(double kb);
            double __get_Kf() const;
            void __set_Kf(double Kf);
            double __get_Kb() const;
            void __set_Kb(double Kb);
            double __get_x() const;
            void __set_x(double x);
            double __get_y() const;
            void __set_y(double y);
            const string&  __get_xtree_textfg_req() const;
            void __set_xtree_textfg_req(string xtree_textfg_req);
            const string&  __get_xtree_fg_req() const;
            void __set_xtree_fg_req(string xtree_fg_req);
    };

}
#endif
