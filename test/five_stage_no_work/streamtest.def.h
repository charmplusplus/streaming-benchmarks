
/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::getEndTime_6_closure : public SDAG::Closure {
      

      getEndTime_6_closure() {
        init();
      }
      getEndTime_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~getEndTime_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(getEndTime_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::getEndTimeAndExit_7_closure : public SDAG::Closure {
      

      getEndTimeAndExit_7_closure() {
        init();
      }
      getEndTimeAndExit_7_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~getEndTimeAndExit_7_closure() {
      }
      PUPable_decl(SINGLE_ARG(getEndTimeAndExit_7_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::doneCreatingData_8_closure : public SDAG::Closure {
            int total_records;


      doneCreatingData_8_closure() {
        init();
      }
      doneCreatingData_8_closure(CkMigrateMessage*) {
        init();
      }
            int & getP0() { return total_records;}
      void pup(PUP::er& __p) {
        __p | total_records;
        packClosure(__p);
      }
      virtual ~doneCreatingData_8_closure() {
      }
      PUPable_decl(SINGLE_ARG(doneCreatingData_8_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Main::doneReceivingInput_9_closure : public SDAG::Closure {
      

      doneReceivingInput_9_closure() {
        init();
      }
      doneReceivingInput_9_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~doneReceivingInput_9_closure() {
      }
      PUPable_decl(SINGLE_ARG(doneReceivingInput_9_closure));
    };
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Readers::setOutputStreamId_3_closure : public SDAG::Closure {
            StreamToken output_id;


      setOutputStreamId_3_closure() {
        init();
      }
      setOutputStreamId_3_closure(CkMigrateMessage*) {
        init();
      }
            StreamToken & getP0() { return output_id;}
      void pup(PUP::er& __p) {
        __p | output_id;
        packClosure(__p);
      }
      virtual ~setOutputStreamId_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(setOutputStreamId_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Readers::beginWork_4_closure : public SDAG::Closure {
      

      beginWork_4_closure() {
        init();
      }
      beginWork_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~beginWork_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(beginWork_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Readers::sendData_5_closure : public SDAG::Closure {
      

      sendData_5_closure() {
        init();
      }
      sendData_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~sendData_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(sendData_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Readers::finishedTask_6_closure : public SDAG::Closure {
      

      finishedTask_6_closure() {
        init();
      }
      finishedTask_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finishedTask_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(finishedTask_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Validators::setOutputStreamId_2_closure : public SDAG::Closure {
            StreamToken output_id;


      setOutputStreamId_2_closure() {
        init();
      }
      setOutputStreamId_2_closure(CkMigrateMessage*) {
        init();
      }
            StreamToken & getP0() { return output_id;}
      void pup(PUP::er& __p) {
        __p | output_id;
        packClosure(__p);
      }
      virtual ~setOutputStreamId_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(setOutputStreamId_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Validators::setInputStreamId_3_closure : public SDAG::Closure {
            StreamToken input_id;


      setInputStreamId_3_closure() {
        init();
      }
      setInputStreamId_3_closure(CkMigrateMessage*) {
        init();
      }
            StreamToken & getP0() { return input_id;}
      void pup(PUP::er& __p) {
        __p | input_id;
        packClosure(__p);
      }
      virtual ~setInputStreamId_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(setInputStreamId_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Validators::beginWork_4_closure : public SDAG::Closure {
      

      beginWork_4_closure() {
        init();
      }
      beginWork_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~beginWork_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(beginWork_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Validators::finishedTask_6_closure : public SDAG::Closure {
      

      finishedTask_6_closure() {
        init();
      }
      finishedTask_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finishedTask_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(finishedTask_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Filters::setOutputStreamId_2_closure : public SDAG::Closure {
            StreamToken output_id;


      setOutputStreamId_2_closure() {
        init();
      }
      setOutputStreamId_2_closure(CkMigrateMessage*) {
        init();
      }
            StreamToken & getP0() { return output_id;}
      void pup(PUP::er& __p) {
        __p | output_id;
        packClosure(__p);
      }
      virtual ~setOutputStreamId_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(setOutputStreamId_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Filters::setInputStreamId_3_closure : public SDAG::Closure {
            StreamToken input_id;


      setInputStreamId_3_closure() {
        init();
      }
      setInputStreamId_3_closure(CkMigrateMessage*) {
        init();
      }
            StreamToken & getP0() { return input_id;}
      void pup(PUP::er& __p) {
        __p | input_id;
        packClosure(__p);
      }
      virtual ~setInputStreamId_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(setInputStreamId_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Filters::beginWork_4_closure : public SDAG::Closure {
      

      beginWork_4_closure() {
        init();
      }
      beginWork_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~beginWork_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(beginWork_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Filters::finishedTask_6_closure : public SDAG::Closure {
      

      finishedTask_6_closure() {
        init();
      }
      finishedTask_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finishedTask_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(finishedTask_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Transformers::setOutputStreamId_2_closure : public SDAG::Closure {
            StreamToken output_id;


      setOutputStreamId_2_closure() {
        init();
      }
      setOutputStreamId_2_closure(CkMigrateMessage*) {
        init();
      }
            StreamToken & getP0() { return output_id;}
      void pup(PUP::er& __p) {
        __p | output_id;
        packClosure(__p);
      }
      virtual ~setOutputStreamId_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(setOutputStreamId_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Transformers::setInputStreamId_3_closure : public SDAG::Closure {
            StreamToken input_id;


      setInputStreamId_3_closure() {
        init();
      }
      setInputStreamId_3_closure(CkMigrateMessage*) {
        init();
      }
            StreamToken & getP0() { return input_id;}
      void pup(PUP::er& __p) {
        __p | input_id;
        packClosure(__p);
      }
      virtual ~setInputStreamId_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(setInputStreamId_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Transformers::beginWork_4_closure : public SDAG::Closure {
      

      beginWork_4_closure() {
        init();
      }
      beginWork_4_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~beginWork_4_closure() {
      }
      PUPable_decl(SINGLE_ARG(beginWork_4_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Transformers::finishedTask_6_closure : public SDAG::Closure {
      

      finishedTask_6_closure() {
        init();
      }
      finishedTask_6_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finishedTask_6_closure() {
      }
      PUPable_decl(SINGLE_ARG(finishedTask_6_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */


/* ---------------- method closures -------------- */
#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Writers::setInputStreamId_2_closure : public SDAG::Closure {
            StreamToken input_id;


      setInputStreamId_2_closure() {
        init();
      }
      setInputStreamId_2_closure(CkMigrateMessage*) {
        init();
      }
            StreamToken & getP0() { return input_id;}
      void pup(PUP::er& __p) {
        __p | input_id;
        packClosure(__p);
      }
      virtual ~setInputStreamId_2_closure() {
      }
      PUPable_decl(SINGLE_ARG(setInputStreamId_2_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Writers::beginWork_3_closure : public SDAG::Closure {
      

      beginWork_3_closure() {
        init();
      }
      beginWork_3_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~beginWork_3_closure() {
      }
      PUPable_decl(SINGLE_ARG(beginWork_3_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY

    struct Closure_Writers::finishedTask_5_closure : public SDAG::Closure {
      

      finishedTask_5_closure() {
        init();
      }
      finishedTask_5_closure(CkMigrateMessage*) {
        init();
      }
            void pup(PUP::er& __p) {
        packClosure(__p);
      }
      virtual ~finishedTask_5_closure() {
      }
      PUPable_decl(SINGLE_ARG(finishedTask_5_closure));
    };
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: mainchare Main: Chare{
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
/* DEFS: void readersValidatorsStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
 */
void CProxy_Main::readersValidatorsStreamMade(Ck::Stream::StreamIdMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_readersValidatorsStreamMade_StreamIdMessage(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_readersValidatorsStreamMade_StreamIdMessage(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_readersValidatorsStreamMade_StreamIdMessage(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Main::reg_readersValidatorsStreamMade_StreamIdMessage() {
  int epidx = CkRegisterEp("readersValidatorsStreamMade(Ck::Stream::StreamIdMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_readersValidatorsStreamMade_StreamIdMessage), Ck::Stream::CMessage_StreamIdMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)Ck::Stream::StreamIdMessage::ckDebugPup);
  return epidx;
}

void CkIndex_Main::_call_readersValidatorsStreamMade_StreamIdMessage(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->readersValidatorsStreamMade((Ck::Stream::StreamIdMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void validatorsFiltersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
 */
void CProxy_Main::validatorsFiltersStreamMade(Ck::Stream::StreamIdMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_validatorsFiltersStreamMade_StreamIdMessage(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_validatorsFiltersStreamMade_StreamIdMessage(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_validatorsFiltersStreamMade_StreamIdMessage(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Main::reg_validatorsFiltersStreamMade_StreamIdMessage() {
  int epidx = CkRegisterEp("validatorsFiltersStreamMade(Ck::Stream::StreamIdMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_validatorsFiltersStreamMade_StreamIdMessage), Ck::Stream::CMessage_StreamIdMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)Ck::Stream::StreamIdMessage::ckDebugPup);
  return epidx;
}

void CkIndex_Main::_call_validatorsFiltersStreamMade_StreamIdMessage(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->validatorsFiltersStreamMade((Ck::Stream::StreamIdMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void filtersTransformersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
 */
void CProxy_Main::filtersTransformersStreamMade(Ck::Stream::StreamIdMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_filtersTransformersStreamMade_StreamIdMessage(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_filtersTransformersStreamMade_StreamIdMessage(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_filtersTransformersStreamMade_StreamIdMessage(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Main::reg_filtersTransformersStreamMade_StreamIdMessage() {
  int epidx = CkRegisterEp("filtersTransformersStreamMade(Ck::Stream::StreamIdMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_filtersTransformersStreamMade_StreamIdMessage), Ck::Stream::CMessage_StreamIdMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)Ck::Stream::StreamIdMessage::ckDebugPup);
  return epidx;
}

void CkIndex_Main::_call_filtersTransformersStreamMade_StreamIdMessage(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->filtersTransformersStreamMade((Ck::Stream::StreamIdMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void transformersWritersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
 */
void CProxy_Main::transformersWritersStreamMade(Ck::Stream::StreamIdMessage* impl_msg)
{
  ckCheck();
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_transformersWritersStreamMade_StreamIdMessage(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_transformersWritersStreamMade_StreamIdMessage(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_transformersWritersStreamMade_StreamIdMessage(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Main::reg_transformersWritersStreamMade_StreamIdMessage() {
  int epidx = CkRegisterEp("transformersWritersStreamMade(Ck::Stream::StreamIdMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_transformersWritersStreamMade_StreamIdMessage), Ck::Stream::CMessage_StreamIdMessage::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)Ck::Stream::StreamIdMessage::ckDebugPup);
  return epidx;
}

void CkIndex_Main::_call_transformersWritersStreamMade_StreamIdMessage(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->transformersWritersStreamMade((Ck::Stream::StreamIdMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getEndTime();
 */
void CProxy_Main::getEndTime(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_getEndTime_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_getEndTime_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_getEndTime_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Main::reg_getEndTime_void() {
  int epidx = CkRegisterEp("getEndTime()",
      reinterpret_cast<CkCallFnPtr>(_call_getEndTime_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Main::_call_getEndTime_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->getEndTime();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::getEndTime_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void getEndTimeAndExit();
 */
void CProxy_Main::getEndTimeAndExit(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_getEndTimeAndExit_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_getEndTimeAndExit_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_getEndTimeAndExit_void(), impl_msg, &ckGetChareID(),0);
  }
}

// Entry point registration function
int CkIndex_Main::reg_getEndTimeAndExit_void() {
  int epidx = CkRegisterEp("getEndTimeAndExit()",
      reinterpret_cast<CkCallFnPtr>(_call_getEndTimeAndExit_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Main::_call_getEndTimeAndExit_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->getEndTimeAndExit();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::getEndTimeAndExit_7_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneCreatingData(int total_records);
 */
void CProxy_Main::doneCreatingData(int total_records, const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  //Marshall: int total_records
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|total_records;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|total_records;
  }
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_doneCreatingData_marshall8(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_doneCreatingData_marshall8(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_doneCreatingData_marshall8(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_doneCreatingData_marshall8(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
Closure_Main::doneCreatingData_8_closure* genClosure = new Closure_Main::doneCreatingData_8_closure();
  /*Unmarshall pup'd fields: int total_records*/
  PUP::fromMem implP(impl_buf);
  /* non two-param case */
  implP|genClosure->total_records;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  genClosure->setRefnum(CkGetRefNum((CkReductionMsg*)impl_msg));
  impl_obj->doneCreatingData(genClosure);
  genClosure->deref();
  
}


// Entry point registration function
int CkIndex_Main::reg_doneCreatingData_marshall8() {
  int epidx = CkRegisterEp("doneCreatingData(int total_records)",
      reinterpret_cast<CkCallFnPtr>(_call_doneCreatingData_marshall8), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_doneCreatingData_marshall8);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_doneCreatingData_marshall8);

  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_doneCreatingData_marshall8() {
  return CkRegisterEp("redn_wrapper_doneCreatingData(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_doneCreatingData_marshall8), CkMarshallMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_doneCreatingData_marshall8(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  PUP::fromMem implP(impl_buf);
  Closure_Main::doneCreatingData_8_closure* genClosure = new Closure_Main::doneCreatingData_8_closure();
  implP|genClosure->total_records;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->doneCreatingData(genClosure);
  genClosure->deref();
}
int CkIndex_Main::_callmarshall_doneCreatingData_marshall8(char* impl_buf, void* impl_obj_void) {
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  PUP::fromMem implP(impl_buf);
  Closure_Main::doneCreatingData_8_closure* genClosure = new Closure_Main::doneCreatingData_8_closure();
  implP|genClosure->total_records;
  impl_buf+=CK_ALIGN(implP.size(),16);
  impl_obj->doneCreatingData(genClosure);
  genClosure->deref();
  return implP.size();
}
void CkIndex_Main::_marshallmessagepup_doneCreatingData_marshall8(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int total_records*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> total_records;
  implP|total_records;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("total_records");
  implDestP|total_records;
}
PUPable_def(SINGLE_ARG(Closure_Main::doneCreatingData_8_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void doneReceivingInput();
 */
void CProxy_Main::doneReceivingInput(const CkEntryOptions *impl_e_opts)
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  if (ckIsDelegated()) {
    int destPE=CkChareMsgPrep(CkIndex_Main::idx_doneReceivingInput_void(), impl_msg, &ckGetChareID());
    if (destPE!=-1) ckDelegatedTo()->ChareSend(ckDelegatedPtr(),CkIndex_Main::idx_doneReceivingInput_void(), impl_msg, &ckGetChareID(),destPE);
  } else {
    CkSendMsg(CkIndex_Main::idx_doneReceivingInput_void(), impl_msg, &ckGetChareID(),0);
  }
}
void CkIndex_Main::_call_redn_wrapper_doneReceivingInput_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->doneReceivingInput();
  
}


// Entry point registration function
int CkIndex_Main::reg_doneReceivingInput_void() {
  int epidx = CkRegisterEp("doneReceivingInput()",
      reinterpret_cast<CkCallFnPtr>(_call_doneReceivingInput_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Main::reg_redn_wrapper_doneReceivingInput_void() {
  return CkRegisterEp("redn_wrapper_doneReceivingInput(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_doneReceivingInput_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Main::_call_doneReceivingInput_void(void* impl_msg, void* impl_obj_void)
{
  Main* impl_obj = static_cast<Main*>(impl_obj_void);
  impl_obj->doneReceivingInput();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Main::doneReceivingInput_9_closure))
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

  // REG: void readersValidatorsStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
  idx_readersValidatorsStreamMade_StreamIdMessage();

  // REG: void validatorsFiltersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
  idx_validatorsFiltersStreamMade_StreamIdMessage();

  // REG: void filtersTransformersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
  idx_filtersTransformersStreamMade_StreamIdMessage();

  // REG: void transformersWritersStreamMade(Ck::Stream::StreamIdMessage* impl_msg);
  idx_transformersWritersStreamMade_StreamIdMessage();

  // REG: void getEndTime();
  idx_getEndTime_void();

  // REG: void getEndTimeAndExit();
  idx_getEndTimeAndExit_void();

  // REG: void doneCreatingData(int total_records);
  idx_doneCreatingData_marshall8();
  idx_redn_wrapper_doneCreatingData_marshall8();

  // REG: void doneReceivingInput();
  idx_doneReceivingInput_void();
  idx_redn_wrapper_doneReceivingInput_void();

  Main::__sdag_register(); // Potentially missing Main_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Main::doneCreatingData(int total_records){
  Closure_Main::doneCreatingData_8_closure* genClosure = new Closure_Main::doneCreatingData_8_closure();
  genClosure->getP0() = total_records;
  doneCreatingData(genClosure);
  genClosure->deref();
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Main::doneCreatingData(Closure_Main::doneCreatingData_8_closure* gen0) {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0(gen0);
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::doneCreatingData_end(Closure_Main::doneCreatingData_8_closure* gen0) {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_slist_0(Closure_Main::doneCreatingData_8_closure* gen0) {
  _serial_0(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_slist_0_end(Closure_Main::doneCreatingData_8_closure* gen0) {
  doneCreatingData_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_serial_0(Closure_Main::doneCreatingData_8_closure* gen0) {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Main_serial_0()), CkMyPe(), 0, NULL, this); 
  {
    int& total_records = gen0->getP0();
    { // begin serial block
#line 13 "streamtest.ci"

				CkPrintf("Total of %d records have been writing, broadcast to readers to start reading", total_records);
			
#line 1025 "streamtest.def.h"
    } // end serial block
  }
  _TRACE_END_EXECUTE(); 
  _slist_0_end(gen0);
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::doneReceivingInput() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_1();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, NULL, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::doneReceivingInput_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_slist_1() {
  _serial_1();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_slist_1_end() {
  doneReceivingInput_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Main::_serial_1() {
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Main_serial_1()), CkMyPe(), 0, NULL, this); 
  { // begin serial block
#line 18 "streamtest.ci"

				CkPrintf("All readers have received their inputs, beginning work, input generation took %f\n", CkWallTimer() - start_time);
				start_time = CkWallTimer();
				Ck::Stream::createNewStream(CkCallback(CkIndex_Main::readersValidatorsStreamMade(0), thisProxy));
			
#line 1074 "streamtest.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_1_end();
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
  (void)_sdag_idx_Main_serial_1();
  PUPable_reg(SINGLE_ARG(Closure_Main::getEndTime_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::getEndTimeAndExit_7_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::doneCreatingData_8_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::doneReceivingInput_9_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::getEndTime_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::getEndTimeAndExit_7_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::doneCreatingData_8_closure));
  PUPable_reg(SINGLE_ARG(Closure_Main::doneReceivingInput_9_closure));
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


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_idx_Main_serial_1() { // Potentially missing Main_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Main_serial_1();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Main::_sdag_reg_Main_serial_1() { // Potentially missing Main_SDAG_CODE in your class definition?
  return CkRegisterEp("Main_serial_1", NULL, 0, CkIndex_Main::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array Readers: ArrayElement{
Readers();
Readers(int num_records, const CProxy_Main &impl_noname_0);
void setOutputStreamId(const StreamToken &output_id);
void beginWork();
void sendData();
void finishedTask();
Readers(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Readers::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Readers::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Readers::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Readers::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Readers::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Readers::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Readers::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Readers();
 */
void CProxyElement_Readers::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Readers::idx_Readers_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Readers(int num_records, const CProxy_Main &impl_noname_0);
 */
void CProxyElement_Readers::insert(int num_records, const CProxy_Main &impl_noname_0, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: int num_records, const CProxy_Main &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num_records;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num_records;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Readers::idx_Readers_marshall2(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setOutputStreamId(const StreamToken &output_id);
 */
void CProxyElement_Readers::setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &output_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Readers::idx_setOutputStreamId_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxyElement_Readers::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Readers::idx_beginWork_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendData();
 */
void CProxyElement_Readers::sendData(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Readers::idx_sendData_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxyElement_Readers::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Readers::idx_finishedTask_void(),0);
}
void CkIndex_Readers::_call_redn_wrapper_finishedTask_void(void* impl_msg, void* impl_obj_void)
{
  Readers* impl_obj = static_cast<Readers*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->finishedTask();
  
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Readers(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Readers();
 */
CkArrayID CProxy_Readers::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Readers::idx_Readers_void(), opts);
  return gId;
}
void CProxy_Readers::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Readers::idx_Readers_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Readers::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Readers::idx_Readers_void(), opts);
  return gId;
}
void CProxy_Readers::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Readers::idx_Readers_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Readers::reg_Readers_void() {
  int epidx = CkRegisterEp("Readers()",
      reinterpret_cast<CkCallFnPtr>(_call_Readers_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Readers::_call_Readers_void(void* impl_msg, void* impl_obj_void)
{
  Readers* impl_obj = static_cast<Readers*>(impl_obj_void);
  new (impl_obj_void) Readers();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Readers(int num_records, const CProxy_Main &impl_noname_0);
 */
CkArrayID CProxy_Readers::ckNew(int num_records, const CProxy_Main &impl_noname_0, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int num_records, const CProxy_Main &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num_records;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num_records;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Readers::idx_Readers_marshall2(), opts);
  return gId;
}
void CProxy_Readers::ckNew(int num_records, const CProxy_Main &impl_noname_0, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int num_records, const CProxy_Main &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num_records;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num_records;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Readers::idx_Readers_marshall2(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Readers::ckNew(int num_records, const CProxy_Main &impl_noname_0, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int num_records, const CProxy_Main &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num_records;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num_records;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Readers::idx_Readers_marshall2(), opts);
  return gId;
}
void CProxy_Readers::ckNew(int num_records, const CProxy_Main &impl_noname_0, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: int num_records, const CProxy_Main &impl_noname_0
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    implP|num_records;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    implP|num_records;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_0;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Readers::idx_Readers_marshall2(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Readers::reg_Readers_marshall2() {
  int epidx = CkRegisterEp("Readers(int num_records, const CProxy_Main &impl_noname_0)",
      reinterpret_cast<CkCallFnPtr>(_call_Readers_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Readers_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Readers_marshall2);

  return epidx;
}

void CkIndex_Readers::_call_Readers_marshall2(void* impl_msg, void* impl_obj_void)
{
  Readers* impl_obj = static_cast<Readers*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int num_records, const CProxy_Main &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num_records;
  implP|num_records;
  PUP::detail::TemporaryObjectHolder<CProxy_Main> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Readers(std::move(num_records.t), std::move(impl_noname_0.t));
}
int CkIndex_Readers::_callmarshall_Readers_marshall2(char* impl_buf, void* impl_obj_void) {
  Readers* impl_obj = static_cast<Readers*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: int num_records, const CProxy_Main &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num_records;
  implP|num_records;
  PUP::detail::TemporaryObjectHolder<CProxy_Main> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Readers(std::move(num_records.t), std::move(impl_noname_0.t));
  return implP.size();
}
void CkIndex_Readers::_marshallmessagepup_Readers_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: int num_records, const CProxy_Main &impl_noname_0*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<int> num_records;
  implP|num_records;
  PUP::detail::TemporaryObjectHolder<CProxy_Main> impl_noname_0;
  implP|impl_noname_0;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("num_records");
  implDestP|num_records;
  if (implDestP.hasComments()) implDestP.comment("impl_noname_0");
  implDestP|impl_noname_0;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setOutputStreamId(const StreamToken &output_id);
 */
void CProxy_Readers::setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &output_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Readers::idx_setOutputStreamId_marshall3(),0);
}

// Entry point registration function
int CkIndex_Readers::reg_setOutputStreamId_marshall3() {
  int epidx = CkRegisterEp("setOutputStreamId(const StreamToken &output_id)",
      reinterpret_cast<CkCallFnPtr>(_call_setOutputStreamId_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setOutputStreamId_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setOutputStreamId_marshall3);

  return epidx;
}

void CkIndex_Readers::_call_setOutputStreamId_marshall3(void* impl_msg, void* impl_obj_void)
{
  Readers* impl_obj = static_cast<Readers*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &output_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> output_id;
  implP|output_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setOutputStreamId(std::move(output_id.t));
}
int CkIndex_Readers::_callmarshall_setOutputStreamId_marshall3(char* impl_buf, void* impl_obj_void) {
  Readers* impl_obj = static_cast<Readers*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const StreamToken &output_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> output_id;
  implP|output_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setOutputStreamId(std::move(output_id.t));
  return implP.size();
}
void CkIndex_Readers::_marshallmessagepup_setOutputStreamId_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &output_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> output_id;
  implP|output_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("output_id");
  implDestP|output_id;
}
PUPable_def(SINGLE_ARG(Closure_Readers::setOutputStreamId_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxy_Readers::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Readers::idx_beginWork_void(),0);
}

// Entry point registration function
int CkIndex_Readers::reg_beginWork_void() {
  int epidx = CkRegisterEp("beginWork()",
      reinterpret_cast<CkCallFnPtr>(_call_beginWork_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Readers::_call_beginWork_void(void* impl_msg, void* impl_obj_void)
{
  Readers* impl_obj = static_cast<Readers*>(impl_obj_void);
  impl_obj->beginWork();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Readers::beginWork_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendData();
 */
void CProxy_Readers::sendData(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Readers::idx_sendData_void(),0);
}

// Entry point registration function
int CkIndex_Readers::reg_sendData_void() {
  int epidx = CkRegisterEp("sendData()",
      reinterpret_cast<CkCallFnPtr>(_call_sendData_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Readers::_call_sendData_void(void* impl_msg, void* impl_obj_void)
{
  Readers* impl_obj = static_cast<Readers*>(impl_obj_void);
  impl_obj->sendData();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Readers::sendData_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxy_Readers::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Readers::idx_finishedTask_void(),0);
}

// Entry point registration function
int CkIndex_Readers::reg_finishedTask_void() {
  int epidx = CkRegisterEp("finishedTask()",
      reinterpret_cast<CkCallFnPtr>(_call_finishedTask_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Readers::reg_redn_wrapper_finishedTask_void() {
  return CkRegisterEp("redn_wrapper_finishedTask(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_finishedTask_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Readers::_call_finishedTask_void(void* impl_msg, void* impl_obj_void)
{
  Readers* impl_obj = static_cast<Readers*>(impl_obj_void);
  impl_obj->finishedTask();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Readers::finishedTask_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Readers(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Readers::reg_Readers_CkMigrateMessage() {
  int epidx = CkRegisterEp("Readers(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Readers_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Readers::_call_Readers_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Readers> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Readers();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Readers(int num_records, const CProxy_Main &impl_noname_0);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setOutputStreamId(const StreamToken &output_id);
 */
void CProxySection_Readers::setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &output_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Readers::idx_setOutputStreamId_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxySection_Readers::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Readers::idx_beginWork_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void sendData();
 */
void CProxySection_Readers::sendData(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Readers::idx_sendData_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxySection_Readers::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Readers::idx_finishedTask_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Readers(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Readers::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Readers();
  idx_Readers_void();
  CkRegisterDefaultCtor(__idx, idx_Readers_void());

  // REG: Readers(int num_records, const CProxy_Main &impl_noname_0);
  idx_Readers_marshall2();

  // REG: void setOutputStreamId(const StreamToken &output_id);
  idx_setOutputStreamId_marshall3();

  // REG: void beginWork();
  idx_beginWork_void();

  // REG: void sendData();
  idx_sendData_void();

  // REG: void finishedTask();
  idx_finishedTask_void();
  idx_redn_wrapper_finishedTask_void();

  // REG: Readers(CkMigrateMessage* impl_msg);
  idx_Readers_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Readers_CkMigrateMessage());

  Readers::__sdag_register(); // Potentially missing Readers_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Readers::finishedTask() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Readers::finishedTask_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Readers::_slist_0() {
  _serial_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Readers::_slist_0_end() {
  finishedTask_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Readers::_serial_0() {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Readers_serial_0()), CkMyPe(), 0, &projID, this); 
  { // begin serial block
#line 38 "streamtest.ci"

				CkPrintf("Readers all done!\n");
				Ck::Stream::closeWriteStream(output_id);
			
#line 1877 "streamtest.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Readers::_sdag_init() { // Potentially missing Readers_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(0,0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Readers::__sdag_init() { // Potentially missing Readers_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Readers::_sdag_pup(PUP::er &p) {  // Potentially missing Readers_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Readers::__sdag_register() { // Potentially missing Readers_SDAG_CODE in your class definition?
  (void)_sdag_idx_Readers_serial_0();
  PUPable_reg(SINGLE_ARG(Closure_Readers::setOutputStreamId_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Readers::beginWork_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Readers::sendData_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Readers::finishedTask_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Readers::setOutputStreamId_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Readers::beginWork_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Readers::sendData_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Readers::finishedTask_6_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Readers::_sdag_idx_Readers_serial_0() { // Potentially missing Readers_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Readers_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Readers::_sdag_reg_Readers_serial_0() { // Potentially missing Readers_SDAG_CODE in your class definition?
  return CkRegisterEp("Readers_serial_0", NULL, 0, CkIndex_Readers::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array Validators: ArrayElement{
Validators();
void setOutputStreamId(const StreamToken &output_id);
void setInputStreamId(const StreamToken &input_id);
void beginWork();
threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishedTask();
Validators(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Validators::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Validators::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Validators::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Validators::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Validators::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Validators::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Validators::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Validators();
 */
void CProxyElement_Validators::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Validators::idx_Validators_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setOutputStreamId(const StreamToken &output_id);
 */
void CProxyElement_Validators::setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &output_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Validators::idx_setOutputStreamId_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInputStreamId(const StreamToken &input_id);
 */
void CProxyElement_Validators::setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &input_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Validators::idx_setInputStreamId_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxyElement_Validators::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Validators::idx_beginWork_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxyElement_Validators::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Validators::idx_recvData_StreamDeliveryMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxyElement_Validators::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Validators::idx_finishedTask_void(),0);
}
void CkIndex_Validators::_call_redn_wrapper_finishedTask_void(void* impl_msg, void* impl_obj_void)
{
  Validators* impl_obj = static_cast<Validators*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->finishedTask();
  
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Validators(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Validators();
 */
CkArrayID CProxy_Validators::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Validators::idx_Validators_void(), opts);
  return gId;
}
void CProxy_Validators::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Validators::idx_Validators_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Validators::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Validators::idx_Validators_void(), opts);
  return gId;
}
void CProxy_Validators::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Validators::idx_Validators_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Validators::reg_Validators_void() {
  int epidx = CkRegisterEp("Validators()",
      reinterpret_cast<CkCallFnPtr>(_call_Validators_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Validators::_call_Validators_void(void* impl_msg, void* impl_obj_void)
{
  Validators* impl_obj = static_cast<Validators*>(impl_obj_void);
  new (impl_obj_void) Validators();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setOutputStreamId(const StreamToken &output_id);
 */
void CProxy_Validators::setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &output_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Validators::idx_setOutputStreamId_marshall2(),0);
}

// Entry point registration function
int CkIndex_Validators::reg_setOutputStreamId_marshall2() {
  int epidx = CkRegisterEp("setOutputStreamId(const StreamToken &output_id)",
      reinterpret_cast<CkCallFnPtr>(_call_setOutputStreamId_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setOutputStreamId_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setOutputStreamId_marshall2);

  return epidx;
}

void CkIndex_Validators::_call_setOutputStreamId_marshall2(void* impl_msg, void* impl_obj_void)
{
  Validators* impl_obj = static_cast<Validators*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &output_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> output_id;
  implP|output_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setOutputStreamId(std::move(output_id.t));
}
int CkIndex_Validators::_callmarshall_setOutputStreamId_marshall2(char* impl_buf, void* impl_obj_void) {
  Validators* impl_obj = static_cast<Validators*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const StreamToken &output_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> output_id;
  implP|output_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setOutputStreamId(std::move(output_id.t));
  return implP.size();
}
void CkIndex_Validators::_marshallmessagepup_setOutputStreamId_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &output_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> output_id;
  implP|output_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("output_id");
  implDestP|output_id;
}
PUPable_def(SINGLE_ARG(Closure_Validators::setOutputStreamId_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInputStreamId(const StreamToken &input_id);
 */
void CProxy_Validators::setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &input_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Validators::idx_setInputStreamId_marshall3(),0);
}

// Entry point registration function
int CkIndex_Validators::reg_setInputStreamId_marshall3() {
  int epidx = CkRegisterEp("setInputStreamId(const StreamToken &input_id)",
      reinterpret_cast<CkCallFnPtr>(_call_setInputStreamId_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setInputStreamId_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setInputStreamId_marshall3);

  return epidx;
}

void CkIndex_Validators::_call_setInputStreamId_marshall3(void* impl_msg, void* impl_obj_void)
{
  Validators* impl_obj = static_cast<Validators*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &input_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> input_id;
  implP|input_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setInputStreamId(std::move(input_id.t));
}
int CkIndex_Validators::_callmarshall_setInputStreamId_marshall3(char* impl_buf, void* impl_obj_void) {
  Validators* impl_obj = static_cast<Validators*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const StreamToken &input_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> input_id;
  implP|input_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setInputStreamId(std::move(input_id.t));
  return implP.size();
}
void CkIndex_Validators::_marshallmessagepup_setInputStreamId_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &input_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> input_id;
  implP|input_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("input_id");
  implDestP|input_id;
}
PUPable_def(SINGLE_ARG(Closure_Validators::setInputStreamId_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxy_Validators::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Validators::idx_beginWork_void(),0);
}

// Entry point registration function
int CkIndex_Validators::reg_beginWork_void() {
  int epidx = CkRegisterEp("beginWork()",
      reinterpret_cast<CkCallFnPtr>(_call_beginWork_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Validators::_call_beginWork_void(void* impl_msg, void* impl_obj_void)
{
  Validators* impl_obj = static_cast<Validators*>(impl_obj_void);
  impl_obj->beginWork();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Validators::beginWork_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxy_Validators::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Validators::idx_recvData_StreamDeliveryMsg(),0);
}

// Entry point registration function
int CkIndex_Validators::reg_recvData_StreamDeliveryMsg() {
  int epidx = CkRegisterEp("recvData(Ck::Stream::StreamDeliveryMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvData_StreamDeliveryMsg), Ck::Stream::CMessage_StreamDeliveryMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)Ck::Stream::StreamDeliveryMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Validators::_call_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj_void)
{
  Validators* impl_obj = static_cast<Validators*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_recvData_StreamDeliveryMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_Validators::_callthr_recvData_StreamDeliveryMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  Validators *impl_obj = static_cast<Validators *>(impl_obj_void);
  delete impl_arg;
  impl_obj->recvData((Ck::Stream::StreamDeliveryMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxy_Validators::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Validators::idx_finishedTask_void(),0);
}

// Entry point registration function
int CkIndex_Validators::reg_finishedTask_void() {
  int epidx = CkRegisterEp("finishedTask()",
      reinterpret_cast<CkCallFnPtr>(_call_finishedTask_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Validators::reg_redn_wrapper_finishedTask_void() {
  return CkRegisterEp("redn_wrapper_finishedTask(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_finishedTask_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Validators::_call_finishedTask_void(void* impl_msg, void* impl_obj_void)
{
  Validators* impl_obj = static_cast<Validators*>(impl_obj_void);
  impl_obj->finishedTask();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Validators::finishedTask_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Validators(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Validators::reg_Validators_CkMigrateMessage() {
  int epidx = CkRegisterEp("Validators(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Validators_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Validators::_call_Validators_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Validators> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Validators();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setOutputStreamId(const StreamToken &output_id);
 */
void CProxySection_Validators::setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &output_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Validators::idx_setOutputStreamId_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInputStreamId(const StreamToken &input_id);
 */
void CProxySection_Validators::setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &input_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Validators::idx_setInputStreamId_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxySection_Validators::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Validators::idx_beginWork_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxySection_Validators::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Validators::idx_recvData_StreamDeliveryMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxySection_Validators::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Validators::idx_finishedTask_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Validators(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Validators::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Validators();
  idx_Validators_void();
  CkRegisterDefaultCtor(__idx, idx_Validators_void());

  // REG: void setOutputStreamId(const StreamToken &output_id);
  idx_setOutputStreamId_marshall2();

  // REG: void setInputStreamId(const StreamToken &input_id);
  idx_setInputStreamId_marshall3();

  // REG: void beginWork();
  idx_beginWork_void();

  // REG: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
  idx_recvData_StreamDeliveryMsg();

  // REG: void finishedTask();
  idx_finishedTask_void();
  idx_redn_wrapper_finishedTask_void();

  // REG: Validators(CkMigrateMessage* impl_msg);
  idx_Validators_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Validators_CkMigrateMessage());

  Validators::__sdag_register(); // Potentially missing Validators_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Validators::finishedTask() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Validators::finishedTask_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Validators::_slist_0() {
  _serial_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Validators::_slist_0_end() {
  finishedTask_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Validators::_serial_0() {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Validators_serial_0()), CkMyPe(), 0, &projID, this); 
  { // begin serial block
#line 52 "streamtest.ci"

				CkPrintf("Validators all done!\n");
				Ck::Stream::closeWriteStream(output_id);
			
#line 2620 "streamtest.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Validators::_sdag_init() { // Potentially missing Validators_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(0,0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Validators::__sdag_init() { // Potentially missing Validators_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Validators::_sdag_pup(PUP::er &p) {  // Potentially missing Validators_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Validators::__sdag_register() { // Potentially missing Validators_SDAG_CODE in your class definition?
  (void)_sdag_idx_Validators_serial_0();
  PUPable_reg(SINGLE_ARG(Closure_Validators::setOutputStreamId_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Validators::setInputStreamId_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Validators::beginWork_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Validators::finishedTask_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Validators::setOutputStreamId_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Validators::setInputStreamId_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Validators::beginWork_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Validators::finishedTask_6_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Validators::_sdag_idx_Validators_serial_0() { // Potentially missing Validators_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Validators_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Validators::_sdag_reg_Validators_serial_0() { // Potentially missing Validators_SDAG_CODE in your class definition?
  return CkRegisterEp("Validators_serial_0", NULL, 0, CkIndex_Validators::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array Filters: ArrayElement{
Filters();
void setOutputStreamId(const StreamToken &output_id);
void setInputStreamId(const StreamToken &input_id);
void beginWork();
threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishedTask();
Filters(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Filters::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Filters::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Filters::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Filters::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Filters::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Filters::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Filters::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Filters();
 */
void CProxyElement_Filters::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Filters::idx_Filters_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setOutputStreamId(const StreamToken &output_id);
 */
void CProxyElement_Filters::setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &output_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Filters::idx_setOutputStreamId_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInputStreamId(const StreamToken &input_id);
 */
void CProxyElement_Filters::setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &input_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Filters::idx_setInputStreamId_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxyElement_Filters::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Filters::idx_beginWork_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxyElement_Filters::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Filters::idx_recvData_StreamDeliveryMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxyElement_Filters::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Filters::idx_finishedTask_void(),0);
}
void CkIndex_Filters::_call_redn_wrapper_finishedTask_void(void* impl_msg, void* impl_obj_void)
{
  Filters* impl_obj = static_cast<Filters*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->finishedTask();
  
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Filters(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Filters();
 */
CkArrayID CProxy_Filters::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Filters::idx_Filters_void(), opts);
  return gId;
}
void CProxy_Filters::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Filters::idx_Filters_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Filters::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Filters::idx_Filters_void(), opts);
  return gId;
}
void CProxy_Filters::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Filters::idx_Filters_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Filters::reg_Filters_void() {
  int epidx = CkRegisterEp("Filters()",
      reinterpret_cast<CkCallFnPtr>(_call_Filters_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Filters::_call_Filters_void(void* impl_msg, void* impl_obj_void)
{
  Filters* impl_obj = static_cast<Filters*>(impl_obj_void);
  new (impl_obj_void) Filters();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setOutputStreamId(const StreamToken &output_id);
 */
void CProxy_Filters::setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &output_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Filters::idx_setOutputStreamId_marshall2(),0);
}

// Entry point registration function
int CkIndex_Filters::reg_setOutputStreamId_marshall2() {
  int epidx = CkRegisterEp("setOutputStreamId(const StreamToken &output_id)",
      reinterpret_cast<CkCallFnPtr>(_call_setOutputStreamId_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setOutputStreamId_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setOutputStreamId_marshall2);

  return epidx;
}

void CkIndex_Filters::_call_setOutputStreamId_marshall2(void* impl_msg, void* impl_obj_void)
{
  Filters* impl_obj = static_cast<Filters*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &output_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> output_id;
  implP|output_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setOutputStreamId(std::move(output_id.t));
}
int CkIndex_Filters::_callmarshall_setOutputStreamId_marshall2(char* impl_buf, void* impl_obj_void) {
  Filters* impl_obj = static_cast<Filters*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const StreamToken &output_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> output_id;
  implP|output_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setOutputStreamId(std::move(output_id.t));
  return implP.size();
}
void CkIndex_Filters::_marshallmessagepup_setOutputStreamId_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &output_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> output_id;
  implP|output_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("output_id");
  implDestP|output_id;
}
PUPable_def(SINGLE_ARG(Closure_Filters::setOutputStreamId_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInputStreamId(const StreamToken &input_id);
 */
void CProxy_Filters::setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &input_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Filters::idx_setInputStreamId_marshall3(),0);
}

// Entry point registration function
int CkIndex_Filters::reg_setInputStreamId_marshall3() {
  int epidx = CkRegisterEp("setInputStreamId(const StreamToken &input_id)",
      reinterpret_cast<CkCallFnPtr>(_call_setInputStreamId_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setInputStreamId_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setInputStreamId_marshall3);

  return epidx;
}

void CkIndex_Filters::_call_setInputStreamId_marshall3(void* impl_msg, void* impl_obj_void)
{
  Filters* impl_obj = static_cast<Filters*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &input_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> input_id;
  implP|input_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setInputStreamId(std::move(input_id.t));
}
int CkIndex_Filters::_callmarshall_setInputStreamId_marshall3(char* impl_buf, void* impl_obj_void) {
  Filters* impl_obj = static_cast<Filters*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const StreamToken &input_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> input_id;
  implP|input_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setInputStreamId(std::move(input_id.t));
  return implP.size();
}
void CkIndex_Filters::_marshallmessagepup_setInputStreamId_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &input_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> input_id;
  implP|input_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("input_id");
  implDestP|input_id;
}
PUPable_def(SINGLE_ARG(Closure_Filters::setInputStreamId_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxy_Filters::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Filters::idx_beginWork_void(),0);
}

// Entry point registration function
int CkIndex_Filters::reg_beginWork_void() {
  int epidx = CkRegisterEp("beginWork()",
      reinterpret_cast<CkCallFnPtr>(_call_beginWork_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Filters::_call_beginWork_void(void* impl_msg, void* impl_obj_void)
{
  Filters* impl_obj = static_cast<Filters*>(impl_obj_void);
  impl_obj->beginWork();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Filters::beginWork_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxy_Filters::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Filters::idx_recvData_StreamDeliveryMsg(),0);
}

// Entry point registration function
int CkIndex_Filters::reg_recvData_StreamDeliveryMsg() {
  int epidx = CkRegisterEp("recvData(Ck::Stream::StreamDeliveryMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvData_StreamDeliveryMsg), Ck::Stream::CMessage_StreamDeliveryMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)Ck::Stream::StreamDeliveryMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Filters::_call_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj_void)
{
  Filters* impl_obj = static_cast<Filters*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_recvData_StreamDeliveryMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_Filters::_callthr_recvData_StreamDeliveryMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  Filters *impl_obj = static_cast<Filters *>(impl_obj_void);
  delete impl_arg;
  impl_obj->recvData((Ck::Stream::StreamDeliveryMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxy_Filters::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Filters::idx_finishedTask_void(),0);
}

// Entry point registration function
int CkIndex_Filters::reg_finishedTask_void() {
  int epidx = CkRegisterEp("finishedTask()",
      reinterpret_cast<CkCallFnPtr>(_call_finishedTask_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Filters::reg_redn_wrapper_finishedTask_void() {
  return CkRegisterEp("redn_wrapper_finishedTask(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_finishedTask_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Filters::_call_finishedTask_void(void* impl_msg, void* impl_obj_void)
{
  Filters* impl_obj = static_cast<Filters*>(impl_obj_void);
  impl_obj->finishedTask();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Filters::finishedTask_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Filters(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Filters::reg_Filters_CkMigrateMessage() {
  int epidx = CkRegisterEp("Filters(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Filters_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Filters::_call_Filters_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Filters> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Filters();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setOutputStreamId(const StreamToken &output_id);
 */
void CProxySection_Filters::setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &output_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Filters::idx_setOutputStreamId_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInputStreamId(const StreamToken &input_id);
 */
void CProxySection_Filters::setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &input_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Filters::idx_setInputStreamId_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxySection_Filters::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Filters::idx_beginWork_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxySection_Filters::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Filters::idx_recvData_StreamDeliveryMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxySection_Filters::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Filters::idx_finishedTask_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Filters(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Filters::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Filters();
  idx_Filters_void();
  CkRegisterDefaultCtor(__idx, idx_Filters_void());

  // REG: void setOutputStreamId(const StreamToken &output_id);
  idx_setOutputStreamId_marshall2();

  // REG: void setInputStreamId(const StreamToken &input_id);
  idx_setInputStreamId_marshall3();

  // REG: void beginWork();
  idx_beginWork_void();

  // REG: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
  idx_recvData_StreamDeliveryMsg();

  // REG: void finishedTask();
  idx_finishedTask_void();
  idx_redn_wrapper_finishedTask_void();

  // REG: Filters(CkMigrateMessage* impl_msg);
  idx_Filters_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Filters_CkMigrateMessage());

  Filters::__sdag_register(); // Potentially missing Filters_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Filters::finishedTask() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Filters::finishedTask_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Filters::_slist_0() {
  _serial_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Filters::_slist_0_end() {
  finishedTask_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Filters::_serial_0() {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Filters_serial_0()), CkMyPe(), 0, &projID, this); 
  { // begin serial block
#line 66 "streamtest.ci"

				CkPrintf("Filters all done!\n");
				Ck::Stream::closeWriteStream(output_id);
			
#line 3363 "streamtest.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Filters::_sdag_init() { // Potentially missing Filters_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(0,0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Filters::__sdag_init() { // Potentially missing Filters_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Filters::_sdag_pup(PUP::er &p) {  // Potentially missing Filters_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Filters::__sdag_register() { // Potentially missing Filters_SDAG_CODE in your class definition?
  (void)_sdag_idx_Filters_serial_0();
  PUPable_reg(SINGLE_ARG(Closure_Filters::setOutputStreamId_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Filters::setInputStreamId_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Filters::beginWork_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Filters::finishedTask_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Filters::setOutputStreamId_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Filters::setInputStreamId_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Filters::beginWork_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Filters::finishedTask_6_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Filters::_sdag_idx_Filters_serial_0() { // Potentially missing Filters_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Filters_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Filters::_sdag_reg_Filters_serial_0() { // Potentially missing Filters_SDAG_CODE in your class definition?
  return CkRegisterEp("Filters_serial_0", NULL, 0, CkIndex_Filters::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array Transformers: ArrayElement{
Transformers();
void setOutputStreamId(const StreamToken &output_id);
void setInputStreamId(const StreamToken &input_id);
void beginWork();
threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishedTask();
Transformers(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Transformers::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Transformers::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Transformers::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Transformers::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Transformers::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Transformers::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Transformers::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Transformers();
 */
void CProxyElement_Transformers::insert(int onPE, const CkEntryOptions *impl_e_opts)
{ 
   void *impl_msg = CkAllocSysMsg(impl_e_opts);
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Transformers::idx_Transformers_void(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setOutputStreamId(const StreamToken &output_id);
 */
void CProxyElement_Transformers::setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &output_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Transformers::idx_setOutputStreamId_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInputStreamId(const StreamToken &input_id);
 */
void CProxyElement_Transformers::setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &input_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Transformers::idx_setInputStreamId_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxyElement_Transformers::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Transformers::idx_beginWork_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxyElement_Transformers::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Transformers::idx_recvData_StreamDeliveryMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxyElement_Transformers::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Transformers::idx_finishedTask_void(),0);
}
void CkIndex_Transformers::_call_redn_wrapper_finishedTask_void(void* impl_msg, void* impl_obj_void)
{
  Transformers* impl_obj = static_cast<Transformers*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->finishedTask();
  
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Transformers(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Transformers();
 */
CkArrayID CProxy_Transformers::ckNew(const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Transformers::idx_Transformers_void(), opts);
  return gId;
}
void CProxy_Transformers::ckNew(const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Transformers::idx_Transformers_void(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Transformers::ckNew(const int s1, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Transformers::idx_Transformers_void(), opts);
  return gId;
}
void CProxy_Transformers::ckNew(const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Transformers::idx_Transformers_void(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Transformers::reg_Transformers_void() {
  int epidx = CkRegisterEp("Transformers()",
      reinterpret_cast<CkCallFnPtr>(_call_Transformers_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Transformers::_call_Transformers_void(void* impl_msg, void* impl_obj_void)
{
  Transformers* impl_obj = static_cast<Transformers*>(impl_obj_void);
  new (impl_obj_void) Transformers();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setOutputStreamId(const StreamToken &output_id);
 */
void CProxy_Transformers::setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &output_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Transformers::idx_setOutputStreamId_marshall2(),0);
}

// Entry point registration function
int CkIndex_Transformers::reg_setOutputStreamId_marshall2() {
  int epidx = CkRegisterEp("setOutputStreamId(const StreamToken &output_id)",
      reinterpret_cast<CkCallFnPtr>(_call_setOutputStreamId_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setOutputStreamId_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setOutputStreamId_marshall2);

  return epidx;
}

void CkIndex_Transformers::_call_setOutputStreamId_marshall2(void* impl_msg, void* impl_obj_void)
{
  Transformers* impl_obj = static_cast<Transformers*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &output_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> output_id;
  implP|output_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setOutputStreamId(std::move(output_id.t));
}
int CkIndex_Transformers::_callmarshall_setOutputStreamId_marshall2(char* impl_buf, void* impl_obj_void) {
  Transformers* impl_obj = static_cast<Transformers*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const StreamToken &output_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> output_id;
  implP|output_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setOutputStreamId(std::move(output_id.t));
  return implP.size();
}
void CkIndex_Transformers::_marshallmessagepup_setOutputStreamId_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &output_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> output_id;
  implP|output_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("output_id");
  implDestP|output_id;
}
PUPable_def(SINGLE_ARG(Closure_Transformers::setOutputStreamId_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInputStreamId(const StreamToken &input_id);
 */
void CProxy_Transformers::setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &input_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Transformers::idx_setInputStreamId_marshall3(),0);
}

// Entry point registration function
int CkIndex_Transformers::reg_setInputStreamId_marshall3() {
  int epidx = CkRegisterEp("setInputStreamId(const StreamToken &input_id)",
      reinterpret_cast<CkCallFnPtr>(_call_setInputStreamId_marshall3), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setInputStreamId_marshall3);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setInputStreamId_marshall3);

  return epidx;
}

void CkIndex_Transformers::_call_setInputStreamId_marshall3(void* impl_msg, void* impl_obj_void)
{
  Transformers* impl_obj = static_cast<Transformers*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &input_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> input_id;
  implP|input_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setInputStreamId(std::move(input_id.t));
}
int CkIndex_Transformers::_callmarshall_setInputStreamId_marshall3(char* impl_buf, void* impl_obj_void) {
  Transformers* impl_obj = static_cast<Transformers*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const StreamToken &input_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> input_id;
  implP|input_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setInputStreamId(std::move(input_id.t));
  return implP.size();
}
void CkIndex_Transformers::_marshallmessagepup_setInputStreamId_marshall3(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &input_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> input_id;
  implP|input_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("input_id");
  implDestP|input_id;
}
PUPable_def(SINGLE_ARG(Closure_Transformers::setInputStreamId_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxy_Transformers::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Transformers::idx_beginWork_void(),0);
}

// Entry point registration function
int CkIndex_Transformers::reg_beginWork_void() {
  int epidx = CkRegisterEp("beginWork()",
      reinterpret_cast<CkCallFnPtr>(_call_beginWork_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Transformers::_call_beginWork_void(void* impl_msg, void* impl_obj_void)
{
  Transformers* impl_obj = static_cast<Transformers*>(impl_obj_void);
  impl_obj->beginWork();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Transformers::beginWork_4_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxy_Transformers::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Transformers::idx_recvData_StreamDeliveryMsg(),0);
}

// Entry point registration function
int CkIndex_Transformers::reg_recvData_StreamDeliveryMsg() {
  int epidx = CkRegisterEp("recvData(Ck::Stream::StreamDeliveryMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvData_StreamDeliveryMsg), Ck::Stream::CMessage_StreamDeliveryMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)Ck::Stream::StreamDeliveryMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Transformers::_call_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj_void)
{
  Transformers* impl_obj = static_cast<Transformers*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_recvData_StreamDeliveryMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_Transformers::_callthr_recvData_StreamDeliveryMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  Transformers *impl_obj = static_cast<Transformers *>(impl_obj_void);
  delete impl_arg;
  impl_obj->recvData((Ck::Stream::StreamDeliveryMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxy_Transformers::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Transformers::idx_finishedTask_void(),0);
}

// Entry point registration function
int CkIndex_Transformers::reg_finishedTask_void() {
  int epidx = CkRegisterEp("finishedTask()",
      reinterpret_cast<CkCallFnPtr>(_call_finishedTask_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Transformers::reg_redn_wrapper_finishedTask_void() {
  return CkRegisterEp("redn_wrapper_finishedTask(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_finishedTask_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Transformers::_call_finishedTask_void(void* impl_msg, void* impl_obj_void)
{
  Transformers* impl_obj = static_cast<Transformers*>(impl_obj_void);
  impl_obj->finishedTask();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Transformers::finishedTask_6_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Transformers(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Transformers::reg_Transformers_CkMigrateMessage() {
  int epidx = CkRegisterEp("Transformers(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Transformers_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Transformers::_call_Transformers_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Transformers> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Transformers();
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setOutputStreamId(const StreamToken &output_id);
 */
void CProxySection_Transformers::setOutputStreamId(const StreamToken &output_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &output_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)output_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Transformers::idx_setOutputStreamId_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInputStreamId(const StreamToken &input_id);
 */
void CProxySection_Transformers::setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &input_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Transformers::idx_setInputStreamId_marshall3(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxySection_Transformers::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Transformers::idx_beginWork_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxySection_Transformers::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Transformers::idx_recvData_StreamDeliveryMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxySection_Transformers::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Transformers::idx_finishedTask_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Transformers(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Transformers::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Transformers();
  idx_Transformers_void();
  CkRegisterDefaultCtor(__idx, idx_Transformers_void());

  // REG: void setOutputStreamId(const StreamToken &output_id);
  idx_setOutputStreamId_marshall2();

  // REG: void setInputStreamId(const StreamToken &input_id);
  idx_setInputStreamId_marshall3();

  // REG: void beginWork();
  idx_beginWork_void();

  // REG: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
  idx_recvData_StreamDeliveryMsg();

  // REG: void finishedTask();
  idx_finishedTask_void();
  idx_redn_wrapper_finishedTask_void();

  // REG: Transformers(CkMigrateMessage* impl_msg);
  idx_Transformers_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Transformers_CkMigrateMessage());

  Transformers::__sdag_register(); // Potentially missing Transformers_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Transformers::finishedTask() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Transformers::finishedTask_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Transformers::_slist_0() {
  _serial_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Transformers::_slist_0_end() {
  finishedTask_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Transformers::_serial_0() {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Transformers_serial_0()), CkMyPe(), 0, &projID, this); 
  { // begin serial block
#line 80 "streamtest.ci"

				CkPrintf("Transformers all done!\n");
				Ck::Stream::closeWriteStream(output_id);
			
#line 4106 "streamtest.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Transformers::_sdag_init() { // Potentially missing Transformers_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(0,0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Transformers::__sdag_init() { // Potentially missing Transformers_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Transformers::_sdag_pup(PUP::er &p) {  // Potentially missing Transformers_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Transformers::__sdag_register() { // Potentially missing Transformers_SDAG_CODE in your class definition?
  (void)_sdag_idx_Transformers_serial_0();
  PUPable_reg(SINGLE_ARG(Closure_Transformers::setOutputStreamId_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Transformers::setInputStreamId_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Transformers::beginWork_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Transformers::finishedTask_6_closure));
  PUPable_reg(SINGLE_ARG(Closure_Transformers::setOutputStreamId_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Transformers::setInputStreamId_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Transformers::beginWork_4_closure));
  PUPable_reg(SINGLE_ARG(Closure_Transformers::finishedTask_6_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Transformers::_sdag_idx_Transformers_serial_0() { // Potentially missing Transformers_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Transformers_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Transformers::_sdag_reg_Transformers_serial_0() { // Potentially missing Transformers_SDAG_CODE in your class definition?
  return CkRegisterEp("Transformers_serial_0", NULL, 0, CkIndex_Transformers::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



/* DEFS: array Writers: ArrayElement{
Writers(const CProxy_Main &impl_noname_1);
void setInputStreamId(const StreamToken &input_id);
void beginWork();
threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishedTask();
Writers(CkMigrateMessage* impl_msg);
};
 */
#ifndef CK_TEMPLATES_ONLY
 int CkIndex_Writers::__idx=0;
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CProxySection_Writers::contribute(CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, userData, fragSize);
}

void CProxySection_Writers::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, userData, fragSize);
}

template <typename T>
void CProxySection_Writers::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, userData, fragSize);
}

void CProxySection_Writers::contribute(CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(sid, cb, userData, fragSize);
}

void CProxySection_Writers::contribute(int dataSize,void *data,CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(dataSize, data, type, sid, cb, userData, fragSize);
}

template <typename T>
void CProxySection_Writers::contribute(std::vector<T> &data, CkReduction::reducerType type, CkSectionInfo &sid, const CkCallback &cb, int userData, int fragSize)
{
   CkArray *ckarr = CProxy_CkArray(sid.get_aid()).ckLocalBranch();
   CkMulticastMgr *mCastGrp = CProxy_CkMulticastMgr(ckarr->getmCastMgr()).ckLocalBranch();
   mCastGrp->contribute(data, type, sid, cb, userData, fragSize);
}

#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
/* DEFS: Writers(const CProxy_Main &impl_noname_1);
 */
void CProxyElement_Writers::insert(const CProxy_Main &impl_noname_1, int onPE, const CkEntryOptions *impl_e_opts)
{ 
   //Marshall: const CProxy_Main &impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_1;
  }
   UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
   ckInsert((CkArrayMessage *)impl_msg,CkIndex_Writers::idx_Writers_marshall1(),onPE);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInputStreamId(const StreamToken &input_id);
 */
void CProxyElement_Writers::setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &input_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Writers::idx_setInputStreamId_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxyElement_Writers::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Writers::idx_beginWork_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxyElement_Writers::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Writers::idx_recvData_StreamDeliveryMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxyElement_Writers::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Writers::idx_finishedTask_void(),0);
}
void CkIndex_Writers::_call_redn_wrapper_finishedTask_void(void* impl_msg, void* impl_obj_void)
{
  Writers* impl_obj = static_cast<Writers*> (impl_obj_void);
  char* impl_buf = (char*)((CkReductionMsg*)impl_msg)->getData();
  impl_obj->finishedTask();
  
}

#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Writers(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Writers(const CProxy_Main &impl_noname_1);
 */
CkArrayID CProxy_Writers::ckNew(const CProxy_Main &impl_noname_1, const CkArrayOptions &opts, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_Main &impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_1;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Writers::idx_Writers_marshall1(), opts);
  return gId;
}
void CProxy_Writers::ckNew(const CProxy_Main &impl_noname_1, const CkArrayOptions &opts, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_Main &impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_1;
  }
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Writers::idx_Writers_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}
CkArrayID CProxy_Writers::ckNew(const CProxy_Main &impl_noname_1, const int s1, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_Main &impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_1;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkArrayID gId = ckCreateArray((CkArrayMessage *)impl_msg, CkIndex_Writers::idx_Writers_marshall1(), opts);
  return gId;
}
void CProxy_Writers::ckNew(const CProxy_Main &impl_noname_1, const int s1, CkCallback _ck_array_creation_cb, const CkEntryOptions *impl_e_opts)
{
  //Marshall: const CProxy_Main &impl_noname_1
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_1;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<CProxy_Main>::type>::type &)impl_noname_1;
  }
  CkArrayOptions opts(s1);
  UsrToEnv(impl_msg)->setMsgtype(ArrayEltInitMsg);
  CkSendAsyncCreateArray(CkIndex_Writers::idx_Writers_marshall1(), _ck_array_creation_cb, opts, impl_msg);
}

// Entry point registration function
int CkIndex_Writers::reg_Writers_marshall1() {
  int epidx = CkRegisterEp("Writers(const CProxy_Main &impl_noname_1)",
      reinterpret_cast<CkCallFnPtr>(_call_Writers_marshall1), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_Writers_marshall1);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_Writers_marshall1);

  return epidx;
}

void CkIndex_Writers::_call_Writers_marshall1(void* impl_msg, void* impl_obj_void)
{
  Writers* impl_obj = static_cast<Writers*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_Main &impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_Main> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Writers(std::move(impl_noname_1.t));
}
int CkIndex_Writers::_callmarshall_Writers_marshall1(char* impl_buf, void* impl_obj_void) {
  Writers* impl_obj = static_cast<Writers*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const CProxy_Main &impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_Main> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  new (impl_obj_void) Writers(std::move(impl_noname_1.t));
  return implP.size();
}
void CkIndex_Writers::_marshallmessagepup_Writers_marshall1(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const CProxy_Main &impl_noname_1*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<CProxy_Main> impl_noname_1;
  implP|impl_noname_1;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("impl_noname_1");
  implDestP|impl_noname_1;
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInputStreamId(const StreamToken &input_id);
 */
void CProxy_Writers::setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &input_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Writers::idx_setInputStreamId_marshall2(),0);
}

// Entry point registration function
int CkIndex_Writers::reg_setInputStreamId_marshall2() {
  int epidx = CkRegisterEp("setInputStreamId(const StreamToken &input_id)",
      reinterpret_cast<CkCallFnPtr>(_call_setInputStreamId_marshall2), CkMarshallMsg::__idx, __idx, 0+CK_EP_NOKEEP);
  CkRegisterMarshallUnpackFn(epidx, _callmarshall_setInputStreamId_marshall2);
  CkRegisterMessagePupFn(epidx, _marshallmessagepup_setInputStreamId_marshall2);

  return epidx;
}

void CkIndex_Writers::_call_setInputStreamId_marshall2(void* impl_msg, void* impl_obj_void)
{
  Writers* impl_obj = static_cast<Writers*>(impl_obj_void);
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &input_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> input_id;
  implP|input_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setInputStreamId(std::move(input_id.t));
}
int CkIndex_Writers::_callmarshall_setInputStreamId_marshall2(char* impl_buf, void* impl_obj_void) {
  Writers* impl_obj = static_cast<Writers*>(impl_obj_void);
  envelope *env = UsrToEnv(impl_buf);
  /*Unmarshall pup'd fields: const StreamToken &input_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> input_id;
  implP|input_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  impl_obj->setInputStreamId(std::move(input_id.t));
  return implP.size();
}
void CkIndex_Writers::_marshallmessagepup_setInputStreamId_marshall2(PUP::er &implDestP,void *impl_msg) {
  CkMarshallMsg *impl_msg_typed=(CkMarshallMsg *)impl_msg;
  char *impl_buf=impl_msg_typed->msgBuf;
  envelope *env = UsrToEnv(impl_msg_typed);
  /*Unmarshall pup'd fields: const StreamToken &input_id*/
  PUP::fromMem implP(impl_buf);
  PUP::detail::TemporaryObjectHolder<StreamToken> input_id;
  implP|input_id;
  impl_buf+=CK_ALIGN(implP.size(),16);
  /*Unmarshall arrays:*/
  if (implDestP.hasComments()) implDestP.comment("input_id");
  implDestP|input_id;
}
PUPable_def(SINGLE_ARG(Closure_Writers::setInputStreamId_2_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxy_Writers::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Writers::idx_beginWork_void(),0);
}

// Entry point registration function
int CkIndex_Writers::reg_beginWork_void() {
  int epidx = CkRegisterEp("beginWork()",
      reinterpret_cast<CkCallFnPtr>(_call_beginWork_void), 0, __idx, 0);
  return epidx;
}

void CkIndex_Writers::_call_beginWork_void(void* impl_msg, void* impl_obj_void)
{
  Writers* impl_obj = static_cast<Writers*>(impl_obj_void);
  impl_obj->beginWork();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Writers::beginWork_3_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxy_Writers::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Writers::idx_recvData_StreamDeliveryMsg(),0);
}

// Entry point registration function
int CkIndex_Writers::reg_recvData_StreamDeliveryMsg() {
  int epidx = CkRegisterEp("recvData(Ck::Stream::StreamDeliveryMsg* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_recvData_StreamDeliveryMsg), Ck::Stream::CMessage_StreamDeliveryMsg::__idx, __idx, 0);
  CkRegisterMessagePupFn(epidx, (CkMessagePupFn)Ck::Stream::StreamDeliveryMsg::ckDebugPup);
  return epidx;
}

void CkIndex_Writers::_call_recvData_StreamDeliveryMsg(void* impl_msg, void* impl_obj_void)
{
  Writers* impl_obj = static_cast<Writers*>(impl_obj_void);
  CthThread tid = CthCreate((CthVoidFn)_callthr_recvData_StreamDeliveryMsg, new CkThrCallArg(impl_msg,impl_obj), 0);
  ((Chare *)impl_obj)->CkAddThreadListeners(tid,impl_msg);
  CthTraceResume(tid);
  CthResume(tid);
}
void CkIndex_Writers::_callthr_recvData_StreamDeliveryMsg(CkThrCallArg *impl_arg)
{
  void *impl_msg = impl_arg->msg;
  void *impl_obj_void = impl_arg->obj;
  Writers *impl_obj = static_cast<Writers *>(impl_obj_void);
  delete impl_arg;
  impl_obj->recvData((Ck::Stream::StreamDeliveryMsg*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxy_Writers::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckBroadcast(impl_amsg, CkIndex_Writers::idx_finishedTask_void(),0);
}

// Entry point registration function
int CkIndex_Writers::reg_finishedTask_void() {
  int epidx = CkRegisterEp("finishedTask()",
      reinterpret_cast<CkCallFnPtr>(_call_finishedTask_void), 0, __idx, 0);
  return epidx;
}


// Redn wrapper registration function
int CkIndex_Writers::reg_redn_wrapper_finishedTask_void() {
  return CkRegisterEp("redn_wrapper_finishedTask(CkReductionMsg *impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_redn_wrapper_finishedTask_void), CMessage_CkReductionMsg::__idx, __idx, 0);
}

void CkIndex_Writers::_call_finishedTask_void(void* impl_msg, void* impl_obj_void)
{
  Writers* impl_obj = static_cast<Writers*>(impl_obj_void);
  impl_obj->finishedTask();
  if(UsrToEnv(impl_msg)->isVarSysMsg() == 0)
    CkFreeSysMsg(impl_msg);
}
PUPable_def(SINGLE_ARG(Closure_Writers::finishedTask_5_closure))
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Writers(CkMigrateMessage* impl_msg);
 */

// Entry point registration function
int CkIndex_Writers::reg_Writers_CkMigrateMessage() {
  int epidx = CkRegisterEp("Writers(CkMigrateMessage* impl_msg)",
      reinterpret_cast<CkCallFnPtr>(_call_Writers_CkMigrateMessage), 0, __idx, 0);
  return epidx;
}

void CkIndex_Writers::_call_Writers_CkMigrateMessage(void* impl_msg, void* impl_obj_void)
{
  call_migration_constructor<Writers> c = impl_obj_void;
  c((CkMigrateMessage*)impl_msg);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Writers(const CProxy_Main &impl_noname_1);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void setInputStreamId(const StreamToken &input_id);
 */
void CProxySection_Writers::setInputStreamId(const StreamToken &input_id, const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  //Marshall: const StreamToken &input_id
  int impl_off=0;
  { //Find the size of the PUP'd data
    PUP::sizer implP;
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
    impl_off+=implP.size();
  }
  CkMarshallMsg *impl_msg=CkAllocateMarshallMsg(impl_off,impl_e_opts);
  { //Copy over the PUP'd data
    PUP::toMem implP((void *)impl_msg->msgBuf);
    //Have to cast away const-ness to get pup routine
    implP|(typename std::remove_cv<typename std::remove_reference<StreamToken>::type>::type &)input_id;
  }
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Writers::idx_setInputStreamId_marshall2(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void beginWork();
 */
void CProxySection_Writers::beginWork(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Writers::idx_beginWork_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
 */
void CProxySection_Writers::recvData(Ck::Stream::StreamDeliveryMsg* impl_msg) 
{
  ckCheck();
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Writers::idx_recvData_StreamDeliveryMsg(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: void finishedTask();
 */
void CProxySection_Writers::finishedTask(const CkEntryOptions *impl_e_opts) 
{
  ckCheck();
  void *impl_msg = CkAllocSysMsg(impl_e_opts);
  UsrToEnv(impl_msg)->setMsgtype(ForArrayEltMsg);
  CkArrayMessage *impl_amsg=(CkArrayMessage *)impl_msg;
  impl_amsg->array_setIfNotThere(CkArray_IfNotThere_buffer);
  ckSend(impl_amsg, CkIndex_Writers::idx_finishedTask_void(),0);
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
/* DEFS: Writers(CkMigrateMessage* impl_msg);
 */
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void CkIndex_Writers::__register(const char *s, size_t size) {
  __idx = CkRegisterChare(s, size, TypeArray);
  CkRegisterArrayDimensions(__idx, 1);
  CkRegisterBase(__idx, CkIndex_ArrayElement::__idx);
  // REG: Writers(const CProxy_Main &impl_noname_1);
  idx_Writers_marshall1();

  // REG: void setInputStreamId(const StreamToken &input_id);
  idx_setInputStreamId_marshall2();

  // REG: void beginWork();
  idx_beginWork_void();

  // REG: threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
  idx_recvData_StreamDeliveryMsg();

  // REG: void finishedTask();
  idx_finishedTask_void();
  idx_redn_wrapper_finishedTask_void();

  // REG: Writers(CkMigrateMessage* impl_msg);
  idx_Writers_CkMigrateMessage();
  CkRegisterMigCtor(__idx, idx_Writers_CkMigrateMessage());

  Writers::__sdag_register(); // Potentially missing Writers_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */

#ifndef CK_TEMPLATES_ONLY
void Writers::finishedTask() {
  _TRACE_END_EXECUTE(); 
  if (!__dep.get()) _sdag_init();
  _slist_0();
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, _sdagEP, CkMyPe(), 0, &projID, this); 
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Writers::finishedTask_end() {
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Writers::_slist_0() {
  _serial_0();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Writers::_slist_0_end() {
  finishedTask_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Writers::_serial_0() {
  CmiObjId projID = this->ckGetArrayIndex().getProjectionID();
  _TRACE_BEGIN_EXECUTE_DETAILED(-1, -1, (_sdag_idx_Writers_serial_0()), CkMyPe(), 0, &projID, this); 
  { // begin serial block
#line 94 "streamtest.ci"

				CkPrintf("Writers all done!\n");
				mainProxy.getEndTimeAndExit();
			
#line 4812 "streamtest.def.h"
  } // end serial block
  _TRACE_END_EXECUTE(); 
  _slist_0_end();
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Writers::_sdag_init() { // Potentially missing Writers_SDAG_CODE in your class definition?
  __dep.reset(new SDAG::Dependency(0,0));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Writers::__sdag_init() { // Potentially missing Writers_SDAG_CODE in your class definition?
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
void Writers::_sdag_pup(PUP::er &p) {  // Potentially missing Writers_SDAG_CODE in your class definition?
  p|__dep;
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
void Writers::__sdag_register() { // Potentially missing Writers_SDAG_CODE in your class definition?
  (void)_sdag_idx_Writers_serial_0();
  PUPable_reg(SINGLE_ARG(Closure_Writers::setInputStreamId_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Writers::beginWork_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Writers::finishedTask_5_closure));
  PUPable_reg(SINGLE_ARG(Closure_Writers::setInputStreamId_2_closure));
  PUPable_reg(SINGLE_ARG(Closure_Writers::beginWork_3_closure));
  PUPable_reg(SINGLE_ARG(Closure_Writers::finishedTask_5_closure));
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Writers::_sdag_idx_Writers_serial_0() { // Potentially missing Writers_SDAG_CODE in your class definition?
  static int epidx = _sdag_reg_Writers_serial_0();
  return epidx;
}
#endif /* CK_TEMPLATES_ONLY */


#ifndef CK_TEMPLATES_ONLY
int Writers::_sdag_reg_Writers_serial_0() { // Potentially missing Writers_SDAG_CODE in your class definition?
  return CkRegisterEp("Writers_serial_0", NULL, 0, CkIndex_Writers::__idx, 0);
}
#endif /* CK_TEMPLATES_ONLY */



#ifndef CK_TEMPLATES_ONLY
void _registerstreamtest(void)
{
  static int _done = 0; if(_done) return; _done = 1;

/* REG: mainchare Main: Chare{
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
  CkIndex_Main::__register("Main", sizeof(Main));

/* REG: array Readers: ArrayElement{
Readers();
Readers(int num_records, const CProxy_Main &impl_noname_0);
void setOutputStreamId(const StreamToken &output_id);
void beginWork();
void sendData();
void finishedTask();
Readers(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Readers::__register("Readers", sizeof(Readers));

/* REG: array Validators: ArrayElement{
Validators();
void setOutputStreamId(const StreamToken &output_id);
void setInputStreamId(const StreamToken &input_id);
void beginWork();
threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishedTask();
Validators(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Validators::__register("Validators", sizeof(Validators));

/* REG: array Filters: ArrayElement{
Filters();
void setOutputStreamId(const StreamToken &output_id);
void setInputStreamId(const StreamToken &input_id);
void beginWork();
threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishedTask();
Filters(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Filters::__register("Filters", sizeof(Filters));

/* REG: array Transformers: ArrayElement{
Transformers();
void setOutputStreamId(const StreamToken &output_id);
void setInputStreamId(const StreamToken &input_id);
void beginWork();
threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishedTask();
Transformers(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Transformers::__register("Transformers", sizeof(Transformers));

/* REG: array Writers: ArrayElement{
Writers(const CProxy_Main &impl_noname_1);
void setInputStreamId(const StreamToken &input_id);
void beginWork();
threaded void recvData(Ck::Stream::StreamDeliveryMsg* impl_msg);
void finishedTask();
Writers(CkMigrateMessage* impl_msg);
};
*/
  CkIndex_Writers::__register("Writers", sizeof(Writers));

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
void CBase_Readers::virtual_pup(PUP::er &p) {
    recursive_pup<Readers>(dynamic_cast<Readers*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Validators::virtual_pup(PUP::er &p) {
    recursive_pup<Validators>(dynamic_cast<Validators*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Filters::virtual_pup(PUP::er &p) {
    recursive_pup<Filters>(dynamic_cast<Filters*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Transformers::virtual_pup(PUP::er &p) {
    recursive_pup<Transformers>(dynamic_cast<Transformers*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
#ifndef CK_TEMPLATES_ONLY
template <>
void CBase_Writers::virtual_pup(PUP::er &p) {
    recursive_pup<Writers>(dynamic_cast<Writers*>(this), p);
}
#endif /* CK_TEMPLATES_ONLY */
