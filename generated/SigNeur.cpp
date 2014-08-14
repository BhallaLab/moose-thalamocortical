#ifndef _pymoose_SigNeur_cpp
#define _pymoose_SigNeur_cpp
#include "SigNeur.h"
using namespace pymoose;
const std::string SigNeur::className_ = "SigNeur";
SigNeur::SigNeur(std::string className, std::string objectName, Id parentId):Neutral(className, objectName, parentId){}
SigNeur::SigNeur(std::string className, std::string path):Neutral(className, path){}
SigNeur::SigNeur(std::string className, std::string objectName, PyMooseBase& parent):Neutral(className, objectName, parent){}
SigNeur::SigNeur(Id id):Neutral(id){}
SigNeur::SigNeur(std::string path):Neutral(className_, path){}
SigNeur::SigNeur(std::string name, Id parentId):Neutral(className_, name, parentId){}
SigNeur::SigNeur(std::string name, PyMooseBase& parent):Neutral(className_, name, parent){}
SigNeur::SigNeur(const SigNeur& src, std::string objectName, PyMooseBase& parent):Neutral(src, objectName, parent){}
SigNeur::SigNeur(const SigNeur& src, std::string objectName, Id& parent):Neutral(src, objectName, parent){}
SigNeur::SigNeur(const SigNeur& src, std::string path):Neutral(src, path){}
SigNeur::SigNeur(const Id& src, std::string name, Id& parent):Neutral(src, name, parent){}
SigNeur::SigNeur(const Id& src, std::string path):Neutral(src, path){}
SigNeur::~SigNeur(){}
const std::string& SigNeur::getType(){ return className_; }
none SigNeur::__get_cellProto() const
{
    none cellProto;
    get < none > (id_(), "cellProto",cellProto);
    return cellProto;
}
void SigNeur::__set_cellProto( none cellProto )
{
    set < none > (id_(), "cellProto", cellProto);
}
none SigNeur::__get_spineProto() const
{
    none spineProto;
    get < none > (id_(), "spineProto",spineProto);
    return spineProto;
}
void SigNeur::__set_spineProto( none spineProto )
{
    set < none > (id_(), "spineProto", spineProto);
}
none SigNeur::__get_dendProto() const
{
    none dendProto;
    get < none > (id_(), "dendProto",dendProto);
    return dendProto;
}
void SigNeur::__set_dendProto( none dendProto )
{
    set < none > (id_(), "dendProto", dendProto);
}
none SigNeur::__get_somaProto() const
{
    none somaProto;
    get < none > (id_(), "somaProto",somaProto);
    return somaProto;
}
void SigNeur::__set_somaProto( none somaProto )
{
    set < none > (id_(), "somaProto", somaProto);
}
none SigNeur::__get_cell() const
{
    none cell;
    get < none > (id_(), "cell",cell);
    return cell;
}
none SigNeur::__get_spine() const
{
    none spine;
    get < none > (id_(), "spine",spine);
    return spine;
}
none SigNeur::__get_dend() const
{
    none dend;
    get < none > (id_(), "dend",dend);
    return dend;
}
none SigNeur::__get_soma() const
{
    none soma;
    get < none > (id_(), "soma",soma);
    return soma;
}
const string&  SigNeur::__get_cellMethod() const
{
return this->getField("cellMethod");
}
void SigNeur::__set_cellMethod( string cellMethod )
{
    set < string > (id_(), "cellMethod", cellMethod);
}
const string&  SigNeur::__get_spineMethod() const
{
return this->getField("spineMethod");
}
void SigNeur::__set_spineMethod( string spineMethod )
{
    set < string > (id_(), "spineMethod", spineMethod);
}
const string&  SigNeur::__get_dendMethod() const
{
return this->getField("dendMethod");
}
void SigNeur::__set_dendMethod( string dendMethod )
{
    set < string > (id_(), "dendMethod", dendMethod);
}
const string&  SigNeur::__get_somaMethod() const
{
return this->getField("somaMethod");
}
void SigNeur::__set_somaMethod( string somaMethod )
{
    set < string > (id_(), "somaMethod", somaMethod);
}
double SigNeur::__get_sigDt() const
{
    double sigDt;
    get < double > (id_(), "sigDt",sigDt);
    return sigDt;
}
void SigNeur::__set_sigDt( double sigDt )
{
    set < double > (id_(), "sigDt", sigDt);
}
double SigNeur::__get_cellDt() const
{
    double cellDt;
    get < double > (id_(), "cellDt",cellDt);
    return cellDt;
}
void SigNeur::__set_cellDt( double cellDt )
{
    set < double > (id_(), "cellDt", cellDt);
}
double SigNeur::__get_Dscale() const
{
    double Dscale;
    get < double > (id_(), "Dscale",Dscale);
    return Dscale;
}
void SigNeur::__set_Dscale( double Dscale )
{
    set < double > (id_(), "Dscale", Dscale);
}
double SigNeur::__get_lambda() const
{
    double lambda;
    get < double > (id_(), "lambda",lambda);
    return lambda;
}
void SigNeur::__set_lambda( double lambda )
{
    set < double > (id_(), "lambda", lambda);
}
int SigNeur::__get_parallelMode() const
{
    int parallelMode;
    get < int > (id_(), "parallelMode",parallelMode);
    return parallelMode;
}
void SigNeur::__set_parallelMode( int parallelMode )
{
    set < int > (id_(), "parallelMode", parallelMode);
}
double SigNeur::__get_updateStep() const
{
    double updateStep;
    get < double > (id_(), "updateStep",updateStep);
    return updateStep;
}
void SigNeur::__set_updateStep( double updateStep )
{
    set < double > (id_(), "updateStep", updateStep);
}
double SigNeur::__get_calciumScale() const
{
    double calciumScale;
    get < double > (id_(), "calciumScale",calciumScale);
    return calciumScale;
}
void SigNeur::__set_calciumScale( double calciumScale )
{
    set < double > (id_(), "calciumScale", calciumScale);
}
const string&  SigNeur::__get_dendInclude() const
{
return this->getField("dendInclude");
}
void SigNeur::__set_dendInclude( string dendInclude )
{
    set < string > (id_(), "dendInclude", dendInclude);
}
const string&  SigNeur::__get_dendExclude() const
{
return this->getField("dendExclude");
}
void SigNeur::__set_dendExclude( string dendExclude )
{
    set < string > (id_(), "dendExclude", dendExclude);
}
#endif
