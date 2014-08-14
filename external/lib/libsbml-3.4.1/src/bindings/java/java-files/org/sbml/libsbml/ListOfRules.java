/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.0
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.sbml.libsbml;

/** 
 * LibSBML implementation of SBML's ListOfRules construct.
 * <p>
 * The various ListOf___ classes in SBML are merely containers used for
 * organizing the main components of an SBML model.  All are derived from
 * the abstract class {@link SBase}, and inherit the various attributes and
 * subelements of {@link SBase}, such as 'metaid' as and 'annotation'.  The
 * ListOf___ classes do not add any attributes of their own.
 * <p>
 * The relationship between the lists and the rest of an SBML model is
 * illustrated by the following (for SBML Level&nbsp;3 and later versions
 * of SBML Level&nbsp;2 as well):
 * <p>
 * <center><img src='listof-illustration.jpg'></center><br>
 * 
 * <p>
 * Readers may wonder about the motivations for using the ListOf___
 * containers.  A simpler approach in XML might be to place the components
 * all directly at the top level of the model definition.  The choice made
 * in SBML is to group them within XML elements named after
 * {@link ListOf}<em>Classname</em>, in part because it helps organize the
 * components.  More importantly, the fact that the container classes are
 * derived from {@link SBase} means that software tools can add information <em>about</em>
 * the lists themselves into each list container's 'annotation'.
 * <p>
 * @see ListOfFunctionDefinitions
 * @see ListOfUnitDefinitions
 * @see ListOfCompartmentTypes
 * @see ListOfSpeciesTypes
 * @see ListOfCompartments
 * @see ListOfSpecies
 * @see ListOfParameters
 * @see ListOfInitialAssignments
 * @see ListOfRules
 * @see ListOfConstraints
 * @see ListOfReactions
 * @see ListOfEvents
 */

public class ListOfRules extends ListOf {
   private long swigCPtr;

   protected ListOfRules(long cPtr, boolean cMemoryOwn)
   {
     super(libsbmlJNI.ListOfRules_SWIGUpcast(cPtr), cMemoryOwn);
     swigCPtr = cPtr;
   }

   protected static long getCPtr(ListOfRules obj)
   {
     return (obj == null) ? 0 : obj.swigCPtr;
   }

   protected static long getCPtrAndDisown (ListOfRules obj)
   {
     long ptr = 0;

     if (obj != null)
     {
       ptr             = obj.swigCPtr;
       obj.swigCMemOwn = false;
     }

     return ptr;
   }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        libsbmlJNI.delete_ListOfRules(swigCPtr);
      }
      swigCPtr = 0;
    }
    super.delete();
  }

  
  /**
   * Creates and returns a deep copy of this {@link ListOfRules} instance.
   * <p>
   * @return a (deep) copy of this {@link ListOfRules}.
   */
 public ListOfRules cloneObject() {
    long cPtr = libsbmlJNI.ListOfRules_cloneObject(swigCPtr, this);
    return (cPtr == 0) ? null : new ListOfRules(cPtr, true);
  }

  
  /**
   * Returns the libSBML type code for this SBML object.
   * <p>
   * LibSBML attaches an identifying code to every
   * kind of SBML object.  These are known as <em>SBML type codes</em>.  In
   * other languages, the set of type codes is stored in an enumeration; in
   * the Java language interface for libSBML, the type codes are defined as
   * static integer constants in the interface class {@link
   * libsbmlConstants}.  The names of the type codes all begin with the
   * characters <code>SBML_.</code> 
   * <p>
   * @return the SBML type code for this object, or {@link  libsbmlConstants#SBML_UNKNOWN SBML_UNKNOWN} (default).
   * <p>
   * @see #getElementName()
   */
 public int getTypeCode() {
    return libsbmlJNI.ListOfRules_getTypeCode(swigCPtr, this);
  }

  
  /**
   * Returns the libSBML type code for the objects contained in this {@link ListOf}
   * (i.e., {@link Rule} objects, if the list is non-empty).
   * <p>
   * LibSBML attaches an identifying code to every
   * kind of SBML object.  These are known as <em>SBML type codes</em>.  In
   * other languages, the set of type codes is stored in an enumeration; in
   * the Java language interface for libSBML, the type codes are defined as
   * static integer constants in the interface class {@link
   * libsbmlConstants}.  The names of the type codes all begin with the
   * characters <code>SBML_.</code> 
   * <p>
   * @return the SBML type code for the objects contained in this {@link ListOf}
   * instance, or {@link  libsbmlConstants#SBML_UNKNOWN SBML_UNKNOWN} (default).
   * <p>
   * @see #getElementName()
   */
 public int getItemTypeCode() {
    return libsbmlJNI.ListOfRules_getItemTypeCode(swigCPtr, this);
  }

  
  /**
   * Returns the XML element name of this object.
   * <p>
   * For {@link ListOfRules}, the XML element name is <code>'listOfRules'.</code>
   * <p>
   * @return the name of this element, i.e., <code>'listOfRules'.</code>
   */
 public String getElementName() {
    return libsbmlJNI.ListOfRules_getElementName(swigCPtr, this);
  }

  
  /**
   * Get a {@link Rule} from the {@link ListOfRules}.
   * <p>
   * @param n the index number of the {@link Rule} to get.
   * <p>
   * @return the nth {@link Rule} in this {@link ListOfRules}.
   * <p>
   * @see #size()
   */
 public Rule get(long n) {
  return (Rule) libsbml.DowncastSBase(libsbmlJNI.ListOfRules_get__SWIG_0(swigCPtr, this, n), false);
}

  
  /**
   * Get a {@link Rule} from the {@link ListOfRules}
   * based on its identifier.
   * <p>
   * @param sid a string representing the identifier 
   * of the {@link Rule} to get.
   * <p>
   * @return {@link Rule} in this {@link ListOfRules}
   * with the given id or <code>null</code> if no such
   * {@link Rule} exists.
   * <p>
   * @see #get(long n)
   * @see #size()
   */
 public Rule get(String sid) {
  return (Rule) libsbml.DowncastSBase(libsbmlJNI.ListOfRules_get__SWIG_2(swigCPtr, this, sid), false);
}

  
  /**
   * Removes the nth item from this {@link ListOfRules} items and returns a pointer to
   * it.
   * <p>
   * The caller owns the returned item and is responsible for deleting it.
   * <p>
   * @param n the index of the item to remove
   * <p>
   * @see #size()
   */
 public Rule remove(long n) {
  return (Rule) libsbml.DowncastSBase(libsbmlJNI.ListOfRules_remove__SWIG_0(swigCPtr, this, n), true);
}

  
  /**
   * Removes item in this {@link ListOfRules} items with the given identifier.
   * <p>
   * The caller owns the returned item and is responsible for deleting it.
   * If none of the items in this list have the identifier <code>sid</code>, then 
   * <code>null</code> is returned.
   * <p>
   * @param sid the identifier of the item to remove
   * <p>
   * @return the item removed.  As mentioned above, the caller owns the
   * returned item.
   */
 public Rule remove(String sid) {
  return (Rule) libsbml.DowncastSBase(libsbmlJNI.ListOfRules_remove__SWIG_1(swigCPtr, this, sid), true);
}

  public ListOfRules() {
    this(libsbmlJNI.new_ListOfRules(), true);
  }

}
