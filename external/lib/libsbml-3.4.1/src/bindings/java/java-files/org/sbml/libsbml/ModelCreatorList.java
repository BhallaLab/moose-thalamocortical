/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.0
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.sbml.libsbml;

public class ModelCreatorList {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  public ModelCreatorList(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  public static long getCPtr(ModelCreatorList obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        libsbmlJNI.delete_ModelCreatorList(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public ModelCreatorList() {
    this(libsbmlJNI.new_ModelCreatorList(), true);
  }

  public void add(ModelCreator item) {
    libsbmlJNI.ModelCreatorList_add(swigCPtr, this, ModelCreator.getCPtr(item), item);
  }

  public ModelCreator get(long n) {
    long cPtr = libsbmlJNI.ModelCreatorList_get(swigCPtr, this, n);
    return (cPtr == 0) ? null : new ModelCreator(cPtr, false);
  }

  public void prepend(ModelCreator item) {
    libsbmlJNI.ModelCreatorList_prepend(swigCPtr, this, ModelCreator.getCPtr(item), item);
  }

  public ModelCreator remove(long n) {
    long cPtr = libsbmlJNI.ModelCreatorList_remove(swigCPtr, this, n);
    return (cPtr == 0) ? null : new ModelCreator(cPtr, false);
  }

  public long getSize() {
    return libsbmlJNI.ModelCreatorList_getSize(swigCPtr, this);
  }

}
