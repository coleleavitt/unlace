__int64 __fastcall sub_6B620(__int64 a1, double a2)
{
  _QWORD *v3; // rbp
  unsigned __int64 v4; // rax
  unsigned __int8 v5; // al
  __int64 v6; // rdx
  __int64 v7; // rbp
  int v8; // r12d
  unsigned __int8 v9; // [rsp+Fh] [rbp-39h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]
  char v11; // [rsp+21h] [rbp-27h]
  char v12; // [rsp+22h] [rbp-26h]

  if ( !(unsigned __int8)xrefblk_t_first_from() )
    return 0;
  if ( !v12 )
    return 0;
  if ( v11 != 19 )
    return 0;
  v3 = *(_QWORD **)(a1 + 64);
  v4 = sub_330F80(v3, v10);
  v5 = sub_332920((__int64)(v3 + 1), v4);
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL);
  do
  {
    v6 = *(_QWORD *)(v6 + 8);
    if ( !v6 )
      return 0;
  }
  while ( v10 < *(_QWORD *)(v6 + 32) || v10 >= *(_QWORD *)(v6 + 40) );
  if ( (*(_BYTE *)(v6 + 26) & 1) == 0 )
  {
    if ( !under_debugger )
      sub_383060(0xCD3Eu, a2);
LABEL_17:
    BUG();
  }
  if ( v10 != *(_QWORD *)(v6 + 32) )
  {
    if ( !under_debugger )
      sub_383060(0xCD3Fu, a2);
    goto LABEL_17;
  }
  v9 = v5;
  **(_DWORD **)(a1 + 56) = 55;
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_DWORD *)(v6 + 72);
  sub_11CDA0(v7 + 32);
  *(_BYTE *)(v7 + 32) = 7;
  *(_DWORD *)(v7 + 40) = v8;
  sub_11CDA0(*(_QWORD *)(a1 + 56) + 48LL);
  sub_11CDA0(*(_QWORD *)(a1 + 56) + 64LL);
  return v9;
}

