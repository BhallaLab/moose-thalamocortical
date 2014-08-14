#ifndef _pymoose_Nernst_cpp
#define _pymoose_Nernst_cpp
#include "Nernst.h"
using namespace pymoose;
const std::string Nernst::className_ = "Nernst";
Nernst::Nernst(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
Nernst::Nernst(std::string className, std::string path):Neutral(className, path){}
Nernst::Nernst(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
Nernst::Nernst(Id id):Neutral(id){}
Nernst::Nernst(std::string path):Neutral(className_, path){}
Nernst::Nernst(std::string name, Id parentId):Neutral(className_, name, parentId){}
Nernst::Nernst(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
Nernst::Nernst(const Nernst& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
Nernst::Nernst(const Nernst& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
Nernst::Nernst(const Nernst& src, std::string path):Neutral(src, path){}
Nernst::Nernst(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
Nernst::Nernst(const Id& src, std::string path):Neutral(src, path){}
Nernst::~Nernst(){}
const std::string& Nernst::getType(){ return className_; }
double Nernst::__get_E() const
{
    double E;
    get < double > (id_(), "E",E);
    return E;
}
double Nernst::__get_Temperature() const
{
    double Temperature;
    get < double > (id_(), "Temperature",Temperature);
    return Temperature;
}
void Nernst::__set_Temperature( double Temperature )
{
    set < double > (id_(), "Temperature", Temperature);
}
int Nernst::__get_valence() const
{
    int valence;
    get < int > (id_(), "valence",valence);
    return valence;
}
void Nernst::__set_valence( int valence )
{
    set < int > (id_(), "valence", valence);
}
double Nernst::__get_Cin() const
{
    double Cin;
    get < double > (id_(), "Cin",Cin);
    return Cin;
}
void Nernst::__set_Cin( double Cin )
{
    set < double > (id_(), "Cin", Cin);
}
double Nernst::__get_Cout() const
{
    double Cout;
    get < double > (id_(), "Cout",Cout);
    return Cout;
}
void Nernst::__set_Cout( double Cout )
{
    set < double > (id_(), "Cout", Cout);
}
double Nernst::__get_scale() const
{
    double scale;
    get < double > (id_(), "scale",scale);
    return scale;
}
void Nernst::__set_scale( double scale )
{
    set < double > (id_(), "scale", scale);
}
#endif
