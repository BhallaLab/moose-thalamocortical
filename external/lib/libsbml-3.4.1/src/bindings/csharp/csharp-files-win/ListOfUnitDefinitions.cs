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

public class ListOfUnitDefinitions : ListOf {
	private HandleRef swigCPtr;
	
	internal ListOfUnitDefinitions(IntPtr cPtr, bool cMemoryOwn) : base(libsbmlPINVOKE.ListOfUnitDefinitions_SWIGUpcast(cPtr), cMemoryOwn)
	{
		//super(libsbmlPINVOKE.ListOfUnitDefinitionsUpcast(cPtr), cMemoryOwn);
		swigCPtr = new HandleRef(this, cPtr);
	}
	
	internal static HandleRef getCPtr(ListOfUnitDefinitions obj)
	{
		return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
	}
	
	internal static HandleRef getCPtrAndDisown (ListOfUnitDefinitions obj)
	{
		HandleRef ptr = new HandleRef(null, IntPtr.Zero);
		
		if (obj != null)
		{
			ptr             = obj.swigCPtr;
			obj.swigCMemOwn = false;
		}
		
		return ptr;
	}

  ~ListOfUnitDefinitions() {
    Dispose();
  }

  public override void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          libsbmlPINVOKE.delete_ListOfUnitDefinitions(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
      base.Dispose();
    }
  }

  public new ListOfUnitDefinitions clone() {
    IntPtr cPtr = libsbmlPINVOKE.ListOfUnitDefinitions_clone(swigCPtr);
    ListOfUnitDefinitions ret = (cPtr == IntPtr.Zero) ? null : new ListOfUnitDefinitions(cPtr, true);
    return ret;
  }

  public override int getTypeCode() {
    int ret = libsbmlPINVOKE.ListOfUnitDefinitions_getTypeCode(swigCPtr);
    return ret;
  }

  public override int getItemTypeCode() {
    int ret = libsbmlPINVOKE.ListOfUnitDefinitions_getItemTypeCode(swigCPtr);
    return ret;
  }

  public override string getElementName() {
    string ret = libsbmlPINVOKE.ListOfUnitDefinitions_getElementName(swigCPtr);
    return ret;
  }

  public new UnitDefinition get(long n) {
    IntPtr cPtr = libsbmlPINVOKE.ListOfUnitDefinitions_get__SWIG_0(swigCPtr, n);
    UnitDefinition ret = (cPtr == IntPtr.Zero) ? null : new UnitDefinition(cPtr, false);
    return ret;
  }

  public virtual UnitDefinition get(string sid) {
    IntPtr cPtr = libsbmlPINVOKE.ListOfUnitDefinitions_get__SWIG_2(swigCPtr, sid);
    UnitDefinition ret = (cPtr == IntPtr.Zero) ? null : new UnitDefinition(cPtr, false);
    return ret;
  }

  public new UnitDefinition remove(long n) {
    IntPtr cPtr = libsbmlPINVOKE.ListOfUnitDefinitions_remove__SWIG_0(swigCPtr, n);
    UnitDefinition ret = (cPtr == IntPtr.Zero) ? null : new UnitDefinition(cPtr, true);
    return ret;
  }

  public virtual UnitDefinition remove(string sid) {
    IntPtr cPtr = libsbmlPINVOKE.ListOfUnitDefinitions_remove__SWIG_1(swigCPtr, sid);
    UnitDefinition ret = (cPtr == IntPtr.Zero) ? null : new UnitDefinition(cPtr, true);
    return ret;
  }

  public ListOfUnitDefinitions() : this(libsbmlPINVOKE.new_ListOfUnitDefinitions(), true) {
  }

}

}
