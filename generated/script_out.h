#ifndef _pymoose_script_out_h
#define _pymoose_script_out_h
#include "Neutral.h"
namespace pymoose{
    class PyMooseBase;
    class Neutral;
    class script_out : public Neutral
    {
      public:
        static const std::string className_;
        script_out(std::string className, std::string objectName, Id parentId);
        script_out(std::string className, std::string path);
        script_out(std::string className, std::string objectName, PyMooseBase& parent);
        script_out(Id id);
        script_out(std::string path);
        script_out(std::string name, Id parentId);
        script_out(std::string name, PyMooseBase& parent);
        script_out( const script_out& src, std::string name, PyMooseBase& parent);
        script_out( const script_out& src, std::string name, Id& parent);
        script_out( const script_out& src, std::string path);
        script_out( const Id& src, std::string name, Id& parent);
        script_out( const Id& src, std::string path);
        ~script_out();
        const std::string& getType();
            int __get_action() const;
            void __set_action(int action);
            double __get_bar_x() const;
            void __set_bar_x(double bar_x);
            double __get_bar_y() const;
            void __set_bar_y(double bar_y);
            double __get_bar_h() const;
            void __set_bar_h(double bar_h);
            double __get_bar_w() const;
            void __set_bar_w(double bar_w);
            double __get_bar_dx() const;
            void __set_bar_dx(double bar_dx);
            double __get_bar_dy() const;
            void __set_bar_dy(double bar_dy);
    };

}
#endif
