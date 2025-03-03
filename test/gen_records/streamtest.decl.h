#ifndef _DECL_streamtest_H_
#define _DECL_streamtest_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "stream.h"

/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void doneCreatingInput();
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
    /* DECLS: void doneCreatingInput();
     */
    // Entry point registration at startup
    
    static int reg_doneCreatingInput_void();
    // Entry point index lookup
    
    inline static int idx_doneCreatingInput_void() {
      static int epidx = reg_doneCreatingInput_void();
      return epidx;
    }

    
    inline static int idx_doneCreatingInput(void (Main::*)() ) {
      return idx_doneCreatingInput_void();
    }


    
    static int doneCreatingInput() { return idx_doneCreatingInput_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_doneCreatingInput_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_doneCreatingInput_void() {
      static int epidx = reg_redn_wrapper_doneCreatingInput_void();
      return epidx;
    }
    
    static int redn_wrapper_doneCreatingInput(CkReductionMsg* impl_msg) { return idx_redn_wrapper_doneCreatingInput_void(); }
    
    static void _call_redn_wrapper_doneCreatingInput_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_doneCreatingInput_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doneCreatingInput_void(void* impl_msg, void* impl_obj);
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

/* DECLS: void doneCreatingInput();
 */
    
    void doneCreatingInput(const CkEntryOptions *impl_e_opts=NULL);

};
#define Main_SDAG_CODE                                                         \
public:                                                                        \
  void doneCreatingInput();                                                    \
private:                                                                       \
  void doneCreatingInput_end();                                                \
  void _slist_0();                                                             \
  void _slist_0_end();                                                         \
  void _serial_0();                                                            \
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

/* DECLS: array Generators: ArrayElement{
Generators();
Generators(const CProxy_Main &impl_noname_0);
void generateJsonData(int num_record);
Generators(CkMigrateMessage* impl_msg);
};
 */
 class Generators;
 class CkIndex_Generators;
 class CProxy_Generators;
 class CProxyElement_Generators;
 class CProxySection_Generators;
/* --------------- index object ------------------ */
class CkIndex_Generators:public CkIndex_ArrayElement{
  public:
    typedef Generators local_t;
    typedef CkIndex_Generators index_t;
    typedef CProxy_Generators proxy_t;
    typedef CProxyElement_Generators element_t;
    typedef CProxySection_Generators section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Generators();
     */
    // Entry point registration at startup
    
    static int reg_Generators_void();
    // Entry point index lookup
    
    inline static int idx_Generators_void() {
      static int epidx = reg_Generators_void();
      return epidx;
    }

    
    static int ckNew() { return idx_Generators_void(); }
    
    static void _call_Generators_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Generators_void(void* impl_msg, void* impl_obj);
    /* DECLS: Generators(const CProxy_Main &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_Generators_marshall2();
    // Entry point index lookup
    
    inline static int idx_Generators_marshall2() {
      static int epidx = reg_Generators_marshall2();
      return epidx;
    }

    
    static int ckNew(const CProxy_Main &impl_noname_0) { return idx_Generators_marshall2(); }
    
    static void _call_Generators_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Generators_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Generators_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Generators_marshall2(PUP::er &p,void *msg);
    /* DECLS: void generateJsonData(int num_record);
     */
    // Entry point registration at startup
    
    static int reg_generateJsonData_marshall3();
    // Entry point index lookup
    
    inline static int idx_generateJsonData_marshall3() {
      static int epidx = reg_generateJsonData_marshall3();
      return epidx;
    }

    
    inline static int idx_generateJsonData(void (Generators::*)(int num_record) ) {
      return idx_generateJsonData_marshall3();
    }


    
    static int generateJsonData(int num_record) { return idx_generateJsonData_marshall3(); }
    
    static void _call_generateJsonData_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_generateJsonData_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_generateJsonData_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_generateJsonData_marshall3(PUP::er &p,void *msg);
    /* DECLS: Generators(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Generators_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Generators_CkMigrateMessage() {
      static int epidx = reg_Generators_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Generators_CkMigrateMessage(); }
    
    static void _call_Generators_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Generators_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Generators : public CProxyElement_ArrayElement{
  public:
    typedef Generators local_t;
    typedef CkIndex_Generators index_t;
    typedef CProxy_Generators proxy_t;
    typedef CProxyElement_Generators element_t;
    typedef CProxySection_Generators section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_Generators(void) {
    }
    CProxyElement_Generators(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    Generators *ckLocal(void) const
    { return (Generators *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Generators(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Generators(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Generators(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Generators(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: Generators();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: Generators(const CProxy_Main &impl_noname_0);
 */
    
    void insert(const CProxy_Main &impl_noname_0, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void generateJsonData(int num_record);
 */
    
    void generateJsonData(int num_record, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Generators(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Generators : public CProxy_ArrayElement{
  public:
    typedef Generators local_t;
    typedef CkIndex_Generators index_t;
    typedef CProxy_Generators proxy_t;
    typedef CProxyElement_Generators element_t;
    typedef CProxySection_Generators section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_Generators(void) {
    }
    CProxy_Generators(const ArrayElement *e) : CProxy_ArrayElement(e){
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

    // Generalized array indexing:
    CProxyElement_Generators operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_Generators(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Generators operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_Generators(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Generators operator [] (int idx) const 
        {return CProxyElement_Generators(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_Generators operator () (int idx) const 
        {return CProxyElement_Generators(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_Generators(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Generators(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Generators();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: Generators(const CProxy_Main &impl_noname_0);
 */
    
    static CkArrayID ckNew(const CProxy_Main &impl_noname_0, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CProxy_Main &impl_noname_0, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const CProxy_Main &impl_noname_0, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const CProxy_Main &impl_noname_0, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void generateJsonData(int num_record);
 */
    
    void generateJsonData(int num_record, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Generators(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Generators : public CProxySection_ArrayElement{
  public:
    typedef Generators local_t;
    typedef CkIndex_Generators index_t;
    typedef CProxy_Generators proxy_t;
    typedef CProxyElement_Generators element_t;
    typedef CProxySection_Generators section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_Generators(void) {
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
    CProxyElement_Generators operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_Generators(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Generators operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_Generators(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Generators operator [] (int idx) const 
        {return CProxyElement_Generators(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_Generators operator () (int idx) const 
        {return CProxyElement_Generators(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_Generators(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Generators(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Generators(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_Generators(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Generators(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Generators(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Generators(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Generators(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Generators(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_Generators(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Generators(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: Generators();
 */
    

/* DECLS: Generators(const CProxy_Main &impl_noname_0);
 */
    

/* DECLS: void generateJsonData(int num_record);
 */
    
    void generateJsonData(int num_record, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Generators(CkMigrateMessage* impl_msg);
 */

};
#define Generators_SDAG_CODE 
typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_Generators>CBase_Generators;


/* ---------------- method closures -------------- */
class Closure_Main {
  public:


    struct doneCreatingInput_2_closure;

};

/* ---------------- method closures -------------- */
class Closure_Generators {
  public:



    struct generateJsonData_3_closure;


};

extern void _registerstreamtest(void);
extern "C" void CkRegisterMainModule(void);
#endif
