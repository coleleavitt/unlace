__int64 __fastcall sub_27500(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  const char *v11; // r13
  int v13; // r15d
  int v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9

  v4 = a1 + 1992;
  v5 = *(_QWORD **)(v4 + 8);
  v6 = (_QWORD *)v4;
  v8 = *(_QWORD *)(a2 + 8);
  if ( !v5 )
    return 0;
  do
  {
    while ( 1 )
    {
      v9 = v5[2];
      v10 = v5[3];
      if ( v5[4] >= v8 )
        break;
      v5 = (_QWORD *)v5[3];
      if ( !v10 )
        goto LABEL_6;
    }
    v6 = v5;
    v5 = (_QWORD *)v5[2];
  }
  while ( v9 );
LABEL_6:
  if ( (_QWORD *)v4 == v6 )
    return 0;
  v11 = (const char *)v6[4];
  if ( v8 < (unsigned __int64)v11 )
    return 0;
  v13 = *((_DWORD *)v6 + 17);
  v14 = *((_DWORD *)v6 + 16);
  if ( *(_BYTE *)(a1 + 792) )
  {
    a3 = 0.0;
    get_ea_name();
    sub_1BF10(a1, (__int64)"%a: %s invoked\n", 0.0, v11);
  }
  if ( !v14 && v6[6] )
  {
    if ( !(unsigned __int8)sub_30140(a1, a2, (_DWORD)v11, 0, v13, 1, 1) )
      return 0;
    v15 = (__int64)v11;
    if ( !(unsigned __int8)sub_25470(a1, (__int64)v11, a3) )
    {
LABEL_14:
      if ( *(const char **)(a1 + 1936) == v11 )
      {
        if ( *(_DWORD *)(a1 + 2128) == 1 && *(_DWORD *)(a1 + 2132) > 0xAu && *(_QWORD *)(a1 + 1952) != -1 )
          sub_271A0((__int64 *)a1, v15, v16, v17, v18, v19);
        sub_1EB40((_QWORD *)a1);
        goto LABEL_20;
      }
      return 0;
    }
  }
  else
  {
    v15 = (__int64)v11;
    if ( !(unsigned __int8)sub_25470(a1, (__int64)v11, a3) )
      goto LABEL_14;
  }
LABEL_20:
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a2);
  return 1;
}

