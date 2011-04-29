// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Poly_Triangulation_HeaderFile
#define _Poly_Triangulation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Poly_Triangulation_HeaderFile
#include <Handle_Poly_Triangulation.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _TColgp_Array1OfPnt_HeaderFile
#include <TColgp_Array1OfPnt.hxx>
#endif
#ifndef _Handle_TColgp_HArray1OfPnt2d_HeaderFile
#include <Handle_TColgp_HArray1OfPnt2d.hxx>
#endif
#ifndef _Poly_Array1OfTriangle_HeaderFile
#include <Poly_Array1OfTriangle.hxx>
#endif
#ifndef _Handle_TShort_HArray1OfShortReal_HeaderFile
#include <Handle_TShort_HArray1OfShortReal.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TColgp_HArray1OfPnt2d;
class TShort_HArray1OfShortReal;
class Standard_DomainError;
class Standard_NullObject;
class TColgp_Array1OfPnt;
class Poly_Array1OfTriangle;
class TColgp_Array1OfPnt2d;
class TShort_Array1OfShortReal;


//! Provides a triangulation for a surface, a set of surfaces, or <br>
//! more generally a shape. <br>
//! A triangulation consists of an approximate representation <br>
//! of the actual shape, using a collection of points and <br>
//! triangles. The points are located on the surface. The <br>
//! edges of the triangles connect adjacent points with a <br>
//! straight line that approximates the true curve on the surface. <br>
//! A triangulation comprises: <br>
//! -   A table of 3D nodes (3D points on the surface). <br>
//! -   A table of triangles. Each triangle (Poly_Triangle <br>
//!   object) comprises a triplet of indices in the table of 3D <br>
//!   nodes specific to the triangulation. <br>
//! -   A table of 2D nodes (2D points), parallel to the table of <br>
//!   3D nodes. This table is optional. If it exists, the <br>
//!   coordinates of a 2D point are the (u, v) parameters <br>
//!   of the corresponding 3D point on the surface <br>
//!   approximated by the triangulation. <br>
//! -   A deflection (optional), which maximizes the distance <br>
//!   from a point on the surface to the corresponding point <br>
//!   on its approximate triangulation. <br>
//! In many cases, algorithms do not need to work with the <br>
//! exact representation of a surface. A triangular <br>
//! representation induces simpler and more robust adjusting, <br>
//! faster performances, and the results are as good. <br>
class Poly_Triangulation : public MMgt_TShared {

public:

  //! Constructs a triangulation from a set of triangles. The <br>
//! triangulation is initialized without a triangle or a node, but capable of <br>
//!   containing nbNodes nodes, and nbTriangles <br>
//!   triangles. Here the UVNodes flag indicates whether <br>
//!   2D nodes will be associated with 3D ones, (i.e. to <br>
//!   enable a 2D representation). <br>
  Standard_EXPORT   Poly_Triangulation(const Standard_Integer nbNodes,const Standard_Integer nbTriangles,const Standard_Boolean UVNodes);
  //! Constructs a triangulation from a set of triangles. The <br>
//! triangulation is initialized with 3D points from Nodes and triangles <br>
//!  from Triangles. <br>
  Standard_EXPORT   Poly_Triangulation(const TColgp_Array1OfPnt& Nodes,const Poly_Array1OfTriangle& Triangles);
  //!  Constructs a triangulation from a set of triangles. The <br>
//! triangulation is initialized with 3D points from Nodes, 2D points from <br>
//!   UVNodes and triangles from Triangles, where <br>
//!   coordinates of a 2D point from UVNodes are the <br>
//!   (u, v) parameters of the corresponding 3D point <br>
//!   from Nodes on the surface approximated by the <br>
//!   constructed triangulation. <br>
  Standard_EXPORT   Poly_Triangulation(const TColgp_Array1OfPnt& Nodes,const TColgp_Array1OfPnt2d& UVNodes,const Poly_Array1OfTriangle& Triangles);
  //! Returns the deflection of this triangulation. <br>
  Standard_EXPORT     Standard_Real Deflection() const;
  //! Sets the deflection of this triangulation to D. <br>
//!    See more on deflection in Polygon2D <br>
  Standard_EXPORT     void Deflection(const Standard_Real D) ;
  //! Deallocates the UV nodes. <br>
  Standard_EXPORT     void RemoveUVNodes() ;
  //! Returns the number of nodes for this triangulation. <br>
//! Null if the nodes are not yet defined. <br>
        Standard_Integer NbNodes() const;
  //! Returns the number of triangles for this triangulation. <br>
//! Null if the Triangles are not yet defined. <br>
        Standard_Integer NbTriangles() const;
  //! Returns true if 2D nodes are associated with 3D nodes for <br>
//! this triangulation. <br>
        Standard_Boolean HasUVNodes() const;
  //!  Returns the table of 3D nodes (3D points) for this triangulation. <br>
  Standard_EXPORT    const TColgp_Array1OfPnt& Nodes() const;
  //!  Returns the table of 3D nodes (3D points) for this triangulation. <br>
//!        The returned array is <br>
//! shared. Therefore if the table is selected by reference, you <br>
//! can, by simply modifying it, directly modify the data <br>
//! structure of this triangulation. <br>
  Standard_EXPORT     TColgp_Array1OfPnt& ChangeNodes() ;
  //! Returns the table of 2D nodes (2D points) associated with <br>
//! each 3D node of this triangulation. <br>
//! The function HasUVNodes  checks if 2D nodes <br>
//! are associated with the 3D nodes of this triangulation. <br>
//! Const reference on the 2d nodes values. <br>
  Standard_EXPORT    const TColgp_Array1OfPnt2d& UVNodes() const;
  //! Returns the table of 2D nodes (2D points) associated with <br>
//! each 3D node of this triangulation. <br>
//! Function ChangeUVNodes shares  the returned array. <br>
//!   Therefore if the table is selected by reference, <br>
//!   you can, by simply modifying it, directly modify the data <br>
//!   structure of this triangulation. <br>
  Standard_EXPORT     TColgp_Array1OfPnt2d& ChangeUVNodes() ;
  //! Returns the table of triangles for this triangulation. <br>
  Standard_EXPORT    const Poly_Array1OfTriangle& Triangles() const;
  //!  Returns the table of triangles for this triangulation. <br>
//! Function ChangeUVNodes shares  the returned array. <br>
//!   Therefore if the table is selected by reference, <br>
//!   you can, by simply modifying it, directly modify the data <br>
//!   structure of this triangulation. <br>
  Standard_EXPORT     Poly_Array1OfTriangle& ChangeTriangles() ;
  //!  Sets the table of node normals. <br>
//! raises exception if length of theNormals != 3*NbNodes <br>
  Standard_EXPORT     void SetNormals(const Handle(TShort_HArray1OfShortReal)& theNormals) ;
  
  Standard_EXPORT    const TShort_Array1OfShortReal& Normals() const;
  
  Standard_EXPORT     TShort_Array1OfShortReal& ChangeNormals() ;
  
  Standard_EXPORT     Standard_Boolean HasNormals() const;




  DEFINE_STANDARD_RTTI(Poly_Triangulation)

protected:




private: 


Standard_Real myDeflection;
Standard_Integer myNbNodes;
Standard_Integer myNbTriangles;
TColgp_Array1OfPnt myNodes;
Handle_TColgp_HArray1OfPnt2d myUVNodes;
Poly_Array1OfTriangle myTriangles;
Handle_TShort_HArray1OfShortReal myNormals;


};


#include <Poly_Triangulation.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif