
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Producers::doneWriting_2_closure : public SDAG::Closure {
      

      doneWriting_2_closure() {
        init();
      }
      doneWriting_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~doneWriting_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(doneWriting_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Consumers::finishReading_3_closure : public SDAG::Closure {
      

      finishReading_3_closure() {
        init();
      }
      finishReading_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finishReading_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(finishReading_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void streamMade(Ck::Stream::StreamIdMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Main::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Main(CkArgMsg* impl_msg);
 */
CkChareID CProxy_Main::ckNew(CkArgMsg* impl_msg, int impl_onPE)
{
  CkChareID impl_ret;
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, &impl_ret, impl_onPE);
  return impl_ret;
}
void CProxy_Main::ckNew(CkArgMsg* impl_msg, CkChareID* pcid, int impl_onPE)
{
  CkCreateChare(CkIndex_Main::__idx, CkIndex_Main::idx_Main_CkArgMsg(), impl_msg, pcid, impl_onPE);
}

// Entry point registration function
int CkIndex_Main::reg_Main_CkArgMsg() {
  int epidx = CkRegisterEp("Main(CkArgMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Main_CkArgMsg), CMessage_CkArgMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)CkArgMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Main::_call_Main_CkArgMsg(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  new (impl_obj_void) Main((CkArgMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void streamMade(Ck::Stream::StreamIdMessage* impl_msg);
 */
void CProxy_Main::streamMade(Ck::Stream::StreamIdMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_streamMade_StreamIdMessage(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_streamMade_StreamIdMessage(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_streamMade_StreamIdMessage(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Main::reg_streamMade_StreamIdMessage() {
  int epidx = CkRegisterEp("streamMade(Ck::Stream::StreamIdMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_streamMade_StreamIdMessage), Ck::Stream::CMessage_StreamIdMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)Ck::Stream::StreamIdMessage::ckDebugPup);
  return epidx;
}

void CkIndex_Main::_call_streamMade_StreamIdMessage(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->streamMade((Ck::Stream::StreamIdMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Main::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeMainChare);
  CkRegisterBase(__idx, CkIndex_Chare::__idx);
  // REG: Main(CkArgMsg* impl_msg);
  idx_Main_CkArgMsg();
  CkRegisterMainChare(__idx, idx_Main_CkArgMsg());

  // REG: void streamMade(Ck::Stream::StreamIdMessage* impl_msg);
  idx_streamMade_StreamIdMessage();

  Main::__sdag_register(); // Potentially missing Main_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Main::streamMade(Ck::Stream::StreamIdMessage* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(gen0);
  _slist_0(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::streamMade_end(Ck::Stream::StreamIdMessage* gen0) {
  CmiFree(UsrToEnv(gen0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_slist_0(Ck::Stream::StreamIdMessage* gen0) {
  _serial_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_slist_0_end(Ck::Stream::StreamIdMessage* gen0) {
  streamMade_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_serial_0(Ck::Stream::StreamIdMessage* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Main_serial_0()), CkMyPe(), 0, NULL, this); 
  {
    Ck::Stream::StreamIdMessage*& msg = gen0;
    { // begin serial block
#line 7 "streamtest.ci"

    size_t id = msg -> id;
    CkPrintf("Got the stream id: %d\n", id);
    producers = CProxy_Producers::ckNew(id, 1);
    consumers = CProxy_Consumers::ckNew(id, 1);
   
#line 201 "streamtest.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_sdag_init() { // Potentially missing Main_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(0,0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::__sdag_init() { // Potentially missing Main_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_sdag_pup(PUP::er &p) {  // Potentially missing Main_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::__sdag_register() { // Potentially missing Main_SDAG_CODE in your class definition?
  (void)_sdag_idx_Main_serial_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_idx_Main_serial_0() { // Potentially missing Main_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Main_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_reg_Main_serial_0() { // Potentially missing Main_SDAG_CODE in your class definition?
  return CkRegisterEp("Main_serial_0", NULL, 0, CkIndex_Main::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array Producers: ArrayElement{
Producers(const StreamToken &stream);
void doneWriting();
Producers(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Producers::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Producers::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Producers::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Producers::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Producers::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Producers::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Producers::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Producers(const StreamToken &stream);
 */
void CProxyElement_Producers::insert(const StreamToken &stream, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const StreamToken &stream
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Producers::idx_Producers_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneWriting();
 */
void CProxyElement_Producers::doneWriting(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Producers::idx_doneWriting_void(),0);
}
void CkIndex_Producers::_call_redn_wrapper_doneWriting_void(void* impl_msg, void* impl_obj_void)
{
  Producers* impl_obj = static_cast<Producers*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->doneWriting();
  delete (CkReductionMsg*)impl_msg;
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Producers(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Producers(const StreamToken &stream);
 */
CkArrayID CProxy_Producers::ckNew(const StreamToken &stream, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const StreamToken &stream
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Producers::idx_Producers_marshall1(), opts);
  return gId;
}
void CProxy_Producers::ckNew(const StreamToken &stream, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const StreamToken &stream
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Producers::idx_Producers_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Producers::ckNew(const StreamToken &stream, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const StreamToken &stream
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Producers::idx_Producers_marshall1(), opts);
  return gId;
}
void CProxy_Producers::ckNew(const StreamToken &stream, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const StreamToken &stream
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Producers::idx_Producers_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Producers::reg_Producers_marshall1() {
  int epidx = CkRegisterEp("Producers(const StreamToken &stream)",
      reinterpret_cast<CkCallFnPtr>(_call_Producers_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Producers_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Producers_marshall1);

  return epidx;
}

void CkIndex_Producers::_call_Producers_marshall1(void* impl_msg, void* impl_obj_void)
{
  Producers* impl_obj = static_cast<Producers*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &stream*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> stream;
  implP|stream;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Producers(std::move(stream.t));
}
int CkIndex_Producers::_callmarshall_Producers_marshall1(char* impl_buf, void* impl_obj_void) {
  Producers* impl_obj = static_cast<Producers*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const StreamToken &stream*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> stream;
  implP|stream;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Producers(std::move(stream.t));
  return implP.size();
}
void CkIndex_Producers::_marshallmessagepup_Producers_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &stream*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> stream;
  implP|stream;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("stream");
  implDestP|stream;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneWriting();
 */
void CProxy_Producers::doneWriting(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Producers::idx_doneWriting_void(),0);
}

// Entry point registration function
int CkIndex_Producers::reg_doneWriting_void() {
  int epidx = CkRegisterEp("doneWriting()",
      reinterpret_cast<CkCallFnPtr>(_call_doneWriting_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Producers::reg_redn_wrapper_doneWriting_void() {
  return CkRegisterEp("redn_wrapper_doneWriting(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_doneWriting_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Producers::_call_doneWriting_void(void* impl_msg, void* impl_obj_void)
{
  Producers* impl_obj = static_cast<Producers*>(impl_obj_void);
  impl_obj->doneWriting();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Producers::doneWriting_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Producers(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Producers::reg_Producers_CkMigrateMessage() {
  int epidx = CkRegisterEp("Producers(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Producers_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Producers::_call_Producers_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Producers> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Producers(const StreamToken &stream);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneWriting();
 */
void CProxySection_Producers::doneWriting(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Producers::idx_doneWriting_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Producers(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Producers::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Producers(const StreamToken &stream);
  idx_Producers_marshall1();

  // REG: void doneWriting();
  idx_doneWriting_void();
  idx_redn_wrapper_doneWriting_void();

  // REG: Producers(CkMigrateMessage* impl_msg);
  idx_Producers_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Producers_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

/* DEFS: array Consumers: ArrayElement{
Consumers(const StreamToken &stream);
void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishReading();
Consumers(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Consumers::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Consumers::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Consumers::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Consumers::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Consumers::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Consumers::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Consumers::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Consumers(const StreamToken &stream);
 */
void CProxyElement_Consumers::insert(const StreamToken &stream, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const StreamToken &stream
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Consumers::idx_Consumers_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxyElement_Consumers::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Consumers::idx_recvData_StreamDeliveryMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishReading();
 */
void CProxyElement_Consumers::finishReading(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Consumers::idx_finishReading_void(),0);
}
void CkIndex_Consumers::_call_redn_wrapper_finishReading_void(void* impl_msg, void* impl_obj_void)
{
  Consumers* impl_obj = static_cast<Consumers*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->finishReading();
  
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Consumers(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Consumers(const StreamToken &stream);
 */
CkArrayID CProxy_Consumers::ckNew(const StreamToken &stream, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const StreamToken &stream
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Consumers::idx_Consumers_marshall1(), opts);
  return gId;
}
void CProxy_Consumers::ckNew(const StreamToken &stream, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const StreamToken &stream
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Consumers::idx_Consumers_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Consumers::ckNew(const StreamToken &stream, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const StreamToken &stream
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Consumers::idx_Consumers_marshall1(), opts);
  return gId;
}
void CProxy_Consumers::ckNew(const StreamToken &stream, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const StreamToken &stream
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)stream;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Consumers::idx_Consumers_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Consumers::reg_Consumers_marshall1() {
  int epidx = CkRegisterEp("Consumers(const StreamToken &stream)",
      reinterpret_cast<CkCallFnPtr>(_call_Consumers_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Consumers_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Consumers_marshall1);

  return epidx;
}

void CkIndex_Consumers::_call_Consumers_marshall1(void* impl_msg, void* impl_obj_void)
{
  Consumers* impl_obj = static_cast<Consumers*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &stream*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> stream;
  implP|stream;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Consumers(std::move(stream.t));
}
int CkIndex_Consumers::_callmarshall_Consumers_marshall1(char* impl_buf, void* impl_obj_void) {
  Consumers* impl_obj = static_cast<Consumers*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const StreamToken &stream*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> stream;
  implP|stream;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Consumers(std::move(stream.t));
  return implP.size();
}
void CkIndex_Consumers::_marshallmessagepup_Consumers_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &stream*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> stream;
  implP|stream;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("stream");
  implDestP|stream;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxy_Consumers::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Consumers::idx_recvData_StreamDeliveryMsg(),0);
}

// Entry point registration function
int CkIndex_Consumers::reg_recvData_StreamDeliveryMsg() {
  int epidx = CkRegisterEp("recvData(Ck::Stream::StreamDeliveryMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvData_StreamDeliveryMsg), Ck::Stream::CMessage_StreamDeliveryMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)Ck::Stream::StreamDeliveryMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Consumers::_call_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj_void)
{
  Consumers* impl_obj = static_cast<Consumers*>(impl_obj_void);
  impl_obj->recvData((Ck::Stream::StreamDeliveryMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishReading();
 */
void CProxy_Consumers::finishReading(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Consumers::idx_finishReading_void(),0);
}

// Entry point registration function
int CkIndex_Consumers::reg_finishReading_void() {
  int epidx = CkRegisterEp("finishReading()",
      reinterpret_cast<CkCallFnPtr>(_call_finishReading_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Consumers::reg_redn_wrapper_finishReading_void() {
  return CkRegisterEp("redn_wrapper_finishReading(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_finishReading_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Consumers::_call_finishReading_void(void* impl_msg, void* impl_obj_void)
{
  Consumers* impl_obj = static_cast<Consumers*>(impl_obj_void);
  impl_obj->finishReading();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Consumers::finishReading_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Consumers(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Consumers::reg_Consumers_CkMigrateMessage() {
  int epidx = CkRegisterEp("Consumers(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Consumers_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Consumers::_call_Consumers_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Consumers> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Consumers(const StreamToken &stream);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxySection_Consumers::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Consumers::idx_recvData_StreamDeliveryMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishReading();
 */
void CProxySection_Consumers::finishReading(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Consumers::idx_finishReading_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Consumers(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Consumers::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Consumers(const StreamToken &stream);
  idx_Consumers_marshall1();

  // REG: void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
  idx_recvData_StreamDeliveryMsg();

  // REG: void finishReading();
  idx_finishReading_void();
  idx_redn_wrapper_finishReading_void();

  // REG: Consumers(CkMigrateMessage* impl_msg);
  idx_Consumers_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Consumers_CkMigrateMessage());

  Consumers::__sdag_register(); // Potentially missing Consumers_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Consumers::recvData(Ck::Stream::StreamDeliveryMsg* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  CkReferenceMsg(gen0);
  _slist_0(gen0);
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Consumers::recvData_end(Ck::Stream::StreamDeliveryMsg* gen0) {
  CmiFree(UsrToEnv(gen0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Consumers::_slist_0(Ck::Stream::StreamDeliveryMsg* gen0) {
  _serial_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Consumers::_slist_0_end(Ck::Stream::StreamDeliveryMsg* gen0) {
  recvData_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Consumers::_serial_0(Ck::Stream::StreamDeliveryMsg* gen0) {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Consumers_serial_0()), CkMyPe(), 0, &projID, this); 
  {
    Ck::Stream::StreamDeliveryMsg*& msg = gen0;
    { // begin serial block
#line 22 "streamtest.ci"

    char* data = (char*)(msg -> data);
    _num_bytes_received += msg -> num_bytes;
    if (msg -> num_bytes != 0) {
     CkPrintf("Received: %s", data);
     CkPrintf("\n");
    }
    if(msg -> status == Ck::Stream::StreamStatus::STREAM_OK) {
     CkPrintf("issuing another get request...\n");
     Ck::Stream::getRecord(_stream, CkCallback(CkIndex_Consumers::recvData(0), thisProxy[thisIndex]));
    } else {
     CkPrintf("Consumer %d has received the done signal and consumed %d bytes...\n", thisIndex, _num_bytes_received);
     CkCallback cb = CkCallback(CkReductionTarget(Consumers, finishReading), thisProxy[0]);
     contribute(cb);
    }
   
#line 1048 "streamtest.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Consumers::finishReading() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_1();
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Consumers::finishReading_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Consumers::_slist_1() {
  _serial_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Consumers::_slist_1_end() {
  finishReading_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Consumers::_serial_1() {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Consumers_serial_1()), CkMyPe(), 0, &projID, this); 
  { // begin serial block
#line 40 "streamtest.ci"

    CkPrintf("All consumers done reading!\n");
    CkExit(0);
   
#line 1098 "streamtest.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_1_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Consumers::_sdag_init() { // Potentially missing Consumers_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(0,0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Consumers::__sdag_init() { // Potentially missing Consumers_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Consumers::_sdag_pup(PUP::er &p) {  // Potentially missing Consumers_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Consumers::__sdag_register() { // Potentially missing Consumers_SDAG_CODE in your class definition?
  (void)_sdag_idx_Consumers_serial_0();
  (void)_sdag_idx_Consumers_serial_1();
  PUPable_reg(SINGLE_ARG(Closure_Consumers::finishReading_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Consumers::finishReading_3_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Consumers::_sdag_idx_Consumers_serial_0() { // Potentially missing Consumers_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Consumers_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Consumers::_sdag_reg_Consumers_serial_0() { // Potentially missing Consumers_SDAG_CODE in your class definition?
  return CkRegisterEp("Consumers_serial_0", NULL, 0, CkIndex_Consumers::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Consumers::_sdag_idx_Consumers_serial_1() { // Potentially missing Consumers_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Consumers_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Consumers::_sdag_reg_Consumers_serial_1() { // Potentially missing Consumers_SDAG_CODE in your class definition?
  return CkRegisterEp("Consumers_serial_1", NULL, 0, CkIndex_Consumers::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
void _registerstreamtest(void)
{
  static int _done = 0; if(_done) return; _done = 1;

/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void streamMade(Ck::Stream::StreamIdMessage* impl_msg);
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: array Producers: ArrayElement{
Producers(const StreamToken &stream);
void doneWriting();
Producers(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Producers::__register("Producers", sizeof(Producers));

/* REG: array Consumers: ArrayElement{
Consumers(const StreamToken &stream);
void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishReading();
Consumers(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Consumers::__register("Consumers", sizeof(Consumers));

}
extern "C" void CkRegisterMainModule(void) {
  _registerstreamtest();
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Main::virtual_pup(PUP::er &p) {
    recursive_pup<Main>(dynamic_cast<Main*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Producers::virtual_pup(PUP::er &p) {
    recursive_pup<Producers>(dynamic_cast<Producers*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Consumers::virtual_pup(PUP::er &p) {
    recursive_pup<Consumers>(dynamic_cast<Consumers*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
