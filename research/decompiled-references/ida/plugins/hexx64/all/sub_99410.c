__int64 __fastcall sub_99410(const __m128i *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r14
  unsigned int v5; // r15d
  __int64 v7; // r12
  unsigned __int8 *v8; // r13
  __int128 v9; // rdi
  __int64 v10; // rax
  _DWORD *v11; // r15
  __int64 v12; // r14
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // r8d
  int v18; // r9d
  int v19; // r8d
  int v20; // r9d
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rax
  __int128 v31; // rdi
  __int128 v32; // rdi
  const __m128i *v33; // r15
  __int128 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r8
  int v37; // r9d
  __int64 v38; // [rsp+8h] [rbp-128h]
  __m128i v39; // [rsp+10h] [rbp-120h] BYREF
  __int64 v40; // [rsp+20h] [rbp-110h]
  char v41; // [rsp+2Fh] [rbp-101h]
  unsigned __int8 *v42; // [rsp+30h] [rbp-100h]
  unsigned __int8 *v43; // [rsp+38h] [rbp-F8h]
  unsigned __int8 *v44; // [rsp+40h] [rbp-F0h]
  unsigned __int8 *v45; // [rsp+48h] [rbp-E8h]
  __int64 *v46; // [rsp+50h] [rbp-E0h]
  __int64 *v47; // [rsp+58h] [rbp-D8h]
  __int64 *v48; // [rsp+60h] [rbp-D0h]
  const __m128i *v49; // [rsp+68h] [rbp-C8h]
  unsigned __int8 *v50; // [rsp+70h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+78h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+80h] [rbp-B0h] BYREF
  __int128 v53; // [rsp+88h] [rbp-A8h]
  _QWORD v54[2]; // [rsp+A0h] [rbp-90h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-80h]
  __m128i v56; // [rsp+B8h] [rbp-78h]
  const void *v57[2]; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v58; // [rsp+E0h] [rbp-50h]
  __m128i v59; // [rsp+E8h] [rbp-48h] BYREF
  unsigned __int64 v60; // [rsp+F8h] [rbp-38h]

  v49 = a1;
  v60 = __readfsqword(0x28u);
  v3 = sub_11C8E0(a2, &v50, 9);
  if ( !v3 )
    return 0;
  v4 = v3;
  if ( *(_BYTE *)(v3 + 32) != 1 || *(_DWORD *)(v3 + 40) )
    return 0;
  v7 = *(_QWORD *)(a2 + 8);
  if ( !v7 || *(_DWORD *)v7 != 12 )
    goto LABEL_8;
  v8 = (unsigned __int8 *)(v7 + 32);
  if ( sub_125B60((unsigned __int8 *)(v7 + 32), a2 + 64, 0) )
  {
    v8 = (unsigned __int8 *)(v7 + 48);
  }
  else if ( !sub_125B60((unsigned __int8 *)(v7 + 48), a2 + 64, 0) )
  {
    goto LABEL_8;
  }
  if ( sub_11EFE0(v8, (unsigned __int8 *)(a2 + 64), 3u) )
LABEL_8:
    v8 = nullptr;
  *(_QWORD *)&v9 = v49;
  *((_QWORD *)&v9 + 1) = v4 + 32;
  v51 = a2;
  v10 = sub_129440(v9, (__int64)&v51, 0);
  v11 = (_DWORD *)v10;
  if ( !v10 || v51 != v10 || *(_DWORD *)v10 != 25 )
    return 0;
  v12 = *(_QWORD *)(v10 + 8);
  v13 = *(_DWORD *)v12;
  if ( *(_DWORD *)v12 == 26 )
  {
    v12 = *(_QWORD *)(v12 + 8);
    v13 = *(_DWORD *)v12;
  }
  if ( v13 != 12 )
    return 0;
  v14 = *(_DWORD *)(v12 + 36);
  if ( v14 != *(_DWORD *)(a2 + 36) )
    return 0;
  v15 = *(_QWORD *)(v49[30].m128i_i64[0] + 112);
  v40 = v15;
  if ( v14 >= *(_DWORD *)(v15 + 88) && (v14 != *(_DWORD *)(v15 + 88) || !sub_11CBB0(v40, 0xCu)) )
    return 0;
  v43 = (unsigned __int8 *)(v12 + 32);
  v44 = (unsigned __int8 *)(v12 + 48);
  if ( !(unsigned int)sub_130480(v40, v49, (__int64)v11, v11, v12, v12 + 32, v12 + 48, 2) )
    return 0;
  v45 = (unsigned __int8 *)(v12 + 64);
  v42 = (unsigned __int8 *)(a2 + 64);
  LOBYTE(v16) = sub_11EFE0((unsigned __int8 *)(v12 + 64), (unsigned __int8 *)(a2 + 64), 3u);
  v5 = v16;
  if ( (_BYTE)v16 )
    return 0;
  if ( !v8 )
  {
    if ( !sub_11EFE0(v50, v45, 3u) )
      goto LABEL_25;
    return 0;
  }
  if ( !sub_125B60(v42, v7 + 64, 0) )
  {
    v48 = (__int64 *)v57;
    sub_127A20((__int64)v57, (__int64)v49, a2, 1, v17, v18);
    if ( !sub_A9D90((__int64)v49, (__int64 *)v57, *(_QWORD *)(v7 + 8), 0, 1u)
      && (unsigned __int8)sub_64880(v48)
      && !v59.m128i_i64[0] )
    {
      sub_93B40(v48);
      goto LABEL_23;
    }
    sub_93B40(v48);
    return 0;
  }
LABEL_23:
  if ( sub_11EFE0(v50, v45, 3u) || sub_11EFE0(v8, v45, 3u) )
    return 0;
LABEL_25:
  v21.m128i_i64[0] = 0;
  v52 = 0;
  v53 = 0;
  if ( *(_QWORD *)(v12 + 8) == a2 )
  {
    v41 = 1;
    v46 = &v52;
    goto LABEL_40;
  }
  v46 = &v52;
  v47 = v54;
  sub_127A20((__int64)v54, (__int64)v49, v12, 1, v19, v20);
  v22 = *(_QWORD *)(v12 + 8);
  v46 = &v52;
  if ( !sub_A9AA0((__int64)v49, v54, v22, a2, 1u) )
  {
    v41 = 1;
    v46 = &v52;
    goto LABEL_29;
  }
  v46 = &v52;
  v23 = sub_155920(&v52);
  if ( (unsigned __int8)sub_155AA0((__int64)v49, (_BYTE *)v12, (__int64)v45, v23, v24, v25) )
  {
    v41 = 0;
LABEL_29:
    if ( sub_A9D90((__int64)v49, v47, *(_QWORD *)(v12 + 8), a2, 1u) )
    {
      if ( sub_11EFE0(v43, v45, 3u) )
      {
        v26 = sub_155920(v46);
        if ( !(unsigned __int8)sub_155AA0((__int64)v49, (_BYTE *)v12, (__int64)v43, v26, v27, v28) )
          goto LABEL_60;
      }
      if ( sub_11EFE0(v44, v45, 3u) )
      {
        v35 = sub_155920(v46);
        if ( !(unsigned __int8)sub_155AA0((__int64)v49, (_BYTE *)v12, (__int64)v44, v35, v36, v37) )
          goto LABEL_60;
      }
      v41 = 0;
    }
    v48 = (__int64 *)v57;
    sub_124680((__int64)v57, (__int64)v49, v12, 1u);
    sub_648D0(v47, v57, 0.0);
    v29 = v58;
    v21 = _mm_loadu_si128(&v59);
    v58 = 0;
    v59 = 0;
    if ( v55 )
    {
      v38 = v29;
      v39 = v21;
      v56.m128i_i64[0] = 0;
      qfree(v55);
      v29 = v38;
      v21 = _mm_load_si128(&v39);
    }
    v55 = v29;
    v56 = v21;
    sub_93B40(v48);
    if ( sub_A9AA0((__int64)v49, v47, *(_QWORD *)(v12 + 8), a2, 1u) )
    {
      v30 = sub_155920(v46);
      *((_QWORD *)&v31 + 1) = v12;
      *(_QWORD *)&v31 = v49;
      if ( !(unsigned __int8)sub_155D40(v31, (__int64)v43, *(_QWORD *)(v12 + 8), a2, v30) )
        goto LABEL_60;
      *((_QWORD *)&v32 + 1) = v12;
      *(_QWORD *)&v32 = v49;
      if ( !(unsigned __int8)sub_155D40(v32, (__int64)v44, *(_QWORD *)(v12 + 8), a2, 0) )
        goto LABEL_60;
    }
    sub_93B40(v47);
LABEL_40:
    sub_1559D0((__int64)v46, 0);
    v57[1] = nullptr;
    v54[0] = 0xFFFFFFFF00000000LL;
    v57[0] = (const void *)0xFFFFFFFF00000000LL;
    v54[1] = 0;
    v47 = v54;
    v48 = (__int64 *)v57;
    sub_11CA10((char *)v50, (char *)v54);
    v48 = (__int64 *)v57;
    sub_B1520((__int64)v49, a2, (__int64)v54, v12, (__int64)v43, a2, (__int64)v54, 0);
    v48 = (__int64 *)v57;
    if ( v8 )
    {
      sub_11CA10((char *)v8, (char *)v57);
      sub_B1520((__int64)v49, a2, (__int64)v57, v12, (__int64)v44, a2, (__int64)v57, 0);
      sub_11CA10((char *)(v7 + 64), (char *)v42);
    }
    else
    {
      sub_125180((__int64)v57, v44);
      sub_1207E0((char *)v57, v40, 9, *(_QWORD *)(a2 + 24), SHIDWORD(v54[0]));
    }
    sub_157210((__int64)v49, *(_QWORD *)(v12 + 8), (__int64)v45, *(_QWORD *)(a2 + 8), (__int64)v42, 1);
    sub_11CA10((char *)(a2 + 32), (char *)v47);
    sub_11CA10((char *)(a2 + 48), (char *)v48);
    if ( v41 )
      sub_11D5A0(v12);
    if ( v8 )
      sub_11D5A0(v7);
    v33 = v49;
    *((_QWORD *)&v34 + 1) = a2;
    *(_QWORD *)&v34 = v49;
    sub_993D0(v34, *(double *)v21.m128i_i64);
    sub_167810(v33, a2, 6);
    v5 = 1;
    sub_11CDA0((__int64)v48);
    sub_11CDA0((__int64)v47);
    goto LABEL_47;
  }
LABEL_60:
  sub_93B40(v47);
LABEL_47:
  sub_1559D0((__int64)v46, 1);
  if ( v52 )
  {
    *(_QWORD *)&v53 = 0;
    qfree(v52);
  }
  return v5;
}

