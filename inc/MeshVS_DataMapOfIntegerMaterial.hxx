// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapOfIntegerMaterial_HeaderFile
#define _MeshVS_DataMapOfIntegerMaterial_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MeshVS_DataMapNodeOfDataMapOfIntegerMaterial_HeaderFile
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerMaterial.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class Graphic3d_MaterialAspect;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapNodeOfDataMapOfIntegerMaterial;
class MeshVS_DataMapIteratorOfDataMapOfIntegerMaterial;



class MeshVS_DataMapOfIntegerMaterial  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   MeshVS_DataMapOfIntegerMaterial(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     MeshVS_DataMapOfIntegerMaterial& Assign(const MeshVS_DataMapOfIntegerMaterial& Other) ;
    MeshVS_DataMapOfIntegerMaterial& operator =(const MeshVS_DataMapOfIntegerMaterial& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~MeshVS_DataMapOfIntegerMaterial()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Standard_Integer& K,const Graphic3d_MaterialAspect& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Standard_Integer& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Standard_Integer& K) ;
  
  Standard_EXPORT    const Graphic3d_MaterialAspect& Find(const Standard_Integer& K) const;
   const Graphic3d_MaterialAspect& operator()(const Standard_Integer& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Graphic3d_MaterialAspect& ChangeFind(const Standard_Integer& K) ;
    Graphic3d_MaterialAspect& operator()(const Standard_Integer& K) 
{
  return ChangeFind(K);
}





protected:





private:

  
  Standard_EXPORT   MeshVS_DataMapOfIntegerMaterial(const MeshVS_DataMapOfIntegerMaterial& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif