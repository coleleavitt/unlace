unsigned __int64 __fastcall sub_47B0(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 result; // rax
  __int64 v9; // [rsp-18h] [rbp-18h]
  __int64 v10; // [rsp-10h] [rbp-10h]
  __int64 v11; // [rsp-8h] [rbp-8h]

  if ( *(_BYTE *)(a1 + 264) != a2 )
  {
    *(_BYTE *)(a1 + 264) = a2;
    if ( a2 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(127, a1 + 160, callui, a4, a5, a6);
      callui(129, "Search/all error", "comhelper:scan_for_clsids", 1, v6, v7, v9, v10, v11);
      hook_event_listener();
      return sub_4550(a1);
    }
    else
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
        128,
        "comhelper:scan_for_clsids",
        callui,
        a4,
        a5,
        a6);
      return unhook_event_listener();
    }
  }
  return result;
}

