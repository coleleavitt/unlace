__int64 __fastcall sub_57DD0(
        __int64 a1,
        double a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rsi
  __int64 i; // rbx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  unsigned __int8 v19; // al
  __int64 v20; // r9
  __int64 v22; // rdx
  struct _Unwind_Exception *v23; // rdi
  __int64 v24; // [rsp+0h] [rbp-28h]
  __int64 v25; // [rsp+8h] [rbp-20h]
  __int64 v26; // [rsp+10h] [rbp-18h]
  __int64 v27; // [rsp+18h] [rbp-10h]

  if ( *(_BYTE *)(a1 + 5505) || *(_BYTE *)(a1 + 5506) )
  {
    if ( under_debugger )
      BUG();
    v23 = (struct _Unwind_Exception *)interr();
    if ( v22 != 1 )
      _Unwind_Resume(v23);
    __cxa_begin_catch(v23);
    __cxa_end_catch();
    return callui(24, 10, 0, &callui, callui, v20, a8, a9, a10, a11);
  }
  *(_BYTE *)(a1 + 5505) = 1;
  *(_BYTE *)(a1 + 5504) = get_first_fixup_ea() != -1;
  if ( *(_QWORD *)(a1 + 5496) != -1 )
  {
    sub_4A6E0((__int64)"Performing postponed analysis of RTTIs");
    v11 = 67;
    for ( i = netnode_supfirst(); i != -1; i = netnode_supnext() )
    {
      v13 = node2ea();
      v14 = getseg();
      if ( v14 )
      {
        if ( *(_BYTE *)(v14 + 43) )
        {
          v18 = *(_BYTE *)(v14 + 184);
          if ( !v18 || (unsigned __int8)(v18 - 2) <= 1u )
          {
            v19 = netnode_charval();
            v11 = v13;
            sub_57CB0(a1, v13, v19, a2);
          }
        }
      }
      if ( (unsigned __int8)callui(27, v11, &callui, v15, v16, v17, v24, v25, v26, v27)
        && (unsigned int)sub_52870(0, (__int64)"HIDECANCEL\nAbort analysis of Borland's RTTI?") == 1 )
      {
        break;
      }
      v11 = i;
    }
    netnode_supdel_all();
    return callui(24, 10, 0, &callui, callui, v20, a8, a9, a10, a11);
  }
  return netnode_check();
}

