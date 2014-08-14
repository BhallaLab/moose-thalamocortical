///  @file    TestXMLToken_newSetters.cs
///  @brief   XMLToken_newSetters unit tests
///  @author  Frank Bergmann (Csharp conversion)
///  @author  Akiya Jouraku (Csharp conversion)
///  @author  Sarah Keating 
/// 
///  $Id: TestXMLToken_newSetters.cs 11545 2010-07-23 02:19:10Z mhucka $
///  $HeadURL: http://sbml.svn.sourceforge.net/svnroot/sbml/trunk/libsbml/src/bindings/csharp/test/xml/TestXMLToken_newSetters.cs $
/// 
///  ====== WARNING ===== WARNING ===== WARNING ===== WARNING ===== WARNING ======
/// 
///  DO NOT EDIT THIS FILE.
/// 
///  This file was generated automatically by converting the file located at
///  src/xml/test/TestXMLToken_newSetters.c
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

  public class TestXMLToken_newSetters {
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


    public void test_XMLToken_newSetters_addAttributes1()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLAttributes attr = new  XMLAttributes();
      XMLToken token = new  XMLToken(triple,attr);
      XMLTriple xt2 = new  XMLTriple("name3", "http://name3.org/", "p3");
      int i = token.addAttr( "name1", "val1");
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.getAttributesLength() == 1 );
      assertTrue( token.isAttributesEmpty() == false );
      assertTrue( (  "name1" != token.getAttrName(0) ) == false );
      assertTrue( (  "val1"  != token.getAttrValue(0) ) == false );
      i = token.addAttr( "name2", "val2", "http://name1.org/", "p1");
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.getAttributesLength() == 2 );
      assertTrue( token.isAttributesEmpty() == false );
      assertTrue( (  "name2" != token.getAttrName(1) ) == false );
      assertTrue( (  "val2"  != token.getAttrValue(1) ) == false );
      assertTrue( (  "http://name1.org/" != token.getAttrURI(1) ) == false );
      assertTrue( (  "p1"    != token.getAttrPrefix(1) ) == false );
      i = token.addAttr(xt2, "val2");
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.getAttributesLength() == 3 );
      assertTrue( token.isAttributesEmpty() == false );
      assertTrue( (  "name3" != token.getAttrName(2) ) == false );
      assertTrue( (  "val2"  != token.getAttrValue(2) ) == false );
      assertTrue( (  "http://name3.org/" != token.getAttrURI(2) ) == false );
      assertTrue( (  "p3"    != token.getAttrPrefix(2) ) == false );
      xt2 = null;
      triple = null;
      attr = null;
      token = null;
    }

    public void test_XMLToken_newSetters_addAttributes2()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLToken token = new  XMLToken(triple);
      XMLTriple xt2 = new  XMLTriple("name3", "http://name3.org/", "p3");
      int i = token.addAttr( "name1", "val1");
      assertTrue( i == libsbml.LIBSBML_INVALID_XML_OPERATION );
      assertTrue( token.getAttributesLength() == 0 );
      assertTrue( token.isAttributesEmpty() == true );
      i = token.addAttr( "name2", "val2", "http://name1.org/", "p1");
      assertTrue( i == libsbml.LIBSBML_INVALID_XML_OPERATION );
      assertTrue( token.getAttributesLength() == 0 );
      assertTrue( token.isAttributesEmpty() == true );
      i = token.addAttr(xt2, "val2");
      assertTrue( i == libsbml.LIBSBML_INVALID_XML_OPERATION );
      assertTrue( token.getAttributesLength() == 0 );
      assertTrue( token.isAttributesEmpty() == true );
      xt2 = null;
      triple = null;
      token = null;
    }

    public void test_XMLToken_newSetters_addNamespaces1()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLAttributes attr = new  XMLAttributes();
      XMLToken token = new  XMLToken(triple,attr);
      assertTrue( token.getNamespacesLength() == 0 );
      assertTrue( token.isNamespacesEmpty() == true );
      int i = token.addNamespace( "http://test1.org/", "test1");
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.getNamespacesLength() == 1 );
      assertTrue( token.isNamespacesEmpty() == false );
      attr = null;
      triple = null;
      token = null;
    }

    public void test_XMLToken_newSetters_addNamespaces2()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLToken token = new  XMLToken(triple);
      assertTrue( token.getNamespacesLength() == 0 );
      assertTrue( token.isNamespacesEmpty() == true );
      int i = token.addNamespace( "http://test1.org/", "test1");
      assertTrue( i == libsbml.LIBSBML_INVALID_XML_OPERATION );
      assertTrue( token.getNamespacesLength() == 0 );
      assertTrue( token.isNamespacesEmpty() == true );
      triple = null;
      token = null;
    }

    public void test_XMLToken_newSetters_clearAttributes1()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLAttributes attr = new  XMLAttributes();
      XMLToken token = new  XMLToken(triple,attr);
      XMLAttributes nattr = new  XMLAttributes();
      XMLTriple xt1 = new  XMLTriple("name1", "http://name1.org/", "p1");
      nattr.add(xt1, "val1");
      int i = token.setAttributes(nattr);
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.isAttributesEmpty() == false );
      i = token.clearAttributes();
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.isAttributesEmpty() == true );
      nattr = null;
      attr = null;
      triple = null;
      token = null;
      xt1 = null;
    }

    public void test_XMLToken_newSetters_clearNamespaces1()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLAttributes attr = new  XMLAttributes();
      XMLToken token = new  XMLToken(triple,attr);
      XMLNamespaces ns = new  XMLNamespaces();
      assertTrue( token.getNamespacesLength() == 0 );
      assertTrue( token.isNamespacesEmpty() == true );
      ns.add( "http://test1.org/", "test1");
      int i = token.setNamespaces(ns);
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.getNamespacesLength() == 1 );
      assertTrue( token.isNamespacesEmpty() == false );
      i = token.clearNamespaces();
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.getNamespacesLength() == 0 );
      assertTrue( token.isNamespacesEmpty() == true );
      attr = null;
      triple = null;
      token = null;
      ns = null;
    }

    public void test_XMLToken_newSetters_removeAttributes1()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLAttributes attr = new  XMLAttributes();
      XMLToken token = new  XMLToken(triple,attr);
      XMLTriple xt2 = new  XMLTriple("name3", "http://name3.org/", "p3");
      XMLTriple xt1 = new  XMLTriple("name5", "http://name5.org/", "p5");
      int i = token.addAttr( "name1", "val1");
      i = token.addAttr( "name2", "val2", "http://name1.org/", "p1");
      i = token.addAttr(xt2, "val2");
      i = token.addAttr( "name4", "val4");
      assertTrue( token.getAttributes().getLength() == 4 );
      i = token.removeAttr(7);
      assertTrue( i == libsbml.LIBSBML_INDEX_EXCEEDS_SIZE );
      i = token.removeAttr( "name7");
      assertTrue( i == libsbml.LIBSBML_INDEX_EXCEEDS_SIZE );
      i = token.removeAttr( "name7", "namespaces7");
      assertTrue( i == libsbml.LIBSBML_INDEX_EXCEEDS_SIZE );
      i = token.removeAttr(xt1);
      assertTrue( i == libsbml.LIBSBML_INDEX_EXCEEDS_SIZE );
      assertTrue( token.getAttributes().getLength() == 4 );
      i = token.removeAttr(3);
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.getAttributes().getLength() == 3 );
      i = token.removeAttr( "name1");
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.getAttributes().getLength() == 2 );
      i = token.removeAttr( "name2", "http://name1.org/");
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.getAttributes().getLength() == 1 );
      i = token.removeAttr(xt2);
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.getAttributes().getLength() == 0 );
      xt1 = null;
      xt2 = null;
      triple = null;
      attr = null;
      token = null;
    }

    public void test_XMLToken_newSetters_removeNamespaces()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLAttributes attr = new  XMLAttributes();
      XMLToken token = new  XMLToken(triple,attr);
      token.addNamespace( "http://test1.org/", "test1");
      assertTrue( token.getNamespacesLength() == 1 );
      int i = token.removeNamespace(4);
      assertTrue( i == libsbml.LIBSBML_INDEX_EXCEEDS_SIZE );
      assertTrue( token.getNamespacesLength() == 1 );
      i = token.removeNamespace(0);
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.getNamespacesLength() == 0 );
      token = null;
      triple = null;
      attr = null;
    }

    public void test_XMLToken_newSetters_removeNamespaces1()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLAttributes attr = new  XMLAttributes();
      XMLToken token = new  XMLToken(triple,attr);
      token.addNamespace( "http://test1.org/", "test1");
      assertTrue( token.getNamespacesLength() == 1 );
      int i = token.removeNamespace( "test2");
      assertTrue( i == libsbml.LIBSBML_INDEX_EXCEEDS_SIZE );
      assertTrue( token.getNamespacesLength() == 1 );
      i = token.removeNamespace( "test1");
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.getNamespacesLength() == 0 );
      token = null;
      triple = null;
      attr = null;
    }

    public void test_XMLToken_newSetters_setAttributes1()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLAttributes attr = new  XMLAttributes();
      XMLToken token = new  XMLToken(triple,attr);
      XMLAttributes nattr = new  XMLAttributes();
      XMLTriple xt1 = new  XMLTriple("name1", "http://name1.org/", "p1");
      nattr.add(xt1, "val1");
      int i = token.setAttributes(nattr);
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.isAttributesEmpty() == false );
      nattr = null;
      attr = null;
      triple = null;
      token = null;
      xt1 = null;
    }

    public void test_XMLToken_newSetters_setAttributes2()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLToken token = new  XMLToken(triple);
      XMLAttributes nattr = new  XMLAttributes();
      XMLTriple xt1 = new  XMLTriple("name1", "http://name1.org/", "p1");
      nattr.add(xt1, "val1");
      int i = token.setAttributes(nattr);
      assertTrue( i == libsbml.LIBSBML_INVALID_XML_OPERATION );
      assertTrue( token.isAttributesEmpty() == true );
      nattr = null;
      triple = null;
      token = null;
      xt1 = null;
    }

    public void test_XMLToken_newSetters_setEOF()
    {
      XMLToken token = new  XMLToken();
      assertTrue( token.isEnd() == false );
      int i = token.setEOF();
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.isEnd() == false );
      assertTrue( token.isStart() == false );
      assertTrue( token.isText() == false );
      token = null;
    }

    public void test_XMLToken_newSetters_setEnd()
    {
      XMLToken token = new  XMLToken();
      assertTrue( token.isEnd() == false );
      int i = token.setEnd();
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.isEnd() == true );
      i = token.unsetEnd();
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.isEnd() == false );
      token = null;
    }

    public void test_XMLToken_newSetters_setNamespaces1()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLAttributes attr = new  XMLAttributes();
      XMLToken token = new  XMLToken(triple,attr);
      XMLNamespaces ns = new  XMLNamespaces();
      assertTrue( token.getNamespacesLength() == 0 );
      assertTrue( token.isNamespacesEmpty() == true );
      ns.add( "http://test1.org/", "test1");
      int i = token.setNamespaces(ns);
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue( token.getNamespacesLength() == 1 );
      assertTrue( token.isNamespacesEmpty() == false );
      attr = null;
      triple = null;
      token = null;
      ns = null;
    }

    public void test_XMLToken_newSetters_setNamespaces2()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLToken token = new  XMLToken(triple);
      XMLNamespaces ns = new  XMLNamespaces();
      assertTrue( token.getNamespacesLength() == 0 );
      assertTrue( token.isNamespacesEmpty() == true );
      ns.add( "http://test1.org/", "test1");
      int i = token.setNamespaces(ns);
      assertTrue( i == libsbml.LIBSBML_INVALID_XML_OPERATION );
      assertTrue( token.getNamespacesLength() == 0 );
      assertTrue( token.isNamespacesEmpty() == true );
      triple = null;
      token = null;
      ns = null;
    }

    public void test_XMLToken_newSetters_setTriple1()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLToken token = new  XMLToken();
      int i = token.setTriple(triple);
      assertTrue( i == libsbml.LIBSBML_OPERATION_SUCCESS );
      assertTrue((  "test" == token.getName() ));
      triple = null;
      token = null;
    }

    public void test_XMLToken_newSetters_setTriple2()
    {
      XMLTriple triple = new  XMLTriple("test","","");
      XMLToken token = new  XMLToken("This is text");
      int i = token.setTriple(triple);
      assertTrue( i == libsbml.LIBSBML_INVALID_XML_OPERATION );
      triple = null;
      token = null;
    }

  }
}
