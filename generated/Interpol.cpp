#ifndef _pymoose_Interpol_cpp
#define _pymoose_Interpol_cpp
#include "Interpol.h"
using namespace pymoose;
const std::string Interpol::className_ = "Interpol";
Interpol::Interpol(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
Interpol::Interpol(std::string className, std::string path):Neutral(className, path){}
Interpol::Interpol(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
Interpol::Interpol(Id id):Neutral(id){}
Interpol::Interpol(std::string path):Neutral(className_, path){}
Interpol::Interpol(std::string name, Id parentId):Neutral(className_, name, parentId){}
Interpol::Interpol(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
Interpol::Interpol(const Interpol& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
Interpol::Interpol(const Interpol& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
Interpol::Interpol(const Interpol& src, std::string path):Neutral(src, path){}
Interpol::Interpol(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
Interpol::Interpol(const Id& src, std::string path):Neutral(src, path){}
Interpol::~Interpol(){}
const std::string& Interpol::getType(){ return className_; }
double Interpol::__get_xmin() const
{
    double xmin;
    get < double > (id_(), "xmin",xmin);
    return xmin;
}
void Interpol::__set_xmin( double xmin )
{
    set < double > (id_(), "xmin", xmin);
}
double Interpol::__get_xmax() const
{
    double xmax;
    get < double > (id_(), "xmax",xmax);
    return xmax;
}
void Interpol::__set_xmax( double xmax )
{
    set < double > (id_(), "xmax", xmax);
}
int Interpol::__get_xdivs() const
{
    int xdivs;
    get < int > (id_(), "xdivs",xdivs);
    return xdivs;
}
void Interpol::__set_xdivs( int xdivs )
{
    set < int > (id_(), "xdivs", xdivs);
}
int Interpol::__get_mode() const
{
    int mode;
    get < int > (id_(), "mode",mode);
    return mode;
}
void Interpol::__set_mode( int mode )
{
    set < int > (id_(), "mode", mode);
}
int Interpol::__get_calc_mode() const
{
    int calc_mode;
    get < int > (id_(), "calc_mode",calc_mode);
    return calc_mode;
}
void Interpol::__set_calc_mode( int calc_mode )
{
    set < int > (id_(), "calc_mode", calc_mode);
}
double Interpol::__get_dx() const
{
    double dx;
    get < double > (id_(), "dx",dx);
    return dx;
}
void Interpol::__set_dx( double dx )
{
    set < double > (id_(), "dx", dx);
}
double Interpol::__get_sy() const
{
    double sy;
    get < double > (id_(), "sy",sy);
    return sy;
}
void Interpol::__set_sy( double sy )
{
    set < double > (id_(), "sy", sy);
}
vector < double > Interpol::__get_tableVector() const
{
    vector < double > tableVector;
    get < vector < double > > (id_(), "tableVector",tableVector);
    return tableVector;
}
void Interpol::__set_tableVector( vector < double > tableVector )
{
    set < vector < double > > (id_(), "tableVector", tableVector);
}
#endif
