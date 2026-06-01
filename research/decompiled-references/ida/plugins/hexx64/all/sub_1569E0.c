__int64 __fastcall sub_1569E0(const __m128i *a1, __int64 a2, __m128i a3, __m128 a4)
{
  unsigned int v4; // r15d
  unsigned int v6; // eax
  _DWORD *v7; // rax
  _DWORD *v8; // r13
  int v9; // eax
  unsigned __int8 *v10; // r15
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  char *v15; // rax
  const __m128i *v16; // rdx
  __m128i si128; // xmm2
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r13
  const __m128i *v24; // rax
  __int64 v25; // rbx
  unsigned __int8 *v26; // r14
  __int64 v27; // rdi
  __int64 v28; // [rsp+8h] [rbp-1C8h]
  __m128i v29; // [rsp+20h] [rbp-1B0h] BYREF
  char *v30; // [rsp+30h] [rbp-1A0h]
  unsigned __int8 *v31; // [rsp+38h] [rbp-198h]
  __m128i v32; // [rsp+40h] [rbp-190h] BYREF
  int *v33; // [rsp+50h] [rbp-180h]
  __int64 *v34; // [rsp+58h] [rbp-178h]
  unsigned int v35; // [rsp+64h] [rbp-16Ch]
  const __m128i *v36; // [rsp+68h] [rbp-168h]
  __int64 v37; // [rsp+70h] [rbp-160h] BYREF
  __int64 v38; // [rsp+78h] [rbp-158h] BYREF
  __int64 v39; // [rsp+80h] [rbp-150h] BYREF
  __int128 v40; // [rsp+88h] [rbp-148h]
  unsigned __int8 v41[16]; // [rsp+A0h] [rbp-130h] BYREF
  __m128i v42; // [rsp+B0h] [rbp-120h]
  __int64 v43; // [rsp+C0h] [rbp-110h]
  __m128i v44; // [rsp+C8h] [rbp-108h] BYREF
  int v45; // [rsp+D8h] [rbp-F8h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-F0h]
  int v47; // [rsp+E8h] [rbp-E8h]
  _BYTE v48[16]; // [rsp+F0h] [rbp-E0h] BYREF
  __int64 v49; // [rsp+100h] [rbp-D0h]
  __int64 v50; // [rsp+110h] [rbp-C0h]
  __m128i v51; // [rsp+118h] [rbp-B8h]
  int v52; // [rsp+138h] [rbp-98h]
  unsigned __int8 v53[16]; // [rsp+140h] [rbp-90h] BYREF
  __int64 v54; // [rsp+150h] [rbp-80h]
  __int64 v55; // [rsp+160h] [rbp-70h]
  __m128i v56; // [rsp+168h] [rbp-68h]
  int v57; // [rsp+188h] [rbp-48h]
  char v58; // [rsp+190h] [rbp-40h] BYREF
  unsigned __int64 v59; // [rsp+198h] [rbp-38h]

  v36 = a1;
  v59 = __readfsqword(0x28u);
  if ( !a1 )
  {
    if ( !under_debugger )
      sub_383060(0xCDC2u, *(double *)a3.m128i_i64);
    BUG();
  }
  if ( !(unsigned __int8)sub_11FD80((char *)(a2 + 48), (__int64 *)v41, 0) )
    return 0;
  if ( *(_QWORD *)v41 )
    return 0;
  v6 = *(_DWORD *)(a2 + 36);
  v37 = a2;
  v35 = v6;
  v7 = (_DWORD *)sub_129440((__int64)v36, a2 + 32, (__int64)&v37, 0, *(double *)a3.m128i_i64, a4);
  v8 = v7;
  if ( !v7 )
    return 0;
  v9 = *v7;
  if ( v9 == 11 )
  {
    if ( *((_BYTE *)v8 + 32) != 4 )
      return 0;
    v8 = *((_DWORD **)v8 + 5);
    v9 = *v8;
  }
  if ( v9 != 14
    || v8[9] != 2 * v35
    || v37 != a2 && !(unsigned __int8)sub_1301F0(v36, a2, a2 + 32, v37, (__int64)(v8 + 16), a3, a4) )
  {
    return 0;
  }
  if ( (unsigned __int64)(int)(8 * v35) <= 0x3F )
  {
    v10 = (unsigned __int8 *)(v8 + 8);
    v34 = (__int64 *)(1LL << (8 * (unsigned __int8)v35));
    if ( !(unsigned __int8)sub_11FD80((char *)v8 + 32, &v38, 1) || (v38 & -(__int64)v34) == 0 )
    {
      v32.m128i_i64[0] = (__int64)(v8 + 12);
      if ( !(unsigned __int8)sub_11FD80((char *)v8 + 48, &v38, 1) || (v38 & -(__int64)v34) == 0 )
        goto LABEL_14;
    }
    return 0;
  }
  v10 = (unsigned __int8 *)(v8 + 8);
  sub_11FD80((char *)v8 + 32, &v38, 1);
  v32.m128i_i64[0] = (__int64)(v8 + 12);
  sub_11FD80((char *)v8 + 48, &v38, 1);
LABEL_14:
  v11.m128i_i64[0] = 0;
  v39 = 0;
  v34 = &v39;
  v40 = 0;
  v12 = sub_155920(&v39);
  if ( (unsigned __int8)sub_155D40((__int64)v36, v37, (__int64)v10, v37, a2, v12, 0.0, a4)
    && (v13 = sub_155920(v34), (unsigned __int8)sub_155D40((__int64)v36, v37, v32.m128i_i64[0], v37, a2, v13, 0.0, a4)) )
  {
    v15 = v48;
    v31 = v48;
    v30 = &v58;
    v16 = v36;
    do
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
      *(_OWORD *)(v15 + 40) = 0;
      *(_WORD *)v15 = 0;
      v15 += 80;
      *((_WORD *)v15 - 39) = 0;
      *((_DWORD *)v15 - 19) = -1;
      *((_QWORD *)v15 - 9) = 0;
      *((__m128i *)v15 - 4) = si128;
      *((_QWORD *)v15 - 6) = 0;
      *((_DWORD *)v15 - 6) = 0;
      *((_QWORD *)v15 - 2) = 0;
      *((_DWORD *)v15 - 2) = 0;
    }
    while ( v30 != v15 );
    v36 = v16;
    v29.m128i_i64[0] = (__int64)v53;
    sub_123A40((__int64)v41, v10, (__int64)v16, v14);
    v43 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v42 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v44 = 0;
    sub_125180(v31, v41);
    v49 = v42.m128i_i64[0];
    copy_tinfo_t();
    v18 = v43;
    v43 = 0;
    v19 = _mm_loadu_si128(&v44);
    v44 = 0;
    if ( v50 )
    {
      v33 = (int *)v18;
      v29 = v19;
      v51.m128i_i64[0] = 0;
      qfree(v50);
      v19 = _mm_load_si128(&v29);
      v18 = (__int64)v33;
    }
    v50 = v18;
    v33 = &v45;
    v51 = v19;
    copy_argloc();
    v52 = v47;
    cleanup_argloc();
    if ( v43 )
    {
      v44.m128i_i64[0] = 0;
      qfree(v43);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v41);
    v29.m128i_i64[0] = (__int64)v53;
    sub_123A40((__int64)v41, (unsigned __int8 *)v32.m128i_i64[0], v20, v21);
    v43 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0;
    v29.m128i_i64[0] = (__int64)v53;
    v42 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v44 = 0;
    sub_125180(v53, v41);
    v54 = v42.m128i_i64[0];
    copy_tinfo_t();
    v22 = v43;
    v43 = 0;
    v11 = _mm_loadu_si128(&v44);
    v44 = 0;
    if ( v55 )
    {
      v28 = v22;
      v32 = v11;
      v56.m128i_i64[0] = 0;
      qfree(v55);
      v22 = v28;
      v11 = _mm_load_si128(&v32);
    }
    v55 = v22;
    v56 = v11;
    copy_argloc();
    v57 = v47;
    cleanup_argloc();
    if ( v43 )
    {
      v44.m128i_i64[0] = 0;
      qfree(v43);
    }
    clear_tinfo_t();
    sub_11CDA0((__int64)v41);
    v32.m128i_i64[0] = *(_QWORD *)(v36[30].m128i_i64[0] + 112);
    if ( (unsigned __int8)sub_12AB50((unsigned int **)v31, (unsigned __int64 *)v32.m128i_i64[0], v35, 1, v11)
      && (v4 = sub_12AB50((unsigned int **)v29.m128i_i64[0], (unsigned __int64 *)v32.m128i_i64[0], v35, 1, v11),
          (_BYTE)v4) )
    {
      sub_1559D0((__int64)v34, 0, *(double *)v11.m128i_i64);
      sub_32C430((__int64 *)v41, v32.m128i_i64[0], v35, 2);
      copy_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      *(_QWORD *)v41 = 8;
      v23 = sub_335B10(v36[4].m128i_i64[0], *((_QWORD *)v8 + 3), (__int64)"is_mul_ok", (__int64)v41, 2, (__int64)v31, 1);
      clear_tinfo_t();
      *(_DWORD *)(*(_QWORD *)(v23 + 72) + 284LL) = 17;
      sub_11CDA0(a2 + 32);
      v24 = v36;
      *(_BYTE *)(a2 + 32) = 4;
      *(_QWORD *)(a2 + 40) = v23;
      LODWORD(v24) = *(unsigned __int8 *)(v24[30].m128i_i64[0] + 131);
      *(_DWORD *)(a2 + 36) = (_DWORD)v24;
      *(_DWORD *)(a2 + 52) = (_DWORD)v24;
      *(_DWORD *)a2 = (*(_DWORD *)a2 != 44) + 43;
    }
    else
    {
      v4 = 0;
    }
    v25 = (__int64)v30;
    v26 = v31;
    do
    {
      v25 -= 80;
      cleanup_argloc();
      v27 = *(_QWORD *)(v25 + 32);
      if ( v27 )
      {
        *(_QWORD *)(v25 + 40) = 0;
        qfree(v27);
      }
      clear_tinfo_t();
      sub_11CDA0(v25);
    }
    while ( (unsigned __int8 *)v25 != v26 );
  }
  else
  {
    v4 = 0;
  }
  sub_1559D0((__int64)v34, 1, *(double *)v11.m128i_i64);
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  return v4;
}

