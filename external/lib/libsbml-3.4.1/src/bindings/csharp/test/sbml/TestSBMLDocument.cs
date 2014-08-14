///  @file    TestSBMLDocument.cs
///  @brief   SBMLDocument unit tests
///  @author  Frank Bergmann (Csharp conversion)
///  @author  Akiya Jouraku (Csharp conversion)
///  @author  Ben Bornstein 
/// 
///  $Id: TestSBMLDocument.cs 11545 2010-07-23 02:19:10Z mhucka $
///  $HeadURL: http://sbml.svn.sourceforge.net/svnroot/sbml/trunk/libsbml/src/bindings/csharp/test/sbml/TestSBMLDocument.cs $
/// 
///  ====== WARNING ===== WARNING ===== WARNING ===== WARNING ===== WARNING ======
/// 
///  DO NOT EDIT THIS FILE.
/// 
///  This file was generated automatically by converting the file located at
///  src/sbml/test/TestSBMLDocument.c
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

  public class TestSBMLDocument {
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


    public void test_SBMLDocument_create()
    {
      SBMLDocument d = new  SBMLDocument();
      assertTrue( d.getTypeCode() == libsbml.SBML_DOCUMENT );
      assertTrue( d.getNotes() == null );
      assertTrue( d.getAnnotation() == null );
      assertTrue( d.getLevel() == 3 );
      assertTrue( d.getVersion() == 1 );
      assertTrue( d.getNumErrors() == 0 );
      d = null;
    }

    public void test_SBMLDocument_createWith()
    {
      SBMLDocument d = new  SBMLDocument(1,2);
      assertTrue( d.getTypeCode() == libsbml.SBML_DOCUMENT );
      assertTrue( d.getNotes() == null );
      assertTrue( d.getAnnotation() == null );
      assertTrue( d.getLevel() == 1 );
      assertTrue( d.getVersion() == 2 );
      assertTrue( d.getNumErrors() == 0 );
      d = null;
    }

    public void test_SBMLDocument_free_NULL()
    {
    }

    public void test_SBMLDocument_setLevelAndVersion()
    {
      SBMLDocument d = new  SBMLDocument(2,2);
      Model m1 = new  Model(2,2);
      d.setModel(m1);
      assertTrue( d.setLevelAndVersion(2,3,false) == true );
      assertTrue( d.setLevelAndVersion(2,1,false) == true );
      assertTrue( d.setLevelAndVersion(1,2,false) == true );
      assertTrue( d.setLevelAndVersion(1,1,false) == false );
      d = null;
    }

    public void test_SBMLDocument_setLevelAndVersion_Error()
    {
      SBMLDocument d = new  SBMLDocument();
      d.setLevelAndVersion(2,1,true);
      Model m1 = new  Model(2,1);
      Unit u = new  Unit(2,1);
      u.setKind(libsbml.UnitKind_forName("mole"));
      u.setOffset(3.2);
      UnitDefinition ud = new  UnitDefinition(2,1);
      ud.setId( "ud");
      ud.addUnit(u);
      m1.addUnitDefinition(ud);
      d.setModel(m1);
      assertTrue( d.setLevelAndVersion(2,2,true) == false );
      assertTrue( d.setLevelAndVersion(2,3,true) == false );
      assertTrue( d.setLevelAndVersion(1,2,true) == false );
      assertTrue( d.setLevelAndVersion(1,1,true) == false );
      d = null;
    }

    public void test_SBMLDocument_setLevelAndVersion_UnitsError()
    {
      SBMLDocument d = new  SBMLDocument();
      d.setLevelAndVersion(2,4,false);
      Model m1 = d.createModel();
      Compartment c = m1.createCompartment();
      c.setId( "c");
      Parameter p = m1.createParameter();
      p.setId( "p");
      p.setUnits( "mole");
      Rule r = m1.createAssignmentRule();
      r.setVariable( "c");
      r.setFormula( "p*p");
      assertTrue( d.setLevelAndVersion(2,2,false) == true );
      assertTrue( d.setLevelAndVersion(2,3,false) == true );
      assertTrue( d.setLevelAndVersion(1,2,false) == true );
      assertTrue( d.setLevelAndVersion(1,1,false) == false );
      d = null;
    }

    public void test_SBMLDocument_setLevelAndVersion_Warning()
    {
      SBMLDocument d = new  SBMLDocument(2,2);
      Model m1 = new  Model(2,2);
      (m1).setSBOTerm(2);
      d.setModel(m1);
      assertTrue( d.setLevelAndVersion(2,3,false) == true );
      assertTrue( d.setLevelAndVersion(2,1,false) == true );
      assertTrue( d.setLevelAndVersion(1,2,false) == true );
      assertTrue( d.setLevelAndVersion(1,1,false) == false );
      d = null;
    }

    public void test_SBMLDocument_setModel()
    {
      SBMLDocument d = new  SBMLDocument(2,4);
      Model m1 = new  Model(2,4);
      Model m2 = new  Model(2,4);
      Model mout;
      assertTrue( d.getModel() == null );
      int i = d.setModel(m1);
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      mout = d.getModel();
      assertTrue( mout != null );
      assertTrue( mout != m1 );
      i = d.setModel(d.getModel());
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      mout = d.getModel();
      assertTrue( mout != null );
      assertTrue( mout != m1 );
      i = d.setModel(m2);
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      mout = d.getModel();
      assertTrue( mout != null );
      assertTrue( mout != m2 );
      d = null;
    }

    public void test_SBMLDocument_setModel1()
    {
      SBMLDocument d = new  SBMLDocument(2,2);
      Model m1 = new  Model(2,1);
      int i = d.setModel(m1);
      assertTrue( i == libsbml.LIBSBML_VERSION_MISMATCH );
      assertTrue( d.getModel() == null );
      d = null;
    }

    public void test_SBMLDocument_setModel2()
    {
      SBMLDocument d = new  SBMLDocument(2,2);
      Model m1 = new  Model(1,2);
      int i = d.setModel(m1);
      assertTrue( i == libsbml.LIBSBML_LEVEL_MISMATCH );
      assertTrue( d.getModel() == null );
      d = null;
    }

    public void test_SBMLDocument_setModel3()
    {
      SBMLDocument d = new  SBMLDocument(2,2);
      Model m1 = new  Model(2,2);
      int i = d.setModel(m1);
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( d.getModel() != null );
      d = null;
    }

  }
}
