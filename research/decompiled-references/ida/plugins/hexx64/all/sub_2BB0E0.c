__int64 __fastcall sub_2BB0E0(double a1)
{
  __int64 merge_handler; // rax
  __int64 v2; // rbx
  int dbctx_id; // eax
  _DWORD **v4; // rdx
  _DWORD **v5; // rbx
  _DWORD *v6; // rbp
  unsigned __int64 v7; // r12
  __int64 v8; // rbx
  unsigned __int64 v9; // rax

  merge_handler = get_merge_handler();
  if ( !merge_handler )
  {
    if ( !under_debugger )
      sub_383060(0xCDABu, a1);
LABEL_17:
    BUG();
  }
  v2 = merge_handler;
  dbctx_id = get_dbctx_id();
  v4 = (_DWORD **)(v2 + 56);
  v5 = (_DWORD **)(v2 + 80);
  while ( 1 )
  {
    v6 = *v4;
    if ( *v4 )
    {
      if ( dbctx_id == v6[2] )
        break;
    }
    if ( ++v4 == v5 )
    {
      if ( !under_debugger )
        sub_383060(0xCDACu, a1);
      goto LABEL_17;
    }
  }
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD))(*(_QWORD *)v6 + 40LL))(v6, 0, 0);
  if ( v8 == -1 )
    return 1;
  while ( 1 )
  {
    v9 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v6 + 144LL))(v6, v8);
    if ( v9 != -1 )
      break;
LABEL_12:
    v8 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v6 + 40LL))(v6, v8, 1);
    if ( v8 == -1 )
      return 1;
  }
  if ( v9 >= v7 )
  {
    v7 = v9;
    goto LABEL_12;
  }
  return 0;
}

