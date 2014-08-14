///  @file    TestModifierSpeciesReference.cs
///  @brief   ModifierSpeciesReference unit tests
///  @author  Frank Bergmann (Csharp conversion)
///  @author  Akiya Jouraku (Csharp conversion)
///  @author  Ben Bornstein 
/// 
///  $Id: TestModifierSpeciesReference.cs 11545 2010-07-23 02:19:10Z mhucka $
///  $HeadURL: http://sbml.svn.sourceforge.net/svnroot/sbml/trunk/libsbml/src/bindings/csharp/test/sbml/TestModifierSpeciesReference.cs $
/// 
///  ====== WARNING ===== WARNING ===== WARNING ===== WARNING ===== WARNING ======
/// 
///  DO NOT EDIT THIS FILE.
/// 
///  This file was generated automatically by converting the file located at
///  src/sbml/test/TestModifierSpeciesReference.c
///  using the conversion program dev/utilities/translateTests/translateTests.pl.
///  Any changes made here will be lost the next time the file is regenerated.
/// 
///  -----------------------------------------------------------------------------
///  This file is part of libSBML.  Please visit http://sbml.org for more
///  information about SBML, and the latest version of libSBML.
/// 
///  Copyright 2005-2010 California Institute of Technology.
///  Copyright 2002-2005 California Institute of Technology and
///                      Japan Science and Technology Corporation.
///  
///  This library is free software; you can redistribute it and/or modify it
///  under the terms of the GNU Lesser General Public License as published by
///  the Free Software Foundation.  A copy of the license agreement is provided
///  in the file named "LICENSE.txt" included with this software distribution
///  and also available online as http://sbml.org/software/libsbml/license.html
///  -----------------------------------------------------------------------------


namespace LibSBMLCSTest {

  using libsbml;

  using System;

  using System.IO;

  public class TestModifierSpeciesReference {
    public class AssertionError : System.Exception 
    {
      public AssertionError() : base()
      {
        
      }
    }


    static void assertTrue(bool condition)
    {
      if (condition == true)
      {
        return;
      }
      throw new AssertionError();
    }

    static void assertEquals(object a, object b)
    {
      if ( (a == null) && (b == null) )
      {
        return;
      }
      else if ( (a == null) || (b == null) )
      {
        throw new AssertionError();
      }
      else if (a.Equals(b))
      {
        return;
      }
  
      throw new AssertionError();
    }

    static void assertNotEquals(object a, object b)
    {
      if ( (a == null) && (b == null) )
      {
        throw new AssertionError();
      }
      else if ( (a == null) || (b == null) )
      {
        return;
      }
      else if (a.Equals(b))
      {
        throw new AssertionError();
      }
    }

    static void assertEquals(bool a, bool b)
    {
      if ( a == b )
      {
        return;
      }
      throw new AssertionError();
    }

    static void assertNotEquals(bool a, bool b)
    {
      if ( a != b )
      {
        return;
      }
      throw new AssertionError();
    }

    static void assertEquals(int a, int b)
    {
      if ( a == b )
      {
        return;
      }
      throw new AssertionError();
    }

    static void assertNotEquals(int a, int b)
    {
      if ( a != b )
      {
        return;
      }
      throw new AssertionError();
    }

    private  SimpleSpeciesReference MSR;

    public void setUp()
    {
      MSR = new  ModifierSpeciesReference(2,4);
      if (MSR == null);
      {
      }
    }

    public void tearDown()
    {
      MSR = null;
    }

    public void test_ModifierSpeciesReference_create()
    {
      assertTrue( MSR.getTypeCode() == libsbml.SBML_MODIFIER_SPECIES_REFERENCE );
      assertTrue( MSR.getMetaId() == "" );
      assertTrue( MSR.getNotes() == null );
      assertTrue( MSR.getAnnotation() == null );
      assertTrue( MSR.getSpecies() == "" );
      assertEquals( false, MSR.isSetSpecies() );
      assertEquals( true, MSR.isModifier() );
    }

    public void test_ModifierSpeciesReference_createWithNS()
    {
      XMLNamespaces xmlns = new  XMLNamespaces();
      xmlns.add( "http://www.sbml.org", "testsbml");
      SBMLNamespaces sbmlns = new  SBMLNamespaces(2,1);
      sbmlns.addNamespaces(xmlns);
      SBase object1 = new  ModifierSpeciesReference(sbmlns);
      assertTrue( object1.getTypeCode() == libsbml.SBML_MODIFIER_SPECIES_REFERENCE );
      assertTrue( object1.getMetaId() == "" );
      assertTrue( object1.getNotes() == null );
      assertTrue( object1.getAnnotation() == null );
      assertTrue( object1.getLevel() == 2 );
      assertTrue( object1.getVersion() == 1 );
      assertTrue( object1.getNamespaces() != null );
      XMLNamespaces n = object1.getNamespaces();
      assertTrue( n.getLength() == 2 );
      object1 = null;
    }

    public void test_ModifierSpeciesReference_free_NULL()
    {
    }

    public void test_ModifierSpeciesReference_setSpecies()
    {
      string s;
      string species =  "s1";
      MSR.setSpecies(species);
      s = MSR.getSpecies();
      assertTrue(( species == s ));
      assertEquals( true, MSR.isSetSpecies() );
      if (MSR.getSpecies() == species);
      {
      }
      s = MSR.getSpecies();
      MSR.setSpecies(s);
      s = MSR.getSpecies();
      assertTrue(( species == s ));
      MSR.setSpecies("");
      assertEquals( false, MSR.isSetSpecies() );
      if (MSR.getSpecies() != null);
      {
      }
    }

  }
}
