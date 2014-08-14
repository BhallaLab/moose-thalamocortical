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

public class ListOf : SBase {
	private HandleRef swigCPtr;
	
	internal ListOf(IntPtr cPtr, bool cMemoryOwn) : base(libsbmlPINVOKE.ListOf_SWIGUpcast(cPtr), cMemoryOwn)
	{
		//super(libsbmlPINVOKE.ListOfUpcast(cPtr), cMemoryOwn);
		swigCPtr = new HandleRef(this, cPtr);
	}
	
	internal static HandleRef getCPtr(ListOf obj)
	{
		return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
	}
	
	internal static HandleRef getCPtrAndDisown (ListOf obj)
	{
		HandleRef ptr = new HandleRef(null, IntPtr.Zero);
		
		if (obj != null)
		{
			ptr             = obj.swigCPtr;
			obj.swigCMemOwn = false;
		}
		
		return ptr;
	}

  ~ListOf() {
    Dispose();
  }

  public override void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          libsbmlPINVOKE.delete_ListOf(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
      base.Dispose();
    }
  }

  public ListOf() : this(libsbmlPINVOKE.new_ListOf__SWIG_0(), true) {
  }

  public ListOf(ListOf orig) : this(libsbmlPINVOKE.new_ListOf__SWIG_1(ListOf.getCPtr(orig)), true) {
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
  }

  public new SBase clone() {
	return libsbml.DowncastSBase(libsbmlPINVOKE.ListOf_clone(swigCPtr), true);
}

  public int append(SBase item) {
    int ret = libsbmlPINVOKE.ListOf_append(swigCPtr, SBase.getCPtr(item));
    return ret;
  }

  public int appendAndOwn(SBase item) {
    int ret = libsbmlPINVOKE.ListOf_appendAndOwn(swigCPtr, SBase.getCPtrAndDisown(item));
    return ret;
  }

  public virtual SBase get(long n) {
	return libsbml.DowncastSBase(libsbmlPINVOKE.ListOf_get__SWIG_0(swigCPtr, n), false);
}

  public void clear(bool doDelete) {
    libsbmlPINVOKE.ListOf_clear__SWIG_0(swigCPtr, doDelete);
  }

  public void clear() {
    libsbmlPINVOKE.ListOf_clear__SWIG_1(swigCPtr);
  }

  public virtual SBase remove(long n) {
	return libsbml.DowncastSBase(libsbmlPINVOKE.ListOf_remove(swigCPtr, n), true);
}

  public long size() { return (long)libsbmlPINVOKE.ListOf_size(swigCPtr); }

  public override int getTypeCode() {
    int ret = libsbmlPINVOKE.ListOf_getTypeCode(swigCPtr);
    return ret;
  }

  public virtual int getItemTypeCode() {
    int ret = libsbmlPINVOKE.ListOf_getItemTypeCode(swigCPtr);
    return ret;
  }

  public override string getElementName() {
    string ret = libsbmlPINVOKE.ListOf_getElementName(swigCPtr);
    return ret;
  }

}

}
