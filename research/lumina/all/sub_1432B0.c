__int64 __fastcall sub_1432B0(__int64 a1, int a2, double a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  _QWORD *i; // rax
  _QWORD *j; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rbx
  unsigned int v11; // r12d
  __int64 v12; // rdi
  __int64 v14; // rax
  _QWORD *v15; // r13
  __int64 v16; // [rsp+0h] [rbp-48h] BYREF
  _BYTE *v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v3 = 32LL * a2;
  v18 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + v3 + 24);
  for ( i = *(_QWORD **)(v5 + 16); i; i = (_QWORD *)*i )
    *(_DWORD *)(i[2] + 48LL) &= ~0x10u;
  for ( j = *(_QWORD **)(v5 + 40); j; j = (_QWORD *)*j )
    *(_BYTE *)(j[2] + 99LL) &= ~0x80u;
  v8 = *(_QWORD *)(a1 + 32);
  v16 = a1;
  v17 = *(_BYTE **)(v8 + v3);
  v9 = sub_CA640(a1, "sqlite_stat1", v17);
  if ( !v9 || *(_BYTE *)(v9 + 63) )
  {
    v10 = *(_QWORD **)(v5 + 40);
    v11 = 0;
    if ( !v10 )
      return v11;
    goto LABEL_8;
  }
  v14 = sub_E8280(a1, "SELECT tbl,idx,stat FROM %Q.sqlite_stat1", v17);
  v15 = (_QWORD *)v14;
  if ( v14 )
  {
    v11 = sub_142D90(
            a1,
            v14,
            (unsigned int (__fastcall *)(__int64, _QWORD, __int64 *, __int64 *))sub_D5F10,
            (__int64)&v16,
            nullptr,
            a3);
    sub_C9250(a1, v15);
    v10 = *(_QWORD **)(v5 + 40);
    if ( !v10 )
      goto LABEL_11;
    goto LABEL_8;
  }
  v10 = *(_QWORD **)(v5 + 40);
  v11 = 7;
  if ( v10 )
  {
    do
    {
LABEL_8:
      v12 = v10[2];
      if ( *(char *)(v12 + 99) >= 0 )
        sub_C7180(v12);
      v10 = (_QWORD *)*v10;
    }
    while ( v10 );
LABEL_11:
    if ( v11 != 7 )
      return v11;
  }
  v11 = 7;
  if ( !*(_BYTE *)(a1 + 103) && !*(_BYTE *)(a1 + 104) )
    sub_DBE60(a1);
  return v11;
}
