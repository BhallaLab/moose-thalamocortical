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

public class SBO : IDisposable {
	private HandleRef swigCPtr;
	protected bool swigCMemOwn;
	
	internal SBO(IntPtr cPtr, bool cMemoryOwn)
	{
		swigCMemOwn = cMemoryOwn;
		swigCPtr    = new HandleRef(this, cPtr);
	}
	
	internal static HandleRef getCPtr(SBO obj)
	{
		return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
	}
	
	internal static HandleRef getCPtrAndDisown (SBO obj)
	{
		HandleRef ptr = new HandleRef(null, IntPtr.Zero);
		
		if (obj != null)
		{
			ptr             = obj.swigCPtr;
			obj.swigCMemOwn = false;
		}
		
		return ptr;
	}

  ~SBO() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          libsbmlPINVOKE.delete_SBO(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public static bool isQuantitativeParameter(long term) {
    bool ret = libsbmlPINVOKE.SBO_isQuantitativeParameter(term);
    return ret;
  }

  public static bool isParticipantRole(long term) {
    bool ret = libsbmlPINVOKE.SBO_isParticipantRole(term);
    return ret;
  }

  public static bool isModellingFramework(long term) {
    bool ret = libsbmlPINVOKE.SBO_isModellingFramework(term);
    return ret;
  }

  public static bool isMathematicalExpression(long term) {
    bool ret = libsbmlPINVOKE.SBO_isMathematicalExpression(term);
    return ret;
  }

  public static bool isKineticConstant(long term) {
    bool ret = libsbmlPINVOKE.SBO_isKineticConstant(term);
    return ret;
  }

  public static bool isReactant(long term) {
    bool ret = libsbmlPINVOKE.SBO_isReactant(term);
    return ret;
  }

  public static bool isProduct(long term) {
    bool ret = libsbmlPINVOKE.SBO_isProduct(term);
    return ret;
  }

  public static bool isModifier(long term) {
    bool ret = libsbmlPINVOKE.SBO_isModifier(term);
    return ret;
  }

  public static bool isRateLaw(long term) {
    bool ret = libsbmlPINVOKE.SBO_isRateLaw(term);
    return ret;
  }

  public static bool isEvent(long term) {
    bool ret = libsbmlPINVOKE.SBO_isEvent(term);
    return ret;
  }

  public static bool isPhysicalParticipant(long term) {
    bool ret = libsbmlPINVOKE.SBO_isPhysicalParticipant(term);
    return ret;
  }

  public static bool isParticipant(long term) {
    bool ret = libsbmlPINVOKE.SBO_isParticipant(term);
    return ret;
  }

  public static bool isInteraction(long term) {
    bool ret = libsbmlPINVOKE.SBO_isInteraction(term);
    return ret;
  }

  public static bool isEntity(long term) {
    bool ret = libsbmlPINVOKE.SBO_isEntity(term);
    return ret;
  }

  public static bool isFunctionalEntity(long term) {
    bool ret = libsbmlPINVOKE.SBO_isFunctionalEntity(term);
    return ret;
  }

  public static bool isMaterialEntity(long term) {
    bool ret = libsbmlPINVOKE.SBO_isMaterialEntity(term);
    return ret;
  }

  public static bool isConservationLaw(long term) {
    bool ret = libsbmlPINVOKE.SBO_isConservationLaw(term);
    return ret;
  }

  public static bool isSteadyStateExpression(long term) {
    bool ret = libsbmlPINVOKE.SBO_isSteadyStateExpression(term);
    return ret;
  }

  public static bool isFunctionalCompartment(long term) {
    bool ret = libsbmlPINVOKE.SBO_isFunctionalCompartment(term);
    return ret;
  }

  public static bool isContinuousFramework(long term) {
    bool ret = libsbmlPINVOKE.SBO_isContinuousFramework(term);
    return ret;
  }

  public static bool isDiscreteFramework(long term) {
    bool ret = libsbmlPINVOKE.SBO_isDiscreteFramework(term);
    return ret;
  }

  public static bool isLogicalFramework(long term) {
    bool ret = libsbmlPINVOKE.SBO_isLogicalFramework(term);
    return ret;
  }

  public static bool isObselete(long term) {
    bool ret = libsbmlPINVOKE.SBO_isObselete(term);
    return ret;
  }

  public static string intToString(int sboTerm) {
    string ret = libsbmlPINVOKE.SBO_intToString(sboTerm);
    return ret;
  }

  public static int stringToInt(string sboTerm) {
    int ret = libsbmlPINVOKE.SBO_stringToInt(sboTerm);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public static bool checkTerm(string sboTerm) {
    bool ret = libsbmlPINVOKE.SBO_checkTerm__SWIG_0(sboTerm);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public static bool checkTerm(int sboTerm) {
    bool ret = libsbmlPINVOKE.SBO_checkTerm__SWIG_1(sboTerm);
    return ret;
  }

  public SBO() : this(libsbmlPINVOKE.new_SBO(), true) {
  }

}

}
