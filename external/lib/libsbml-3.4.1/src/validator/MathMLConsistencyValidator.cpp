/**
 * @cond doxygen-libsbml-internal
 *
 * @file    MathMLConsistencyValidator.cpp
 * @brief   Checks an SBML model for structural consistency
 * @author  Ben Bornstein
 *
 * $Id: MathMLConsistencyValidator.cpp 12780 2011-02-08 04:12:54Z mhucka $
 * $HeadURL: http://sbml.svn.sourceforge.net/svnroot/sbml/trunk/libsbml/src/validator/MathMLConsistencyValidator.cpp $
 *
 * <!--------------------------------------------------------------------------
 * This file is part of libSBML.  Please visit http://sbml.org for more
 * information about SBML, and the latest version of libSBML.
 *
 * Copyright (C) 2009-2011 jointly by the following organizations: 
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. EMBL European Bioinformatics Institute (EBML-EBI), Hinxton, UK
 *  
 * Copyright (C) 2006-2008 by the California Institute of Technology,
 *     Pasadena, CA, USA 
 *  
 * Copyright (C) 2002-2005 jointly by the following organizations: 
 *     1. California Institute of Technology, Pasadena, CA, USA
 *     2. Japan Science and Technology Agency, Japan
 * 
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation.  A copy of the license agreement is provided
 * in the file named "LICENSE.txt" included with this software distribution and
 * also available online as http://sbml.org/software/libsbml/license.html
 * ---------------------------------------------------------------------- -->*/

#ifndef doxygen_ignore

#include <sbml/SBMLTypes.h>
#include <sbml/units/UnitFormulaFormatter.h>

#include <sbml/validator/MathMLConsistencyValidator.h>


/*
 * Compile MathMLConsistencyConstraints
 */
#include "constraints/MathMLConsistencyConstraints.cpp"

LIBSBML_CPP_NAMESPACE_BEGIN

/*
 * Initializes this Validator with a set of Constraints.
 */
void
MathMLConsistencyValidator::init ()
{
#define  AddingConstraintsToValidator 1
#include "constraints/MathMLConsistencyConstraints.cpp"
}

LIBSBML_CPP_NAMESPACE_END

#endif

/** @endcond */
