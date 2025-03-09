#ifndef _DECL_streamtest_H_
#define _DECL_streamtest_H_
#include "charm++.h"
#include "envelope.h"
#include <memory>
#include "sdag.h"
#include "stream.h"

/* DECLS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void readersValidatorsStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
void validatorsFiltersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
void filtersTransformersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
void transformersWritersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
void getEndTime();
void getEndTimeAndExit();
void doneCreatingData(int total_records);
void doneReceivingInput();
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
    /* DECLS: void readersValidatorsStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_readersValidatorsStreamMade_StreamIdMessage();
    // Entry point index lookup
    
    inline static int idx_readersValidatorsStreamMade_StreamIdMessage() {
      static int epidx = reg_readersValidatorsStreamMade_StreamIdMessage();
      return epidx;
    }

    
    inline static int idx_readersValidatorsStreamMade(void (Main::*)(Ck::Stream::StreamIdMessage* impl_msg) ) {
      return idx_readersValidatorsStreamMade_StreamIdMessage();
    }


    
    static int readersValidatorsStreamMade(Ck::Stream::StreamIdMessage* impl_msg) { return idx_readersValidatorsStreamMade_StreamIdMessage(); }
    
    static void _call_readersValidatorsStreamMade_StreamIdMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_readersValidatorsStreamMade_StreamIdMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void validatorsFiltersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_validatorsFiltersStreamMade_StreamIdMessage();
    // Entry point index lookup
    
    inline static int idx_validatorsFiltersStreamMade_StreamIdMessage() {
      static int epidx = reg_validatorsFiltersStreamMade_StreamIdMessage();
      return epidx;
    }

    
    inline static int idx_validatorsFiltersStreamMade(void (Main::*)(Ck::Stream::StreamIdMessage* impl_msg) ) {
      return idx_validatorsFiltersStreamMade_StreamIdMessage();
    }


    
    static int validatorsFiltersStreamMade(Ck::Stream::StreamIdMessage* impl_msg) { return idx_validatorsFiltersStreamMade_StreamIdMessage(); }
    
    static void _call_validatorsFiltersStreamMade_StreamIdMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_validatorsFiltersStreamMade_StreamIdMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void filtersTransformersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_filtersTransformersStreamMade_StreamIdMessage();
    // Entry point index lookup
    
    inline static int idx_filtersTransformersStreamMade_StreamIdMessage() {
      static int epidx = reg_filtersTransformersStreamMade_StreamIdMessage();
      return epidx;
    }

    
    inline static int idx_filtersTransformersStreamMade(void (Main::*)(Ck::Stream::StreamIdMessage* impl_msg) ) {
      return idx_filtersTransformersStreamMade_StreamIdMessage();
    }


    
    static int filtersTransformersStreamMade(Ck::Stream::StreamIdMessage* impl_msg) { return idx_filtersTransformersStreamMade_StreamIdMessage(); }
    
    static void _call_filtersTransformersStreamMade_StreamIdMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_filtersTransformersStreamMade_StreamIdMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void transformersWritersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_transformersWritersStreamMade_StreamIdMessage();
    // Entry point index lookup
    
    inline static int idx_transformersWritersStreamMade_StreamIdMessage() {
      static int epidx = reg_transformersWritersStreamMade_StreamIdMessage();
      return epidx;
    }

    
    inline static int idx_transformersWritersStreamMade(void (Main::*)(Ck::Stream::StreamIdMessage* impl_msg) ) {
      return idx_transformersWritersStreamMade_StreamIdMessage();
    }


    
    static int transformersWritersStreamMade(Ck::Stream::StreamIdMessage* impl_msg) { return idx_transformersWritersStreamMade_StreamIdMessage(); }
    
    static void _call_transformersWritersStreamMade_StreamIdMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_transformersWritersStreamMade_StreamIdMessage(void* impl_msg, void* impl_obj);
    /* DECLS: void getEndTime();
     */
    // Entry point registration at startup
    
    static int reg_getEndTime_void();
    // Entry point index lookup
    
    inline static int idx_getEndTime_void() {
      static int epidx = reg_getEndTime_void();
      return epidx;
    }

    
    inline static int idx_getEndTime(void (Main::*)() ) {
      return idx_getEndTime_void();
    }


    
    static int getEndTime() { return idx_getEndTime_void(); }
    
    static void _call_getEndTime_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getEndTime_void(void* impl_msg, void* impl_obj);
    /* DECLS: void getEndTimeAndExit();
     */
    // Entry point registration at startup
    
    static int reg_getEndTimeAndExit_void();
    // Entry point index lookup
    
    inline static int idx_getEndTimeAndExit_void() {
      static int epidx = reg_getEndTimeAndExit_void();
      return epidx;
    }

    
    inline static int idx_getEndTimeAndExit(void (Main::*)() ) {
      return idx_getEndTimeAndExit_void();
    }


    
    static int getEndTimeAndExit() { return idx_getEndTimeAndExit_void(); }
    
    static void _call_getEndTimeAndExit_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_getEndTimeAndExit_void(void* impl_msg, void* impl_obj);
    /* DECLS: void doneCreatingData(int total_records);
     */
    // Entry point registration at startup
    
    static int reg_doneCreatingData_marshall8();
    // Entry point index lookup
    
    inline static int idx_doneCreatingData_marshall8() {
      static int epidx = reg_doneCreatingData_marshall8();
      return epidx;
    }

    
    inline static int idx_doneCreatingData(void (Main::*)(int total_records) ) {
      return idx_doneCreatingData_marshall8();
    }


    
    static int doneCreatingData(int total_records) { return idx_doneCreatingData_marshall8(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_doneCreatingData_marshall8();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_doneCreatingData_marshall8() {
      static int epidx = reg_redn_wrapper_doneCreatingData_marshall8();
      return epidx;
    }
    
    static int redn_wrapper_doneCreatingData(CkReductionMsg* impl_msg) { return idx_redn_wrapper_doneCreatingData_marshall8(); }
    
    static void _call_redn_wrapper_doneCreatingData_marshall8(void* impl_msg, void* impl_obj_void);
    
    static void _call_doneCreatingData_marshall8(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doneCreatingData_marshall8(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_doneCreatingData_marshall8(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_doneCreatingData_marshall8(PUP::er &p,void *msg);
    /* DECLS: void doneReceivingInput();
     */
    // Entry point registration at startup
    
    static int reg_doneReceivingInput_void();
    // Entry point index lookup
    
    inline static int idx_doneReceivingInput_void() {
      static int epidx = reg_doneReceivingInput_void();
      return epidx;
    }

    
    inline static int idx_doneReceivingInput(void (Main::*)() ) {
      return idx_doneReceivingInput_void();
    }


    
    static int doneReceivingInput() { return idx_doneReceivingInput_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_doneReceivingInput_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_doneReceivingInput_void() {
      static int epidx = reg_redn_wrapper_doneReceivingInput_void();
      return epidx;
    }
    
    static int redn_wrapper_doneReceivingInput(CkReductionMsg* impl_msg) { return idx_redn_wrapper_doneReceivingInput_void(); }
    
    static void _call_redn_wrapper_doneReceivingInput_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_doneReceivingInput_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_doneReceivingInput_void(void* impl_msg, void* impl_obj);
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

/* DECLS: void readersValidatorsStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
 */
    
    void readersValidatorsStreamMade(Ck::Stream::StreamIdMessage* impl_msg);

/* DECLS: void validatorsFiltersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
 */
    
    void validatorsFiltersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);

/* DECLS: void filtersTransformersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
 */
    
    void filtersTransformersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);

/* DECLS: void transformersWritersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
 */
    
    void transformersWritersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);

/* DECLS: void getEndTime();
 */
    
    void getEndTime(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void getEndTimeAndExit();
 */
    
    void getEndTimeAndExit(const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void doneCreatingData(int total_records);
 */
    
    void doneCreatingData(int total_records, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void doneReceivingInput();
 */
    
    void doneReceivingInput(const CkEntryOptions *impl_e_opts=NULL);

};
#define Main_SDAG_CODE                                                         \
public:                                                                        \
  void doneCreatingData(int total_records);                                    \
  void doneCreatingData(Closure_Main::doneCreatingData_8_closure* gen0);       \
private:                                                                       \
  void doneCreatingData_end(Closure_Main::doneCreatingData_8_closure* gen0);   \
  void _slist_0(Closure_Main::doneCreatingData_8_closure* gen0);               \
  void _slist_0_end(Closure_Main::doneCreatingData_8_closure* gen0);           \
  void _serial_0(Closure_Main::doneCreatingData_8_closure* gen0);              \
public:                                                                        \
  void doneReceivingInput();                                                   \
private:                                                                       \
  void doneReceivingInput_end();                                               \
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
  static int _sdag_idx_Main_serial_0();                                        \
  static int _sdag_reg_Main_serial_0();                                        \
  static int _sdag_idx_Main_serial_1();                                        \
  static int _sdag_reg_Main_serial_1();                                        \

typedef CBaseT1<Chare, CProxy_Main>CBase_Main;

/* DECLS: array Readers: ArrayElement{
Readers();
Readers(int num_records, const CProxy_Main &impl_noname_0);
void setOutputStreamId(const StreamToken &output_id);
void beginWork();
void sendData();
void finishedTask();
Readers(CkMigrateMessage* impl_msg);
};
 */
 class Readers;
 class CkIndex_Readers;
 class CProxy_Readers;
 class CProxyElement_Readers;
 class CProxySection_Readers;
/* --------------- index object ------------------ */
class CkIndex_Readers:public CkIndex_ArrayElement{
  public:
    typedef Readers local_t;
    typedef CkIndex_Readers index_t;
    typedef CProxy_Readers proxy_t;
    typedef CProxyElement_Readers element_t;
    typedef CProxySection_Readers section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Readers();
     */
    // Entry point registration at startup
    
    static int reg_Readers_void();
    // Entry point index lookup
    
    inline static int idx_Readers_void() {
      static int epidx = reg_Readers_void();
      return epidx;
    }

    
    static int ckNew() { return idx_Readers_void(); }
    
    static void _call_Readers_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Readers_void(void* impl_msg, void* impl_obj);
    /* DECLS: Readers(int num_records, const CProxy_Main &impl_noname_0);
     */
    // Entry point registration at startup
    
    static int reg_Readers_marshall2();
    // Entry point index lookup
    
    inline static int idx_Readers_marshall2() {
      static int epidx = reg_Readers_marshall2();
      return epidx;
    }

    
    static int ckNew(int num_records, const CProxy_Main &impl_noname_0) { return idx_Readers_marshall2(); }
    
    static void _call_Readers_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Readers_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Readers_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Readers_marshall2(PUP::er &p,void *msg);
    /* DECLS: void setOutputStreamId(const StreamToken &output_id);
     */
    // Entry point registration at startup
    
    static int reg_setOutputStreamId_marshall3();
    // Entry point index lookup
    
    inline static int idx_setOutputStreamId_marshall3() {
      static int epidx = reg_setOutputStreamId_marshall3();
      return epidx;
    }

    
    inline static int idx_setOutputStreamId(void (Readers::*)(const StreamToken &output_id) ) {
      return idx_setOutputStreamId_marshall3();
    }


    
    static int setOutputStreamId(const StreamToken &output_id) { return idx_setOutputStreamId_marshall3(); }
    
    static void _call_setOutputStreamId_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setOutputStreamId_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setOutputStreamId_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setOutputStreamId_marshall3(PUP::er &p,void *msg);
    /* DECLS: void beginWork();
     */
    // Entry point registration at startup
    
    static int reg_beginWork_void();
    // Entry point index lookup
    
    inline static int idx_beginWork_void() {
      static int epidx = reg_beginWork_void();
      return epidx;
    }

    
    inline static int idx_beginWork(void (Readers::*)() ) {
      return idx_beginWork_void();
    }


    
    static int beginWork() { return idx_beginWork_void(); }
    
    static void _call_beginWork_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_beginWork_void(void* impl_msg, void* impl_obj);
    /* DECLS: void sendData();
     */
    // Entry point registration at startup
    
    static int reg_sendData_void();
    // Entry point index lookup
    
    inline static int idx_sendData_void() {
      static int epidx = reg_sendData_void();
      return epidx;
    }

    
    inline static int idx_sendData(void (Readers::*)() ) {
      return idx_sendData_void();
    }


    
    static int sendData() { return idx_sendData_void(); }
    
    static void _call_sendData_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_sendData_void(void* impl_msg, void* impl_obj);
    /* DECLS: void finishedTask();
     */
    // Entry point registration at startup
    
    static int reg_finishedTask_void();
    // Entry point index lookup
    
    inline static int idx_finishedTask_void() {
      static int epidx = reg_finishedTask_void();
      return epidx;
    }

    
    inline static int idx_finishedTask(void (Readers::*)() ) {
      return idx_finishedTask_void();
    }


    
    static int finishedTask() { return idx_finishedTask_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_finishedTask_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_finishedTask_void() {
      static int epidx = reg_redn_wrapper_finishedTask_void();
      return epidx;
    }
    
    static int redn_wrapper_finishedTask(CkReductionMsg* impl_msg) { return idx_redn_wrapper_finishedTask_void(); }
    
    static void _call_redn_wrapper_finishedTask_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_finishedTask_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishedTask_void(void* impl_msg, void* impl_obj);
    /* DECLS: Readers(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Readers_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Readers_CkMigrateMessage() {
      static int epidx = reg_Readers_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Readers_CkMigrateMessage(); }
    
    static void _call_Readers_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Readers_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Readers : public CProxyElement_ArrayElement{
  public:
    typedef Readers local_t;
    typedef CkIndex_Readers index_t;
    typedef CProxy_Readers proxy_t;
    typedef CProxyElement_Readers element_t;
    typedef CProxySection_Readers section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_Readers(void) {
    }
    CProxyElement_Readers(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    Readers *ckLocal(void) const
    { return (Readers *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Readers(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Readers(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Readers(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Readers(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: Readers();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: Readers(int num_records, const CProxy_Main &impl_noname_0);
 */
    
    void insert(int num_records, const CProxy_Main &impl_noname_0, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void setOutputStreamId(const StreamToken &output_id);
 */
    
    void setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void sendData();
 */
    
    void sendData(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Readers(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Readers : public CProxy_ArrayElement{
  public:
    typedef Readers local_t;
    typedef CkIndex_Readers index_t;
    typedef CProxy_Readers proxy_t;
    typedef CProxyElement_Readers element_t;
    typedef CProxySection_Readers section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_Readers(void) {
    }
    CProxy_Readers(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_Readers operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_Readers(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Readers operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_Readers(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Readers operator [] (int idx) const 
        {return CProxyElement_Readers(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_Readers operator () (int idx) const 
        {return CProxyElement_Readers(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_Readers(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Readers(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Readers();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: Readers(int num_records, const CProxy_Main &impl_noname_0);
 */
    
    static CkArrayID ckNew(int num_records, const CProxy_Main &impl_noname_0, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(int num_records, const CProxy_Main &impl_noname_0, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(int num_records, const CProxy_Main &impl_noname_0, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(int num_records, const CProxy_Main &impl_noname_0, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setOutputStreamId(const StreamToken &output_id);
 */
    
    void setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void sendData();
 */
    
    void sendData(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Readers(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Readers : public CProxySection_ArrayElement{
  public:
    typedef Readers local_t;
    typedef CkIndex_Readers index_t;
    typedef CProxy_Readers proxy_t;
    typedef CProxyElement_Readers element_t;
    typedef CProxySection_Readers section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_Readers(void) {
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
    CProxyElement_Readers operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_Readers(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Readers operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_Readers(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Readers operator [] (int idx) const 
        {return CProxyElement_Readers(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_Readers operator () (int idx) const 
        {return CProxyElement_Readers(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_Readers(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Readers(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Readers(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_Readers(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Readers(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Readers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Readers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Readers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Readers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_Readers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Readers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: Readers();
 */
    

/* DECLS: Readers(int num_records, const CProxy_Main &impl_noname_0);
 */
    

/* DECLS: void setOutputStreamId(const StreamToken &output_id);
 */
    
    void setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void sendData();
 */
    
    void sendData(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Readers(CkMigrateMessage* impl_msg);
 */

};
#define Readers_SDAG_CODE                                                      \
public:                                                                        \
  void finishedTask();                                                         \
private:                                                                       \
  void finishedTask_end();                                                     \
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
  static int _sdag_idx_Readers_serial_0();                                     \
  static int _sdag_reg_Readers_serial_0();                                     \

typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_Readers>CBase_Readers;

/* DECLS: array Validators: ArrayElement{
Validators();
void setOutputStreamId(const StreamToken &output_id);
void setInputStreamId(const StreamToken &input_id);
void beginWork();
threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishedTask();
Validators(CkMigrateMessage* impl_msg);
};
 */
 class Validators;
 class CkIndex_Validators;
 class CProxy_Validators;
 class CProxyElement_Validators;
 class CProxySection_Validators;
/* --------------- index object ------------------ */
class CkIndex_Validators:public CkIndex_ArrayElement{
  public:
    typedef Validators local_t;
    typedef CkIndex_Validators index_t;
    typedef CProxy_Validators proxy_t;
    typedef CProxyElement_Validators element_t;
    typedef CProxySection_Validators section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Validators();
     */
    // Entry point registration at startup
    
    static int reg_Validators_void();
    // Entry point index lookup
    
    inline static int idx_Validators_void() {
      static int epidx = reg_Validators_void();
      return epidx;
    }

    
    static int ckNew() { return idx_Validators_void(); }
    
    static void _call_Validators_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Validators_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setOutputStreamId(const StreamToken &output_id);
     */
    // Entry point registration at startup
    
    static int reg_setOutputStreamId_marshall2();
    // Entry point index lookup
    
    inline static int idx_setOutputStreamId_marshall2() {
      static int epidx = reg_setOutputStreamId_marshall2();
      return epidx;
    }

    
    inline static int idx_setOutputStreamId(void (Validators::*)(const StreamToken &output_id) ) {
      return idx_setOutputStreamId_marshall2();
    }


    
    static int setOutputStreamId(const StreamToken &output_id) { return idx_setOutputStreamId_marshall2(); }
    
    static void _call_setOutputStreamId_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setOutputStreamId_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setOutputStreamId_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setOutputStreamId_marshall2(PUP::er &p,void *msg);
    /* DECLS: void setInputStreamId(const StreamToken &input_id);
     */
    // Entry point registration at startup
    
    static int reg_setInputStreamId_marshall3();
    // Entry point index lookup
    
    inline static int idx_setInputStreamId_marshall3() {
      static int epidx = reg_setInputStreamId_marshall3();
      return epidx;
    }

    
    inline static int idx_setInputStreamId(void (Validators::*)(const StreamToken &input_id) ) {
      return idx_setInputStreamId_marshall3();
    }


    
    static int setInputStreamId(const StreamToken &input_id) { return idx_setInputStreamId_marshall3(); }
    
    static void _call_setInputStreamId_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setInputStreamId_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setInputStreamId_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setInputStreamId_marshall3(PUP::er &p,void *msg);
    /* DECLS: void beginWork();
     */
    // Entry point registration at startup
    
    static int reg_beginWork_void();
    // Entry point index lookup
    
    inline static int idx_beginWork_void() {
      static int epidx = reg_beginWork_void();
      return epidx;
    }

    
    inline static int idx_beginWork(void (Validators::*)() ) {
      return idx_beginWork_void();
    }


    
    static int beginWork() { return idx_beginWork_void(); }
    
    static void _call_beginWork_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_beginWork_void(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvData_StreamDeliveryMsg();
    // Entry point index lookup
    
    inline static int idx_recvData_StreamDeliveryMsg() {
      static int epidx = reg_recvData_StreamDeliveryMsg();
      return epidx;
    }

    
    inline static int idx_recvData(void (Validators::*)(Ck::Stream::StreamDeliveryMsg* impl_msg) ) {
      return idx_recvData_StreamDeliveryMsg();
    }


    
    static int recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) { return idx_recvData_StreamDeliveryMsg(); }
    
    static void _call_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_recvData_StreamDeliveryMsg(CkThrCallArg *);
    /* DECLS: void finishedTask();
     */
    // Entry point registration at startup
    
    static int reg_finishedTask_void();
    // Entry point index lookup
    
    inline static int idx_finishedTask_void() {
      static int epidx = reg_finishedTask_void();
      return epidx;
    }

    
    inline static int idx_finishedTask(void (Validators::*)() ) {
      return idx_finishedTask_void();
    }


    
    static int finishedTask() { return idx_finishedTask_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_finishedTask_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_finishedTask_void() {
      static int epidx = reg_redn_wrapper_finishedTask_void();
      return epidx;
    }
    
    static int redn_wrapper_finishedTask(CkReductionMsg* impl_msg) { return idx_redn_wrapper_finishedTask_void(); }
    
    static void _call_redn_wrapper_finishedTask_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_finishedTask_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishedTask_void(void* impl_msg, void* impl_obj);
    /* DECLS: Validators(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Validators_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Validators_CkMigrateMessage() {
      static int epidx = reg_Validators_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Validators_CkMigrateMessage(); }
    
    static void _call_Validators_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Validators_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Validators : public CProxyElement_ArrayElement{
  public:
    typedef Validators local_t;
    typedef CkIndex_Validators index_t;
    typedef CProxy_Validators proxy_t;
    typedef CProxyElement_Validators element_t;
    typedef CProxySection_Validators section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_Validators(void) {
    }
    CProxyElement_Validators(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    Validators *ckLocal(void) const
    { return (Validators *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Validators(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Validators(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Validators(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Validators(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: Validators();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void setOutputStreamId(const StreamToken &output_id);
 */
    
    void setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInputStreamId(const StreamToken &input_id);
 */
    
    void setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Validators(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Validators : public CProxy_ArrayElement{
  public:
    typedef Validators local_t;
    typedef CkIndex_Validators index_t;
    typedef CProxy_Validators proxy_t;
    typedef CProxyElement_Validators element_t;
    typedef CProxySection_Validators section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_Validators(void) {
    }
    CProxy_Validators(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_Validators operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_Validators(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Validators operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_Validators(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Validators operator [] (int idx) const 
        {return CProxyElement_Validators(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_Validators operator () (int idx) const 
        {return CProxyElement_Validators(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_Validators(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Validators(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Validators();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setOutputStreamId(const StreamToken &output_id);
 */
    
    void setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInputStreamId(const StreamToken &input_id);
 */
    
    void setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Validators(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Validators : public CProxySection_ArrayElement{
  public:
    typedef Validators local_t;
    typedef CkIndex_Validators index_t;
    typedef CProxy_Validators proxy_t;
    typedef CProxyElement_Validators element_t;
    typedef CProxySection_Validators section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_Validators(void) {
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
    CProxyElement_Validators operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_Validators(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Validators operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_Validators(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Validators operator [] (int idx) const 
        {return CProxyElement_Validators(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_Validators operator () (int idx) const 
        {return CProxyElement_Validators(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_Validators(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Validators(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Validators(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_Validators(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Validators(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Validators(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Validators(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Validators(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Validators(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_Validators(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Validators(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: Validators();
 */
    

/* DECLS: void setOutputStreamId(const StreamToken &output_id);
 */
    
    void setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInputStreamId(const StreamToken &input_id);
 */
    
    void setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Validators(CkMigrateMessage* impl_msg);
 */

};
#define Validators_SDAG_CODE                                                   \
public:                                                                        \
  void finishedTask();                                                         \
private:                                                                       \
  void finishedTask_end();                                                     \
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
  static int _sdag_idx_Validators_serial_0();                                  \
  static int _sdag_reg_Validators_serial_0();                                  \

typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_Validators>CBase_Validators;

/* DECLS: array Filters: ArrayElement{
Filters();
void setOutputStreamId(const StreamToken &output_id);
void setInputStreamId(const StreamToken &input_id);
void beginWork();
threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishedTask();
Filters(CkMigrateMessage* impl_msg);
};
 */
 class Filters;
 class CkIndex_Filters;
 class CProxy_Filters;
 class CProxyElement_Filters;
 class CProxySection_Filters;
/* --------------- index object ------------------ */
class CkIndex_Filters:public CkIndex_ArrayElement{
  public:
    typedef Filters local_t;
    typedef CkIndex_Filters index_t;
    typedef CProxy_Filters proxy_t;
    typedef CProxyElement_Filters element_t;
    typedef CProxySection_Filters section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Filters();
     */
    // Entry point registration at startup
    
    static int reg_Filters_void();
    // Entry point index lookup
    
    inline static int idx_Filters_void() {
      static int epidx = reg_Filters_void();
      return epidx;
    }

    
    static int ckNew() { return idx_Filters_void(); }
    
    static void _call_Filters_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Filters_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setOutputStreamId(const StreamToken &output_id);
     */
    // Entry point registration at startup
    
    static int reg_setOutputStreamId_marshall2();
    // Entry point index lookup
    
    inline static int idx_setOutputStreamId_marshall2() {
      static int epidx = reg_setOutputStreamId_marshall2();
      return epidx;
    }

    
    inline static int idx_setOutputStreamId(void (Filters::*)(const StreamToken &output_id) ) {
      return idx_setOutputStreamId_marshall2();
    }


    
    static int setOutputStreamId(const StreamToken &output_id) { return idx_setOutputStreamId_marshall2(); }
    
    static void _call_setOutputStreamId_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setOutputStreamId_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setOutputStreamId_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setOutputStreamId_marshall2(PUP::er &p,void *msg);
    /* DECLS: void setInputStreamId(const StreamToken &input_id);
     */
    // Entry point registration at startup
    
    static int reg_setInputStreamId_marshall3();
    // Entry point index lookup
    
    inline static int idx_setInputStreamId_marshall3() {
      static int epidx = reg_setInputStreamId_marshall3();
      return epidx;
    }

    
    inline static int idx_setInputStreamId(void (Filters::*)(const StreamToken &input_id) ) {
      return idx_setInputStreamId_marshall3();
    }


    
    static int setInputStreamId(const StreamToken &input_id) { return idx_setInputStreamId_marshall3(); }
    
    static void _call_setInputStreamId_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setInputStreamId_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setInputStreamId_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setInputStreamId_marshall3(PUP::er &p,void *msg);
    /* DECLS: void beginWork();
     */
    // Entry point registration at startup
    
    static int reg_beginWork_void();
    // Entry point index lookup
    
    inline static int idx_beginWork_void() {
      static int epidx = reg_beginWork_void();
      return epidx;
    }

    
    inline static int idx_beginWork(void (Filters::*)() ) {
      return idx_beginWork_void();
    }


    
    static int beginWork() { return idx_beginWork_void(); }
    
    static void _call_beginWork_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_beginWork_void(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvData_StreamDeliveryMsg();
    // Entry point index lookup
    
    inline static int idx_recvData_StreamDeliveryMsg() {
      static int epidx = reg_recvData_StreamDeliveryMsg();
      return epidx;
    }

    
    inline static int idx_recvData(void (Filters::*)(Ck::Stream::StreamDeliveryMsg* impl_msg) ) {
      return idx_recvData_StreamDeliveryMsg();
    }


    
    static int recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) { return idx_recvData_StreamDeliveryMsg(); }
    
    static void _call_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_recvData_StreamDeliveryMsg(CkThrCallArg *);
    /* DECLS: void finishedTask();
     */
    // Entry point registration at startup
    
    static int reg_finishedTask_void();
    // Entry point index lookup
    
    inline static int idx_finishedTask_void() {
      static int epidx = reg_finishedTask_void();
      return epidx;
    }

    
    inline static int idx_finishedTask(void (Filters::*)() ) {
      return idx_finishedTask_void();
    }


    
    static int finishedTask() { return idx_finishedTask_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_finishedTask_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_finishedTask_void() {
      static int epidx = reg_redn_wrapper_finishedTask_void();
      return epidx;
    }
    
    static int redn_wrapper_finishedTask(CkReductionMsg* impl_msg) { return idx_redn_wrapper_finishedTask_void(); }
    
    static void _call_redn_wrapper_finishedTask_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_finishedTask_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishedTask_void(void* impl_msg, void* impl_obj);
    /* DECLS: Filters(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Filters_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Filters_CkMigrateMessage() {
      static int epidx = reg_Filters_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Filters_CkMigrateMessage(); }
    
    static void _call_Filters_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Filters_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Filters : public CProxyElement_ArrayElement{
  public:
    typedef Filters local_t;
    typedef CkIndex_Filters index_t;
    typedef CProxy_Filters proxy_t;
    typedef CProxyElement_Filters element_t;
    typedef CProxySection_Filters section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_Filters(void) {
    }
    CProxyElement_Filters(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    Filters *ckLocal(void) const
    { return (Filters *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Filters(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Filters(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Filters(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Filters(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: Filters();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void setOutputStreamId(const StreamToken &output_id);
 */
    
    void setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInputStreamId(const StreamToken &input_id);
 */
    
    void setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Filters(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Filters : public CProxy_ArrayElement{
  public:
    typedef Filters local_t;
    typedef CkIndex_Filters index_t;
    typedef CProxy_Filters proxy_t;
    typedef CProxyElement_Filters element_t;
    typedef CProxySection_Filters section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_Filters(void) {
    }
    CProxy_Filters(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_Filters operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_Filters(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Filters operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_Filters(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Filters operator [] (int idx) const 
        {return CProxyElement_Filters(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_Filters operator () (int idx) const 
        {return CProxyElement_Filters(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_Filters(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Filters(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Filters();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setOutputStreamId(const StreamToken &output_id);
 */
    
    void setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInputStreamId(const StreamToken &input_id);
 */
    
    void setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Filters(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Filters : public CProxySection_ArrayElement{
  public:
    typedef Filters local_t;
    typedef CkIndex_Filters index_t;
    typedef CProxy_Filters proxy_t;
    typedef CProxyElement_Filters element_t;
    typedef CProxySection_Filters section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_Filters(void) {
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
    CProxyElement_Filters operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_Filters(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Filters operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_Filters(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Filters operator [] (int idx) const 
        {return CProxyElement_Filters(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_Filters operator () (int idx) const 
        {return CProxyElement_Filters(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_Filters(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Filters(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Filters(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_Filters(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Filters(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Filters(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Filters(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Filters(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Filters(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_Filters(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Filters(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: Filters();
 */
    

/* DECLS: void setOutputStreamId(const StreamToken &output_id);
 */
    
    void setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInputStreamId(const StreamToken &input_id);
 */
    
    void setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Filters(CkMigrateMessage* impl_msg);
 */

};
#define Filters_SDAG_CODE                                                      \
public:                                                                        \
  void finishedTask();                                                         \
private:                                                                       \
  void finishedTask_end();                                                     \
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
  static int _sdag_idx_Filters_serial_0();                                     \
  static int _sdag_reg_Filters_serial_0();                                     \

typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_Filters>CBase_Filters;

/* DECLS: array Transformers: ArrayElement{
Transformers();
void setOutputStreamId(const StreamToken &output_id);
void setInputStreamId(const StreamToken &input_id);
void beginWork();
threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishedTask();
Transformers(CkMigrateMessage* impl_msg);
};
 */
 class Transformers;
 class CkIndex_Transformers;
 class CProxy_Transformers;
 class CProxyElement_Transformers;
 class CProxySection_Transformers;
/* --------------- index object ------------------ */
class CkIndex_Transformers:public CkIndex_ArrayElement{
  public:
    typedef Transformers local_t;
    typedef CkIndex_Transformers index_t;
    typedef CProxy_Transformers proxy_t;
    typedef CProxyElement_Transformers element_t;
    typedef CProxySection_Transformers section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Transformers();
     */
    // Entry point registration at startup
    
    static int reg_Transformers_void();
    // Entry point index lookup
    
    inline static int idx_Transformers_void() {
      static int epidx = reg_Transformers_void();
      return epidx;
    }

    
    static int ckNew() { return idx_Transformers_void(); }
    
    static void _call_Transformers_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Transformers_void(void* impl_msg, void* impl_obj);
    /* DECLS: void setOutputStreamId(const StreamToken &output_id);
     */
    // Entry point registration at startup
    
    static int reg_setOutputStreamId_marshall2();
    // Entry point index lookup
    
    inline static int idx_setOutputStreamId_marshall2() {
      static int epidx = reg_setOutputStreamId_marshall2();
      return epidx;
    }

    
    inline static int idx_setOutputStreamId(void (Transformers::*)(const StreamToken &output_id) ) {
      return idx_setOutputStreamId_marshall2();
    }


    
    static int setOutputStreamId(const StreamToken &output_id) { return idx_setOutputStreamId_marshall2(); }
    
    static void _call_setOutputStreamId_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setOutputStreamId_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setOutputStreamId_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setOutputStreamId_marshall2(PUP::er &p,void *msg);
    /* DECLS: void setInputStreamId(const StreamToken &input_id);
     */
    // Entry point registration at startup
    
    static int reg_setInputStreamId_marshall3();
    // Entry point index lookup
    
    inline static int idx_setInputStreamId_marshall3() {
      static int epidx = reg_setInputStreamId_marshall3();
      return epidx;
    }

    
    inline static int idx_setInputStreamId(void (Transformers::*)(const StreamToken &input_id) ) {
      return idx_setInputStreamId_marshall3();
    }


    
    static int setInputStreamId(const StreamToken &input_id) { return idx_setInputStreamId_marshall3(); }
    
    static void _call_setInputStreamId_marshall3(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setInputStreamId_marshall3(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setInputStreamId_marshall3(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setInputStreamId_marshall3(PUP::er &p,void *msg);
    /* DECLS: void beginWork();
     */
    // Entry point registration at startup
    
    static int reg_beginWork_void();
    // Entry point index lookup
    
    inline static int idx_beginWork_void() {
      static int epidx = reg_beginWork_void();
      return epidx;
    }

    
    inline static int idx_beginWork(void (Transformers::*)() ) {
      return idx_beginWork_void();
    }


    
    static int beginWork() { return idx_beginWork_void(); }
    
    static void _call_beginWork_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_beginWork_void(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvData_StreamDeliveryMsg();
    // Entry point index lookup
    
    inline static int idx_recvData_StreamDeliveryMsg() {
      static int epidx = reg_recvData_StreamDeliveryMsg();
      return epidx;
    }

    
    inline static int idx_recvData(void (Transformers::*)(Ck::Stream::StreamDeliveryMsg* impl_msg) ) {
      return idx_recvData_StreamDeliveryMsg();
    }


    
    static int recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) { return idx_recvData_StreamDeliveryMsg(); }
    
    static void _call_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_recvData_StreamDeliveryMsg(CkThrCallArg *);
    /* DECLS: void finishedTask();
     */
    // Entry point registration at startup
    
    static int reg_finishedTask_void();
    // Entry point index lookup
    
    inline static int idx_finishedTask_void() {
      static int epidx = reg_finishedTask_void();
      return epidx;
    }

    
    inline static int idx_finishedTask(void (Transformers::*)() ) {
      return idx_finishedTask_void();
    }


    
    static int finishedTask() { return idx_finishedTask_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_finishedTask_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_finishedTask_void() {
      static int epidx = reg_redn_wrapper_finishedTask_void();
      return epidx;
    }
    
    static int redn_wrapper_finishedTask(CkReductionMsg* impl_msg) { return idx_redn_wrapper_finishedTask_void(); }
    
    static void _call_redn_wrapper_finishedTask_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_finishedTask_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishedTask_void(void* impl_msg, void* impl_obj);
    /* DECLS: Transformers(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Transformers_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Transformers_CkMigrateMessage() {
      static int epidx = reg_Transformers_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Transformers_CkMigrateMessage(); }
    
    static void _call_Transformers_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Transformers_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Transformers : public CProxyElement_ArrayElement{
  public:
    typedef Transformers local_t;
    typedef CkIndex_Transformers index_t;
    typedef CProxy_Transformers proxy_t;
    typedef CProxyElement_Transformers element_t;
    typedef CProxySection_Transformers section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_Transformers(void) {
    }
    CProxyElement_Transformers(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    Transformers *ckLocal(void) const
    { return (Transformers *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Transformers(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Transformers(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Transformers(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Transformers(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: Transformers();
 */
    
    void insert(int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void setOutputStreamId(const StreamToken &output_id);
 */
    
    void setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInputStreamId(const StreamToken &input_id);
 */
    
    void setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Transformers(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Transformers : public CProxy_ArrayElement{
  public:
    typedef Transformers local_t;
    typedef CkIndex_Transformers index_t;
    typedef CProxy_Transformers proxy_t;
    typedef CProxyElement_Transformers element_t;
    typedef CProxySection_Transformers section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_Transformers(void) {
    }
    CProxy_Transformers(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_Transformers operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_Transformers(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Transformers operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_Transformers(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Transformers operator [] (int idx) const 
        {return CProxyElement_Transformers(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_Transformers operator () (int idx) const 
        {return CProxyElement_Transformers(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_Transformers(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Transformers(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Transformers();
 */
    
    static CkArrayID ckNew(const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setOutputStreamId(const StreamToken &output_id);
 */
    
    void setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInputStreamId(const StreamToken &input_id);
 */
    
    void setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Transformers(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Transformers : public CProxySection_ArrayElement{
  public:
    typedef Transformers local_t;
    typedef CkIndex_Transformers index_t;
    typedef CProxy_Transformers proxy_t;
    typedef CProxyElement_Transformers element_t;
    typedef CProxySection_Transformers section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_Transformers(void) {
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
    CProxyElement_Transformers operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_Transformers(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Transformers operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_Transformers(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Transformers operator [] (int idx) const 
        {return CProxyElement_Transformers(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_Transformers operator () (int idx) const 
        {return CProxyElement_Transformers(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_Transformers(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Transformers(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Transformers(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_Transformers(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Transformers(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Transformers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Transformers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Transformers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Transformers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_Transformers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Transformers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: Transformers();
 */
    

/* DECLS: void setOutputStreamId(const StreamToken &output_id);
 */
    
    void setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void setInputStreamId(const StreamToken &input_id);
 */
    
    void setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Transformers(CkMigrateMessage* impl_msg);
 */

};
#define Transformers_SDAG_CODE                                                 \
public:                                                                        \
  void finishedTask();                                                         \
private:                                                                       \
  void finishedTask_end();                                                     \
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
  static int _sdag_idx_Transformers_serial_0();                                \
  static int _sdag_reg_Transformers_serial_0();                                \

typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_Transformers>CBase_Transformers;

/* DECLS: array Writers: ArrayElement{
Writers(const CProxy_Main &impl_noname_1);
void setInputStreamId(const StreamToken &input_id);
void beginWork();
threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishedTask();
Writers(CkMigrateMessage* impl_msg);
};
 */
 class Writers;
 class CkIndex_Writers;
 class CProxy_Writers;
 class CProxyElement_Writers;
 class CProxySection_Writers;
/* --------------- index object ------------------ */
class CkIndex_Writers:public CkIndex_ArrayElement{
  public:
    typedef Writers local_t;
    typedef CkIndex_Writers index_t;
    typedef CProxy_Writers proxy_t;
    typedef CProxyElement_Writers element_t;
    typedef CProxySection_Writers section_t;

    static int __idx;
    static void __register(const char *s, size_t size);
    /* DECLS: Writers(const CProxy_Main &impl_noname_1);
     */
    // Entry point registration at startup
    
    static int reg_Writers_marshall1();
    // Entry point index lookup
    
    inline static int idx_Writers_marshall1() {
      static int epidx = reg_Writers_marshall1();
      return epidx;
    }

    
    static int ckNew(const CProxy_Main &impl_noname_1) { return idx_Writers_marshall1(); }
    
    static void _call_Writers_marshall1(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Writers_marshall1(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_Writers_marshall1(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_Writers_marshall1(PUP::er &p,void *msg);
    /* DECLS: void setInputStreamId(const StreamToken &input_id);
     */
    // Entry point registration at startup
    
    static int reg_setInputStreamId_marshall2();
    // Entry point index lookup
    
    inline static int idx_setInputStreamId_marshall2() {
      static int epidx = reg_setInputStreamId_marshall2();
      return epidx;
    }

    
    inline static int idx_setInputStreamId(void (Writers::*)(const StreamToken &input_id) ) {
      return idx_setInputStreamId_marshall2();
    }


    
    static int setInputStreamId(const StreamToken &input_id) { return idx_setInputStreamId_marshall2(); }
    
    static void _call_setInputStreamId_marshall2(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_setInputStreamId_marshall2(void* impl_msg, void* impl_obj);
    
    static int _callmarshall_setInputStreamId_marshall2(char* impl_buf, void* impl_obj_void);
    
    static void _marshallmessagepup_setInputStreamId_marshall2(PUP::er &p,void *msg);
    /* DECLS: void beginWork();
     */
    // Entry point registration at startup
    
    static int reg_beginWork_void();
    // Entry point index lookup
    
    inline static int idx_beginWork_void() {
      static int epidx = reg_beginWork_void();
      return epidx;
    }

    
    inline static int idx_beginWork(void (Writers::*)() ) {
      return idx_beginWork_void();
    }


    
    static int beginWork() { return idx_beginWork_void(); }
    
    static void _call_beginWork_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_beginWork_void(void* impl_msg, void* impl_obj);
    /* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_recvData_StreamDeliveryMsg();
    // Entry point index lookup
    
    inline static int idx_recvData_StreamDeliveryMsg() {
      static int epidx = reg_recvData_StreamDeliveryMsg();
      return epidx;
    }

    
    inline static int idx_recvData(void (Writers::*)(Ck::Stream::StreamDeliveryMsg* impl_msg) ) {
      return idx_recvData_StreamDeliveryMsg();
    }


    
    static int recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) { return idx_recvData_StreamDeliveryMsg(); }
    
    static void _call_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj);
    
    static void _callthr_recvData_StreamDeliveryMsg(CkThrCallArg *);
    /* DECLS: void finishedTask();
     */
    // Entry point registration at startup
    
    static int reg_finishedTask_void();
    // Entry point index lookup
    
    inline static int idx_finishedTask_void() {
      static int epidx = reg_finishedTask_void();
      return epidx;
    }

    
    inline static int idx_finishedTask(void (Writers::*)() ) {
      return idx_finishedTask_void();
    }


    
    static int finishedTask() { return idx_finishedTask_void(); }
    // Entry point registration at startup
    
    static int reg_redn_wrapper_finishedTask_void();
    // Entry point index lookup
    
    inline static int idx_redn_wrapper_finishedTask_void() {
      static int epidx = reg_redn_wrapper_finishedTask_void();
      return epidx;
    }
    
    static int redn_wrapper_finishedTask(CkReductionMsg* impl_msg) { return idx_redn_wrapper_finishedTask_void(); }
    
    static void _call_redn_wrapper_finishedTask_void(void* impl_msg, void* impl_obj_void);
    
    static void _call_finishedTask_void(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_finishedTask_void(void* impl_msg, void* impl_obj);
    /* DECLS: Writers(CkMigrateMessage* impl_msg);
     */
    // Entry point registration at startup
    
    static int reg_Writers_CkMigrateMessage();
    // Entry point index lookup
    
    inline static int idx_Writers_CkMigrateMessage() {
      static int epidx = reg_Writers_CkMigrateMessage();
      return epidx;
    }

    
    static int ckNew(CkMigrateMessage* impl_msg) { return idx_Writers_CkMigrateMessage(); }
    
    static void _call_Writers_CkMigrateMessage(void* impl_msg, void* impl_obj);
    
    static void _call_sdag_Writers_CkMigrateMessage(void* impl_msg, void* impl_obj);
};
/* --------------- element proxy ------------------ */
 class CProxyElement_Writers : public CProxyElement_ArrayElement{
  public:
    typedef Writers local_t;
    typedef CkIndex_Writers index_t;
    typedef CProxy_Writers proxy_t;
    typedef CProxyElement_Writers element_t;
    typedef CProxySection_Writers section_t;

    using array_index_t = CkArrayIndex1D;

    /* TRAM aggregators */

    CProxyElement_Writers(void) {
    }
    CProxyElement_Writers(const ArrayElement *e) : CProxyElement_ArrayElement(e){
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

    Writers *ckLocal(void) const
    { return (Writers *)CProxyElement_ArrayElement::ckLocal(); }

    CProxyElement_Writers(const CkArrayID &aid,const CkArrayIndex1D &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Writers(const CkArrayID &aid,const CkArrayIndex1D &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}

    CProxyElement_Writers(const CkArrayID &aid,const CkArrayIndex &idx,CK_DELCTOR_PARAM)
        :CProxyElement_ArrayElement(aid,idx,CK_DELCTOR_ARGS)
    {
}
    CProxyElement_Writers(const CkArrayID &aid,const CkArrayIndex &idx)
        :CProxyElement_ArrayElement(aid,idx)
    {
}
/* DECLS: Writers(const CProxy_Main &impl_noname_1);
 */
    
    void insert(const CProxy_Main &impl_noname_1, int onPE=-1, const CkEntryOptions *impl_e_opts=NULL);
/* DECLS: void setInputStreamId(const StreamToken &input_id);
 */
    
    void setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Writers(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- collective proxy -------------- */
 class CProxy_Writers : public CProxy_ArrayElement{
  public:
    typedef Writers local_t;
    typedef CkIndex_Writers index_t;
    typedef CProxy_Writers proxy_t;
    typedef CProxyElement_Writers element_t;
    typedef CProxySection_Writers section_t;

    using array_index_t = CkArrayIndex1D;
    CProxy_Writers(void) {
    }
    CProxy_Writers(const ArrayElement *e) : CProxy_ArrayElement(e){
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
    CProxyElement_Writers operator [] (const CkArrayIndex1D &idx) const
    { return CProxyElement_Writers(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Writers operator() (const CkArrayIndex1D &idx) const
    { return CProxyElement_Writers(ckGetArrayID(), idx, CK_DELCTOR_CALL); }
    CProxyElement_Writers operator [] (int idx) const 
        {return CProxyElement_Writers(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxyElement_Writers operator () (int idx) const 
        {return CProxyElement_Writers(ckGetArrayID(), CkArrayIndex1D(idx), CK_DELCTOR_CALL);}
    CProxy_Writers(const CkArrayID &aid,CK_DELCTOR_PARAM) 
        :CProxy_ArrayElement(aid,CK_DELCTOR_ARGS) {}
    CProxy_Writers(const CkArrayID &aid) 
        :CProxy_ArrayElement(aid) {}
/* DECLS: Writers(const CProxy_Main &impl_noname_1);
 */
    
    static CkArrayID ckNew(const CProxy_Main &impl_noname_1, const CkArrayOptions &opts = CkArrayOptions(), const CkEntryOptions *impl_e_opts=NULL);
    static void      ckNew(const CProxy_Main &impl_noname_1, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);
    static CkArrayID ckNew(const CProxy_Main &impl_noname_1, const int s1, const CkEntryOptions *impl_e_opts=NULL);
    static void ckNew(const CProxy_Main &impl_noname_1, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts=NULL);

/* DECLS: void setInputStreamId(const StreamToken &input_id);
 */
    
    void setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Writers(CkMigrateMessage* impl_msg);
 */

};
/* ---------------- section proxy -------------- */
 class CProxySection_Writers : public CProxySection_ArrayElement{
  public:
    typedef Writers local_t;
    typedef CkIndex_Writers index_t;
    typedef CProxy_Writers proxy_t;
    typedef CProxyElement_Writers element_t;
    typedef CProxySection_Writers section_t;

    using array_index_t = CkArrayIndex1D;
    CProxySection_Writers(void) {
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
    CProxyElement_Writers operator [] (const CkArrayIndex1D &idx) const
        {return CProxyElement_Writers(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Writers operator() (const CkArrayIndex1D &idx) const
        {return CProxyElement_Writers(ckGetArrayID(), idx, CK_DELCTOR_CALL);}
    CProxyElement_Writers operator [] (int idx) const 
        {return CProxyElement_Writers(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
    CProxyElement_Writers operator () (int idx) const 
        {return CProxyElement_Writers(ckGetArrayID(), *(CkArrayIndex1D*)&ckGetArrayElements()[idx], CK_DELCTOR_CALL);}
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
    CProxySection_Writers(const CkArrayID &aid, CkArrayIndex *elems, int nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Writers(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Writers(const CkArrayID &aid, CkArrayIndex *elems, int nElems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems,nElems, factor) {}
    CProxySection_Writers(const CkArrayID &aid, const std::vector<CkArrayIndex> &elems, int factor=USE_DEFAULT_BRANCH_FACTOR) 
        :CProxySection_ArrayElement(aid,elems, factor) { ckAutoDelegate(); }
    CProxySection_Writers(const CkSectionID &sid)  
        :CProxySection_ArrayElement(sid) { ckAutoDelegate(); }
    CProxySection_Writers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(n,aid,elems,nElems,CK_DELCTOR_ARGS) {}
    CProxySection_Writers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, CK_DELCTOR_PARAM) 
        :CProxySection_ArrayElement(aid,elems,CK_DELCTOR_ARGS) {}
    CProxySection_Writers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems) 
        :CProxySection_ArrayElement(n,aid,elems,nElems) { ckAutoDelegate(); }
    CProxySection_Writers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems) 
        :CProxySection_ArrayElement(aid,elems) { ckAutoDelegate(); }
    CProxySection_Writers(int n, const CkArrayID *aid, CkArrayIndex const * const *elems, const int *nElems, int factor) 
        :CProxySection_ArrayElement(n,aid,elems,nElems, factor) { ckAutoDelegate(); }
    CProxySection_Writers(const std::vector<CkArrayID> &aid, const std::vector<std::vector<CkArrayIndex> > &elems, int factor) 
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
/* DECLS: Writers(const CProxy_Main &impl_noname_1);
 */
    

/* DECLS: void setInputStreamId(const StreamToken &input_id);
 */
    
    void setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: void beginWork();
 */
    
    void beginWork(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
    
    void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) ;

/* DECLS: void finishedTask();
 */
    
    void finishedTask(const CkEntryOptions *impl_e_opts=NULL) ;

/* DECLS: Writers(CkMigrateMessage* impl_msg);
 */

};
#define Writers_SDAG_CODE                                                      \
public:                                                                        \
  void finishedTask();                                                         \
private:                                                                       \
  void finishedTask_end();                                                     \
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
  static int _sdag_idx_Writers_serial_0();                                     \
  static int _sdag_reg_Writers_serial_0();                                     \

typedef CBaseT1<ArrayElementT<CkIndex1D>, CProxy_Writers>CBase_Writers;


/* ---------------- method closures -------------- */
class Closure_Main {
  public:






    struct getEndTime_6_closure;


    struct getEndTimeAndExit_7_closure;


    struct doneCreatingData_8_closure;


    struct doneReceivingInput_9_closure;

};

/* ---------------- method closures -------------- */
class Closure_Readers {
  public:



    struct setOutputStreamId_3_closure;


    struct beginWork_4_closure;


    struct sendData_5_closure;


    struct finishedTask_6_closure;


};

/* ---------------- method closures -------------- */
class Closure_Validators {
  public:


    struct setOutputStreamId_2_closure;


    struct setInputStreamId_3_closure;


    struct beginWork_4_closure;



    struct finishedTask_6_closure;


};

/* ---------------- method closures -------------- */
class Closure_Filters {
  public:


    struct setOutputStreamId_2_closure;


    struct setInputStreamId_3_closure;


    struct beginWork_4_closure;



    struct finishedTask_6_closure;


};

/* ---------------- method closures -------------- */
class Closure_Transformers {
  public:


    struct setOutputStreamId_2_closure;


    struct setInputStreamId_3_closure;


    struct beginWork_4_closure;



    struct finishedTask_6_closure;


};

/* ---------------- method closures -------------- */
class Closure_Writers {
  public:


    struct setInputStreamId_2_closure;


    struct beginWork_3_closure;



    struct finishedTask_5_closure;


};

extern void _registerstreamtest(void);
extern "C" void CkRegisterMainModule(void);
#endif
