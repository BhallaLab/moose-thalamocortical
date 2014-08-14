/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.0
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace libsbml {

using System;
using System.Runtime.InteropServices;

public class ModelCreator : IDisposable {
	private HandleRef swigCPtr;
	protected bool swigCMemOwn;
	
	internal ModelCreator(IntPtr cPtr, bool cMemoryOwn)
	{
		swigCMemOwn = cMemoryOwn;
		swigCPtr    = new HandleRef(this, cPtr);
	}
	
	internal static HandleRef getCPtr(ModelCreator obj)
	{
		return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
	}
	
	internal static HandleRef getCPtrAndDisown (ModelCreator obj)
	{
		HandleRef ptr = new HandleRef(null, IntPtr.Zero);
		
		if (obj != null)
		{
			ptr             = obj.swigCPtr;
			obj.swigCMemOwn = false;
		}
		
		return ptr;
	}

  ~ModelCreator() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          libsbmlPINVOKE.delete_ModelCreator(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public static bool operator==(ModelCreator lhs, ModelCreator rhs)
  {
    if((Object)lhs == (Object)rhs)
    {
      return true;
    }

    if( ((Object)lhs == null) || ((Object)rhs == null) )
    {
      return false;
    }

    return (getCPtr(lhs).Handle.ToString() == getCPtr(rhs).Handle.ToString());
  }

  public static bool operator!=(ModelCreator lhs, ModelCreator rhs)
  {
    return !(lhs == rhs);
  }

  public override bool Equals(Object sb)
  {
    if ( ! (sb is ModelCreator) )
    {
      return false;
    }

    return this == (ModelCreator)sb;
  }

  public override int GetHashCode()
  {
    return swigCPtr.Handle.ToInt32();
  }

  public ModelCreator() : this(libsbmlPINVOKE.new_ModelCreator__SWIG_0(), true) {
  }

  public ModelCreator(XMLNode creator) : this(libsbmlPINVOKE.new_ModelCreator__SWIG_1(XMLNode.getCPtr(creator)), true) {
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
  }

  public ModelCreator(ModelCreator orig) : this(libsbmlPINVOKE.new_ModelCreator__SWIG_2(ModelCreator.getCPtr(orig)), true) {
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
  }

  public ModelCreator clone() {
    IntPtr cPtr = libsbmlPINVOKE.ModelCreator_clone(swigCPtr);
    ModelCreator ret = (cPtr == IntPtr.Zero) ? null : new ModelCreator(cPtr, true);
    return ret;
  }

  public string getFamilyName() {
    string ret = libsbmlPINVOKE.ModelCreator_getFamilyName(swigCPtr);
    return ret;
  }

  public string getGivenName() {
    string ret = libsbmlPINVOKE.ModelCreator_getGivenName(swigCPtr);
    return ret;
  }

  public string getEmail() {
    string ret = libsbmlPINVOKE.ModelCreator_getEmail(swigCPtr);
    return ret;
  }

  public string getOrganization() {
    string ret = libsbmlPINVOKE.ModelCreator_getOrganization(swigCPtr);
    return ret;
  }

  public string getOrganisation() {
    string ret = libsbmlPINVOKE.ModelCreator_getOrganisation(swigCPtr);
    return ret;
  }

  public bool isSetFamilyName() {
    bool ret = libsbmlPINVOKE.ModelCreator_isSetFamilyName(swigCPtr);
    return ret;
  }

  public bool isSetGivenName() {
    bool ret = libsbmlPINVOKE.ModelCreator_isSetGivenName(swigCPtr);
    return ret;
  }

  public bool isSetEmail() {
    bool ret = libsbmlPINVOKE.ModelCreator_isSetEmail(swigCPtr);
    return ret;
  }

  public bool isSetOrganization() {
    bool ret = libsbmlPINVOKE.ModelCreator_isSetOrganization(swigCPtr);
    return ret;
  }

  public bool isSetOrganisation() {
    bool ret = libsbmlPINVOKE.ModelCreator_isSetOrganisation(swigCPtr);
    return ret;
  }

  public int setFamilyName(string familyName) {
    int ret = libsbmlPINVOKE.ModelCreator_setFamilyName(swigCPtr, familyName);
    return ret;
  }

  public int setGivenName(string givenName) {
    int ret = libsbmlPINVOKE.ModelCreator_setGivenName(swigCPtr, givenName);
    return ret;
  }

  public int setEmail(string email) {
    int ret = libsbmlPINVOKE.ModelCreator_setEmail(swigCPtr, email);
    return ret;
  }

  public int setOrganization(string organization) {
    int ret = libsbmlPINVOKE.ModelCreator_setOrganization(swigCPtr, organization);
    return ret;
  }

  public int setOrganisation(string organization) {
    int ret = libsbmlPINVOKE.ModelCreator_setOrganisation(swigCPtr, organization);
    return ret;
  }

  public int unsetFamilyName() {
    int ret = libsbmlPINVOKE.ModelCreator_unsetFamilyName(swigCPtr);
    return ret;
  }

  public int unsetGivenName() {
    int ret = libsbmlPINVOKE.ModelCreator_unsetGivenName(swigCPtr);
    return ret;
  }

  public int unsetEmail() {
    int ret = libsbmlPINVOKE.ModelCreator_unsetEmail(swigCPtr);
    return ret;
  }

  public int unsetOrganization() {
    int ret = libsbmlPINVOKE.ModelCreator_unsetOrganization(swigCPtr);
    return ret;
  }

  public int unsetOrganisation() {
    int ret = libsbmlPINVOKE.ModelCreator_unsetOrganisation(swigCPtr);
    return ret;
  }

  public bool hasRequiredAttributes() {
    bool ret = libsbmlPINVOKE.ModelCreator_hasRequiredAttributes(swigCPtr);
    return ret;
  }

}

}
