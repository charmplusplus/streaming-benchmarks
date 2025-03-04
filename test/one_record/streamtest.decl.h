#ifndef _DECL_streamtest_H_
#define _DECL_streamtest_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "stream.h"

/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void streamMade(Ck::Stream::StreamIdMessage* impl_msg);
};
 */
 class Main;
 class CkIndex_Main;
 class CProxy_Main;
/* --------------- index object ------------------ */
class CkIndex_Main:public CkIndex_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Main(CkArgMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Main_CkArgMsg();
    // Entry point index lookup
    
    inline static int idx_Main_CkArgMsg() {
      static int epidx = reg_Main_CkArgMsg();
      return epidx;
    }

    
    static int ckNew(CkArgMsg* impl_msg) { return idx_Main_CkArgMsg(); }
    
    static void _call_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Main_CkArgMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void streamMade(Ck::Stream::StreamIdMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_streamMade_StreamIdMessage();
    // Entry point index lookup
    
    inline static int idx_streamMade_StreamIdMessage() {
      static int epidx = reg_streamMade_StreamIdMessage();
      return epidx;
    }

    
    inline static int idx_streamMade(void (Main::*)(Ck::Stream::StreamIdMessage* impl_msg) ) {
      return idx_streamMade_StreamIdMessage();
    }


    
    static int streamMade(Ck::Stream::StreamIdMessage* impl_msg) { return idx_streamMade_StreamIdMessage(); }
    
    static void _call_streamMade_StreamIdMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_streamMade_StreamIdMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
class CProxy_Main:public CProxy_Chare{
  public:
    typedef Main local_t;
    typedef CkIndex_Main index_t;
    typedef CProxy_Main proxy_t;
    typedef CProxy_Main element_t;

    CProxy_Main(void) {};
    CProxy_Main(CkChareID __cid) : CProxy_Chare(__cid){  }
    CProxy_Main(const Chare *c) : CProxy_Chare(c){  }

    int ckIsDelegated(void) const
    { return CProxy_Chare::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_Chare::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_Chare::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_Chare::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_Chare::ckCheck(); }
    const CkChareID &ckGetChareID(void) const
    { return CProxy_Chare::ckGetChareID(); }
    operator const CkChareID &(void) const
    { return ckGetChareID(); }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_Chare::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_Chare::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_Chare::pup(p);
    }

    void ckSetChareID(const CkChareID &c)
    {      CProxy_Chare::ckSetChareID(c); }
    Main *ckLocal(void) const
    { return (Main *)CkLocalChare(&ckGetChareID()); }
/* DECLS: Main(CkArgMsg* impl_msg);
 */
    static CkChareID ckNew(CkArgMsg* impl_msg, int onPE=CK_PE_ANY);
    static void ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int onPE=CK_PE_ANY);

/* DECLS: void streamMade(Ck::Stream::StreamIdMessage* impl_msg);
 */
    
    void streamMade(Ck::Stream::StreamIdMessage* impl_msg);

};
#define Main_SDAG_CODE                                                         \
public:                                                                        \
  void streamMade(Ck::Stream::StreamIdMessage msg);                            \
  void streamMade(Ck::Stream::StreamIdMessage* gen0);                          \
private:                                                                       \
  void streamMade_end(Ck::Stream::StreamIdMessage* gen0);                      \
  void _slist_0(Ck::Stream::StreamIdMessage* gen0);                            \
  void _slist_0_end(Ck::Stream::StreamIdMessage* gen0);                        \
  void _serial_0(Ck::Stream::StreamIdMessage* gen0);                           \
public:                                                                        \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_Main_serial_0();                                        \
  static int _sdag_reg_Main_serial_0();                                        \

typedef CBaseT1<Chare, CProxy_Main>CBase_Main;

/* DECLS: array Producers: ArrayElement{
Producers(const StreamToken &stream);
void doneWriting();
Producers(CkMigrateMessage* impl_msg);
};
 */
 class Producers;
 class CkIndex_Producers;
 class CProxy_Producers;
 class CProxyElement_Producers;
 class CProxySection_Producers;
/* --------------- index object ------------------ */
class CkIndex_Producers:public CkIndex_ArrayElement{
  public:
    typedef Producers local_t;
    typedef CkIndex_Producers index_t;
    typedef CProxy_Producers proxy_t;
    typedef CProxyElement_Producers element_t;
    typedef CProxySection_Producers section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Producers(const StreamToken &stream);
     */
    // Entry point registration at startup
    
    static int reg_Producers_marshall1();
    // Entry point index lookup
    
    inline static int idx_Producers_marshall1() {
      static int epidx = reg_Producers_marshall1();
      return epidx;
    }

    
    static int ckNew(const StreamToken &stream) { return idx_Producers_marshall1(); }
    
    static void _call_Producers_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Producers_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Producers_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Producers_marshall1(PUP::er &p,void *msg);
    /* DECLS: void doneWriting();
     */
    // Entry point registration at startup
    
    static int reg_doneWriting_void();
    // Entry point index lookup
    
    inline static int idx_doneWriting_void() {
      static int epidx = reg_doneWriting_void();
      return epidx;
    }

    
    inline static int idx_doneWriting(void (Producers::*)() ) {
      return idx_doneWriting_void();
    }


    
    static int doneWriting() { return idx_doneWriting_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_doneWriting_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_doneWriting_void() {
      static int epidx = reg_redn_wrapper_doneWriting_void();
      return epidx;
    }
    
    static int redn_wrapper_doneWriting(CkReductionMsg* impl_msg) { return idx_redn_wrapper_doneWriting_void(); }
    
    static void _call_redn_wrapper_doneWriting_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_doneWriting_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doneWriting_void(void* impl_msg, void* impl_obj);
    /* DECLS: Producers(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Producers_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Producers_CkMigrateMessage() {
      static int epidx = reg_Producers_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Producers_CkMigrateMessage(); }
    
    static void _call_Producers_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Producers_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Producers : public CProxyElement_ArrayElement{
  public:
    typedef Producers local_t;
    typedef CkIndex_Producers index_t;
    typedef CProxy_Producers proxy_t;
    typedef CProxyElement_Producers element_t;
    typedef CProxySection_Producers section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_Producers(void) {
    }
    CProxyElement_Producers(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    Producers *ckLocal(void) const
    { return (Producers *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Producers(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Producers(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Producers(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Producers(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: Producers(const StreamToken &stream);
 */
    
    void insert(const StreamToken &stream, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void doneWriting();
 */
    
    void doneWriting(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Producers(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Producers : public CProxy_ArrayElement{
  public:
    typedef Producers local_t;
    typedef CkIndex_Producers index_t;
    typedef CProxy_Producers proxy_t;
    typedef CProxyElement_Producers element_t;
    typedef CProxySection_Producers section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_Producers(void) {
    }
    CProxy_Producers(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_Producers operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_Producers(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Producers operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_Producers(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Producers operator [] (int idx) const 
        {return CProxyElement_Producers(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_Producers operator () (int idx) const 
        {return CProxyElement_Producers(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_Producers(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Producers(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Producers(const StreamToken &stream);
 */
    
    static CkArrayID ckNew(const StreamToken &stream, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const StreamToken &stream, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const StreamToken &stream, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const StreamToken &stream, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void doneWriting();
 */
    
    void doneWriting(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Producers(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Producers : public CProxySection_ArrayElement{
  public:
    typedef Producers local_t;
    typedef CkIndex_Producers index_t;
    typedef CProxy_Producers proxy_t;
    typedef CProxyElement_Producers element_t;
    typedef CProxySection_Producers section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_Producers(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Producers operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_Producers(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Producers operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_Producers(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Producers operator [] (int idx) const 
        {return CProxyElement_Producers(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_Producers operator () (int idx) const 
        {return CProxyElement_Producers(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex1D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.emplace_back(i);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_Producers(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Producers(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Producers(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_Producers(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Producers(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Producers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Producers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Producers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Producers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_Producers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Producers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: Producers(const StreamToken &stream);
 */
    

/* DECLS: void doneWriting();
 */
    
    void doneWriting(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Producers(CkMigrateMessage* impl_msg);
 */

};
#define Producers_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_Producers>CBase_Producers;

/* DECLS: array Consumers: ArrayElement{
Consumers(const StreamToken &stream);
void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishReading();
Consumers(CkMigrateMessage* impl_msg);
};
 */
 class Consumers;
 class CkIndex_Consumers;
 class CProxy_Consumers;
 class CProxyElement_Consumers;
 class CProxySection_Consumers;
/* --------------- index object ------------------ */
class CkIndex_Consumers:public CkIndex_ArrayElement{
  public:
    typedef Consumers local_t;
    typedef CkIndex_Consumers index_t;
    typedef CProxy_Consumers proxy_t;
    typedef CProxyElement_Consumers element_t;
    typedef CProxySection_Consumers section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Consumers(const StreamToken &stream);
     */
    // Entry point registration at startup
    
    static int reg_Consumers_marshall1();
    // Entry point index lookup
    
    inline static int idx_Consumers_marshall1() {
      static int epidx = reg_Consumers_marshall1();
      return epidx;
    }

    
    static int ckNew(const StreamToken &stream) { return idx_Consumers_marshall1(); }
    
    static void _call_Consumers_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Consumers_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Consumers_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Consumers_marshall1(PUP::er &p,void *msg);
    /* DECLS: void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvData_StreamDeliveryMsg();
    // Entry point index lookup
    
    inline static int idx_recvData_StreamDeliveryMsg() {
      static int epidx = reg_recvData_StreamDeliveryMsg();
      return epidx;
    }

    
    inline static int idx_recvData(void (Consumers::*)(Ck::Stream::StreamDeliveryMsg* impl_msg) ) {
      return idx_recvData_StreamDeliveryMsg();
    }


    
    static int recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) { return idx_recvData_StreamDeliveryMsg(); }
    
    static void _call_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj);
    /* DECLS: void finishReading();
     */
    // Entry point registration at startup
    
    static int reg_finishReading_void();
    // Entry point index lookup
    
    inline static int idx_finishReading_void() {
      static int epidx = reg_finishReading_void();
      return epidx;
    }

    
    inline static int idx_finishReading(void (Consumers::*)() ) {
      return idx_finishReading_void();
    }


    
    static int finishReading() { return idx_finishReading_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_finishReading_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_finishReading_void() {
      static int epidx = reg_redn_wrapper_finishReading_void();
      return epidx;
    }
    
    static int redn_wrapper_finishReading(CkReductionMsg* impl_msg) { return idx_redn_wrapper_finishReading_void(); }
    
    static void _call_redn_wrapper_finishReading_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_finishReading_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishReading_void(void* impl_msg, void* impl_obj);
    /* DECLS: Consumers(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Consumers_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Consumers_CkMigrateMessage() {
      static int epidx = reg_Consumers_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Consumers_CkMigrateMessage(); }
    
    static void _call_Consumers_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Consumers_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Consumers : public CProxyElement_ArrayElement{
  public:
    typedef Consumers local_t;
    typedef CkIndex_Consumers index_t;
    typedef CProxy_Consumers proxy_t;
    typedef CProxyElement_Consumers element_t;
    typedef CProxySection_Consumers section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_Consumers(void) {
    }
    CProxyElement_Consumers(const ArrayElement *e) : CProxyElement_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxyElement_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxyElement_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxyElement_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxyElement_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxyElement_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxyElement_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxyElement_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxyElement_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxyElement_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxyElement_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxyElement_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxyElement_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxyElement_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxyElement_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxyElement_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxyElement_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxyElement_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxyElement_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxyElement_ArrayElement::ckSetReductionClient(cb); }

    inline void ckInsert(CkArrayMessage *m,int ctor,int onPe)
    { CProxyElement_ArrayElement::ckInsert(m,ctor,onPe); }
    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0) const
    { CProxyElement_ArrayElement::ckSend(m,ep,opts); }
    inline void *ckSendSync(CkArrayMessage *m, int ep) const
    { return CProxyElement_ArrayElement::ckSendSync(m,ep); }
    inline const CkArrayIndex &ckGetIndex() const
    { return CProxyElement_ArrayElement::ckGetIndex(); }

    Consumers *ckLocal(void) const
    { return (Consumers *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Consumers(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Consumers(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Consumers(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Consumers(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: Consumers(const StreamToken &stream);
 */
    
    void insert(const StreamToken &stream, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishReading();
 */
    
    void finishReading(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Consumers(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Consumers : public CProxy_ArrayElement{
  public:
    typedef Consumers local_t;
    typedef CkIndex_Consumers index_t;
    typedef CProxy_Consumers proxy_t;
    typedef CProxyElement_Consumers element_t;
    typedef CProxySection_Consumers section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_Consumers(void) {
    }
    CProxy_Consumers(const ArrayElement *e) : CProxy_ArrayElement(e){
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxy_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxy_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxy_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxy_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxy_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxy_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxy_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxy_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxy_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxy_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxy_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxy_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxy_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxy_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxy_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxy_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxy_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxy_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxy_ArrayElement::ckSetReductionClient(cb); }

    // Empty array construction
    static CkArrayID ckNew(CkArrayOptions opts = CkArrayOptions()) { return ckCreateEmptyArray(opts); }
    static void      ckNew(CkCallback cb, CkArrayOptions opts = CkArrayOptions()) { ckCreateEmptyArrayAsync(cb, opts); }

    // Generalized array indexing:
    CProxyElement_Consumers operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_Consumers(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Consumers operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_Consumers(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Consumers operator [] (int idx) const 
        {return CProxyElement_Consumers(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_Consumers operator () (int idx) const 
        {return CProxyElement_Consumers(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_Consumers(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Consumers(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Consumers(const StreamToken &stream);
 */
    
    static CkArrayID ckNew(const StreamToken &stream, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const StreamToken &stream, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const StreamToken &stream, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const StreamToken &stream, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishReading();
 */
    
    void finishReading(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Consumers(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Consumers : public CProxySection_ArrayElement{
  public:
    typedef Consumers local_t;
    typedef CkIndex_Consumers index_t;
    typedef CProxy_Consumers proxy_t;
    typedef CProxyElement_Consumers element_t;
    typedef CProxySection_Consumers section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_Consumers(void) {
    }

    void ckDelegate(CkDelegateMgr *dTo,CkDelegateData *dPtr=NULL)
    {       CProxySection_ArrayElement::ckDelegate(dTo,dPtr); }
    void ckUndelegate(void)
    {       CProxySection_ArrayElement::ckUndelegate(); }
    void pup(PUP::er &p)
    {       CProxySection_ArrayElement::pup(p);
    }

    int ckIsDelegated(void) const
    { return CProxySection_ArrayElement::ckIsDelegated(); }
    inline CkDelegateMgr *ckDelegatedTo(void) const
    { return CProxySection_ArrayElement::ckDelegatedTo(); }
    inline CkDelegateData *ckDelegatedPtr(void) const
    { return CProxySection_ArrayElement::ckDelegatedPtr(); }
    CkGroupID ckDelegatedIdx(void) const
    { return CProxySection_ArrayElement::ckDelegatedIdx(); }

    inline void ckCheck(void) const
    { CProxySection_ArrayElement::ckCheck(); }
    inline operator CkArrayID () const
    { return ckGetArrayID(); }
    inline CkArrayID ckGetArrayID(void) const
    { return CProxySection_ArrayElement::ckGetArrayID(); }
    inline CkArray *ckLocalBranch(void) const
    { return CProxySection_ArrayElement::ckLocalBranch(); }
    inline CkLocMgr *ckLocMgr(void) const
    { return CProxySection_ArrayElement::ckLocMgr(); }

    inline static CkArrayID ckCreateEmptyArray(CkArrayOptions opts = CkArrayOptions())
    { return CProxySection_ArrayElement::ckCreateEmptyArray(opts); }
    inline static void ckCreateEmptyArrayAsync(CkCallback cb, CkArrayOptions opts = CkArrayOptions())
    { CProxySection_ArrayElement::ckCreateEmptyArrayAsync(cb, opts); }
    inline static CkArrayID ckCreateArray(CkArrayMessage *m,int ctor,const CkArrayOptions &opts)
    { return CProxySection_ArrayElement::ckCreateArray(m,ctor,opts); }
    inline void ckInsertIdx(CkArrayMessage *m,int ctor,int onPe,const CkArrayIndex &idx)
    { CProxySection_ArrayElement::ckInsertIdx(m,ctor,onPe,idx); }
    inline void doneInserting(void)
    { CProxySection_ArrayElement::doneInserting(); }

    inline void ckBroadcast(CkArrayMessage *m, int ep, int opts=0) const
    { CProxySection_ArrayElement::ckBroadcast(m,ep,opts); }
    inline void setReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::setReductionClient(fn,param); }
    inline void ckSetReductionClient(CkReductionClientFn fn,void *param=NULL) const
    { CProxySection_ArrayElement::ckSetReductionClient(fn,param); }
    inline void ckSetReductionClient(CkCallback *cb) const
    { CProxySection_ArrayElement::ckSetReductionClient(cb); }

    inline void ckSend(CkArrayMessage *m, int ep, int opts = 0)
    { CProxySection_ArrayElement::ckSend(m,ep,opts); }
    inline CkSectionInfo &ckGetSectionInfo()
    { return CProxySection_ArrayElement::ckGetSectionInfo(); }
    inline CkSectionID *ckGetSectionIDs()
    { return CProxySection_ArrayElement::ckGetSectionIDs(); }
    inline CkSectionID &ckGetSectionID()
    { return CProxySection_ArrayElement::ckGetSectionID(); }
    inline CkSectionID &ckGetSectionID(int i)
    { return CProxySection_ArrayElement::ckGetSectionID(i); }
    inline CkArrayID ckGetArrayIDn(int i) const
    { return CProxySection_ArrayElement::ckGetArrayIDn(i); } 
    inline CkArrayIndex *ckGetArrayElements() const
    { return CProxySection_ArrayElement::ckGetArrayElements(); }
    inline CkArrayIndex *ckGetArrayElements(int i) const
    { return CProxySection_ArrayElement::ckGetArrayElements(i); }
    inline int ckGetNumElements() const
    { return CProxySection_ArrayElement::ckGetNumElements(); } 
    inline int ckGetNumElements(int i) const
    { return CProxySection_ArrayElement::ckGetNumElements(i); }    // Generalized array indexing:
    CProxyElement_Consumers operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_Consumers(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Consumers operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_Consumers(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Consumers operator [] (int idx) const 
        {return CProxyElement_Consumers(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_Consumers operator () (int idx) const 
        {return CProxyElement_Consumers(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex1D *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex1D> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      return CkSectionID(aid, elems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, int l, int u, int s, int factor=USE_DEFAULT_BRANCH_FACTOR) {
      std::vector<CkArrayIndex1D> al;
      for (int i=l; i<=u; i+=s) al.emplace_back(i);
      return CkSectionID(aid, al, factor);
    } 
    CProxySection_Consumers(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Consumers(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Consumers(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_Consumers(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Consumers(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Consumers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Consumers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Consumers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Consumers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_Consumers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Consumers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems) {
      return CkSectionID(aid, elems, nElems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems) {
       return CkSectionID(aid, elems);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor) {
      return CkSectionID(aid, elems, nElems, factor);
    } 
    static CkSectionID ckNew(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor) {
      return CkSectionID(aid, elems, factor);
    } 
    void ckAutoDelegate(int opts=1) {
      if(ckIsDelegated()) return;
      CProxySection_ArrayElement::ckAutoDelegate(opts);
    } 
    void setReductionClient(CkCallback *cb) {
      CProxySection_ArrayElement::setReductionClient(cb);
    } 
    void resetSection() {
      CProxySection_ArrayElement::resetSection();
    } 
    static void contribute(CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData=-1, int fragSize=-1);
    static void contribute(CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    static void contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
    template <typename T>
    static void contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData=-1, int fragSize=-1);
/* DECLS: Consumers(const StreamToken &stream);
 */
    

/* DECLS: void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishReading();
 */
    
    void finishReading(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Consumers(CkMigrateMessage* impl_msg);
 */

};
#define Consumers_SDAG_CODE                                                    \
public:                                                                        \
  void recvData(Ck::Stream::StreamDeliveryMsg msg);                            \
  void recvData(Ck::Stream::StreamDeliveryMsg* gen0);                          \
private:                                                                       \
  void recvData_end(Ck::Stream::StreamDeliveryMsg* gen0);                      \
  void _slist_0(Ck::Stream::StreamDeliveryMsg* gen0);                          \
  void _slist_0_end(Ck::Stream::StreamDeliveryMsg* gen0);                      \
  void _serial_0(Ck::Stream::StreamDeliveryMsg* gen0);                         \
public:                                                                        \
  void finishReading();                                                        \
private:                                                                       \
  void finishReading_end();                                                    \
  void _slist_1();                                                             \
  void _slist_1_end();                                                         \
  void _serial_1();                                                            \
public:                                                                        \
public:                                                                        \
  SDAG::dep_ptr __dep;                                                         \
  void _sdag_init();                                                           \
  void __sdag_init();                                                          \
public:                                                                        \
  void _sdag_pup(PUP::er &p);                                                  \
  void __sdag_pup(PUP::er &p) { }                                              \
  static void __sdag_register();                                               \
  static int _sdag_idx_Consumers_serial_0();                                   \
  static int _sdag_reg_Consumers_serial_0();                                   \
  static int _sdag_idx_Consumers_serial_1();                                   \
  static int _sdag_reg_Consumers_serial_1();                                   \

typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_Consumers>CBase_Consumers;


/* ---------------- method closures -------------- */
class Closure_Main {
  public:


};

/* ---------------- method closures -------------- */
class Closure_Producers {
  public:


    struct doneWriting_2_closure;


};

/* ---------------- method closures -------------- */
class Closure_Consumers {
  public:



    struct finishReading_3_closure;


};

extern void _registerstreamtest(void);
extern "C" void CkRegisterMainModule(void);
#endif
