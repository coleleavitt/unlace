unsigned __int64 __fastcall sub_6AB90(_QWORD *a1, __int64 *a2)
{
  const char *v3; // rsi
  const char *v4; // rsi
  const char *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 i; // r14
  size_t v9; // rdx
  size_t v10; // rax
  size_t v11; // rax
  unsigned __int64 v12; // rdx
  const void *v13; // rbp
  const char *v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 v17; // rbp
  size_t v18; // rax
  size_t v20; // [rsp+8h] [rbp-70h]
  size_t v21; // [rsp+8h] [rbp-70h]
  const void *v22; // [rsp+10h] [rbp-68h]
  _BYTE v23[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v24[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v25[8]; // [rsp+38h] [rbp-40h] BYREF

  v25[0] = __readfsqword(0x28u);
  sub_69D50(a2);
  v3 = s1;
  if ( a1[3] )
    v3 = (const char *)a1[2];
  sub_6AA10(a2, v3);
  v4 = s1;
  if ( a1[6] )
    v4 = (const char *)a1[5];
  sub_6AA10(a2, v4);
  sub_67AC0(a2, a1 + 8, 0x10u);
  v5 = s1;
  if ( a1[11] )
    v5 = (const char *)a1[10];
  sub_6AA10(a2, v5);
  v6 = a1[14];
  sub_69D50(a2);
  if ( v6 )
  {
    v7 = 0;
    for ( i = 0; i != v6; ++i )
    {
      v14 = s1;
      v15 = v7 + a1[13];
      if ( *(_QWORD *)(v15 + 8) )
        v14 = *(const char **)v15;
      if ( v14 )
      {
        v9 = strlen(v14) + 1;
      }
      else
      {
        v9 = 1;
        v14 = "";
      }
      sub_67AC0(a2, v14, v9);
      v10 = sub_196CD0(v23, v24) - (_QWORD)v23;
      if ( v10 )
        sub_67AC0(a2, v23, v10);
      v22 = *(const void **)(v15 + 32);
      if ( *(_QWORD *)(v15 + 40) > 0xFFFFFFFF )
        goto LABEL_30;
      v20 = *(_QWORD *)(v15 + 40);
      sub_69D50(a2);
      if ( v20 )
        sub_67AC0(a2, v22, v20);
      v11 = sub_196CD0(v23, v24) - (_QWORD)v23;
      if ( v11 )
        sub_67AC0(a2, v23, v11);
      v12 = *(_QWORD *)(v15 + 72);
      v13 = *(const void **)(v15 + 64);
      if ( v12 > 0xFFFFFFFF )
      {
LABEL_30:
        if ( !unk_2439A0 )
          sub_198E10(5);
        BUG();
      }
      v21 = v12;
      sub_69D50(a2);
      if ( v21 )
        sub_67AC0(a2, v13, v21);
      v7 += 88;
    }
  }
  v16 = 0;
  v17 = a1[17];
  sub_69D50(a2);
  if ( v17 )
  {
    do
    {
      v18 = sub_196E10(v23, v25, *(_QWORD *)(a1[16] + 8 * v16) + 1LL) - (_QWORD)v23;
      if ( v18 )
        sub_67AC0(a2, v23, v18);
      ++v16;
    }
    while ( v16 != v17 );
  }
  return v25[0] - __readfsqword(0x28u);
}
