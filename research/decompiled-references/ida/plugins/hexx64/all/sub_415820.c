__int64 __fastcall sub_415820(__int64 *a1, __int64 a2, double a3)
{
  unsigned int v4; // r9d
  __int64 v5; // r14
  __int64 v6; // r13
  int dtype_size; // eax
  __m128i *v8; // rax
  __int64 v9; // rcx
  __m128i si128; // xmm2
  __int64 v11; // r13
  int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // r14
  unsigned int v23; // eax
  const char *v24; // rdx
  __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 (__fastcall *v29)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD); // rax
  __int64 v30; // rbx
  unsigned __int8 *v31; // r14
  __int64 v32; // rdi
  unsigned int v33; // ebx
  __int64 v35; // rsi
  void (__fastcall *v36)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, _QWORD); // rax
  void (__fastcall *v37)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, bool); // rax
  unsigned int v38; // eax
  __m128i v39; // xmm5
  __int64 v40; // rax
  __int8 v41; // cl
  __int64 v42; // rsi
  __int64 v43; // rax
  char v44; // r9
  void (__fastcall *v45)(__int64 *, __int64, __int128 *, __int64 *, unsigned __int64 *, _QWORD); // rax
  __int64 v46; // rdi
  int v47; // eax
  int v48; // r14d
  __int64 v49; // r8
  int v50; // ecx
  unsigned int v51; // edx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // r9d
  int v56; // eax
  __int64 v57; // rsi
  int v58; // eax
  __int64 v59; // rsi
  int v60; // eax
  int v61; // ecx
  void (__fastcall *v62)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD); // rax
  __int64 v63; // [rsp+8h] [rbp-208h]
  __m128i v64; // [rsp+10h] [rbp-200h] BYREF
  char *v65; // [rsp+20h] [rbp-1F0h]
  unsigned __int64 *v66; // [rsp+28h] [rbp-1E8h]
  __int64 *v67; // [rsp+30h] [rbp-1E0h]
  unsigned __int8 *v68; // [rsp+38h] [rbp-1D8h]
  __m128i v69; // [rsp+40h] [rbp-1D0h] BYREF
  __int64 *v70; // [rsp+50h] [rbp-1C0h]
  _QWORD *v71; // [rsp+58h] [rbp-1B8h]
  unsigned __int64 *v72; // [rsp+60h] [rbp-1B0h]
  __int64 v73; // [rsp+68h] [rbp-1A8h]
  __int64 v74; // [rsp+70h] [rbp-1A0h] BYREF
  __int64 v75; // [rsp+78h] [rbp-198h] BYREF
  _QWORD v76[2]; // [rsp+80h] [rbp-190h] BYREF
  _QWORD v77[2]; // [rsp+90h] [rbp-180h] BYREF
  unsigned __int64 v78; // [rsp+A0h] [rbp-170h] BYREF
  __int64 v79; // [rsp+A8h] [rbp-168h]
  _QWORD v80[2]; // [rsp+B0h] [rbp-160h] BYREF
  unsigned __int64 v81; // [rsp+C0h] [rbp-150h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-148h]
  __int128 v83; // [rsp+D0h] [rbp-140h] BYREF
  __int64 v84; // [rsp+E0h] [rbp-130h] BYREF
  _BYTE v85[24]; // [rsp+E8h] [rbp-128h] BYREF
  __int64 v86; // [rsp+100h] [rbp-110h] BYREF
  __m128i v87; // [rsp+108h] [rbp-108h] BYREF
  __int64 v88; // [rsp+118h] [rbp-F8h] BYREF
  unsigned __int64 v89; // [rsp+120h] [rbp-F0h] BYREF
  __int64 v90; // [rsp+128h] [rbp-E8h]
  _BYTE v91[16]; // [rsp+130h] [rbp-E0h] BYREF
  __int64 v92; // [rsp+140h] [rbp-D0h]
  __int64 v93; // [rsp+150h] [rbp-C0h]
  __m128i v94; // [rsp+158h] [rbp-B8h]
  int v95; // [rsp+178h] [rbp-98h]
  unsigned __int8 v96[16]; // [rsp+180h] [rbp-90h] BYREF
  __int64 v97; // [rsp+190h] [rbp-80h]
  __int64 v98; // [rsp+1A0h] [rbp-70h]
  __m128i v99; // [rsp+1A8h] [rbp-68h]
  int v100; // [rsp+1C8h] [rbp-48h]
  char v101; // [rsp+1D0h] [rbp-40h] BYREF
  unsigned __int64 v102; // [rsp+1D8h] [rbp-38h]

  v73 = a2;
  v102 = __readfsqword(0x28u);
  v71 = v80;
  v76[1] = 0;
  v77[1] = 0;
  v79 = 0;
  v80[1] = 0;
  v76[0] = 0xFFFFFFFF00000000LL;
  v77[0] = 0xFFFFFFFF00000000LL;
  v78 = 0xFFFFFFFF00000000LL;
  v80[0] = 0xFFFFFFFF00000000LL;
  v72 = &v78;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, unsigned __int64 *, _QWORD *, __int64, double))(*a1 + 48))(
          a1,
          &v78,
          v80,
          a2,
          a3)
    || !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, _QWORD *, __int64))(*a1 + 40))(a1, v76, v77, v73) )
  {
    goto LABEL_60;
  }
  v4 = *(_DWORD *)(v73 + 16);
  if ( (v4 & 8) == 0 )
    goto LABEL_7;
  if ( v4 != 8 )
  {
    if ( !under_debugger )
      sub_383060(0xC9D6u, a3);
    BUG();
  }
  v5 = sub_32A850(nullptr);
  if ( v5 == -1 )
  {
LABEL_60:
    v33 = -2;
    goto LABEL_35;
  }
  v6 = a1[8];
  dtype_size = get_dtype_size();
  sub_120A10((__int64)v76, *(unsigned __int64 **)(a1[1] + 112), v5, dtype_size, v6, 0);
  v4 = *(_DWORD *)(v73 + 16);
LABEL_7:
  if ( (v4 & 2) != 0 )
  {
    v49 = a1[8];
    v50 = 1;
    v51 = *(_DWORD *)(v73 + 8) - 22;
    LODWORD(v70) = *(_DWORD *)(v73 + 8);
    if ( v51 > 2 )
    {
      v70 = (__int64 *)v49;
      v58 = get_dtype_size();
      v49 = (__int64)v70;
      v50 = v58;
    }
    sub_120A10((__int64)v77, *(unsigned __int64 **)(a1[1] + 112), 10, v50, v49, 0);
    v4 = *(_DWORD *)(v73 + 16);
  }
  if ( (v4 & 4) != 0 )
  {
    sub_11CA10((char *)v76, (char *)v77);
    v4 = *(_DWORD *)(v73 + 16);
  }
  if ( (v4 & 1) != 0 )
  {
    v70 = *(__int64 **)(a1[1] + 784);
    v38 = sub_4138B0((__int64)v70, a3);
    v39 = _mm_cvtsi32_si128(v38);
    LODWORD(v68) = v38;
    v40 = *a1;
    *(_QWORD *)&v83 = 1;
    v41 = *(_BYTE *)(v73 + 16);
    *(_QWORD *)&a3 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(HIDWORD(v78)), v39).m128i_u64[0];
    v42 = *(unsigned int *)(v73 + 8);
    *(double *)((char *)&v83 + 4) = a3;
    v69.m128i_i8[0] = v41;
    (*(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, __int128 *, bool))(v40 + 56))(
      a1,
      v42,
      v76,
      v77,
      &v83,
      (v41 & 0x10) != 0);
    v43 = *a1;
    v44 = *(_BYTE *)(v73 + 16) >> 4;
    v69.m128i_i32[0] = *(_DWORD *)(v73 + 8);
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD *, _QWORD *, _QWORD *, _QWORD))(v43 + 64))(
      a1,
      (unsigned int)(v69.m128i_i32[0] + 2),
      v76,
      v77,
      v71,
      v44 & 1);
    v45 = *(void (__fastcall **)(__int64 *, __int64, __int128 *, __int64 *, unsigned __int64 *, _QWORD))(*a1 + 64);
    v84 = 0xFFFFFFFF00000000LL;
    *(_QWORD *)v85 = 0;
    v45(a1, 4, &v83, &v84, v72, 0);
    sub_11CDA0((__int64)&v84);
    v46 = v70[5];
    if ( v46 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v46 + 8LL))(v46, (unsigned int)v68);
    }
    else if ( *((_DWORD *)v70 + 8) == -1 )
    {
      *((_DWORD *)v70 + 8) = (_DWORD)v68;
    }
    sub_11CDA0((__int64)&v83);
    goto LABEL_42;
  }
  if ( (v4 & 0x100) == 0 )
  {
    v35 = *(unsigned int *)(v73 + 8);
    if ( (unsigned int)(v35 - 29) > 0xC )
    {
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, unsigned __int64 *, _QWORD))(*a1 + 56))(
        a1,
        v35,
        v76,
        v77,
        v72,
        (v4 >> 4) & 1);
    }
    else if ( (v4 & 0x40) != 0 )
    {
      v36 = *(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, _QWORD))(*a1 + 56);
      v84 = 0x100000001LL;
      *(_QWORD *)v85 = 1;
      v36(a1, 33, v76, v77, &v84, (v4 >> 4) & 1);
      sub_11CDA0((__int64)&v84);
      v37 = *(void (__fastcall **)(__int64 *, __int64, _QWORD *, _QWORD *, __int64 *, bool))(*a1 + 64);
      LOBYTE(v70) = *(_BYTE *)(v73 + 16);
      v84 = 0x100000001LL;
      *(_QWORD *)v85 = 0;
      v37(a1, 34, v76, v77, &v84, ((unsigned __int8)v70 & 0x10) != 0);
      sub_11CDA0((__int64)&v84);
    }
    else
    {
      v59 = a1[8];
      v87.m128i_i64[0] = 0;
      v86 = 0xFFFFFFFF00000000LL;
      v87.m128i_i64[1] = 0xFFFFFFFF00000000LL;
      v88 = 0;
      v89 = 0xFFFFFFFF00000000LL;
      v90 = 0;
      sub_330970((__int64)&v84, v59);
      *(_QWORD *)&v83 = 0x100000001LL;
      v60 = *(_DWORD *)(v73 + 16);
      v61 = *(_DWORD *)(v73 + 8);
      v67 = &v86;
      LODWORD(v68) = v61;
      LODWORD(v66) = v60 & 0x10;
      LODWORD(v84) = v61;
      DWORD2(v83) = v79;
      sub_125180((unsigned __int8 *)&v86, (unsigned __int8 *)v76);
      v69.m128i_i64[0] = (__int64)&v87.m128i_i64[1];
      sub_125180(&v87.m128i_u8[8], (unsigned __int8 *)v77);
      v70 = (__int64 *)&v89;
      sub_125180((unsigned __int8 *)&v89, (unsigned __int8 *)&v83);
      if ( (_DWORD)v66 || (int)v68 > 62 )
        HIDWORD(v84) |= 0x10u;
      sub_11CDA0((__int64)&v83);
      v82 = 0;
      v81 = 0xFFFFFFFF00000000LL;
      v66 = &v81;
      sub_1262E0((__int64)&v81, (unsigned __int8 *)&v84, a3);
      v62 = *(void (__fastcall **)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD))(*a1 + 56);
      v83 = 0xFFFFFFFF00000000LL;
      v62(a1, 9, &v81, &v83, v72, 0);
      sub_11CDA0((__int64)&v83);
      sub_11CDA0((__int64)&v81);
      sub_11CDA0((__int64)v70);
      sub_11CDA0(v69.m128i_i64[0]);
      sub_11CDA0((__int64)v67);
    }
LABEL_42:
    if ( (*(_BYTE *)(v73 + 16) & 0x40) == 0 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD *, _QWORD *, __int64, __int64))(*a1 + 24))(
             a1,
             v76,
             v77,
             v73,
             1) )
      {
        v83 = 0u;
        sub_413D90((__int64 *)&v83, (unsigned __int8 *)v76, a3);
        sub_413D90((__int64 *)&v83, (unsigned __int8 *)v77, a3);
        sub_64000(&v84, (__int64)&v83, a3);
        sub_414470(a1, (__int64)&v84, v52, v53, v54, v55);
        qfree(v84);
        qfree(v83);
      }
      v47 = 0;
      do
      {
        v48 = v47;
        sub_414360(a1, v47, 1);
        v47 = v48 + 1;
      }
      while ( v48 != 4 );
    }
    goto LABEL_34;
  }
  v8 = (__m128i *)v91;
  v9 = v73;
  v68 = v91;
  v65 = &v101;
  do
  {
    v8->m128i_i32[1] = -1;
    v8 += 5;
    si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
    v8[-5].m128i_i16[0] = 0;
    v8[-5].m128i_i16[1] = 0;
    v8[-5].m128i_i64[1] = 0;
    v8[-4] = si128;
    v8[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v8[-3] + 8) = 0;
    v8[-2].m128i_i32[2] = 0;
    v8[-1].m128i_i64[0] = 0;
    v8[-1].m128i_i32[2] = 0;
  }
  while ( v8 != (__m128i *)&v101 );
  v73 = v9;
  if ( (v4 & 0x10) != 0 )
  {
    v56 = get_dtype_size();
    v57 = a1[1];
    v67 = &v74;
    sub_32C080(&v74, v57, v56);
  }
  else
  {
    v11 = *(_QWORD *)(a1[1] + 112);
    v12 = ((v4 & 0x200) != 0) + 1;
    v13 = get_dtype_size();
    v67 = &v74;
    sub_32C430(&v74, v11, v13, v12);
  }
  v69.m128i_i64[0] = (__int64)v96;
  sub_123A40((__int64)&v84, (unsigned __int8 *)v76, v14, v15);
  v86 = 0;
  LODWORD(v88) = 0;
  v89 = 0;
  LODWORD(v90) = 0;
  *(__m128i *)&v85[8] = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v87 = 0;
  sub_125180(v68, (unsigned __int8 *)&v84);
  v92 = *(_QWORD *)&v85[8];
  v66 = (unsigned __int64 *)&v85[16];
  copy_tinfo_t();
  v16 = v86;
  v86 = 0;
  v17 = _mm_loadu_si128(&v87);
  v87 = 0;
  if ( v93 )
  {
    v70 = (__int64 *)v16;
    v69 = v17;
    v94.m128i_i64[0] = 0;
    qfree(v93);
    v17 = _mm_load_si128(&v69);
    v16 = (__int64)v70;
  }
  v93 = v16;
  v70 = &v88;
  v94 = v17;
  copy_argloc();
  v95 = v90;
  cleanup_argloc();
  if ( v86 )
  {
    v87.m128i_i64[0] = 0;
    qfree(v86);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)&v84);
  v69.m128i_i64[0] = (__int64)v96;
  copy_tinfo_t();
  v69.m128i_i64[0] = (__int64)v96;
  sub_123A40((__int64)&v84, (unsigned __int8 *)v77, v18, v19);
  v86 = 0;
  LODWORD(v88) = 0;
  v89 = 0;
  LODWORD(v90) = 0;
  v69.m128i_i64[0] = (__int64)v96;
  *(__m128i *)&v85[8] = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v87 = 0;
  sub_125180(v96, (unsigned __int8 *)&v84);
  v97 = *(_QWORD *)&v85[8];
  copy_tinfo_t();
  v20 = v86;
  v86 = 0;
  v21 = _mm_loadu_si128(&v87);
  v87 = 0;
  if ( v98 )
  {
    v63 = v20;
    v64 = v21;
    v99.m128i_i64[0] = 0;
    qfree(v98);
    v20 = v63;
    v21 = _mm_load_si128(&v64);
  }
  v98 = v20;
  v99 = v21;
  copy_argloc();
  v100 = v90;
  cleanup_argloc();
  if ( v86 )
  {
    v87.m128i_i64[0] = 0;
    qfree(v86);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)&v84);
  copy_tinfo_t();
  v22 = *(_QWORD *)(a1[1] + 112);
  v23 = get_dtype_size();
  v70 = &v75;
  sub_32C430(&v75, v22, v23, 1);
  v84 = 0;
  *(_OWORD *)v85 = 0;
  sub_6B870(&v84);
  v24 = s1;
  if ( *(_QWORD *)v85 )
    v24 = (const char *)v84;
  v25 = sub_335B10(a1[2], a1[8], (__int64)v24, (__int64)v70, 2, (__int64)v68, 0.0, (__m128)0LL, 1);
  v26 = v73;
  v27 = *(_QWORD *)(v25 + 72);
  *(_DWORD *)(v27 + 280) |= 0x14u;
  *(_DWORD *)(v27 + 284) = *(_DWORD *)(v26 + 20);
  v81 = 0xFFFFFFFF00000000LL;
  v66 = &v81;
  v82 = 0;
  sub_1262E0((__int64)&v81, (unsigned __int8 *)v25, 0.0);
  if ( v25 )
  {
    sub_11CDA0(v25 + 64);
    sub_11CDA0(v25 + 48);
    sub_11CDA0(v25 + 32);
    j__qfree(v25);
  }
  v28 = (__int64)v66;
  v29 = *(__int64 (__fastcall **)(__int64 *, __int64, unsigned __int64 *, __int128 *, unsigned __int64 *, _QWORD))(*a1 + 56);
  v83 = 0xFFFFFFFF00000000LL;
  v73 = v29(a1, 4, v66, &v83, v72, 0);
  sub_11CDA0((__int64)&v83);
  sub_36D430(v73, *(unsigned int **)(a1[1] + 112));
  sub_11CDA0(v28);
  if ( v84 )
  {
    *(_QWORD *)v85 = 0;
    qfree(v84);
  }
  clear_tinfo_t();
  clear_tinfo_t();
  v30 = (__int64)v65;
  v31 = v68;
  do
  {
    v30 -= 80;
    cleanup_argloc();
    v32 = *(_QWORD *)(v30 + 32);
    if ( v32 )
    {
      *(_QWORD *)(v30 + 40) = 0;
      qfree(v32);
    }
    clear_tinfo_t();
    sub_11CDA0(v30);
  }
  while ( (unsigned __int8 *)v30 != v31 );
LABEL_34:
  v33 = 0;
LABEL_35:
  sub_11CDA0((__int64)v71);
  sub_11CDA0((__int64)v72);
  sub_11CDA0((__int64)v77);
  sub_11CDA0((__int64)v76);
  return v33;
}

