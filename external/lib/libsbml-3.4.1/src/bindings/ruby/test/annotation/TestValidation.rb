# @file    TestValidation.rb
# @brief   Validation of Date ModelCreator and ModelHistory unit tests
#
# @author  Akiya Jouraku (Ruby conversion)
# @author  Sarah Keating 
#
# $Id: TestValidation.rb 12705 2011-01-26 16:38:13Z sarahkeating $
# $HeadURL: http://sbml.svn.sourceforge.net/svnroot/sbml/trunk/libsbml/src/bindings/ruby/test/annotation/TestValidation.rb $
#
# ====== WARNING ===== WARNING ===== WARNING ===== WARNING ===== WARNING ======
#
# DO NOT EDIT THIS FILE.
#
# This file was generated automatically by converting the file located at
# src/annotation/test/TestValidation.cpp
# using the conversion program dev/utilities/translateTests/translateTests.pl.
# Any changes made here will be lost the next time the file is regenerated.
#
# -----------------------------------------------------------------------------
# This file is part of libSBML.  Please visit http://sbml.org for more
# information about SBML, and the latest version of libSBML.
#
# Copyright 2005-2010 California Institute of Technology.
# Copyright 2002-2005 California Institute of Technology and
#                     Japan Science and Technology Corporation.
# 
# This library is free software; you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation.  A copy of the license agreement is provided
# in the file named "LICENSE.txt" included with this software distribution
# and also available online as http://sbml.org/software/libsbml/license.html
# -----------------------------------------------------------------------------
require 'test/unit'
require 'libSBML'

class TestValidation < Test::Unit::TestCase

  def test_Validation_CVTerm1
    cv = LibSBML::CVTerm.new()
    assert( cv != nil )
    assert_equal false, (cv.hasRequiredAttributes())
    cv.setQualifierType(LibSBML::MODEL_QUALIFIER)
    assert_equal false, (cv.hasRequiredAttributes())
    cv.setModelQualifierType(LibSBML::BQM_IS)
    assert_equal false, (cv.hasRequiredAttributes())
    cv.addResource("ggg")
    assert_equal true, (cv.hasRequiredAttributes())
    cv = nil
  end

  def test_Validation_CVTerm2
    cv = LibSBML::CVTerm.new()
    assert( cv != nil )
    assert_equal false, (cv.hasRequiredAttributes())
    cv.setQualifierType(LibSBML::BIOLOGICAL_QUALIFIER)
    assert_equal false, (cv.hasRequiredAttributes())
    cv.setBiologicalQualifierType(LibSBML::BQB_IS)
    assert_equal false, (cv.hasRequiredAttributes())
    cv.addResource("ggg")
    assert_equal true, (cv.hasRequiredAttributes())
    cv = nil
  end

  def test_Validation_Date1
    date = LibSBML::Date.new(200,12,30,12,15,45,1,2,0)
    assert( date != nil )
    assert_equal false, (date.representsValidDate())
    date = nil
  end

  def test_Validation_Date2
    date = LibSBML::Date.new(2007,14,30,12,15,45,1,2,0)
    assert( date != nil )
    assert_equal false, (date.representsValidDate())
    date = nil
  end

  def test_Validation_Date3
    date = LibSBML::Date.new("Jan 12")
    assert( date != nil )
    assert_equal false, (date.representsValidDate())
    date = nil
  end

  def test_Validation_Date4
    date = LibSBML::Date.new(2007,12,30,12,15,45,1,2,0)
    assert( date != nil )
    assert_equal true, date.representsValidDate()
    date = nil
  end

  def test_Validation_Date_Default
    date1 = LibSBML::Date.new()
    date2 = LibSBML::Date.new("")
    assert( date1.getYear() == date2.getYear() )
    assert( date1.getMonth() == date2.getMonth() )
    assert( date1.getDay() == date2.getDay() )
    assert( date1.getHour() == date2.getHour() )
    assert( date1.getMinute() == date2.getMinute() )
    assert( date1.getSecond() == date2.getSecond() )
    assert( date1.getSignOffset() == date2.getSignOffset() )
    assert( date1.getHoursOffset() == date2.getHoursOffset() )
    assert( date1.getMinutesOffset() == date2.getMinutesOffset() )
    date1 = nil
    date2 = nil
  end

  def test_Validation_ModelCreator
    mc = LibSBML::ModelCreator.new()
    assert( mc != nil )
    assert_equal false, (mc.hasRequiredAttributes())
    mc.setEmail("k123")
    assert_equal false, (mc.hasRequiredAttributes())
    mc.setFamilyName("Keating")
    assert_equal false, (mc.hasRequiredAttributes())
    mc.setGivenName("Sarah")
    assert_equal true, mc.hasRequiredAttributes()
    mc = nil
  end

  def test_Validation_ModelHistory1
    mh = LibSBML::ModelHistory.new()
    assert( mh != nil )
    assert_equal false, (mh.hasRequiredAttributes())
    date = LibSBML::Date.new(2007,12,30,12,15,45,1,2,0)
    mh.setCreatedDate(date)
    assert_equal false, (mh.hasRequiredAttributes())
    mh.setModifiedDate(date)
    assert_equal false, (mh.hasRequiredAttributes())
    mc = LibSBML::ModelCreator.new()
    mc.setFamilyName("Keating")
    mc.setGivenName("Sarah")
    mh.addCreator(mc)
    assert_equal true, mh.hasRequiredAttributes()
    mh = nil
  end

  def test_Validation_ModelHistory2
    mh = LibSBML::ModelHistory.new()
    assert( mh != nil )
    assert_equal false, (mh.hasRequiredAttributes())
    date = LibSBML::Date.new(200,12,30,12,15,45,1,2,0)
    mh.setCreatedDate(date)
    assert_equal false, (mh.hasRequiredAttributes())
    mh.setModifiedDate(date)
    assert_equal false, (mh.hasRequiredAttributes())
    mc = LibSBML::ModelCreator.new()
    mc.setFamilyName("Keating")
    mc.setGivenName("Sarah")
    mh.addCreator(mc)
    assert_equal false, (mh.hasRequiredAttributes())
    mh = nil
  end

  def test_Validation_ModelHistory3
    mh = LibSBML::ModelHistory.new()
    assert( mh != nil )
    assert_equal false, (mh.hasRequiredAttributes())
    date = LibSBML::Date.new(2007,12,30,12,15,45,1,2,0)
    mh.setCreatedDate(date)
    assert_equal false, (mh.hasRequiredAttributes())
    mh.setModifiedDate(date)
    assert_equal false, (mh.hasRequiredAttributes())
    mc = LibSBML::ModelCreator.new()
    mc.setFamilyName("Keating")
    mh.addCreator(mc)
    assert_equal false, (mh.hasRequiredAttributes())
    mh = nil
  end

end
