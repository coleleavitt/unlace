char __fastcall sub_117E60(__int64 a1, int a2, __int64 a3, int *a4, __int64 a5, int *a6)
{
  _DWORD *v6; // rax
  int *v7; // r14
  char *v8; // r13
  __int64 v9; // r12
  char result; // al
  __int64 v13; // r9
  __int64 v14; // r8
  __int128 v15; // rdi

  v6 = a4 + 8;
  v7 = a6;
  v8 = (char *)(a4 + 12);
  v9 = a5;
  if ( *a4 != 15 )
  {
    if ( a2 != 12 || *a6 != 15 )
      return 0;
    v9 = a3;
    v6 = a4 + 12;
    v8 = (char *)(a4 + 8);
    v7 = a4;
    a3 = a5;
  }
  *(_QWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 48) = v6;
  if ( !(unsigned __int8)sub_11FD80(v8, (_QWORD *)(a1 + 112), 0) )
    return 0;
  sub_125180(a1 + 32, *(unsigned __int8 **)(a1 + 48));
  *((_QWORD *)&v15 + 1) = *(_QWORD *)(a1 + 8);
  v13 = *(_QWORD *)(a1 + 48);
  v14 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 64) = **((_QWORD **)v8 + 1);
  *(_QWORD *)&v15 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&v15 + 1) + 480LL) + 112LL);
  result = a2 == 12 ? sub_30D9F0(v15, v9, v7, v14, v13) : sub_30D8F0(v15, *((__int64 *)&v15 + 1), v9, v7, v14, v13);
  if ( !result )
    return 0;
  *(_BYTE *)(a1 + 133) = 1;
  return result;
}

