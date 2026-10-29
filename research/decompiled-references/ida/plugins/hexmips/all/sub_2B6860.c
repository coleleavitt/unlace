__int64 sub_2B6860()
{
  __int64 merge_handler; // rax
  __int64 v1; // rbx
  int dbctx_id; // eax
  _DWORD **v3; // rdx
  _DWORD **v4; // rbx
  _DWORD *v5; // rbp
  unsigned __int64 v6; // r12
  __int64 v7; // rbx
  unsigned __int64 v8; // rax

  merge_handler = get_merge_handler();
  if ( !merge_handler )
  {
    if ( !under_debugger )
      sub_37E160(52651);
LABEL_17:
    BUG();
  }
  v1 = merge_handler;
  dbctx_id = get_dbctx_id();
  v3 = (_DWORD **)(v1 + 56);
  v4 = (_DWORD **)(v1 + 80);
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 )
    {
      if ( dbctx_id == v5[2] )
        break;
    }
    if ( ++v3 == v4 )
    {
      if ( !under_debugger )
        sub_37E160(52652);
      goto LABEL_17;
    }
  }
  v6 = 0;
  v7 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, 0, 0);
  if ( v7 == -1 )
    return 1;
  while ( 1 )
  {
    v8 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v5 + 144LL))(v5, v7);
    if ( v8 != -1 )
      break;
LABEL_12:
    v7 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64))(*(_QWORD *)v5 + 40LL))(v5, v7, 1);
    if ( v7 == -1 )
      return 1;
  }
  if ( v8 >= v6 )
  {
    v6 = v8;
    goto LABEL_12;
  }
  return 0;
}

