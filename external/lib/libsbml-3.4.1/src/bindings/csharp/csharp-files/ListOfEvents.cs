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

public class ListOfEvents : ListOf {
	private HandleRef swigCPtr;
	
	internal ListOfEvents(IntPtr cPtr, bool cMemoryOwn) : base(libsbmlPINVOKE.ListOfEvents_SWIGUpcast(cPtr), cMemoryOwn)
	{
		//super(libsbmlPINVOKE.ListOfEventsUpcast(cPtr), cMemoryOwn);
		swigCPtr = new HandleRef(this, cPtr);
	}
	
	internal static HandleRef getCPtr(ListOfEvents obj)
	{
		return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
	}
	
	internal static HandleRef getCPtrAndDisown (ListOfEvents obj)
	{
		HandleRef ptr = new HandleRef(null, IntPtr.Zero);
		
		if (obj != null)
		{
			ptr             = obj.swigCPtr;
			obj.swigCMemOwn = false;
		}
		
		return ptr;
	}

  ~ListOfEvents() {
    Dispose();
  }

  public override void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          libsbmlPINVOKE.delete_ListOfEvents(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
      base.Dispose();
    }
  }

  public new ListOfEvents clone() {
    IntPtr cPtr = libsbmlPINVOKE.ListOfEvents_clone(swigCPtr);
    ListOfEvents ret = (cPtr == IntPtr.Zero) ? null : new ListOfEvents(cPtr, true);
    return ret;
  }

  public override int getTypeCode() {
    int ret = libsbmlPINVOKE.ListOfEvents_getTypeCode(swigCPtr);
    return ret;
  }

  public override int getItemTypeCode() {
    int ret = libsbmlPINVOKE.ListOfEvents_getItemTypeCode(swigCPtr);
    return ret;
  }

  public override string getElementName() {
    string ret = libsbmlPINVOKE.ListOfEvents_getElementName(swigCPtr);
    return ret;
  }

  public new Event get(long n) {
    IntPtr cPtr = libsbmlPINVOKE.ListOfEvents_get__SWIG_0(swigCPtr, n);
    Event ret = (cPtr == IntPtr.Zero) ? null : new Event(cPtr, false);
    return ret;
  }

  public virtual Event get(string sid) {
    IntPtr cPtr = libsbmlPINVOKE.ListOfEvents_get__SWIG_2(swigCPtr, sid);
    Event ret = (cPtr == IntPtr.Zero) ? null : new Event(cPtr, false);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public new Event remove(long n) {
    IntPtr cPtr = libsbmlPINVOKE.ListOfEvents_remove__SWIG_0(swigCPtr, n);
    Event ret = (cPtr == IntPtr.Zero) ? null : new Event(cPtr, true);
    return ret;
  }

  public virtual Event remove(string sid) {
    IntPtr cPtr = libsbmlPINVOKE.ListOfEvents_remove__SWIG_1(swigCPtr, sid);
    Event ret = (cPtr == IntPtr.Zero) ? null : new Event(cPtr, true);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public ListOfEvents() : this(libsbmlPINVOKE.new_ListOfEvents(), true) {
  }

}

}
