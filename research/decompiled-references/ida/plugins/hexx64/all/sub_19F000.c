__int64 __fastcall sub_19F000(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 *v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  signed __int64 i; // rbx
  int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v13; // r15d
  int v14; // eax
  char *v15; // rdi
  char *v16; // rax
  __m128i *v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // r13
  _QWORD *v32; // rax
  __m128i *v33; // rax
  __int64 v34; // r8
  __int64 *v35; // rdi
  __int64 v36; // rax
  signed __int64 v37; // rax
  int v38; // ebx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r13
  __int64 v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 *v45; // rdx
  __int64 v46; // rax
  __int64 v48; // [rsp+18h] [rbp-F8h]
  __int64 v49; // [rsp+20h] [rbp-F0h]
  unsigned int v50; // [rsp+2Ch] [rbp-E4h]
  char v51[8]; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+40h] [rbp-D0h] BYREF
  char v53; // [rsp+48h] [rbp-C8h]
  __int64 v54; // [rsp+50h] [rbp-C0h] BYREF
  __int128 v55; // [rsp+58h] [rbp-B8h]
  __int64 v56; // [rsp+70h] [rbp-A0h] BYREF
  __int128 v57; // [rsp+78h] [rbp-98h]
  __int64 (__fastcall **v58)(); // [rsp+90h] [rbp-80h] BYREF
  signed __int64 v59; // [rsp+98h] [rbp-78h]
  __m128i *v60; // [rsp+A0h] [rbp-70h]
  __m128i v61; // [rsp+A8h] [rbp-68h]
  __int64 v62; // [rsp+B8h] [rbp-58h]
  __int64 v63; // [rsp+C0h] [rbp-50h]
  unsigned int v64; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v65; // [rsp+D8h] [rbp-38h]

  v65 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 72);
  if ( !v2 )
  {
    if ( !under_debugger )
      sub_383060(0xC98Cu, a2);
    goto LABEL_64;
  }
  v4 = *(__int64 **)(*(_QWORD *)(a1 + 16) + 280LL);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40 * v2 - 16);
  v6 = 0;
  if ( v5 >= 0 )
    v6 = v5;
  v49 = v6;
  for ( i = v6; ; *(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL * *(_QWORD *)(a1 + 72) - 16) = i )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
    v58 = nullptr;
    v59 = 0;
    cleanup_argloc();
    v59 = i;
    LODWORD(v58) = 1;
    v50 = sub_1F06C0(v4 + 54, (int *)&v58, v8, -1);
    cleanup_argloc();
    if ( v50 == -1 )
    {
      v12 = i;
      v50 = sub_232C90(
              (__int64)v4,
              i,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 84LL),
              *(_QWORD *)(a1 + 8) + 248LL,
              1,
              v4[5],
              4,
              nullptr);
      if ( v50 != -1 )
        goto LABEL_17;
      if ( !under_debugger )
        sub_383060(0xC99Du, a2);
      goto LABEL_64;
    }
    v10 = 13LL * (int)v50;
    v11 = v4[54] + 104LL * (int)v50;
    v12 = *(unsigned int *)(v11 + 88);
    v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
    if ( *(_DWORD *)v11 == 1 && i == *(_QWORD *)(v11 + 8) && (int)v12 <= v13 )
      break;
    i = -v13 & (unsigned __int64)((int)sub_1C35C0((_DWORD *)v11, v12) + (__int64)(v13 - 1));
  }
  v14 = *(_DWORD *)(v11 + 24);
  BYTE1(v14) &= 0x7Eu;
  *(_DWORD *)(v11 + 24) = v14 | 0x100000;
  v15 = (char *)v4[57];
  v16 = &v15[4 * v4[58]];
  if ( v15 != v16 )
  {
    while ( 1 )
    {
      v9 = v50;
      if ( v50 == *(_DWORD *)v15 )
        break;
      v15 += 4;
      if ( v16 == v15 )
        goto LABEL_17;
    }
    if ( v16 != v15 )
    {
      v12 = (__int64)(v15 + 4);
      memmove(v15, v15 + 4, v16 - v15 - 4);
      --v4[58];
    }
  }
LABEL_17:
  v17 = sub_D21A0((__int64)v4, v12, v10, v9, a2);
  v18 = -1;
  v61 = 0u;
  v19.m128i_i64[0] = 0;
  v60 = v17;
  if ( i != v49 )
    v18 = v49;
  v62 = -1;
  v58 = &off_4DE360;
  v63 = v18;
  v20 = v17[4].m128i_i64[0];
  v64 = v50;
  v59 = v20;
  v21 = v17[3].m128i_i64[0];
  v54 = 0;
  v48 = -1;
  v55 = 0;
  if ( !v21 )
    goto LABEL_40;
  do
  {
    v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v21);
    if ( *(_QWORD *)(v21 + 24) != v4[5] )
      break;
    v62 = -1;
    v61 = v19;
    sub_11F760((_BYTE *)v21, &v58);
    if ( v62 != -1 )
    {
      v22 = v55;
      if ( v48 != v62 )
      {
        v23 = v54;
        if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)(v55 + 1) )
        {
          v54 = qvector_reserve((__int64)&v54, v54, v55 + 1, 24);
          v22 = v55;
          v23 = v54;
        }
        v24 = v23 + 24 * v22;
        *(_QWORD *)v24 = 0;
        *(_OWORD *)(v24 + 8) = 0;
        v22 = v55 + 1;
        *(_QWORD *)&v55 = v55 + 1;
        v48 = v62;
      }
      v25 = (__int64 *)(v54 + 24 * v22 - 24);
      v26 = v25[1];
      v27 = *v25;
      if ( v25[2] < (unsigned __int64)(v26 + 1) )
      {
        v27 = qvector_reserve((__int64)v25, v27, v26 + 1, 8);
        *v25 = v27;
        v26 = v25[1];
      }
      *(_QWORD *)(v27 + 8 * v26) = v21;
      ++v25[1];
    }
    v21 = *(_QWORD *)(v21 + 8);
  }
  while ( v21 );
  if ( !(_QWORD)v55 )
  {
LABEL_40:
    if ( *(_QWORD *)(a1 + 72) == 1 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 24LL) = i;
      v37 = i;
      v38 = 0;
      v39 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
      *(_DWORD *)(a1 + 112) = (v37 - *(_QWORD *)(a1 + 104)) / v39;
      v40 = 0;
      if ( !(_QWORD)v55 )
        goto LABEL_54;
      goto LABEL_42;
    }
    if ( !under_debugger )
      sub_383060(0xC98Du, *(double *)v19.m128i_i64);
LABEL_64:
    BUG();
  }
  if ( v49 != v48 )
  {
    if ( !under_debugger )
      sub_383060(0xC99Eu, *(double *)v19.m128i_i64);
    goto LABEL_64;
  }
  sub_32C270(v51, v4[188], *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL));
  v19.m128i_i64[0] = 0;
  v28 = 0;
  v56 = 0;
  v57 = 0;
  print_tinfo();
  v31 = nullptr;
  if ( (_QWORD)v55 )
  {
    v32 = (_QWORD *)(v54 + 24 * v55 - 24);
    v29 = v32[1];
    v31 = *(__int64 **)(*v32 + 8 * v29 - 8);
  }
  for ( ; i > v49; v30 = v49 )
  {
    v33 = sub_D21A0((__int64)v4, v28, v29, v30, 0.0);
    v34 = v4[5];
    v52 = -1;
    v53 = 0;
    v31 = sub_19AC70((__int64)v33, (__int64)v31, &v52, v50, v34, 0xFFFFFFFF, v49, (__int64)v51, (__int64)&v56, 1);
    v35 = (__int64 *)(v54 + 24 * v55 - 24);
    v36 = v35[1];
    v28 = *v35;
    v29 = v36 + 1;
    if ( v35[2] < (unsigned __int64)(v36 + 1) )
    {
      v28 = qvector_reserve((__int64)v35, v28, v29, 8);
      *v35 = v28;
      v36 = v35[1];
    }
    *(_QWORD *)(v28 + 8 * v36) = v31;
    ++v35[1];
    v49 += *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) + 80LL);
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    qfree(v56);
  }
  v38 = 0;
  clear_tinfo_t();
  v40 = 0;
  if ( !(_QWORD)v55 )
  {
LABEL_54:
    v43 = v54;
    if ( !v54 )
      return v50;
LABEL_49:
    *(_QWORD *)&v55 = 0;
    qfree(v43);
    return v50;
  }
  do
  {
LABEL_42:
    sub_19E940(a1, (_QWORD *)(v54 + 24 * v40), 3 * v40, v39, *(double *)v19.m128i_i64);
    ++v38;
    v41 = v55;
    v40 = v38;
  }
  while ( v38 < (unsigned __int64)v55 );
  v42 = v54;
  v43 = v54;
  if ( v54 )
  {
    if ( (_QWORD)v55 )
    {
      v44 = 0;
      do
      {
        v45 = (__int64 *)(v42 + 24 * v44);
        v46 = *v45;
        if ( *v45 )
        {
          v45[1] = 0;
          qfree(v46);
          v42 = v54;
        }
        ++v44;
        v43 = v42;
      }
      while ( v41 != v44 );
    }
    goto LABEL_49;
  }
  return v50;
}

