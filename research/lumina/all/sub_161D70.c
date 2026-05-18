__int64 __fastcall sub_161D70(
        __m128i *a1,
        _BYTE *a2,
        unsigned __int8 *a3,
        const char *a4,
        const char **a5,
        const char **a6,
        double a7,
        _DWORD *a8,
        int *a9,
        _DWORD *a10)
{
  __int64 v12; // rdi
  __int64 v13; // r8
  unsigned int v14; // r13d
  char v15; // r15
  __int64 v16; // r9
  int v17; // ecx
  _BOOL8 v18; // rdx
  const char *v19; // rsi
  const char *v20; // rax
  __int64 *v21; // rcx
  char v22; // bp
  char *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rsi
  unsigned int v29; // r12d
  __int64 v30; // rdi
  __int64 v32; // rax
  __int64 v33; // r11
  _BYTE **v34; // r10
  int v35; // r15d
  __int64 v36; // r9
  _BYTE *v37; // rsi
  const char *i; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int16 v41; // r10
  int v42; // edi
  _BYTE *j; // rsi
  const char *v47; // [rsp+20h] [rbp-68h]
  __int64 v48; // [rsp+20h] [rbp-68h]
  __int64 v49; // [rsp+20h] [rbp-68h]
  __int64 v50; // [rsp+28h] [rbp-60h]
  _BOOL4 v51; // [rsp+34h] [rbp-54h]
  int v52; // [rsp+38h] [rbp-50h]
  unsigned int v53; // [rsp+3Ch] [rbp-4Ch]
  __int64 *v54[9]; // [rsp+40h] [rbp-48h] BYREF

  v12 = a1[1].m128i_i64[1];
  v54[0] = nullptr;
  v54[1] = (__int64 *)__readfsqword(0x28u);
  if ( v12 )
    xmmword_241500(v12);
  if ( !a1[6].m128i_i8[15] )
    sub_CC760((__int64)a1);
  v14 = sub_143990(a1, v54, a7);
  if ( v14 )
    goto LABEL_6;
  v32 = sub_CA640((__int64)a1, a3, a2);
  v33 = v32;
  if ( !v32 || *(_BYTE *)(v32 + 63) == 2 )
    goto LABEL_6;
  if ( !a4 )
  {
LABEL_56:
    v16 = 0;
    v18 = 0;
    v15 = 0;
    v17 = 1;
    v19 = "BINARY";
    v20 = "INTEGER";
    goto LABEL_7;
  }
  v13 = (unsigned int)*(__int16 *)(v32 + 54);
  if ( (int)v13 <= 0 )
  {
    if ( !*(_WORD *)(v32 + 54) )
      goto LABEL_51;
    goto LABEL_56;
  }
  v34 = *(_BYTE ***)(v32 + 8);
  v35 = 0;
  while ( 2 )
  {
    v36 = (__int64)v34;
    v37 = *v34;
    for ( i = a4; ; ++i )
    {
      v39 = (unsigned __int8)*v37;
      v40 = *(unsigned __int8 *)i;
      if ( (_DWORD)v39 != (_DWORD)v40 )
        break;
      if ( !*v37 )
      {
        if ( v35 == (_DWORD)v13 )
          goto LABEL_51;
        goto LABEL_45;
      }
LABEL_41:
      ++v37;
    }
    if ( byte_1BF000[v39] == byte_1BF000[v40] )
      goto LABEL_41;
    ++v35;
    v34 += 2;
    if ( v35 != (_DWORD)v13 )
      continue;
    break;
  }
LABEL_51:
  if ( *(char *)(v33 + 48) < 0 || (v49 = v33, !(unsigned int)sub_CED50((__int64)a4)) )
  {
LABEL_6:
    v15 = 1;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = nullptr;
    v20 = nullptr;
    goto LABEL_7;
  }
  v33 = v49;
  v35 = *(__int16 *)(v49 + 52);
  if ( v35 < 0 )
    goto LABEL_56;
  v36 = *(_QWORD *)(v49 + 8) + 16LL * (__int16)v35;
LABEL_45:
  v48 = v33;
  if ( !v36 )
    goto LABEL_56;
  v50 = v36;
  v20 = (const char *)sub_D4C70(v36, 0);
  v41 = *(_WORD *)(v50 + 14);
  v42 = *(__int16 *)(v48 + 52);
  v18 = (*(_BYTE *)(v50 + 8) & 0xF) != 0;
  v17 = v41 & 1;
  if ( (v41 & 0x200) == 0 )
  {
    if ( v35 == v42 )
      v16 = (*(_DWORD *)(v48 + 48) >> 3) & 1;
    else
      v16 = 0;
    goto LABEL_49;
  }
  for ( j = *(_BYTE **)v50; *j; ++j )
    ;
  if ( (v41 & 4) != 0 )
  {
    do
      ++j;
    while ( *j );
  }
  v19 = j + 1;
  v16 = v35 == v42 && (*(_BYTE *)(v48 + 48) & 8) != 0;
  if ( v19 )
  {
    v15 = 0;
  }
  else
  {
LABEL_49:
    v15 = 0;
    v19 = "BINARY";
  }
LABEL_7:
  if ( !a1[6].m128i_i8[15] )
  {
    v53 = v16;
    v52 = v17;
    v51 = v18;
    v47 = v20;
    sub_CC7E0((__int64)a1, (__int64)v19, v18);
    v16 = v53;
    v17 = v52;
    LODWORD(v18) = v51;
    v20 = v47;
  }
  if ( a5 )
    *a5 = v20;
  if ( a6 )
    *a6 = v19;
  if ( a8 )
    *a8 = v18;
  if ( a9 )
    *a9 = v17;
  if ( a10 )
    *a10 = v16;
  v21 = v54[0];
  v22 = v15 & (v14 == 0);
  if ( v22 )
  {
    if ( v54[0] )
      sub_C9250((__int64)a1, v54[0]);
    v14 = 1;
    v21 = (__int64 *)sub_E8280((__int64)a1, "no such table column: %s.%s", (const char *)a3, a4);
    v54[0] = v21;
  }
  else
  {
    v22 = v14 != 0;
  }
  v23 = "%s";
  if ( !v21 )
    v23 = nullptr;
  sub_F63C0((__int64)a1, v14, v23, v21, v13, v16, a4);
  v28 = v54[0];
  if ( v54[0] )
    sub_C9250((__int64)a1, v54[0]);
  if ( a1[6].m128i_i8[7] || (v29 = 0, v22) )
  {
    v28 = (__int64 *)v14;
    v29 = sub_D42C0((__int64)a1, v14, v24, v25, v26, v27);
  }
  v30 = a1[1].m128i_i64[1];
  if ( v30 )
    xmmword_241510(v30, v28, v24);
  return v29;
}
