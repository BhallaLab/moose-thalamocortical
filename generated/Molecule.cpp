#ifndef _pymoose_Molecule_cpp
#define _pymoose_Molecule_cpp
#include "Molecule.h"
using namespace pymoose;
const std::string Molecule::className_ = "Molecule";
Molecule::Molecule(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
Molecule::Molecule(std::string className, std::string path):Neutral(className, path){}
Molecule::Molecule(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
Molecule::Molecule(Id id):Neutral(id){}
Molecule::Molecule(std::string path):Neutral(className_, path){}
Molecule::Molecule(std::string name, Id parentId):Neutral(className_, name, parentId){}
Molecule::Molecule(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
Molecule::Molecule(const Molecule& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
Molecule::Molecule(const Molecule& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
Molecule::Molecule(const Molecule& src, std::string path):Neutral(src, path){}
Molecule::Molecule(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
Molecule::Molecule(const Id& src, std::string path):Neutral(src, path){}
Molecule::~Molecule(){}
const std::string& Molecule::getType(){ return className_; }
double Molecule::__get_n() const
{
    double n;
    get < double > (id_(), "n",n);
    return n;
}
void Molecule::__set_n( double n )
{
    set < double > (id_(), "n", n);
}
double Molecule::__get_nInit() const
{
    double nInit;
    get < double > (id_(), "nInit",nInit);
    return nInit;
}
void Molecule::__set_nInit( double nInit )
{
    set < double > (id_(), "nInit", nInit);
}
double Molecule::__get_volumeScale() const
{
    double volumeScale;
    get < double > (id_(), "volumeScale",volumeScale);
    return volumeScale;
}
void Molecule::__set_volumeScale( double volumeScale )
{
    set < double > (id_(), "volumeScale", volumeScale);
}
int Molecule::__get_mode() const
{
    int mode;
    get < int > (id_(), "mode",mode);
    return mode;
}
void Molecule::__set_mode( int mode )
{
    set < int > (id_(), "mode", mode);
}
int Molecule::__get_slave_enable() const
{
    int slave_enable;
    get < int > (id_(), "slave_enable",slave_enable);
    return slave_enable;
}
void Molecule::__set_slave_enable( int slave_enable )
{
    set < int > (id_(), "slave_enable", slave_enable);
}
double Molecule::__get_conc() const
{
    double conc;
    get < double > (id_(), "conc",conc);
    return conc;
}
void Molecule::__set_conc( double conc )
{
    set < double > (id_(), "conc", conc);
}
double Molecule::__get_concInit() const
{
    double concInit;
    get < double > (id_(), "concInit",concInit);
    return concInit;
}
void Molecule::__set_concInit( double concInit )
{
    set < double > (id_(), "concInit", concInit);
}
double Molecule::__get_D() const
{
    double D;
    get < double > (id_(), "D",D);
    return D;
}
void Molecule::__set_D( double D )
{
    set < double > (id_(), "D", D);
}
double Molecule::__get_x() const
{
    double x;
    get < double > (id_(), "x",x);
    return x;
}
void Molecule::__set_x( double x )
{
    set < double > (id_(), "x", x);
}
double Molecule::__get_y() const
{
    double y;
    get < double > (id_(), "y",y);
    return y;
}
void Molecule::__set_y( double y )
{
    set < double > (id_(), "y", y);
}
const string&  Molecule::__get_xtree_textfg_req() const
{
return this->getField("xtree_textfg_req");
}
void Molecule::__set_xtree_textfg_req( string xtree_textfg_req )
{
    set < string > (id_(), "xtree_textfg_req", xtree_textfg_req);
}
const string&  Molecule::__get_xtree_fg_req() const
{
return this->getField("xtree_fg_req");
}
void Molecule::__set_xtree_fg_req( string xtree_fg_req )
{
    set < string > (id_(), "xtree_fg_req", xtree_fg_req);
}
#endif
