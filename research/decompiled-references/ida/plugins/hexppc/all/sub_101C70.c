unsigned __int64 __fastcall sub_101C70(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 *v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __m128 v16; // xmm0
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 *v23; // rbp
  unsigned __int64 v24; // r12
  size_t v25; // rcx
  __m128i v26; // xmm0
  __int64 *v27; // r12
  unsigned __int64 v28; // rbp
  size_t v29; // rcx
  __m128i v30; // xmm0
  __int16 v31; // ax
  __int64 v32; // rbp
  __int64 v33; // rbp
  __int64 *v34; // r12
  __int64 v35; // rbp
  __int64 v36; // rdi
  void (*v37)(); // rax
  __int64 v39; // r12
  void *v40; // rax
  __m128i v41; // xmm0
  __int64 v42; // r12
  __int64 v43; // r12
  void *v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // r12
  __int64 v47; // r12
  __int64 v48; // rax
  __m128i v49; // xmm0
  void *v50; // rax
  void *v51; // rax
  __int64 v52; // rbp
  __int64 *v53; // r12
  __int64 v54; // rbp
  __int64 v55; // r12
  unsigned int v56; // ebp
  int v57; // r13d
  __int64 v58; // rax
  __int64 v59; // r14
  __int64 v60; // rdi
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r14
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 *v68; // rbp
  __int64 v69; // rbp
  __m128i v70; // xmm0
  __int64 v71; // rbp
  unsigned __int64 v72; // r12
  __int64 v73; // rbp
  __int64 v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // r8
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rdx
  void *v85; // rax
  const void *v86; // rsi
  __m128i v87; // [rsp+0h] [rbp-1F8h] BYREF
  size_t n; // [rsp+18h] [rbp-1E0h]
  __m128i v89; // [rsp+20h] [rbp-1D8h] BYREF
  _BYTE *v90; // [rsp+30h] [rbp-1C8h]
  unsigned __int64 v91; // [rsp+38h] [rbp-1C0h]
  __m128i v92; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 *v93; // [rsp+50h] [rbp-1A8h]
  __int64 v94; // [rsp+58h] [rbp-1A0h]
  void **v95; // [rsp+60h] [rbp-198h]
  _QWORD *v96; // [rsp+68h] [rbp-190h]
  __int64 v97; // [rsp+70h] [rbp-188h]
  int v98; // [rsp+7Ch] [rbp-17Ch]
  _QWORD v99[2]; // [rsp+80h] [rbp-178h] BYREF
  __m128 v100; // [rsp+90h] [rbp-168h] BYREF
  void *v101; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v102; // [rsp+A8h] [rbp-150h]
  __int64 v103; // [rsp+C0h] [rbp-138h] BYREF
  __int128 v104; // [rsp+C8h] [rbp-130h]
  _BYTE v105[24]; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v106; // [rsp+F8h] [rbp-100h]
  _QWORD v107[5]; // [rsp+110h] [rbp-E8h] BYREF
  char v108; // [rsp+138h] [rbp-C0h]
  __int64 v109; // [rsp+140h] [rbp-B8h] BYREF
  __int128 v110; // [rsp+148h] [rbp-B0h]
  void *src; // [rsp+158h] [rbp-A0h] BYREF
  __m128i v112; // [rsp+160h] [rbp-98h]
  void *v113; // [rsp+170h] [rbp-88h] BYREF
  __m128i v114; // [rsp+178h] [rbp-80h]
  __int64 v115; // [rsp+188h] [rbp-70h]
  __int64 v116; // [rsp+190h] [rbp-68h]
  __int64 v117; // [rsp+198h] [rbp-60h] BYREF
  __m128i v118; // [rsp+1A0h] [rbp-58h]
  int v119; // [rsp+1B0h] [rbp-48h]
  unsigned __int64 v120; // [rsp+1B8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 320);
  v120 = __readfsqword(0x28u);
  v98 = *(_DWORD *)(v1 + 64);
  v91 = v98;
  sub_BFE00((__int64 *)(a1 + 200), v98);
  sub_BFE00((__int64 *)(a1 + 176), v98);
  if ( (*(_BYTE *)(a1 + 316) & 4) != 0 )
    sub_BFE00((__int64 *)(a1 + 224), v91);
  v3 = *(_QWORD *)(a1 + 320);
  v101 = nullptr;
  v102 = 0;
  v4 = *(_QWORD *)(v3 + 216);
  if ( v4 )
  {
    v85 = (void *)qalloc_or_throw();
    v86 = *(const void **)(v3 + 208);
    *((_QWORD *)&v102 + 1) = v4;
    v101 = v85;
    memcpy(v85, v86, 16 * v4);
    *(_QWORD *)&v102 = v4;
    v3 = *(_QWORD *)(a1 + 320);
  }
  v95 = &v101;
  sub_313A50(&v101, v3 + 600);
  v8 = *(_QWORD *)(a1 + 320);
  v9 = &v103;
  v103 = 0;
  v93 = &v103;
  v10 = *(_QWORD *)(v8 + 664);
  v11 = *(_QWORD *)(v8 + 672);
  v104 = 0;
  if ( v10 + v11 - 1 >= v10 )
  {
    v103 = qvector_reserve();
    v5 = 16 * v104;
    *(__m128i *)(v103 + 16 * v104) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v11);
    v8 = *(_QWORD *)(a1 + 320);
    *(_QWORD *)&v104 = v104 + 1;
  }
  sub_312A30(v93, v8 + 632, v5, v9, v6, v7);
  v12 = *(_QWORD *)(a1 + 320);
  v13 = *(unsigned int *)(a1 + 316);
  v110 = 0;
  v14 = *(_QWORD *)(v12 + 1504);
  v112 = 0;
  v114 = 0;
  v97 = v14;
  v15 = *(_QWORD *)(v12 + 128);
  v116 = 0;
  v117 = 0;
  v119 = v13;
  v118 = 0;
  v107[1] = v12;
  v16 = _mm_loadh_ps((const double *)(v12 + 128));
  v94 = v15;
  v87.m128i_i64[0] = (__int64)v105;
  memset(&v107[2], 0, 24);
  v108 = 0;
  v107[0] = off_4CA590;
  v109 = 0;
  src = nullptr;
  v113 = nullptr;
  v115 = 0;
  *(__m128 *)v105 = v16;
  sub_312A30(&v109, v105, v13, off_4CA590, v17, v18);
  v19 = 0;
  v20 = 0;
  v96 = v107;
  v21 = *(_QWORD *)(a1 + 320);
  v90 = &v105[16];
  if ( v98 > 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned int)v20 >= *(_DWORD *)(v21 + 64) )
          sub_FE330();
        v22 = *(_QWORD *)(*(_QWORD *)(v21 + 528) + 8 * v20);
        if ( (*(_BYTE *)(a1 + 316) & 2) != 0 )
          break;
        if ( *(_QWORD *)(a1 + 336) )
        {
          if ( src )
          {
            v112.m128i_i64[0] = 0;
            qfree();
            src = nullptr;
            v112.m128i_i64[1] = 0;
          }
          if ( v113 )
          {
            v114.m128i_i64[0] = 0;
            qfree();
            v113 = nullptr;
            v114.m128i_i64[1] = 0;
          }
          v116 = 0;
          if ( v117 )
          {
            v118.m128i_i64[0] = 0;
            qfree();
            v117 = 0;
            v118.m128i_i64[1] = 0;
          }
          sub_11BB70(v22, v96);
          v39 = v19 + *(_QWORD *)(a1 + 200);
          sub_313F40(&v113, a1 + 328);
          v40 = *(void **)(v39 + 16);
          v41 = _mm_loadu_si128((const __m128i *)(v39 + 24));
          *(_QWORD *)(v39 + 16) = v113;
          *(__m128i *)(v39 + 24) = v114;
          v42 = *(_QWORD *)(a1 + 176);
          v113 = v40;
          v114 = v41;
          v43 = v19 + v42;
          sub_313F40(&src, a1 + 328);
          v44 = *(void **)(v43 + 16);
          v45 = _mm_loadu_si128((const __m128i *)(v43 + 24));
          *(_QWORD *)(v43 + 16) = src;
          *(__m128i *)(v43 + 24) = v112;
          v46 = *(_QWORD *)(a1 + 224);
          src = v44;
          v112 = v45;
          v47 = v19 + v46;
          sub_313F40(&v117, a1 + 328);
          v48 = *(_QWORD *)(v47 + 16);
          v49 = _mm_loadu_si128((const __m128i *)(v47 + 24));
          *(_QWORD *)(v47 + 16) = v117;
          *(__m128i *)(v47 + 24) = v118;
          v117 = v48;
          v118 = v49;
          goto LABEL_50;
        }
        ++v20;
        v19 += 40;
        if ( v91 == v20 )
          goto LABEL_51;
      }
      v23 = (__int64 *)(v19 + *(_QWORD *)(a1 + 176));
      sub_60E90(v23, (__int64 *)(v22 + 160));
      v24 = *(_QWORD *)(v22 + 184);
      v25 = 0;
      if ( v24 )
      {
        n = 16 * v24;
        v51 = (void *)qalloc_or_throw();
        v25 = (size_t)memcpy(v51, *(const void **)(v22 + 176), 16 * v24);
      }
      v26 = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
      if ( v23[2] )
      {
        v23[3] = 0;
        n = v25;
        v89 = v26;
        qfree();
        v26 = _mm_load_si128(&v89);
        v25 = n;
      }
      v23[2] = v25;
      *(__m128i *)(v23 + 3) = v26;
      v27 = (__int64 *)(v19 + *(_QWORD *)(a1 + 200));
      v89.m128i_i32[0] = *(_DWORD *)(a1 + 316);
      sub_60E90(v27, (__int64 *)(v22 + 240));
      v28 = *(_QWORD *)(v22 + 264);
      v29 = 0;
      if ( v28 )
      {
        n = 16 * v28;
        v50 = (void *)qalloc_or_throw();
        v29 = (size_t)memcpy(v50, *(const void **)(v22 + 256), 16 * v28);
      }
      v30 = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
      if ( v27[2] )
      {
        v27[3] = 0;
        n = v29;
        v92 = v30;
        qfree();
        v30 = _mm_load_si128(&v92);
        v29 = n;
      }
      v31 = v89.m128i_i16[0];
      v27[2] = v29;
      *(__m128i *)(v27 + 3) = v30;
      if ( (v31 & 0x180) != 0 )
      {
        v32 = *(_QWORD *)(v22 + 48);
        v92.m128i_i32[0] = v31 & 0x100;
        LODWORD(n) = v92.m128i_i32[0] | 1;
        if ( v32 )
          break;
      }
LABEL_31:
      if ( *(_DWORD *)(v22 + 76) != 1
        && ((unsigned __int8)sub_3142F0(v19 + *(_QWORD *)(a1 + 176) + 16, v93)
         || (unsigned __int8)sub_3142F0(v19 + *(_QWORD *)(a1 + 200) + 16, v93)) )
      {
        if ( src )
        {
          v112.m128i_i64[0] = 0;
          qfree();
          src = nullptr;
          v112.m128i_i64[1] = 0;
        }
        if ( v113 )
        {
          v114.m128i_i64[0] = 0;
          qfree();
          v113 = nullptr;
          v114.m128i_i64[1] = 0;
        }
        v116 = 0;
        if ( v117 )
        {
          v118.m128i_i64[0] = 0;
          qfree();
          v117 = 0;
          v118.m128i_i64[1] = 0;
        }
        sub_11BB70(v22, v96);
        if ( (unsigned __int8)sub_3142F0(v19 + *(_QWORD *)(a1 + 176) + 16, v93) )
        {
          v33 = v112.m128i_i64[0];
          memset(v105, 0, sizeof(v105));
          if ( v112.m128i_i64[0] )
          {
            *(_QWORD *)v105 = qalloc_or_throw();
            *(_QWORD *)&v105[16] = v33;
            memcpy(*(void **)v105, src, 16 * v33);
            *(_QWORD *)&v105[8] = v33;
          }
          v34 = v93;
          v35 = v19 + *(_QWORD *)(a1 + 176) + 16;
          sub_313AE0(v35, v93);
          sub_313F40(v87.m128i_i64[0], v34);
          sub_312B30(v35, v87.m128i_i64[0]);
          if ( *(_QWORD *)v105 )
          {
            *(_QWORD *)&v105[8] = 0;
            qfree();
          }
        }
        if ( (unsigned __int8)sub_3142F0(v19 + *(_QWORD *)(a1 + 200) + 16, v93) )
        {
          v52 = v114.m128i_i64[0];
          memset(v105, 0, sizeof(v105));
          if ( v114.m128i_i64[0] )
          {
            *(_QWORD *)v105 = qalloc_or_throw();
            *(_QWORD *)&v105[16] = v52;
            memcpy(*(void **)v105, v113, 16 * v52);
            *(_QWORD *)&v105[8] = v52;
          }
          v53 = v93;
          v54 = v19 + *(_QWORD *)(a1 + 200) + 16;
          sub_313AE0(v54, v93);
          sub_313F40(v87.m128i_i64[0], v53);
          sub_312B30(v54, v87.m128i_i64[0]);
          if ( *(_QWORD *)v105 )
          {
            *(_QWORD *)&v105[8] = 0;
            qfree();
          }
        }
      }
      sub_313F40(v19 + *(_QWORD *)(a1 + 176) + 16, v95);
      v36 = v19 + *(_QWORD *)(a1 + 200);
      if ( !*(_DWORD *)(v22 + 72) )
      {
        sub_312B30(v36 + 16, v93);
        v36 = v19 + *(_QWORD *)(a1 + 200);
        v37 = *(void (**)())(*(_QWORD *)v97 + 80LL);
        if ( v37 != nullsub_36 )
        {
          ((void (__fastcall *)(__int64, _QWORD, __int64))v37)(v97, *(_QWORD *)(v22 + 64), v19 + *(_QWORD *)(a1 + 200));
          v36 = v19 + *(_QWORD *)(a1 + 200);
        }
      }
      sub_313F40(v36 + 16, v95);
LABEL_50:
      v21 = *(_QWORD *)(a1 + 320);
      ++v20;
      v19 += 40;
      if ( v91 == v20 )
        goto LABEL_51;
    }
    while ( *(char *)(v32 + 4) < 0 )
    {
      if ( v89.m128i_i8[0] < 0 )
        goto LABEL_25;
LABEL_28:
      v32 = *(_QWORD *)(v32 + 8);
      if ( !v32 )
        goto LABEL_31;
    }
    if ( !v92.m128i_i32[0] )
      goto LABEL_31;
LABEL_25:
    sub_123FE0(v87.m128i_i64[0], v22, v32, (unsigned int)n);
    sub_60840(v27, (__int64 *)v87.m128i_i64[0]);
    sub_312B30(v27 + 2, v90);
    if ( *(_QWORD *)&v105[16] )
    {
      v106 = 0;
      qfree();
    }
    qfree();
    goto LABEL_28;
  }
LABEL_51:
  if ( *(_QWORD *)(a1 + 336) )
  {
    sub_312B30(*(_QWORD *)(a1 + 200) + 16LL, v93);
    v55 = 8;
    v56 = 1;
    v57 = v98 - 1;
    if ( v98 - 1 > 1 )
    {
      do
      {
        while ( 1 )
        {
          v58 = *(_QWORD *)(a1 + 320);
          if ( v56 >= *(_DWORD *)(v58 + 64) )
            sub_FE330();
          v59 = *(_QWORD *)(*(_QWORD *)(v58 + 528) + v55);
          if ( (get_flags_ex() & 0x10000) != 0 )
          {
            v60 = *(_QWORD *)(a1 + 320);
            n = v60 + 8;
            v61 = sub_32CB20(v60);
            if ( (unsigned __int8)sub_32E510(v60 + 8, v61) )
              break;
          }
          ++v56;
          v55 += 8;
          v94 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 128LL);
          if ( v56 == v57 )
            goto LABEL_86;
        }
        v64 = sub_1CC170(*(_QWORD *)(a1 + 320), *(_QWORD *)(v59 + 40));
        v65 = 5 * v55;
        if ( v64 > v94 )
        {
          v82 = *(_QWORD *)(a1 + 320);
          n = 5 * v55;
          v83 = *(_QWORD *)(a1 + 224) + 5 * v55 + 16;
          v84 = *(_QWORD *)(*(_QWORD *)(v82 + 1496) + 24LL);
          v99[0] = (v94 + *(_QWORD *)(v82 + 1440)) & *(_QWORD *)(v84 + 16);
          v99[1] = v64 - v94;
          sub_312A30(v83, v99, v84, v94, v62, v63);
          v65 = 5 * v55;
        }
        v66 = v65 + *(_QWORD *)(a1 + 200);
        if ( *(_QWORD *)(v66 + 24) )
        {
          v76 = *(_QWORD *)(a1 + 320);
          v77 = *(_QWORD *)(v76 + 1440);
          v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v76 + 1496) + 24LL) + 16LL);
          v79 = v78 & (**(_QWORD **)(v66 + 16) - v77);
          v80 = v79;
          if ( v79 < 0 )
          {
            if ( !under_debugger )
              sub_37EEE0(50145);
            BUG();
          }
          if ( v64 > v79 )
          {
            v81 = v65 + *(_QWORD *)(a1 + 224);
            v100.m128_u64[0] = v78 & (v80 + v77);
            v100.m128_u64[1] = v64 - v80;
            sub_312A30(v81 + 16, &v100, v80, v65, v78, v63);
          }
        }
        ++v56;
        v94 = v64;
        v55 += 8;
      }
      while ( v56 != v57 );
    }
LABEL_86:
    v67 = *(int *)(a1 + 312);
    if ( (_DWORD)v67 != -1 )
    {
      v68 = (__int64 *)(*(_QWORD *)(a1 + 200) + 40 * v67);
      sub_60E90((__int64 *)(a1 + 248), v68);
      memset(v105, 0, sizeof(v105));
      sub_FE3D0(v87.m128i_i64[0], (__int64)(v68 + 2));
      v69 = *(_QWORD *)v105;
      v70 = _mm_loadu_si128((const __m128i *)&v105[8]);
      if ( *(_QWORD *)(a1 + 264) )
      {
        *(_QWORD *)(a1 + 272) = 0;
        v87 = v70;
        qfree();
        v70 = _mm_load_si128(&v87);
      }
      *(_QWORD *)(a1 + 264) = v69;
      *(__m128i *)(a1 + 272) = v70;
    }
    if ( v98 > 0 )
    {
      v71 = 0;
      v72 = 40 * v91;
      do
      {
        sub_313AE0(v71 + *(_QWORD *)(a1 + 200) + 16, v71 + *(_QWORD *)(a1 + 224) + 16);
        v71 += 40;
      }
      while ( v72 != v71 );
      if ( (*(_BYTE *)(a1 + 316) & 0x40) != 0 )
      {
        v73 = 0;
        do
        {
          v74 = *(_QWORD *)(a1 + 320);
          if ( (unsigned int)v73 >= *(_DWORD *)(v74 + 64) )
            sub_FE330();
          v75 = *(_QWORD *)(a1 + 224) + 40 * v73 + 16;
          v100 = _mm_loadh_ps((const double *)(*(_QWORD *)(*(_QWORD *)(v74 + 528) + 8 * v73) + 320LL));
          sub_313090(v75, a1 + 328, &v100);
          ++v73;
        }
        while ( v91 != v73 );
      }
    }
  }
  v107[0] = off_4CA590;
  if ( v117 )
  {
    v118.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v113 )
  {
    v114.m128i_i64[0] = 0;
    qfree();
  }
  if ( src )
  {
    v112.m128i_i64[0] = 0;
    qfree();
  }
  if ( v109 )
  {
    *(_QWORD *)&v110 = 0;
    qfree();
  }
  if ( v103 )
  {
    *(_QWORD *)&v104 = 0;
    qfree();
  }
  if ( v101 )
  {
    *(_QWORD *)&v102 = 0;
    qfree();
  }
  return v120 - __readfsqword(0x28u);
}

