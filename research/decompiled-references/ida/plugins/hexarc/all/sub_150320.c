__int64 __fastcall sub_150320(__int64 a1, __int64 a2)
{
  unsigned int v3; // r15d
  unsigned int v5; // eax
  __int128 v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // r13
  int v9; // eax
  unsigned __int8 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  char *v13; // rax
  __int64 v14; // rdx
  __m128i si128; // xmm2
  int *v16; // rax
  __m128i v17; // xmm0
  int *v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // [rsp-8h] [rbp-1D8h]
  int v25; // [rsp+0h] [rbp-1D0h]
  int *v26; // [rsp+8h] [rbp-1C8h]
  __m128i v27; // [rsp+20h] [rbp-1B0h] BYREF
  char *v28; // [rsp+30h] [rbp-1A0h]
  _BYTE *v29; // [rsp+38h] [rbp-198h]
  __m128i v30; // [rsp+40h] [rbp-190h] BYREF
  int *v31; // [rsp+50h] [rbp-180h]
  __int64 *v32; // [rsp+58h] [rbp-178h]
  unsigned int v33; // [rsp+64h] [rbp-16Ch]
  __int128 v34; // [rsp+68h] [rbp-168h] BYREF
  __int64 v35; // [rsp+78h] [rbp-158h] BYREF
  __int64 v36; // [rsp+80h] [rbp-150h] BYREF
  __int128 v37; // [rsp+88h] [rbp-148h]
  unsigned __int8 v38[16]; // [rsp+A0h] [rbp-130h] BYREF
  __m128i v39; // [rsp+B0h] [rbp-120h]
  int *v40; // [rsp+C0h] [rbp-110h]
  __m128i v41; // [rsp+C8h] [rbp-108h] BYREF
  int v42; // [rsp+D8h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-F0h]
  int v44; // [rsp+E8h] [rbp-E8h]
  _BYTE v45[16]; // [rsp+F0h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+100h] [rbp-D0h]
  char v47; // [rsp+108h] [rbp-C8h] BYREF
  int *v48; // [rsp+110h] [rbp-C0h]
  __m128i v49; // [rsp+118h] [rbp-B8h]
  int v50; // [rsp+138h] [rbp-98h]
  _BYTE v51[16]; // [rsp+140h] [rbp-90h] BYREF
  __int64 v52; // [rsp+150h] [rbp-80h]
  char v53; // [rsp+158h] [rbp-78h] BYREF
  int *v54; // [rsp+160h] [rbp-70h]
  __m128i v55; // [rsp+168h] [rbp-68h]
  int v56; // [rsp+188h] [rbp-48h]
  char v57; // [rsp+190h] [rbp-40h] BYREF
  unsigned __int64 v58; // [rsp+198h] [rbp-38h]

  *(_QWORD *)&v34 = a1;
  v58 = __readfsqword(0x28u);
  if ( !a1 )
  {
    if ( !under_debugger )
      sub_37B760(52674);
    BUG();
  }
  if ( !(unsigned __int8)sub_1196C0((char *)(a2 + 48), v38, 0) )
    return 0;
  if ( v38[0] )
    return 0;
  v5 = *(_DWORD *)(a2 + 36);
  *(_QWORD *)&v6 = v34;
  *((_QWORD *)&v6 + 1) = a2 + 32;
  *((_QWORD *)&v34 + 1) = a2;
  v33 = v5;
  v7 = (_DWORD *)sub_122D80(v6, (__int64)&v34 + 8, 0);
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
    || v8[9] != 2 * v33
    || *((_QWORD *)&v34 + 1) != a2
    && !(unsigned __int8)sub_129B30((const __m128i *)v34, a2, a2 + 32, *((__int64 *)&v34 + 1), (__int64)(v8 + 16)) )
  {
    return 0;
  }
  if ( (unsigned __int64)(int)(8 * v33) <= 0x3F )
  {
    v10 = (unsigned __int8 *)(v8 + 8);
    v32 = (__int64 *)(1LL << (8 * (unsigned __int8)v33));
    if ( !(unsigned __int8)sub_1196C0((char *)v8 + 32, &v35, 1u) || (v35 & -(__int64)v32) == 0 )
    {
      v30.m128i_i64[0] = (__int64)(v8 + 12);
      if ( !(unsigned __int8)sub_1196C0((char *)v8 + 48, &v35, 1u) || (v35 & -(__int64)v32) == 0 )
        goto LABEL_14;
    }
    return 0;
  }
  v10 = (unsigned __int8 *)(v8 + 8);
  sub_1196C0((char *)v8 + 32, &v35, 1u);
  v30.m128i_i64[0] = (__int64)(v8 + 12);
  sub_1196C0((char *)v8 + 48, &v35, 1u);
LABEL_14:
  v36 = 0;
  v32 = &v36;
  v37 = 0;
  v11 = sub_14F260(&v36);
  if ( (unsigned __int8)sub_14F680(v34, (__int64)v10, *((__int64 *)&v34 + 1), a2, v11)
    && (v12 = sub_14F260(v32), (unsigned __int8)sub_14F680(v34, v30.m128i_i64[0], *((__int64 *)&v34 + 1), a2, v12)) )
  {
    v13 = v45;
    v29 = v45;
    v28 = &v57;
    v14 = v34;
    do
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
      *(_OWORD *)(v13 + 40) = 0;
      *(_WORD *)v13 = 0;
      v13 += 80;
      *((_WORD *)v13 - 39) = 0;
      *((_DWORD *)v13 - 19) = -1;
      *((_QWORD *)v13 - 9) = 0;
      *((__m128i *)v13 - 4) = si128;
      *((_QWORD *)v13 - 6) = 0;
      *((_DWORD *)v13 - 6) = 0;
      *((_QWORD *)v13 - 2) = 0;
      *((_DWORD *)v13 - 2) = 0;
    }
    while ( v28 != v13 );
    *(_QWORD *)&v34 = v14;
    v27.m128i_i64[0] = (__int64)v51;
    sub_11D380((__int64)v38, v10);
    v40 = nullptr;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v39 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
    v41 = 0;
    sub_11EAC0((__int64)v29, (unsigned __int8 *)v38);
    v46 = v39.m128i_i64[0];
    copy_tinfo_t();
    v16 = v40;
    v40 = nullptr;
    v17 = _mm_loadu_si128(&v41);
    v41 = 0;
    if ( v48 )
    {
      v31 = v16;
      v27 = v17;
      v49.m128i_i64[0] = 0;
      qfree();
      v17 = _mm_load_si128(&v27);
      v16 = v31;
    }
    v48 = v16;
    v31 = &v42;
    v49 = v17;
    copy_argloc();
    v50 = v44;
    cleanup_argloc();
    if ( v40 )
    {
      v41.m128i_i64[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_1166E0((__int64)v38);
    v27.m128i_i64[0] = (__int64)v51;
    sub_11D380((__int64)v38, (unsigned __int8 *)v30.m128i_i64[0]);
    v40 = nullptr;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v27.m128i_i64[0] = (__int64)v51;
    v39 = _mm_load_si128((const __m128i *)&xmmword_3FA110);
    v41 = 0;
    sub_11EAC0((__int64)v51, (unsigned __int8 *)v38);
    v52 = v39.m128i_i64[0];
    copy_tinfo_t();
    v18 = v40;
    v40 = nullptr;
    v19 = _mm_loadu_si128(&v41);
    v41 = 0;
    if ( v54 )
    {
      v26 = v18;
      v30 = v19;
      v55.m128i_i64[0] = 0;
      qfree();
      v18 = v26;
      v19 = _mm_load_si128(&v30);
    }
    v54 = v18;
    v55 = v19;
    copy_argloc();
    v56 = v44;
    cleanup_argloc();
    if ( v40 )
    {
      v41.m128i_i64[0] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_1166E0((__int64)v38);
    v30.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v34 + 480) + 112LL);
    if ( (unsigned __int8)sub_124490((unsigned __int64)v29, v30.m128i_i64[0], v33, 1)
      && (v3 = sub_124490(v27.m128i_u64[0], v30.m128i_i64[0], v33, 1), (_BYTE)v3) )
    {
      sub_14F310((__int64)v32, 0);
      sub_324F00(v38, v30.m128i_i64[0], v33, 2);
      copy_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      v38[0] = 8;
      v20 = sub_32E2F0(
              *(_QWORD *)(v34 + 64),
              *((_QWORD *)v8 + 3),
              (unsigned int)"is_mul_ok",
              (unsigned int)v38,
              2,
              (_DWORD)v29,
              1,
              v24,
              v25,
              (_DWORD)v26,
              (unsigned int)&v53,
              (unsigned int)&v47);
      clear_tinfo_t();
      *(_DWORD *)(*(_QWORD *)(v20 + 72) + 284LL) = 17;
      sub_1166E0(a2 + 32);
      v21 = v34;
      *(_BYTE *)(a2 + 32) = 4;
      *(_QWORD *)(a2 + 40) = v20;
      LODWORD(v21) = *(unsigned __int8 *)(*(_QWORD *)(v21 + 480) + 131LL);
      *(_DWORD *)(a2 + 36) = v21;
      *(_DWORD *)(a2 + 52) = v21;
      *(_DWORD *)a2 = (*(_DWORD *)a2 != 44) + 43;
    }
    else
    {
      v3 = 0;
    }
    v22 = (__int64)v28;
    v23 = (__int64)v29;
    do
    {
      v22 -= 80;
      cleanup_argloc();
      if ( *(_QWORD *)(v22 + 32) )
      {
        *(_QWORD *)(v22 + 40) = 0;
        qfree();
      }
      clear_tinfo_t();
      sub_1166E0(v22);
    }
    while ( v22 != v23 );
  }
  else
  {
    v3 = 0;
  }
  sub_14F310((__int64)v32, 1);
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree();
  }
  return v3;
}

