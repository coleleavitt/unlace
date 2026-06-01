__int64 __fastcall sub_6B060(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rsi
  unsigned __int8 v4; // al
  __int64 v5; // rdx
  __int64 v6; // rbp
  int v7; // r12d
  unsigned __int8 v8; // [rsp+Fh] [rbp-39h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]
  char v10; // [rsp+21h] [rbp-27h]
  char v11; // [rsp+22h] [rbp-26h]

  if ( !(unsigned __int8)xrefblk_t_first_from() )
    return 0;
  if ( !v11 )
    return 0;
  if ( v10 != 19 )
    return 0;
  v2 = *(_QWORD *)(a1 + 64);
  v3 = sub_3312A0(v2);
  v4 = sub_332C60(v2 + 8, v3);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 520LL);
  do
  {
    v5 = *(_QWORD *)(v5 + 8);
    if ( !v5 )
      return 0;
  }
  while ( v9 < *(_QWORD *)(v5 + 32) || v9 >= *(_QWORD *)(v5 + 40) );
  if ( (*(_BYTE *)(v5 + 26) & 1) == 0 )
  {
    if ( !under_debugger )
      sub_3835A0(52542);
LABEL_17:
    BUG();
  }
  if ( v9 != *(_QWORD *)(v5 + 32) )
  {
    if ( !under_debugger )
      sub_3835A0(52543);
    goto LABEL_17;
  }
  v8 = v4;
  **(_DWORD **)(a1 + 56) = 55;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = *(_DWORD *)(v5 + 72);
  sub_11C7E0(v6 + 32);
  *(_BYTE *)(v6 + 32) = 7;
  *(_DWORD *)(v6 + 40) = v7;
  sub_11C7E0(*(_QWORD *)(a1 + 56) + 48LL);
  sub_11C7E0(*(_QWORD *)(a1 + 56) + 64LL);
  return v8;
}

