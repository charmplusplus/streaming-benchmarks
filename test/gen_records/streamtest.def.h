
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::doneCreatingInput_2_closure : public SDAG::Closure {
      

      doneCreatingInput_2_closure() {
        init();
      }
      doneCreatingInput_2_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~doneCreatingInput_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(doneCreatingInput_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Generators::generateJsonData_3_closure : public SDAG::Closure {
            int num_record;


      generateJsonData_3_closure() {
        init();
      }
      generateJsonData_3_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return num_record;}
      void pup(PUP::er& __p) {
        __p | num_record;
        packClosure(__p);
      }
      virtual ~generateJsonData_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(generateJsonData_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void doneCreatingInput();
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
/* DEFS: void doneCreatingInput();
 */
void CProxy_Main::doneCreatingInput(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_doneCreatingInput_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_doneCreatingInput_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_doneCreatingInput_void(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_doneCreatingInput_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->doneCreatingInput();
  
}


// Entry point registration function
int CkIndex_Main::reg_doneCreatingInput_void() {
  int epidx = CkRegisterEp("doneCreatingInput()",
      reinterpret_cast<CkCallFnPtr>(_call_doneCreatingInput_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_doneCreatingInput_void() {
  return CkRegisterEp("redn_wrapper_doneCreatingInput(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_doneCreatingInput_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_doneCreatingInput_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->doneCreatingInput();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::doneCreatingInput_2_closure))
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

  // REG: void doneCreatingInput();
  idx_doneCreatingInput_void();
  idx_redn_wrapper_doneCreatingInput_void();

  Main::__sdag_register(); // Potentially missing Main_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Main::doneCreatingInput() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::doneCreatingInput_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_slist_0() {
  _serial_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_slist_0_end() {
  doneCreatingInput_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_serial_0() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Main_serial_0()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 7 "streamtest.ci"

    CkPrintf("Done creating input; input generation took %f\n", CkWallTimer() - start_time);
    CkExit(0);
   
#line 206 "streamtest.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_0_end();
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
  PUPable_reg(SINGLE_ARG(Closure_Main::doneCreatingInput_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::doneCreatingInput_2_closure));
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



/* DEFS: array Generators: ArrayElement{
Generators();
Generators(const CProxy_Main &impl_noname_0);
void generateJsonData(int num_record);
Generators(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Generators::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Generators::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Generators::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Generators::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Generators::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Generators::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Generators::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Generators();
 */
void CProxyElement_Generators::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Generators::idx_Generators_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Generators(const CProxy_Main &impl_noname_0);
 */
void CProxyElement_Generators::insert(const CProxy_Main &impl_noname_0, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const CProxy_Main &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Generators::idx_Generators_marshall2(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generateJsonData(int num_record);
 */
void CProxyElement_Generators::generateJsonData(int num_record, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int num_record
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num_record;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num_record;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Generators::idx_generateJsonData_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Generators(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Generators();
 */
CkArrayID CProxy_Generators::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Generators::idx_Generators_void(), opts);
  return gId;
}
void CProxy_Generators::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Generators::idx_Generators_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Generators::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Generators::idx_Generators_void(), opts);
  return gId;
}
void CProxy_Generators::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Generators::idx_Generators_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Generators::reg_Generators_void() {
  int epidx = CkRegisterEp("Generators()",
      reinterpret_cast<CkCallFnPtr>(_call_Generators_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Generators::_call_Generators_void(void* impl_msg, void* impl_obj_void)
{
  Generators* impl_obj = static_cast<Generators*>(impl_obj_void);
  new (impl_obj_void) Generators();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Generators(const CProxy_Main &impl_noname_0);
 */
CkArrayID CProxy_Generators::ckNew(const CProxy_Main &impl_noname_0, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_Main &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Generators::idx_Generators_marshall2(), opts);
  return gId;
}
void CProxy_Generators::ckNew(const CProxy_Main &impl_noname_0, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_Main &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Generators::idx_Generators_marshall2(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Generators::ckNew(const CProxy_Main &impl_noname_0, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_Main &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Generators::idx_Generators_marshall2(), opts);
  return gId;
}
void CProxy_Generators::ckNew(const CProxy_Main &impl_noname_0, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_Main &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Generators::idx_Generators_marshall2(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Generators::reg_Generators_marshall2() {
  int epidx = CkRegisterEp("Generators(const CProxy_Main &impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_Generators_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Generators_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Generators_marshall2);

  return epidx;
}

void CkIndex_Generators::_call_Generators_marshall2(void* impl_msg, void* impl_obj_void)
{
  Generators* impl_obj = static_cast<Generators*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_Main &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_Main> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Generators(std::move(impl_noname_0.t));
}
int CkIndex_Generators::_callmarshall_Generators_marshall2(char* impl_buf, void* impl_obj_void) {
  Generators* impl_obj = static_cast<Generators*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CProxy_Main &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_Main> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Generators(std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_Generators::_marshallmessagepup_Generators_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_Main &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_Main> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generateJsonData(int num_record);
 */
void CProxy_Generators::generateJsonData(int num_record, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int num_record
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num_record;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num_record;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Generators::idx_generateJsonData_marshall3(),0);
}

// Entry point registration function
int CkIndex_Generators::reg_generateJsonData_marshall3() {
  int epidx = CkRegisterEp("generateJsonData(int num_record)",
      reinterpret_cast<CkCallFnPtr>(_call_generateJsonData_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_generateJsonData_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_generateJsonData_marshall3);

  return epidx;
}

void CkIndex_Generators::_call_generateJsonData_marshall3(void* impl_msg, void* impl_obj_void)
{
  Generators* impl_obj = static_cast<Generators*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int num_record*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num_record;
  implP|num_record;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->generateJsonData(std::move(num_record.t));
}
int CkIndex_Generators::_callmarshall_generateJsonData_marshall3(char* impl_buf, void* impl_obj_void) {
  Generators* impl_obj = static_cast<Generators*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int num_record*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num_record;
  implP|num_record;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->generateJsonData(std::move(num_record.t));
  return implP.size();
}
void CkIndex_Generators::_marshallmessagepup_generateJsonData_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int num_record*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num_record;
  implP|num_record;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("num_record");
  implDestP|num_record;
}
PUPable_def(SINGLE_ARG(Closure_Generators::generateJsonData_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Generators(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Generators::reg_Generators_CkMigrateMessage() {
  int epidx = CkRegisterEp("Generators(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Generators_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Generators::_call_Generators_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Generators> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Generators();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Generators(const CProxy_Main &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void generateJsonData(int num_record);
 */
void CProxySection_Generators::generateJsonData(int num_record, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: int num_record
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num_record;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num_record;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Generators::idx_generateJsonData_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Generators(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Generators::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Generators();
  idx_Generators_void();
  CkRegisterDefaultCtor(__idx, idx_Generators_void());

  // REG: Generators(const CProxy_Main &impl_noname_0);
  idx_Generators_marshall2();

  // REG: void generateJsonData(int num_record);
  idx_generateJsonData_marshall3();

  // REG: Generators(CkMigrateMessage* impl_msg);
  idx_Generators_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Generators_CkMigrateMessage());

}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void _registerstreamtest(void)
{
  static int _done = 0; if(_done) return; _done = 1;

/* REG: mainchare Main: Chare{
Main(CkArgMsg* impl_msg);
void doneCreatingInput();
};
*/
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: array Generators: ArrayElement{
Generators();
Generators(const CProxy_Main &impl_noname_0);
void generateJsonData(int num_record);
Generators(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Generators::__register("Generators", sizeof(Generators));

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
void CBase_Generators::virtual_pup(PUP::er &p) {
    recursive_pup<Generators>(dynamic_cast<Generators*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
