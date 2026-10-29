__int64 __fastcall sub_F6B70(__int64 a1, unsigned __int8 *a2, __int64 i, __int64 a4, __int64 a5, __int64 a6)
{
  char v7; // bl
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  bool v16; // zf
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  void (__fastcall *v21)(_QWORD); // rsi
  unsigned int v22; // [rsp+0h] [rbp-58h]
  int v23; // [rsp+0h] [rbp-58h]
  int v24; // [rsp+0h] [rbp-58h]
  __int64 v25; // [rsp+0h] [rbp-58h]
  __int64 v26; // [rsp+8h] [rbp-50h]
  int v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+10h] [rbp-48h]
  __int64 v29; // [rsp+18h] [rbp-40h]

  v7 = i;
  if ( (((_BYTE)i - 4) & 0xFB) == 0 )
  {
    v11 = 2;
    if ( a2 )
      goto LABEL_4;
LABEL_17:
    v13 = *(_QWORD *)(a1 + 16);
    if ( !v13 )
      return 7;
    if ( !*(_QWORD *)(v13 + 24) )
      goto LABEL_13;
    goto LABEL_6;
  }
  v11 = (unsigned __int8)i;
  if ( (unsigned int)(unsigned __int8)i - 1 > 2 )
  {
    sub_E8BB0(
      0x15u,
      "%s at line %d of [%.10s]",
      "misuse",
      172690,
      "f766dff012af0ea3c28a8ce4db850cd0205729a8283bce1e442992aded7c734b");
    return 21;
  }
  if ( !a2 )
    goto LABEL_17;
LABEL_4:
  v22 = v11;
  v12 = sub_E31C0(a1, v11, a2);
  v13 = v12;
  v11 = v22;
  if ( !v12 || !*(_QWORD *)(v12 + 24) )
  {
LABEL_11:
    v23 = v11;
    v14 = sub_E31C0(a1, v11, a2);
    LODWORD(v11) = v23;
    v13 = v14;
    goto LABEL_12;
  }
LABEL_6:
  if ( *(_DWORD *)(a1 + 208) )
  {
    sub_F63C0(a1, 5, "unable to delete/modify collation sequence due to active statements", v13, v11);
    return 5;
  }
  for ( i = *(_QWORD *)(a1 + 8); i; i = *(_QWORD *)(i + 16) )
    *(_BYTE *)(i + 198) = *(_BYTE *)(i + 198) & 0xFC | 1;
  if ( (*(_BYTE *)(v13 + 8) & 0xF7) == (_DWORD)v11 )
  {
    v26 = v13;
    v24 = v11;
    v18 = sub_C2AB0(a1 + 608, a2, nullptr)[2];
    v19 = v26;
    LODWORD(v11) = v24;
    v20 = v18 + 8;
    i = v18 + 128;
    do
    {
      if ( *(_BYTE *)v20 == *(_BYTE *)(v19 + 8) )
      {
        v21 = *(void (__fastcall **)(_QWORD))(v20 + 24);
        if ( v21 )
        {
          v29 = i;
          v28 = v19;
          v27 = v11;
          v25 = v20;
          v21(*(_QWORD *)(v20 + 8));
          i = v29;
          v19 = v28;
          LODWORD(v11) = v27;
          v20 = v25;
        }
        *(_QWORD *)(v20 + 16) = 0;
      }
      v20 += 40;
    }
    while ( i != v20 );
  }
  if ( a2 )
    goto LABEL_11;
  v13 = *(_QWORD *)(a1 + 16);
LABEL_12:
  if ( !v13 )
    return 7;
LABEL_13:
  *(_QWORD *)(v13 + 24) = a5;
  *(_QWORD *)(v13 + 16) = a4;
  v15 = v7 & 8 | (unsigned int)v11;
  *(_QWORD *)(v13 + 32) = a6;
  *(_BYTE *)(v13 + 8) = v15;
  v16 = *(_QWORD *)(a1 + 392) == 0;
  *(_DWORD *)(a1 + 80) = 0;
  if ( v16 )
    *(_DWORD *)(a1 + 84) = -1;
  else
    sub_CA220((__int64 *)a1, 0, i, v13, v15, a6);
  return 0;
}
