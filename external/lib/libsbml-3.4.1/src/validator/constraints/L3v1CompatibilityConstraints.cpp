/**
 * @cond doxygen-libsbml-internal
 *
 * @file    L3v1CompatibilityConstraints.cpp
 * @brief   L3 compatibility for conversion from L2
 * @author  Sarah Keating
 *
 * $Id: L3v1CompatibilityConstraints.cpp 12780 2011-02-08 04:12:54Z mhucka $
 * $HeadURL: http://sbml.svn.sourceforge.net/svnroot/sbml/trunk/libsbml/src/validator/constraints/L3v1CompatibilityConstraints.cpp $
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
 * the Free Software Foundation.  A copy of the license agreement is
 * provided in the file named "LICENSE.txt" included with this software
 * distribution.  It is also available online at
 * http://sbml.org/software/libsbml/license.html
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
 */


#ifndef AddingConstraintsToValidator
#include <sbml/SBMLTypes.h>
#include <sbml/SBase.h>
#include <sbml/validator/VConstraint.h>
#include <math.h>
#include "DuplicateTopLevelAnnotation.h"
#endif


#include <sbml/validator/ConstraintMacros.h>

/** @cond doxygen-ignored */

using namespace std;

/** @endcond */


START_CONSTRAINT (96001, Model, x)
{
  // no speciesType
  inv( m.getNumSpeciesTypes() == 0 );
}
END_CONSTRAINT


START_CONSTRAINT (96002, Model, x)
{
  // no compartmentType

  inv( m.getNumCompartmentTypes() == 0 );
}
END_CONSTRAINT


START_CONSTRAINT (96003, Unit, u)
{
  // no offset

  inv( u.getOffset() == 0.0 );
}
END_CONSTRAINT


START_CONSTRAINT (96004, KineticLaw, kl)
{
  // no TimeUnits

  inv( kl.isSetTimeUnits() == false );
}
END_CONSTRAINT


START_CONSTRAINT (96005, KineticLaw, kl)
{
  // no SubstanceUnits

  inv( kl.isSetSubstanceUnits() == false );
}
END_CONSTRAINT


START_CONSTRAINT (96006, Species, s)
{
  // no spatialSizeUnits
  inv( s.isSetSpatialSizeUnits() == false);
}
END_CONSTRAINT


START_CONSTRAINT (96007, Event, e)
{
  // no TimeUnits

  inv( e.isSetTimeUnits() == false);

}
END_CONSTRAINT


START_CONSTRAINT (96008, Model, m1)
{
  // if the model was earlier than L2V4 the model sbo term will not
  // be valid in l2v4
  pre( m1.getLevel() == 2 );
  pre( m1.getVersion() < 4);

  inv( !m1.isSetSBOTerm());
}
END_CONSTRAINT


EXTERN_CONSTRAINT(96009, DuplicateTopLevelAnnotation)


START_CONSTRAINT (96010, Compartment, c)
{
  // no outside

  inv( c.isSetOutside() == false);
}
END_CONSTRAINT

//START_CONSTRAINT (96011, SpeciesReference, sr) 
//{
//  pre(!sr.isModifier());
//
//  pre( sr.isSetStoichiometryMath() );
//
//  inv_or( sr.getStoichiometryMath()->getMath()->isInteger()  );
//  inv_or( sr.getStoichiometryMath()->getMath()->isRational() );
//}
//END_CONSTRAINT


/** @endcond */
