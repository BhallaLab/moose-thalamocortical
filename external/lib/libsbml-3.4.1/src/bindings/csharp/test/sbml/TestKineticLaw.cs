///  @file    TestKineticLaw.cs
///  @brief   SBML KineticLaw unit tests
///  @author  Frank Bergmann (Csharp conversion)
///  @author  Akiya Jouraku (Csharp conversion)
///  @author  Ben Bornstein 
/// 
///  $Id: TestKineticLaw.cs 11545 2010-07-23 02:19:10Z mhucka $
///  $HeadURL: http://sbml.svn.sourceforge.net/svnroot/sbml/trunk/libsbml/src/bindings/csharp/test/sbml/TestKineticLaw.cs $
/// 
///  ====== WARNING ===== WARNING ===== WARNING ===== WARNING ===== WARNING ======
/// 
///  DO NOT EDIT THIS FILE.
/// 
///  This file was generated automatically by converting the file located at
///  src/sbml/test/TestKineticLaw.c
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

  public class TestKineticLaw {
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

    private KineticLaw kl;

    public void setUp()
    {
      kl = new  KineticLaw(2,4);
      if (kl == null);
      {
      }
    }

    public void tearDown()
    {
      kl = null;
    }

    public void test_KineticLaw_addParameter()
    {
      Parameter p = new  Parameter(2,4);
      p.setId( "p");
      kl.addParameter(p);
      assertTrue( kl.getNumParameters() == 1 );
      p = null;
    }

    public void test_KineticLaw_create()
    {
      assertTrue( kl.getTypeCode() == libsbml.SBML_KINETIC_LAW );
      assertTrue( kl.getMetaId() == "" );
      assertTrue( kl.getNotes() == null );
      assertTrue( kl.getAnnotation() == null );
      assertTrue( kl.getFormula() == "" );
      assertTrue( kl.getMath() == null );
      assertTrue( kl.getTimeUnits() == "" );
      assertTrue( kl.getSubstanceUnits() == "" );
      assertEquals( false, kl.isSetFormula() );
      assertEquals( false, kl.isSetMath() );
      assertEquals( false, kl.isSetTimeUnits() );
      assertEquals( false, kl.isSetSubstanceUnits() );
      assertTrue( kl.getNumParameters() == 0 );
    }

    public void test_KineticLaw_createWithNS()
    {
      XMLNamespaces xmlns = new  XMLNamespaces();
      xmlns.add( "http://www.sbml.org", "testsbml");
      SBMLNamespaces sbmlns = new  SBMLNamespaces(2,1);
      sbmlns.addNamespaces(xmlns);
      KineticLaw object1 = new  KineticLaw(sbmlns);
      assertTrue( object1.getTypeCode() == libsbml.SBML_KINETIC_LAW );
      assertTrue( object1.getMetaId() == "" );
      assertTrue( object1.getNotes() == null );
      assertTrue( object1.getAnnotation() == null );
      assertTrue( object1.getLevel() == 2 );
      assertTrue( object1.getVersion() == 1 );
      assertTrue( object1.getNamespaces() != null );
      assertTrue( object1.getNamespaces().getLength() == 2 );
      object1 = null;
    }

    public void test_KineticLaw_free_NULL()
    {
    }

    public void test_KineticLaw_getParameter()
    {
      Parameter k1 = new  Parameter(2,4);
      Parameter k2 = new  Parameter(2,4);
      k1.setId( "k1");
      k2.setId( "k2");
      k1.setValue(3.14);
      k2.setValue(2.72);
      kl.addParameter(k1);
      kl.addParameter(k2);
      k1 = null;
      k2 = null;
      assertTrue( kl.getNumParameters() == 2 );
      k1 = kl.getParameter(0);
      k2 = kl.getParameter(1);
      assertTrue((  "k1" == k1.getId() ));
      assertTrue((  "k2" == k2.getId() ));
      assertTrue( k1.getValue() == 3.14 );
      assertTrue( k2.getValue() == 2.72 );
    }

    public void test_KineticLaw_getParameterById()
    {
      Parameter k1 = new  Parameter(2,4);
      Parameter k2 = new  Parameter(2,4);
      k1.setId( "k1");
      k2.setId( "k2");
      k1.setValue(3.14);
      k2.setValue(2.72);
      kl.addParameter(k1);
      kl.addParameter(k2);
      k1 = null;
      k2 = null;
      assertTrue( kl.getNumParameters() == 2 );
      k1 = kl.getParameter( "k1");
      k2 = kl.getParameter( "k2");
      assertTrue((  "k1" == k1.getId() ));
      assertTrue((  "k2" == k2.getId() ));
      assertTrue( k1.getValue() == 3.14 );
      assertTrue( k2.getValue() == 2.72 );
    }

    public void test_KineticLaw_removeParameter()
    {
      Parameter o1, o2, o3;
      o1 = kl.createParameter();
      o2 = kl.createParameter();
      o3 = kl.createParameter();
      o3.setId("test");
      assertTrue( kl.removeParameter(0) == o1 );
      assertTrue( kl.getNumParameters() == 2 );
      assertTrue( kl.removeParameter(0) == o2 );
      assertTrue( kl.getNumParameters() == 1 );
      assertTrue( kl.removeParameter("test") == o3 );
      assertTrue( kl.getNumParameters() == 0 );
      o1 = null;
      o2 = null;
      o3 = null;
    }

    public void test_KineticLaw_setBadFormula()
    {
      string formula =  "k1 X0";
      kl.setFormula(formula);
      assertEquals( false, kl.isSetFormula() );
      assertEquals( false, kl.isSetMath() );
    }

    public void test_KineticLaw_setFormula()
    {
      string formula =  "k1*X0";
      kl.setFormula(formula);
      assertTrue(( formula == kl.getFormula() ));
      assertEquals( true, kl.isSetFormula() );
      if (kl.getFormula() == formula);
      {
      }
      kl.setFormula(kl.getFormula());
      assertTrue(( formula == kl.getFormula() ));
      kl.setFormula("");
      assertEquals( false, kl.isSetFormula() );
      if (kl.getFormula() != null);
      {
      }
    }

    public void test_KineticLaw_setFormulaFromMath()
    {
      ASTNode math = libsbml.parseFormula("k1 * X0");
      assertEquals( false, kl.isSetMath() );
      assertEquals( false, kl.isSetFormula() );
      kl.setMath(math);
      assertEquals( true, kl.isSetMath() );
      assertEquals( true, kl.isSetFormula() );
      assertTrue((  "k1 * X0" == kl.getFormula() ));
      math = null;
    }

    public void test_KineticLaw_setMath()
    {
      ASTNode math = libsbml.parseFormula("k3 / k2");
      string formula;
      ASTNode math1;
      kl.setMath(math);
      math1 = kl.getMath();
      assertTrue( math1 != null );
      formula = libsbml.formulaToString(math1);
      assertTrue( formula != null );
      assertTrue((  "k3 / k2" == formula ));
      assertTrue( kl.getMath() != math );
      assertEquals( true, kl.isSetMath() );
      kl.setMath(kl.getMath());
      math1 = kl.getMath();
      assertTrue( math1 != null );
      formula = libsbml.formulaToString(math1);
      assertTrue( formula != null );
      assertTrue((  "k3 / k2" == formula ));
      assertTrue( kl.getMath() != math );
      kl.setMath(null);
      assertEquals( false, kl.isSetMath() );
      if (kl.getMath() != null);
      {
      }
      math = null;
    }

    public void test_KineticLaw_setMathFromFormula()
    {
      string formula =  "k3 / k2";
      assertEquals( false, kl.isSetMath() );
      assertEquals( false, kl.isSetFormula() );
      kl.setFormula(formula);
      assertEquals( true, kl.isSetMath() );
      assertEquals( true, kl.isSetFormula() );
      formula = libsbml.formulaToString(kl.getMath());
      assertTrue((  "k3 / k2" == formula ));
    }

  }
}
