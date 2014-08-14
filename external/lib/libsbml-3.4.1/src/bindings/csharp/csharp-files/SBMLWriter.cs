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

public class SBMLWriter : IDisposable {
	private HandleRef swigCPtr;
	protected bool swigCMemOwn;
	
	internal SBMLWriter(IntPtr cPtr, bool cMemoryOwn)
	{
		swigCMemOwn = cMemoryOwn;
		swigCPtr    = new HandleRef(this, cPtr);
	}
	
	internal static HandleRef getCPtr(SBMLWriter obj)
	{
		return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
	}
	
	internal static HandleRef getCPtrAndDisown (SBMLWriter obj)
	{
		HandleRef ptr = new HandleRef(null, IntPtr.Zero);
		
		if (obj != null)
		{
			ptr             = obj.swigCPtr;
			obj.swigCMemOwn = false;
		}
		
		return ptr;
	}

  ~SBMLWriter() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          libsbmlPINVOKE.delete_SBMLWriter(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public static bool operator==(SBMLWriter lhs, SBMLWriter rhs)
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

  public static bool operator!=(SBMLWriter lhs, SBMLWriter rhs)
  {
    return !(lhs == rhs);
  }

  public override bool Equals(Object sb)
  {
    if ( ! (sb is SBMLWriter) )
    {
      return false;
    }

    return this == (SBMLWriter)sb;
  }

  public override int GetHashCode()
  {
    return swigCPtr.Handle.ToInt32();
  }

  public SBMLWriter() : this(libsbmlPINVOKE.new_SBMLWriter(), true) {
  }

  public int setProgramName(string name) {
    int ret = libsbmlPINVOKE.SBMLWriter_setProgramName(swigCPtr, name);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public int setProgramVersion(string version) {
    int ret = libsbmlPINVOKE.SBMLWriter_setProgramVersion(swigCPtr, version);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool writeSBML(SBMLDocument d, string filename) {
    bool ret = libsbmlPINVOKE.SBMLWriter_writeSBML__SWIG_0(swigCPtr, SBMLDocument.getCPtr(d), filename);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public bool writeSBML(SBMLDocument d, OStream stream) {
    bool ret = libsbmlPINVOKE.SBMLWriter_writeSBML__SWIG_1(swigCPtr, SBMLDocument.getCPtr(d), SWIGTYPE_p_std__ostream.getCPtr(stream.get_ostream()));
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string writeToString(SBMLDocument d) {
    string ret = libsbmlPINVOKE.SBMLWriter_writeToString(swigCPtr, SBMLDocument.getCPtr(d));
    return ret;
  }

  public bool writeSBMLToFile(SBMLDocument d, string filename) {
    bool ret = libsbmlPINVOKE.SBMLWriter_writeSBMLToFile(swigCPtr, SBMLDocument.getCPtr(d), filename);
    if (libsbmlPINVOKE.SWIGPendingException.Pending) throw libsbmlPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  public string writeSBMLToString(SBMLDocument d) {
    string ret = libsbmlPINVOKE.SBMLWriter_writeSBMLToString(swigCPtr, SBMLDocument.getCPtr(d));
    return ret;
  }

  public static bool hasZlib() {
    bool ret = libsbmlPINVOKE.SBMLWriter_hasZlib();
    return ret;
  }

  public static bool hasBzip2() {
    bool ret = libsbmlPINVOKE.SBMLWriter_hasBzip2();
    return ret;
  }

}

}
