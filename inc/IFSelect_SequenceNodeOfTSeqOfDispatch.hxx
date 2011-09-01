// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_SequenceNodeOfTSeqOfDispatch_HeaderFile
#define _IFSelect_SequenceNodeOfTSeqOfDispatch_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IFSelect_SequenceNodeOfTSeqOfDispatch_HeaderFile
#include <Handle_IFSelect_SequenceNodeOfTSeqOfDispatch.hxx>
#endif

#ifndef _Handle_IFSelect_Dispatch_HeaderFile
#include <Handle_IFSelect_Dispatch.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class IFSelect_Dispatch;
class IFSelect_TSeqOfDispatch;



class IFSelect_SequenceNodeOfTSeqOfDispatch : public TCollection_SeqNode {

public:

  
      IFSelect_SequenceNodeOfTSeqOfDispatch(const Handle(IFSelect_Dispatch)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_IFSelect_Dispatch& Value() const;




  DEFINE_STANDARD_RTTI(IFSelect_SequenceNodeOfTSeqOfDispatch)

protected:




private: 


Handle_IFSelect_Dispatch myValue;


};

#define SeqItem Handle_IFSelect_Dispatch
#define SeqItem_hxx <IFSelect_Dispatch.hxx>
#define TCollection_SequenceNode IFSelect_SequenceNodeOfTSeqOfDispatch
#define TCollection_SequenceNode_hxx <IFSelect_SequenceNodeOfTSeqOfDispatch.hxx>
#define Handle_TCollection_SequenceNode Handle_IFSelect_SequenceNodeOfTSeqOfDispatch
#define TCollection_SequenceNode_Type_() IFSelect_SequenceNodeOfTSeqOfDispatch_Type_()
#define TCollection_Sequence IFSelect_TSeqOfDispatch
#define TCollection_Sequence_hxx <IFSelect_TSeqOfDispatch.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif