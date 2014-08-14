/*
 * @file    TestL3KineticLaw.java
 * @brief   L3 KineticLaw unit tests
 *
 * @author  Akiya Jouraku (Java conversion)
 * @author  Sarah Keating 
 *
 * $Id$
 * $HeadURL$
 *
 * ====== WARNING ===== WARNING ===== WARNING ===== WARNING ===== WARNING ======
 *
 * DO NOT EDIT THIS FILE.
 *
 * This file was generated automatically by converting the file located at
 * src/sbml/test/TestL3KineticLaw.c
 * using the conversion program dev/utilities/translateTests/translateTests.pl.
 * Any changes made here will be lost the next time the file is regenerated.
 *
 * -----------------------------------------------------------------------------
 * This file is part of libSBML.  Please visit http://sbml.org for more
 * information about SBML, and the latest version of libSBML.
 *
 * Copyright 2005-2010 California Institute of Technology.
 * Copyright 2002-2005 California Institute of Technology and
 *                     Japan Science and Technology Corporation.
 * 
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation.  A copy of the license agreement is provided
 * in the file named "LICENSE.txt" included with this software distribution
 * and also available online as http://sbml.org/software/libsbml/license.html
 * -----------------------------------------------------------------------------
 */

package org.sbml.libsbml.test.sbml;

import org.sbml.libsbml.*;

import java.io.File;
import java.lang.AssertionError;

public class TestL3KineticLaw {

  static void assertTrue(boolean condition) throws AssertionError
  {
    if (condition == true)
    {
      return;
    }
    throw new AssertionError();
  }

  static void assertEquals(Object a, Object b) throws AssertionError
  {
    if ( (a == null) && (b == null) )
    {
      return;
    }
    else if ( (a == null) || (b == null) )
    {
      throw new AssertionError();
    }
    else if (a.equals(b))
    {
      return;
    }

    throw new AssertionError();
  }

  static void assertNotEquals(Object a, Object b) throws AssertionError
  {
    if ( (a == null) && (b == null) )
    {
      throw new AssertionError();
    }
    else if ( (a == null) || (b == null) )
    {
      return;
    }
    else if (a.equals(b))
    {
      throw new AssertionError();
    }
  }

  static void assertEquals(boolean a, boolean b) throws AssertionError
  {
    if ( a == b )
    {
      return;
    }
    throw new AssertionError();
  }

  static void assertNotEquals(boolean a, boolean b) throws AssertionError
  {
    if ( a != b )
    {
      return;
    }
    throw new AssertionError();
  }

  static void assertEquals(int a, int b) throws AssertionError
  {
    if ( a == b )
    {
      return;
    }
    throw new AssertionError();
  }

  static void assertNotEquals(int a, int b) throws AssertionError
  {
    if ( a != b )
    {
      return;
    }
    throw new AssertionError();
  }
  private KineticLaw KL;

  protected void setUp() throws Exception
  {
    KL = new  KineticLaw(3,1);
    if (KL == null);
    {
    }
  }

  protected void tearDown() throws Exception
  {
    KL = null;
  }

  public void test_L3_KineticLaw_addParameter1()
  {
    KineticLaw kl = new  KineticLaw(3,1);
    Parameter p = new  Parameter(3,1);
    int i = KL.addParameter(p);
    assertTrue( i == libsbml.LIBSBML_INVALID_OBJECT );
    p.setId( "p1");
    i = KL.addParameter(p);
    assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
    assertTrue( KL.getNumParameters() == 1 );
    assertTrue( KL.getNumLocalParameters() == 1 );
    assertTrue( kl.getNumParameters() == 0 );
    assertTrue( kl.getNumLocalParameters() == 0 );
    i = kl.addParameter(p);
    assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
    assertTrue( KL.getNumParameters() == 1 );
    assertTrue( KL.getNumLocalParameters() == 1 );
    assertTrue( kl.getNumParameters() == 1 );
    assertTrue( kl.getNumLocalParameters() == 1 );
    p = null;
    kl = null;
  }

  public void test_L3_KineticLaw_addParameter2()
  {
    KineticLaw kl = new  KineticLaw(3,1);
    LocalParameter lp = new  LocalParameter(3,1);
    LocalParameter lp1 = new  LocalParameter(3,1);
    int i = kl.addLocalParameter(lp);
    assertTrue( i == libsbml.LIBSBML_INVALID_OBJECT );
    lp.setId( "p");
    lp1.setId( "p1");
    i = kl.addLocalParameter(lp);
    assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
    assertTrue( kl.getNumParameters() == 1 );
    assertTrue( kl.getNumLocalParameters() == 1 );
    i = kl.addParameter(lp1);
    assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
    assertTrue( kl.getNumParameters() == 2 );
    assertTrue( kl.getNumLocalParameters() == 2 );
    lp = null;
    kl = null;
  }

  public void test_L3_KineticLaw_create()
  {
    assertTrue( KL.getTypeCode() == libsbml.SBML_KINETIC_LAW );
    assertTrue( KL.getMetaId().equals("") == true );
    assertTrue( KL.getNotes() == null );
    assertTrue( KL.getAnnotation() == null );
    assertTrue( KL.getNumParameters() == 0 );
    assertTrue( KL.getNumLocalParameters() == 0 );
  }

  public void test_L3_KineticLaw_free_NULL()
  {
  }

  /**
   * Loads the SWIG-generated libSBML Java module when this class is
   * loaded, or reports a sensible diagnostic message about why it failed.
   */
  static
  {
    String varname;
    String shlibname;

    if (System.getProperty("mrj.version") != null)
    {
      varname = "DYLD_LIBRARY_PATH";    // We're on a Mac.
      shlibname = "libsbmlj.jnilib and/or libsbml.dylib";
    }
    else
    {
      varname = "LD_LIBRARY_PATH";      // We're not on a Mac.
      shlibname = "libsbmlj.so and/or libsbml.so";
    }

    try
    {
      System.loadLibrary("sbmlj");
      // For extra safety, check that the jar file is in the classpath.
      Class.forName("org.sbml.libsbml.libsbml");
    }
    catch (SecurityException e)
    {
      e.printStackTrace();
      System.err.println("Could not load the libSBML library files due to a"+
                         " security exception.\n");
      System.exit(1);
    }
    catch (UnsatisfiedLinkError e)
    {
      e.printStackTrace();
      System.err.println("Error: could not link with the libSBML library files."+
                         " It is likely\nyour " + varname +
                         " environment variable does not include the directories\n"+
                         "containing the " + shlibname + " library files.\n");
      System.exit(1);
    }
    catch (ClassNotFoundException e)
    {
      e.printStackTrace();
      System.err.println("Error: unable to load the file libsbmlj.jar."+
                         " It is likely\nyour -classpath option and CLASSPATH" +
                         " environment variable\n"+
                         "do not include the path to libsbmlj.jar.\n");
      System.exit(1);
    }
  }
}
