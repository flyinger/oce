// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepToGeom_MakeParabola_HeaderFile
#define _StepToGeom_MakeParabola_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepGeom_Parabola_HeaderFile
#include <Handle_StepGeom_Parabola.hxx>
#endif
#ifndef _Handle_Geom_Parabola_HeaderFile
#include <Handle_Geom_Parabola.hxx>
#endif
class StepGeom_Parabola;
class Geom_Parabola;


//! This class implements the mapping between classes <br>
//!          Parabola from StepGeom which describes a Parabola from <br>
//!          Prostep and Parabola from Geom. <br>
class StepToGeom_MakeParabola  {
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

  
  Standard_EXPORT   static  Standard_Boolean Convert(const Handle(StepGeom_Parabola)& SC,Handle(Geom_Parabola)& CC) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif