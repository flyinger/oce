// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_HArray2OfXYZ_HeaderFile
#define _TColgp_HArray2OfXYZ_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TColgp_HArray2OfXYZ_HeaderFile
#include <Handle_TColgp_HArray2OfXYZ.hxx>
#endif

#ifndef _TColgp_Array2OfXYZ_HeaderFile
#include <TColgp_Array2OfXYZ.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_RangeError;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class Standard_DimensionMismatch;
class gp_XYZ;
class TColgp_Array2OfXYZ;



class TColgp_HArray2OfXYZ : public MMgt_TShared {

public:

  
  Standard_EXPORT   TColgp_HArray2OfXYZ(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2);
  
  Standard_EXPORT   TColgp_HArray2OfXYZ(const Standard_Integer R1,const Standard_Integer R2,const Standard_Integer C1,const Standard_Integer C2,const gp_XYZ& V);
  
  Standard_EXPORT     void Init(const gp_XYZ& V) ;
  
        Standard_Integer ColLength() const;
  
        Standard_Integer RowLength() const;
  
        Standard_Integer LowerCol() const;
  
        Standard_Integer LowerRow() const;
  
        Standard_Integer UpperCol() const;
  
        Standard_Integer UpperRow() const;
  
        void SetValue(const Standard_Integer Row,const Standard_Integer Col,const gp_XYZ& Value) ;
  
  Standard_EXPORT    const gp_XYZ& Value(const Standard_Integer Row,const Standard_Integer Col) const;
  
  Standard_EXPORT     gp_XYZ& ChangeValue(const Standard_Integer Row,const Standard_Integer Col) ;
  
       const TColgp_Array2OfXYZ& Array2() const;
  
        TColgp_Array2OfXYZ& ChangeArray2() ;




  DEFINE_STANDARD_RTTI(TColgp_HArray2OfXYZ)

protected:




private: 


TColgp_Array2OfXYZ myArray;


};

#define ItemHArray2 gp_XYZ
#define ItemHArray2_hxx <gp_XYZ.hxx>
#define TheArray2 TColgp_Array2OfXYZ
#define TheArray2_hxx <TColgp_Array2OfXYZ.hxx>
#define TCollection_HArray2 TColgp_HArray2OfXYZ
#define TCollection_HArray2_hxx <TColgp_HArray2OfXYZ.hxx>
#define Handle_TCollection_HArray2 Handle_TColgp_HArray2OfXYZ
#define TCollection_HArray2_Type_() TColgp_HArray2OfXYZ_Type_()

#include <TCollection_HArray2.lxx>

#undef ItemHArray2
#undef ItemHArray2_hxx
#undef TheArray2
#undef TheArray2_hxx
#undef TCollection_HArray2
#undef TCollection_HArray2_hxx
#undef Handle_TCollection_HArray2
#undef TCollection_HArray2_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif