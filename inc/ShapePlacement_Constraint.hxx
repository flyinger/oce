// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapePlacement_Constraint_HeaderFile
#define _ShapePlacement_Constraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _ShapePlacement_TypeOfConstraint_HeaderFile
#include <ShapePlacement_TypeOfConstraint.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _ShapePlacement_TypeOfAxisConstraint_HeaderFile
#include <ShapePlacement_TypeOfAxisConstraint.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _ShapePlacement_Equation_HeaderFile
#include <ShapePlacement_Equation.hxx>
#endif
class TopoDS_Shape;
class ShapePlacement_Equation;



class ShapePlacement_Constraint  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   ShapePlacement_Constraint();
  
  Standard_EXPORT   ShapePlacement_Constraint(const ShapePlacement_TypeOfConstraint aKey,const TopoDS_Shape& aSubShape,const ShapePlacement_TypeOfAxisConstraint aSubAxis,const TopoDS_Shape& aFixShape,const ShapePlacement_TypeOfAxisConstraint aFixedAxis,const Standard_Real aValue,const Standard_Boolean IsaValue);
  
  Standard_EXPORT   ShapePlacement_Constraint(const Standard_Real anAngularTolerance,const ShapePlacement_TypeOfConstraint aKey,const TopoDS_Shape& aSubShape,const ShapePlacement_TypeOfAxisConstraint aSubAxis,const TopoDS_Shape& aFixShape,const ShapePlacement_TypeOfAxisConstraint aFixedAxis,const Standard_Real aValue,const Standard_Boolean IsaValue);
  
  Standard_EXPORT     void Set(const ShapePlacement_TypeOfConstraint aKey,const TopoDS_Shape& aSubShape,const ShapePlacement_TypeOfAxisConstraint aSubAxis,const TopoDS_Shape& aFixShape,const ShapePlacement_TypeOfAxisConstraint aFixedAxis,const Standard_Real aValue,const Standard_Boolean IsaValue) ;
  
  Standard_EXPORT    const ShapePlacement_Equation& Equation() const;





protected:





private:



ShapePlacement_TypeOfConstraint myKeyWord;
TopoDS_Shape myFixedShape;
ShapePlacement_TypeOfAxisConstraint myFixedAxis;
TopoDS_Shape mySubShape;
ShapePlacement_TypeOfAxisConstraint mySubAxis;
Standard_Real myValue;
Standard_Boolean IsSignificatedValue;
ShapePlacement_Equation myEquation;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif