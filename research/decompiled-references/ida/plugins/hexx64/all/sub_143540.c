__int64 __fastcall sub_143540(__int64 *a1, _QWORD *a2, double a3, __m128 a4)
{
  bool v4; // zf
  int v6; // edx
  __int64 **v7; // rcx
  __int64 *v8; // r12
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // r9d
  int v14; // eax
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned __int64 v17; // r13
  void *v18; // r15
  __m128i si128; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // r9d
  __m128i v27; // xmm0
  __int64 i; // r13
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int v37; // r9d
  __int64 v38; // r14
  __int64 *v39; // r13
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r9d
  __int64 v44; // rax
  int v45; // edx
  int v46; // esi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // r9d
  __int64 v51; // rax
  int v52; // edx
  int v53; // esi
  __m128i v54; // xmm0
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  int v58; // r9d
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 *v61; // r14
  __int64 v62; // rcx
  unsigned __int64 v63; // r13
  void *v64; // r14
  __int64 v65; // rdi
  __int64 *v66; // rax
  __int64 v67; // rax
  const void **v68; // r14
  __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // r13
  void *v72; // r14
  __int64 v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  unsigned __int64 *v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r8
  int v80; // r9d
  unsigned __int64 v81; // r14
  void *v82; // rcx
  __int64 v83; // rdi
  __int64 *v84; // rax
  __int64 v85; // rax
  void *v86; // rdi
  void *v88; // rax
  __int64 *v89; // r14
  int v90; // eax
  __int64 v91; // rax
  __m128i v92; // xmm0
  __int64 v93; // rax
  __int64 v94; // rdx
  void *v95; // rax
  __int64 v96; // rdx
  size_t v97[2]; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 *p_src; // [rsp+10h] [rbp-1D8h]
  __int64 *v99; // [rsp+18h] [rbp-1D0h]
  __int64 *v100; // [rsp+20h] [rbp-1C8h]
  __int64 *v101; // [rsp+28h] [rbp-1C0h]
  size_t v102[2]; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 *v103; // [rsp+40h] [rbp-1A8h]
  __int64 v104; // [rsp+48h] [rbp-1A0h]
  __int64 *v105; // [rsp+50h] [rbp-198h]
  __int64 **v106; // [rsp+58h] [rbp-190h]
  __int64 *v107; // [rsp+60h] [rbp-188h]
  __int64 v108; // [rsp+68h] [rbp-180h]
  size_t n[2]; // [rsp+70h] [rbp-178h] BYREF
  __int64 v110; // [rsp+88h] [rbp-160h] BYREF
  __int64 v111; // [rsp+90h] [rbp-158h] BYREF
  __int64 v112; // [rsp+98h] [rbp-150h]
  void *v113; // [rsp+A0h] [rbp-148h] BYREF
  __m128i v114; // [rsp+A8h] [rbp-140h] BYREF
  __int64 v115[2]; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v116; // [rsp+D0h] [rbp-118h] BYREF
  __int128 v117; // [rsp+D8h] [rbp-110h]
  __int64 v118[2]; // [rsp+F0h] [rbp-F8h] BYREF
  __int64 *v119; // [rsp+100h] [rbp-E8h] BYREF
  __m128i v120; // [rsp+108h] [rbp-E0h]
  const void *v121[2]; // [rsp+120h] [rbp-C8h] BYREF
  void *src; // [rsp+130h] [rbp-B8h] BYREF
  __int128 v123; // [rsp+138h] [rbp-B0h]
  __int64 v124[2]; // [rsp+150h] [rbp-98h] BYREF
  void *v125; // [rsp+160h] [rbp-88h] BYREF
  __int128 v126; // [rsp+168h] [rbp-80h]
  __int64 v127; // [rsp+180h] [rbp-68h] BYREF
  __int64 v128; // [rsp+188h] [rbp-60h]
  __int64 v129; // [rsp+190h] [rbp-58h] BYREF
  __int128 v130; // [rsp+198h] [rbp-50h]
  unsigned __int64 v131; // [rsp+1A8h] [rbp-40h]

  v4 = *((_BYTE *)a1 + 320) == 0;
  v131 = __readfsqword(0x28u);
  v110 = 0;
  if ( !v4 )
  {
    v107 = &v110;
    copy_tinfo_t();
  }
  v6 = *((_DWORD *)a1 + 16);
  v108 = a1[188];
  if ( !v6 )
  {
    v107 = &v110;
    sub_1346B0(a3);
  }
  v7 = (__int64 **)a1[66];
  v101 = *v7;
  v8 = v7[v6 - 1];
  v9 = 0;
  v107 = &v110;
  v103 = v115;
  v100 = &v111;
  v111 = 0;
  v112 = 0;
  v113 = nullptr;
  p_src = (__int64 *)&src;
  v114 = 0;
  while ( 1 )
  {
    v115[0] = 0;
    v115[1] = 0;
    v116 = 0;
    v117 = 0;
    sub_1390C0((__int64)a1, (__int64)v100, v103, (__int64)v107, 0xFFFFFFFFFFFFFFFFLL, 0);
    v14 = *(_DWORD *)a1;
    v118[0] = 0;
    v118[1] = 0;
    v119 = nullptr;
    v120 = 0;
    if ( (v14 & 0x4000) != 0 )
    {
      v99 = v118;
    }
    else
    {
      if ( (v14 & 0x8000) != 0 )
      {
        if ( !under_debugger )
        {
          v99 = v118;
          sub_383060(0xC4FDu, 0.0);
        }
        BUG();
      }
      v15 = a1[188];
      v99 = v118;
      sub_648D0(v118, (const void **)(v15 + 224), 0.0);
      v17 = *(_QWORD *)(v15 + 248);
      v18 = nullptr;
      if ( v17 )
      {
        v97[0] = 16 * v17;
        v18 = (void *)qalloc_or_throw(16 * v17, v15 + 224, 16 * v17, v16);
        memcpy(v18, *(const void **)(v15 + 240), v97[0]);
      }
      si128 = _mm_unpacklo_epi64((__m128i)v17, (__m128i)v17);
      if ( v119 )
      {
        *(__m128i *)v97 = si128;
        v120.m128i_i64[0] = 0;
        qfree((__int64)v119);
        si128 = _mm_load_si128((const __m128i *)v97);
      }
      v20 = a1[115];
      v21 = a1[188];
      v119 = (__int64 *)v18;
      v120 = si128;
      sub_1373E0(v21, v99, v20);
    }
    v22 = v108;
    v102[0] = v108 + 104;
    sub_64640(v100, (__int64 *)(v108 + 104), v10, v11, v12, v13);
    v104 = v22 + 120;
    sub_317C60((__int64 *)&v113, v22 + 120);
    v27.m128i_i64[0] = 0;
    v4 = *((_BYTE *)a1 + 320) == 0;
    v121[0] = nullptr;
    v121[1] = nullptr;
    src = nullptr;
    v123 = 0;
    if ( !v4 )
      sub_134DA0(v121, a1, 0.0);
    for ( i = a1[65]; i; i = *(_QWORD *)(i + 8) )
    {
      if ( (*(_DWORD *)(i + 24) & 0x600) != 0x200 )
        v9 += sub_A7590(i, 0, v23, v24, v25, v26);
      if ( v8 != (__int64 *)i )
      {
        sub_64280((__int64 *)v121, (__int64 *)(i + 120), 0.0);
        sub_316CB0(p_src, (__int64 **)(i + 136), v29, v30);
      }
    }
    sub_64280(v100, v99, 0.0);
    v106 = &v119;
    sub_316CB0((__int64 *)&v113, &v119, v31, v32);
    v105 = v101 + 30;
    if ( sub_122C30((__int64)(v101 + 30), (__int64)v121) )
      break;
    v33 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x4000) != 0 )
      goto LABEL_64;
LABEL_22:
    if ( (v33 & 0x1000) == 0 )
      goto LABEL_64;
    BYTE1(v33) |= 0x40u;
    *(_DWORD *)a1 = v33;
    v97[0] = (size_t)v124;
    sub_64000(v124, (__int64)v121, *(double *)v27.m128i_i64);
    v38 = v123;
    v125 = nullptr;
    v126 = 0;
    if ( (_QWORD)v123 )
    {
      n[0] = 16 * v123;
      v125 = (void *)qalloc_or_throw(16 * v123, (__int64)v121, 16 * v123, v35);
      *((_QWORD *)&v126 + 1) = v38;
      memcpy(v125, src, n[0]);
      *(_QWORD *)&v126 = v38;
    }
    sub_64640((__int64 *)v97[0], v103, v34, v35, v36, v37);
    sub_317C60((__int64 *)&v125, (__int64)&v116);
    v39 = (__int64 *)v97[0];
    sub_64640((__int64 *)v97[0], (__int64 *)v102[0], v40, v41, v42, v43);
    sub_317C60((__int64 *)&v125, v104);
    sub_1373E0(a1[188], v39, a1[115]);
    v44 = a1[188];
    v45 = *(_DWORD *)(v44 + 80);
    v46 = *(_DWORD *)(v44 + 64);
    v127 = 0;
    v128 = 0;
    sub_63E80(&v127, v46, v45, 0.0);
    v129 = 0;
    v130 = 0;
    sub_64640((__int64 *)v97[0], &v127, v47, v48, v49, v50);
    v102[0] = (size_t)&v129;
    sub_317C60((__int64 *)&v125, (__int64)&v129);
    if ( v129 )
    {
      *(_QWORD *)&v130 = 0;
      qfree(v129);
    }
    qfree(v127);
    v51 = a1[188];
    v52 = *(_DWORD *)(v51 + 80);
    v53 = *(_DWORD *)(v51 + 60);
    v127 = 0;
    v128 = 0;
    sub_63E80(&v127, v53, v52, 0.0);
    v54 = 0;
    v129 = 0;
    v130 = 0;
    sub_64640((__int64 *)v97[0], &v127, v55, v56, v57, v58);
    sub_317C60((__int64 *)&v125, v102[0]);
    if ( v129 )
    {
      *(_QWORD *)&v130 = 0;
      qfree(v129);
    }
    qfree(v127);
    if ( !(unsigned __int8)sub_64880((_QWORD *)v97[0]) )
    {
      sub_64280((__int64 *)v121, v99, 0.0);
      sub_316CB0(p_src, v106, v59, v60);
      v61 = v105;
      if ( sub_122C30((__int64)v105, (__int64)v121) )
      {
        sub_648D0(v61, v121, 0.0);
        v63 = v123;
        v64 = nullptr;
        if ( (_QWORD)v123 )
        {
          v102[0] = 16 * v123;
          v64 = (void *)qalloc_or_throw(16 * v123, (__int64)v121, 16 * v123, v62);
          memcpy(v64, src, v102[0]);
        }
        v54 = _mm_unpacklo_epi64((__m128i)v63, (__m128i)v63);
        v65 = v101[32];
        if ( v65 )
        {
          v101[33] = 0;
          *(__m128i *)v102 = v54;
          qfree(v65);
          v54 = _mm_load_si128((const __m128i *)v102);
        }
        v66 = v101;
        v101[32] = (__int64)v64;
        *(__m128i *)(v66 + 33) = v54;
        v67 = a1[98];
        if ( v67 )
          *(_DWORD *)(v67 + 48) = 63;
        ++v9;
      }
      v68 = (const void **)v100;
      if ( sub_122C30((__int64)(v8 + 20), (__int64)v100) )
      {
        v69 = (__int64)v68;
        sub_648D0(v8 + 20, v68, *(double *)v54.m128i_i64);
        v71 = v114.m128i_i64[0];
        v72 = nullptr;
        if ( v114.m128i_i64[0] )
        {
          v102[0] = 16 * v114.m128i_i64[0];
          v72 = (void *)qalloc_or_throw(16 * v114.m128i_i64[0], v69, 16 * v114.m128i_i64[0], v70);
          memcpy(v72, v113, v102[0]);
        }
        v73 = v8[22];
        v54 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v71, (__m128i)(unsigned __int64)v71);
        if ( v73 )
        {
          v8[23] = 0;
          *(__m128i *)v102 = v54;
          qfree(v73);
          v54 = _mm_load_si128((const __m128i *)v102);
        }
        v8[22] = (__int64)v72;
        *(__m128i *)(v8 + 23) = v54;
        v74 = a1[98];
        if ( v74 )
          *(_DWORD *)(v74 + 48) = 63;
        ++v9;
      }
      sub_66FA0((__int64)a1, 1);
      v77 = (unsigned __int64 *)sub_670E0(a1, 1, v75, v76);
      if ( (unsigned int)sub_141E80(v77, (__int64)v99, nullptr, v78, v79, v80, v54, a4) )
      {
        ++v9;
        sub_66FA0((__int64)a1, 1);
      }
    }
    if ( v125 )
    {
      *(_QWORD *)&v126 = 0;
      qfree((__int64)v125);
    }
    qfree(v124[0]);
    if ( src )
    {
      *(_QWORD *)&v123 = 0;
      qfree((__int64)src);
    }
    qfree((__int64)v121[0]);
    if ( v119 )
    {
      v120.m128i_i64[0] = 0;
      qfree((__int64)v119);
    }
    qfree(v118[0]);
    if ( v116 )
    {
      *(_QWORD *)&v117 = 0;
      qfree(v116);
    }
    qfree(v115[0]);
  }
  sub_648D0(v105, v121, 0.0);
  v81 = v123;
  v82 = nullptr;
  if ( (_QWORD)v123 )
  {
    v97[0] = 16 * v123;
    v88 = (void *)qalloc_or_throw(16 * v123, (__int64)v121, 16 * v123, 0);
    v82 = memcpy(v88, src, v97[0]);
  }
  v27 = _mm_unpacklo_epi64((__m128i)v81, (__m128i)v81);
  v83 = v101[32];
  if ( v83 )
  {
    v101[33] = 0;
    v97[0] = (size_t)v82;
    *(__m128i *)n = v27;
    qfree(v83);
    v27 = _mm_load_si128((const __m128i *)n);
    v82 = (void *)v97[0];
  }
  v84 = v101;
  v101[32] = (__int64)v82;
  *(__m128i *)(v84 + 33) = v27;
  v85 = a1[98];
  if ( v85 )
    *(_DWORD *)(v85 + 48) = 63;
  v33 = *(_DWORD *)a1;
  ++v9;
  if ( (*(_DWORD *)a1 & 0x4000) == 0 )
    goto LABEL_22;
LABEL_64:
  if ( src )
  {
    *(_QWORD *)&v123 = 0;
    qfree((__int64)src);
  }
  qfree((__int64)v121[0]);
  if ( v119 )
  {
    v120.m128i_i64[0] = 0;
    qfree((__int64)v119);
  }
  qfree(v118[0]);
  if ( v116 )
  {
    *(_QWORD *)&v117 = 0;
    qfree(v116);
  }
  qfree(v115[0]);
  if ( *((char *)a1 + 1) >= 0 )
  {
    v89 = v100;
    sub_1373E0(a1[188], v100, a1[115]);
    v90 = sub_122C30((__int64)(v8 + 20), (__int64)v89);
    v86 = v113;
    if ( v90 )
    {
      v91 = v8[20];
      v92 = _mm_loadu_si128(&v114);
      v8[20] = v111;
      v111 = v91;
      v93 = v8[21];
      v8[21] = v112;
      v94 = v8[24];
      v112 = v93;
      v95 = (void *)v8[22];
      v114.m128i_i64[1] = v94;
      v8[22] = (__int64)v86;
      *(__m128i *)(v8 + 23) = v92;
      v96 = a1[98];
      v113 = v95;
      if ( v96 )
        *(_DWORD *)(v96 + 48) = 63;
      ++v9;
      v86 = v95;
    }
  }
  else
  {
    v86 = v113;
  }
  if ( v86 )
  {
    v114.m128i_i64[0] = 0;
    qfree((__int64)v86);
  }
  qfree(v111);
  clear_tinfo_t();
  return v9;
}

