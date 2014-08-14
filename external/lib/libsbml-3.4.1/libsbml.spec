# libsbml.spec.  Generated from libsbml.spec.in by configure.
#
# Filename    : libsbml.spec.in
# Description : Template specification for RPM packages
# Author(s)   : SBML Team <sbml-team@caltech.edu>
# Created     : 2009-05-26
#
# $Id: libsbml.spec.in 12786 2011-02-08 19:05:42Z luciansmith $
# $HeadURL: http://sbml.svn.sourceforge.net/svnroot/sbml/trunk/libsbml/libsbml.spec.in $
#
# <!--------------------------------------------------------------------------
# This file is part of libSBML.  Please visit http://sbml.org for more
# information about SBML, and the latest version of libSBML.
#
# Copyright (C) 2009-2011 jointly by the following organizations: 
#     1. California Institute of Technology, Pasadena, CA, USA
#     2. EMBL European Bioinformatics Institute (EBML-EBI), Hinxton, UK
#  
# Copyright (C) 2006-2008 by the California Institute of Technology,
#     Pasadena, CA, USA 
#  
# Copyright (C) 2002-2005 jointly by the following organizations: 
#     1. California Institute of Technology, Pasadena, CA, USA
#     2. Japan Science and Technology Agency, Japan
# 
# This library is free software; you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation.  A copy of the license agreement is provided
# in the file named "LICENSE.txt" included with this software distribution
# and also available online as http://sbml.org/software/libsbml/license.html
# ---------------------------------------------------------------------- -->*/
#
# (NOTES)
#
# First, libsbml.spec needs to be generated by running the "configure" script.
# By default, libSBML tries to use the libxml2 XML parser library.  To use
# Expat or Xerces instead of libxml2, run the configure script as follows:
#
#   ./configure --with-expat   # for Expat
#   ./configure --with-xerces  # for Xerces
#
# To use a copy of Doxygen and/or SWIG that are not located on your shell's
# command search $path, add --with-doxygen=/path/to/doxygen/parent/dir and/or
# --with-swig=/path/to/swig/parent/dir when running the configure script.
#
# To create libSBML RPM packages, run the "rpmbuild" command as follows (where
# libsbml-4.3.1-src.zip needs to be located in SOURCES directory of
# your RPM working directory):
#
#   rpmbuild -ba libsbml.spec
#
# To create RPM packages of each language bindings, add the following options
# when running the rpmbuild command:
# 
#   --with csharp #  (C#)     
#   --with java   #  (Java)   
#   --with octave #  (Octave) 
#   --with perl   #  (Perl)   
#   --with python #  (Python) 
#   --with ruby   #  (Ruby)   
#
# For example, the following command will create a package with all the
# libSBML language interfaces enabled:
#
#  % rpmbuild -ba libsbml.spec --with java --with csharp --with python \
#             --with ruby --with perl --with octave 
#
# Note: libSBML also has a MATLAB interface, but this RPM package system
# doesn't build it yet because of how complicated it is to try to match
# up MATLAB versions.
#

%define xmlparser        libxml2
%define libxml2     1
%define name             libsbml-%{xmlparser}
%define major_version    4
%define minor_version    3
%define revision_version 1
%define version          %{major_version}.%{minor_version}.%{revision_version}
%define package_version  4.3.1
%define release          1
%if 0
%define release          0.
%endif
%define docdir           doc/libsbml-%{package_version}

Summary: libSBML: An API Library for SBML
Name: %{name}
Version: %{version}
Release: %{release}
Group: Development/Libraries
Source: http://downloads.sourceforge.net/sbml/libsbml-%{package_version}-src.tar.gz
URL: http://sbml.org/Software/libSBML
Packager: LibSBML Team <libsbml-team@caltech.edu>
License: LGPL
Prefix: /usr
BuildRoot: %{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)

BuildRequires: check-devel >= 0.9.2
BuildRequires: zlib-devel, bzip2-devel
%{?expat:BuildRequires: expat-devel >= 1.95.8}
%{?libxml2:BuildRequires: libxml2-devel >= 2.6.16}
%{?xerces:BuildRequires: xerces-c-devel }
%{?_with_java:BuildRequires: jdk >= 1.5.0}
%{?_with_python:BuildRequires: python-devel}
%{?_with_ruby:BuildRequires: ruby-devel}
%{?_with_perl:BuildRequires: perl}
%{?_with_csharp:BuildRequires: mono-core}
%{?_with_octave:BuildRequires: octave-devel >= 2.9.7}

Requires: zlib
Requires: bzip2
%{?expat:Requires: expat >= 1.95.8}
%{?libxml2:Requires: libxml2 >= 2.6.16}
%{?xerces:Requires: xerces-c }

%{!?expat:Conflicts: libsbml-expat}
%{!?libxml2:Conflicts: libsbml-libxml2}
%{!?xerces:Conflicts: libsbml-xerces}


%description
LibSBML is an open-source programming library designed to help you 
read, write, manipulate, translate, and validate SBML files and data 
streams.  It is not an application itself (though it does come with 
example programs), but rather a library you can embed in your own 
applications.
LibSBML %{version} understands SBML Level 3 Version 1 and before, 
as well as the draft SBML Level 2 Layout proposal by Gauges, Rost, 
Sahle and Wegner.  It's written in ISO C and C++ but can also be 
used from C#, Java, MATLAB, Octave, Perl, Python, and Ruby.

###########################################################################

%package devel
Summary: Libraries and header files to develop applications using libSBML
Group: Development/Libraries
Requires: %{name} = %{version}-%{release}
%{!?expat:Conflicts: libsbml-expat-devel}
%{!?libxml2:Conflicts: libsbml-libxml2-devel}
%{!?xerces:Conflicts: libsbml-xerces-devel}

%description devel
The %{name}-devel package contains the libraries, include files and 
documentation to develop applications with libSBML.

###########################################################################

%package java
Summary: Libraries to develop applications using libSBML Java binding
Group: Development/Libraries
Requires: %{name} = %{version}-%{release}
Requires: jdk >= 1.5.0
%{!?expat:Conflicts: libsbml-expat-java}
%{!?libxml2:Conflicts: libsbml-libxml2-java}
%{!?xerces:Conflicts: libsbml-xerces-java}

%description java
The %{name}-java package contains the libraries to develop applications with 
libSBML Java bindings.

###########################################################################

%package csharp
Summary: Libraries to develop applications using libSBML C# binding
Group: Development/Libraries
Requires: %{name} = %{version}-%{release}
Requires: mono-core
%{!?expat:Conflicts: libsbml-expat-csharp}
%{!?libxml2:Conflicts: libsbml-libxml2-csharp}
%{!?xerces:Conflicts: libsbml-xerces-csharp}

%description csharp
The %{name}-csharp package contains the libraries to develop applications with 
libSBML C# bindings.

###########################################################################

%package python
Summary: Libraries to develop applications using libSBML Python binding
Group: Development/Libraries
Requires: %{name} = %{version}-%{release}
Requires: python
%{!?expat:Conflicts: libsbml-expat-python}
%{!?libxml2:Conflicts: libsbml-libxml2-python}
%{!?xerces:Conflicts: libsbml-xerces-python}

%description python
The %{name}-python package contains the libraries to develop applications with 
libSBML Python bindings.

###########################################################################

%package perl
Summary: Libraries to develop applications using libSBML Perl binding
Group: Development/Libraries
Requires: %{name} = %{version}-%{release}
Requires: perl
%{!?expat:Conflicts: libsbml-expat-perl}
%{!?libxml2:Conflicts: libsbml-libxml2-perl}
%{!?xerces:Conflicts: libsbml-xerces-perl}

%description perl
The %{name}-perl package contains the libraries to develop applications with 
libSBML Perl bindings.

###########################################################################

%package ruby
Summary: Libraries to develop applications using libSBML Ruby binding
Group: Development/Libraries
Requires: %{name} = %{version}-%{release}
Requires: ruby
%{!?expat:Conflicts: libsbml-expat-ruby}
%{!?libxml2:Conflicts: libsbml-libxml2-ruby}
%{!?xerces:Conflicts: libsbml-xerces-ruby}

%description ruby
The %{name}-ruby package contains the libraries to develop applications with 
libSBML Ruby bindings.

###########################################################################

%package octave 
Summary: Libraries to develop applications using libSBML Octave binding 
Group: Development/Libraries 
Requires: %{name}-devel = %{version}-%{release} 
Requires: octave >= 2.9.7 
%{!?expat:Conflicts: libsbml-expat-octave}
%{!?libxml2:Conflicts: libsbml-libxml2-octave}
%{!?xerces:Conflicts: libsbml-xerces-octave}

%description octave 
The %{name}-octave package contains the libraries to develop applications with 
libSBML Octave bindings.

###########################################################################

%prep
%setup -q -n libsbml-%{package_version}

%build
rm -rf $RPM_BUILD_ROOT
export CFLAGS="$RPM_OPT_FLAGS"
%configure --with-%{xmlparser} --enable-layout --with-check --with-swig \
     --with-doxygen %{?_with_java: --with-java} %{?_with_csharp: --with-csharp} \
     %{?_with_perl: --with-perl} %{?_with_ruby: --with-ruby} \
     %{?_with_python: --with-python} %{?_with_octave: --with-octave}
make 
make check
make docs

%install
rm -rf ${RPM_BUILD_ROOT}

make install DESTDIR=$RPM_BUILD_ROOT
make install-docs DESTDIR=$RPM_BUILD_ROOT

%clean
rm -rf ${RPM_BUILD_ROOT}

%post   -p /sbin/ldconfig
%postun -p /sbin/ldconfig



%files
%defattr(-,root,root)
%doc AUTHORS.txt README.txt COPYING.txt NEWS.txt
%{_libdir}/libsbml.la
%{_libdir}/libsbml.so.4
%{_libdir}/libsbml.so.%{version}

%files devel
%defattr(-,root,root)
%{_datadir}/%{docdir}/cpp-api/*
%{_datadir}/%{docdir}/c-api/*
%{_libdir}/libsbml.so
%{_libdir}/libsbml.a
%{_includedir}/*
%{_libdir}/pkgconfig/libsbml.pc

%{?_with_java:%files java }
%{?_with_java:%{_datadir}/%{docdir}/java-api/* }
%{?_with_java:%{_libdir}/libsbmlj.so }
%{?_with_java:%{_datadir}/java/libsbmlj.jar} 

%{?_with_csharp:%files csharp }
%{?_with_csharp:%{_libdir}/mono/* }

%{?_with_python:%files python }
%{?_with_python:%{_datadir}/%{docdir}/python-api/* }
%{?_with_python:%{_libdir}/python*/* }

%{?_with_perl:%files perl }
%{?_with_perl:%{_datadir}/%{docdir}/perl-api/* }
%{?_with_perl:%{_libdir}/perl5/* }

%{?_with_ruby:%files ruby }
%{?_with_ruby:%{_libdir}/ruby/* }

%{?_with_octave:%files octave }
%{?_with_octave:%{_libexecdir}/octave/* }

%changelog

* Wed Jul 22 2009 Akiya Jouraku <jouraku@bio.keio.ac.jp>
- Initial import for libsbml-4 branch.
