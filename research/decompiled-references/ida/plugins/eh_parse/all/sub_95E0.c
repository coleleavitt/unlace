unsigned __int64 __fastcall sub_95E0(int a1)
{
  const char *v1; // rcx
  _BYTE v3[1032]; // [rsp+10h] [rbp-428h] BYREF
  unsigned __int64 v4; // [rsp+418h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  switch ( a1 )
  {
    case 2:
      v1 = "short";
      break;
    case 4:
      v1 = "__int32";
      break;
    case 8:
      v1 = "__int64";
      break;
    default:
      if ( !under_debugger )
        interr(30506);
      BUG();
  }
  qsnprintf(
    v3,
    1024,
    "typedef signed %s _Unwind_Sword;typedef unsigned %s _Unwind_Ptr;typedef unsigned %s _Unwind_Internal_Ptr;typedef uns"
    "igned %s _Unwind_Word;",
    v1,
    v1,
    v1,
    v1);
  h2ti(0, 0, v3, 1024, 0, 0, sub_9510, 0, 0);
  h2ti(
    0,
    0,
    "typedef int _Unwind_Action;typedef unsigned long long _Unwind_Exception_Class;typedef enum{_URC_NO_REASON = 0,_URC_F"
    "OREIGN_EXCEPTION_CAUGHT = 1,_URC_FATAL_PHASE2_ERROR = 2,_URC_FATAL_PHASE1_ERROR = 3,_URC_NORMAL_STOP = 4,_URC_END_OF"
    "_STACK = 5,_URC_HANDLER_FOUND = 6,_URC_INSTALL_CONTEXT = 7,_URC_CONTINUE_UNWIND = 8} _Unwind_Reason_Code;struct _Unw"
    "ind_Exception;struct _Unwind_Context;typedef void (*_Unwind_Exception_Cleanup_Fn)(_Unwind_Reason_Code,struct _Unwind"
    "_Exception *);typedef _Unwind_Reason_Code (*_Unwind_Personality_Fn)(int,_Unwind_Action,_Unwind_Exception_Class,struc"
    "t _Unwind_Exception *,struct _Unwind_Context *);typedef _Unwind_Reason_Code (*_Unwind_Stop_Fn)(int,_Unwind_Action,_U"
    "nwind_Exception_Class,struct _Unwind_Exception *,struct _Unwind_Context *,void *);typedef _Unwind_Reason_Code (*_Unw"
    "ind_Trace_Fn)(struct _Unwind_Context *,void *);",
    1024,
    0,
    0,
    sub_9510,
    0,
    0);
  return v4 - __readfsqword(0x28u);
}

