// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_LevelToPWBLayerMap_HeaderFile
#define _IGESAppli_LevelToPWBLayerMap_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_IGESAppli_LevelToPWBLayerMap.hxx>

#include <Standard_Integer.hxx>
#include <Handle_TColStd_HArray1OfInteger.hxx>
#include <Handle_Interface_HArray1OfHAsciiString.hxx>
#include <IGESData_IGESEntity.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class TColStd_HArray1OfInteger;
class Interface_HArray1OfHAsciiString;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class TCollection_HAsciiString;


//! defines LevelToPWBLayerMap, Type <406> Form <24>
//! in package IGESAppli
//! Used to correlate an exchange file level number with
//! its corresponding native level identifier, physical PWB
//! layer number and predefined functional level
//! identification
class IGESAppli_LevelToPWBLayerMap : public IGESData_IGESEntity
{

public:

  
  Standard_EXPORT IGESAppli_LevelToPWBLayerMap();
  
  //! This method is used to set the fields of the class
  //! LevelToPWBLayerMap
  //! - nbPropVal       : Number of property values
  //! - allExchLevels   : Exchange File Level Numbers
  //! - allNativeLevels : Native Level Identifications
  //! - allPhysLevels   : Physical Layer Numbers
  //! - allExchIdents   : Exchange File Level Identifications
  //! raises exception if allExchLevels, allNativeLevels, allPhysLevels
  //! and all ExchIdents are not of same dimensions
  Standard_EXPORT   void Init (const Standard_Integer nbPropVal, const Handle(TColStd_HArray1OfInteger)& allExchLevels, const Handle(Interface_HArray1OfHAsciiString)& allNativeLevels, const Handle(TColStd_HArray1OfInteger)& allPhysLevels, const Handle(Interface_HArray1OfHAsciiString)& allExchIdents) ;
  
  //! returns number of property values
  Standard_EXPORT   Standard_Integer NbPropertyValues()  const;
  
  //! returns number of level to layer definitions
  Standard_EXPORT   Standard_Integer NbLevelToLayerDefs()  const;
  
  //! returns Exchange File Level Number
  //! raises exception if Index <= 0 or Index > NbLevelToLayerDefs
  Standard_EXPORT   Standard_Integer ExchangeFileLevelNumber (const Standard_Integer Index)  const;
  
  //! returns Native Level Identification
  //! raises exception if Index <= 0 or Index > NbLevelToLayerDefs
  Standard_EXPORT   Handle(TCollection_HAsciiString) NativeLevel (const Standard_Integer Index)  const;
  
  //! returns Physical Layer Number
  //! raises exception if Index <= 0 or Index > NbLevelToLayerDefs
  Standard_EXPORT   Standard_Integer PhysicalLayerNumber (const Standard_Integer Index)  const;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) ExchangeFileLevelIdent (const Standard_Integer Index)  const;




  DEFINE_STANDARD_RTTI(IGESAppli_LevelToPWBLayerMap)

protected:




private: 


  Standard_Integer theNbPropertyValues;
  Handle(TColStd_HArray1OfInteger) theExchangeFileLevelNumber;
  Handle(Interface_HArray1OfHAsciiString) theNativeLevel;
  Handle(TColStd_HArray1OfInteger) thePhysicalLayerNumber;
  Handle(Interface_HArray1OfHAsciiString) theExchangeFileLevelIdent;


};







#endif // _IGESAppli_LevelToPWBLayerMap_HeaderFile
