unsigned __int64 __fastcall sub_1056B0(__int64 a1, double a2, __m128 a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // rsi
  __m128i v11; // xmm0
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // r15
  __int64 v21; // r14
  _BYTE *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 *v25; // rbp
  unsigned __int64 v26; // r12
  size_t v27; // rcx
  __int64 v28; // rdi
  __m128i v29; // xmm0
  __int64 *v30; // r12
  __m128i *v31; // rdx
  int v32; // r8d
  int v33; // r9d
  unsigned __int64 v34; // rbp
  size_t v35; // rcx
  __int64 v36; // rdi
  __int16 v37; // ax
  __int64 v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbp
  __int64 *v45; // r12
  __int64 *v46; // rbp
  __m128i *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 *v51; // rsi
  __m128i *v52; // rdx
  void (*v53)(); // rcx
  __int64 v54; // rdi
  void (*v55)(); // rax
  __int64 v57; // r12
  __m128i *v58; // rdx
  __int64 v59; // rcx
  void *v60; // rax
  __m128i v61; // xmm0
  __m128i *v62; // rdx
  __int64 v63; // r12
  __int64 v64; // r12
  __int64 v65; // rcx
  void *v66; // rax
  __m128i v67; // xmm0
  __m128i *v68; // rdx
  __int64 v69; // r12
  __int64 v70; // r12
  __int64 v71; // rcx
  __int64 v72; // rax
  void *v73; // rax
  void *v74; // rax
  __int64 v75; // rbp
  __int64 *v76; // r12
  __int64 *v77; // rbp
  __m128i *v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r12
  unsigned int v83; // ebp
  int v84; // r13d
  __int64 v85; // rax
  __int64 v86; // r14
  _QWORD *v87; // rdi
  unsigned __int64 v88; // rsi
  unsigned __int64 v89; // rax
  __int64 v90; // r14
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rax
  const void **v94; // rbp
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rdi
  __int64 v98; // rbp
  __int64 v99; // rbp
  unsigned __int64 v100; // r12
  __int64 v101; // rcx
  __int64 v102; // rbp
  __int64 v103; // rax
  __int64 *v104; // rdi
  __int64 v105; // rdx
  __int64 v106; // rsi
  __int64 v107; // r8
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 *v112; // rdi
  void *v113; // rax
  const void *v114; // rsi
  __m128i v115; // [rsp+0h] [rbp-1F8h] BYREF
  size_t n; // [rsp+18h] [rbp-1E0h]
  __m128i v117; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 **v118; // [rsp+30h] [rbp-1C8h]
  unsigned __int64 v119; // [rsp+38h] [rbp-1C0h]
  __m128i v120; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 *v121; // [rsp+50h] [rbp-1A8h]
  __int64 v122; // [rsp+58h] [rbp-1A0h]
  __int64 *v123; // [rsp+60h] [rbp-198h]
  _QWORD *v124; // [rsp+68h] [rbp-190h]
  __int64 v125; // [rsp+70h] [rbp-188h]
  int v126; // [rsp+7Ch] [rbp-17Ch]
  __m128i v127; // [rsp+80h] [rbp-178h] BYREF
  __m128i v128; // [rsp+90h] [rbp-168h] BYREF
  __int64 v129; // [rsp+A0h] [rbp-158h] BYREF
  __int128 v130; // [rsp+A8h] [rbp-150h]
  __int64 v131; // [rsp+C0h] [rbp-138h] BYREF
  __int128 v132; // [rsp+C8h] [rbp-130h]
  _BYTE v133[24]; // [rsp+E0h] [rbp-118h] BYREF
  __int64 v134; // [rsp+F8h] [rbp-100h]
  _QWORD v135[5]; // [rsp+110h] [rbp-E8h] BYREF
  char v136; // [rsp+138h] [rbp-C0h]
  __int64 v137; // [rsp+140h] [rbp-B8h] BYREF
  __int128 v138; // [rsp+148h] [rbp-B0h]
  void *src; // [rsp+158h] [rbp-A0h] BYREF
  __m128i v140; // [rsp+160h] [rbp-98h]
  void *v141; // [rsp+170h] [rbp-88h] BYREF
  __m128i v142; // [rsp+178h] [rbp-80h]
  __int64 v143; // [rsp+188h] [rbp-70h]
  __int64 v144; // [rsp+190h] [rbp-68h]
  __int64 v145; // [rsp+198h] [rbp-60h] BYREF
  __m128i v146; // [rsp+1A0h] [rbp-58h]
  int v147; // [rsp+1B0h] [rbp-48h]
  unsigned __int64 v148; // [rsp+1B8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 320);
  v148 = __readfsqword(0x28u);
  v126 = *(_DWORD *)(v3 + 64);
  v119 = v126;
  sub_C3840((__int64 *)(a1 + 200), v126);
  v5 = v126;
  sub_C3840((__int64 *)(a1 + 176), v126);
  if ( (*(_BYTE *)(a1 + 316) & 4) != 0 )
  {
    v5 = v119;
    sub_C3840((__int64 *)(a1 + 224), v119);
  }
  v8 = *(_QWORD *)(a1 + 320);
  v129 = 0;
  v130 = 0;
  v9 = *(_QWORD *)(v8 + 216);
  if ( v9 )
  {
    v113 = (void *)qalloc_or_throw(16 * v9, v5, v6, v7);
    v114 = *(const void **)(v8 + 208);
    *((_QWORD *)&v130 + 1) = v9;
    v129 = (__int64)v113;
    memcpy(v113, v114, 16 * v9);
    *(_QWORD *)&v130 = v9;
    v8 = *(_QWORD *)(a1 + 320);
  }
  v123 = &v129;
  sub_317BD0(&v129, (__m128i *)(v8 + 600));
  v10 = *(_QWORD *)(a1 + 320);
  v11.m128i_i64[0] = 0;
  v131 = 0;
  v121 = &v131;
  v12 = *(_QWORD *)(v10 + 664);
  v13 = *(_QWORD *)(v10 + 672);
  v132 = 0;
  if ( v12 + v13 - 1 >= v12 )
  {
    a3 = (__m128)v13;
    v131 = qvector_reserve((__int64)v121, 0, 1, 16);
    v11 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v13);
    *(__m128i *)(v131 + 16 * v132) = v11;
    v10 = *(_QWORD *)(a1 + 320);
    *(_QWORD *)&v132 = v132 + 1;
  }
  sub_316BB0(v121, (__m128i *)(v10 + 632), *(double *)v11.m128i_i64, a3);
  v14 = *(_QWORD *)(a1 + 320);
  v15 = *(_DWORD *)(a1 + 316);
  v138 = 0;
  v16 = *(_QWORD *)(v14 + 1504);
  v140 = 0;
  v142 = 0;
  v125 = v16;
  v17 = *(_QWORD *)(v14 + 128);
  v144 = 0;
  v145 = 0;
  v147 = v15;
  v146 = 0;
  v135[1] = v14;
  v18 = (__m128i)_mm_loadh_ps((const double *)(v14 + 128));
  v122 = v17;
  v115.m128i_i64[0] = (__int64)v133;
  memset(&v135[2], 0, 24);
  v136 = 0;
  v135[0] = off_4DD430;
  v137 = 0;
  src = nullptr;
  v141 = nullptr;
  v143 = 0;
  *(__m128i *)v133 = v18;
  sub_316BB0(&v137, (__m128i *)v133, *(double *)v18.m128i_i64, a3);
  v20 = 0;
  v21 = 0;
  v124 = v135;
  v22 = &v133[16];
  v23 = *(_QWORD *)(a1 + 320);
  v118 = (__int64 **)&v133[16];
  if ( v126 > 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned int)v21 >= *(_DWORD *)(v23 + 64) )
          sub_101D70(*(double *)v18.m128i_i64);
        v19 = *(_QWORD *)(v23 + 528);
        v24 = *(_QWORD *)(v19 + 8 * v21);
        if ( (*(_BYTE *)(a1 + 316) & 2) != 0 )
          break;
        if ( *(_QWORD *)(a1 + 336) )
        {
          if ( src )
          {
            v140.m128i_i64[0] = 0;
            qfree((__int64)src);
            src = nullptr;
            v140.m128i_i64[1] = 0;
          }
          if ( v141 )
          {
            v142.m128i_i64[0] = 0;
            qfree((__int64)v141);
            v141 = nullptr;
            v142.m128i_i64[1] = 0;
          }
          v144 = 0;
          if ( v145 )
          {
            v146.m128i_i64[0] = 0;
            qfree(v145);
            v145 = 0;
            v146.m128i_i64[1] = 0;
          }
          sub_11F5B0((const __m128i *)v24, (__int64)v124);
          v57 = v20 + *(_QWORD *)(a1 + 200);
          sub_3180C0((__int64 *)&v141, a1 + 328, v58, v59);
          v60 = *(void **)(v57 + 16);
          v61 = _mm_loadu_si128((const __m128i *)(v57 + 24));
          *(_QWORD *)(v57 + 16) = v141;
          *(_QWORD *)(v57 + 24) = v142.m128i_i64[0];
          v62 = (__m128i *)v142.m128i_i64[1];
          *(_QWORD *)(v57 + 32) = v142.m128i_i64[1];
          v63 = *(_QWORD *)(a1 + 176);
          v141 = v60;
          v142 = v61;
          v64 = v20 + v63;
          sub_3180C0((__int64 *)&src, a1 + 328, v62, v65);
          v66 = *(void **)(v64 + 16);
          v67 = _mm_loadu_si128((const __m128i *)(v64 + 24));
          *(_QWORD *)(v64 + 16) = src;
          *(_QWORD *)(v64 + 24) = v140.m128i_i64[0];
          v68 = (__m128i *)v140.m128i_i64[1];
          *(_QWORD *)(v64 + 32) = v140.m128i_i64[1];
          v69 = *(_QWORD *)(a1 + 224);
          src = v66;
          v140 = v67;
          v70 = v20 + v69;
          sub_3180C0(&v145, a1 + 328, v68, v71);
          v72 = *(_QWORD *)(v70 + 16);
          v18 = _mm_loadu_si128((const __m128i *)(v70 + 24));
          *(_QWORD *)(v70 + 16) = v145;
          *(_QWORD *)(v70 + 24) = v146.m128i_i64[0];
          v19 = v146.m128i_i64[1];
          *(_QWORD *)(v70 + 32) = v146.m128i_i64[1];
          v145 = v72;
          v146 = v18;
          goto LABEL_50;
        }
        ++v21;
        v20 += 40;
        if ( v119 == v21 )
          goto LABEL_51;
      }
      v25 = (__int64 *)(v20 + *(_QWORD *)(a1 + 176));
      sub_648D0(v25, (const void **)(v24 + 160), *(double *)v18.m128i_i64);
      v26 = *(_QWORD *)(v24 + 184);
      v27 = 0;
      if ( v26 )
      {
        n = 16 * v26;
        v74 = (void *)qalloc_or_throw(16 * v26, v24 + 160, 16 * v26, 0);
        v27 = (size_t)memcpy(v74, *(const void **)(v24 + 176), 16 * v26);
      }
      v28 = v25[2];
      v29 = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
      if ( v28 )
      {
        v25[3] = 0;
        n = v27;
        v117 = v29;
        qfree(v28);
        v29 = _mm_load_si128(&v117);
        v27 = n;
      }
      v25[2] = v27;
      *(__m128i *)(v25 + 3) = v29;
      v30 = (__int64 *)(v20 + *(_QWORD *)(a1 + 200));
      v117.m128i_i32[0] = *(_DWORD *)(a1 + 316);
      sub_648D0(v30, (const void **)(v24 + 240), *(double *)v29.m128i_i64);
      v34 = *(_QWORD *)(v24 + 264);
      v35 = 0;
      if ( v34 )
      {
        n = 16 * v34;
        v73 = (void *)qalloc_or_throw(16 * v34, v24 + 240, 16 * v34, 0);
        v35 = (size_t)memcpy(v73, *(const void **)(v24 + 256), 16 * v34);
      }
      v36 = v30[2];
      v18 = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v34);
      if ( v36 )
      {
        v30[3] = 0;
        n = v35;
        v120 = v18;
        qfree(v36);
        v18 = _mm_load_si128(&v120);
        v35 = n;
      }
      v37 = v117.m128i_i16[0];
      v30[2] = v35;
      *(__m128i *)(v30 + 3) = v18;
      if ( (v37 & 0x180) != 0 )
      {
        v38 = *(_QWORD *)(v24 + 48);
        v120.m128i_i32[0] = v37 & 0x100;
        LODWORD(n) = v120.m128i_i32[0] | 1;
        if ( v38 )
          break;
      }
LABEL_31:
      if ( *(_DWORD *)(v24 + 76) != 1
        && ((unsigned __int8)sub_318470((unsigned __int64 **)(v20 + *(_QWORD *)(a1 + 176) + 16), (__int64)v121)
         || (unsigned __int8)sub_318470((unsigned __int64 **)(v20 + *(_QWORD *)(a1 + 200) + 16), (__int64)v121)) )
      {
        if ( src )
        {
          v140.m128i_i64[0] = 0;
          qfree((__int64)src);
          src = nullptr;
          v140.m128i_i64[1] = 0;
        }
        if ( v141 )
        {
          v142.m128i_i64[0] = 0;
          qfree((__int64)v141);
          v141 = nullptr;
          v142.m128i_i64[1] = 0;
        }
        v144 = 0;
        if ( v145 )
        {
          v146.m128i_i64[0] = 0;
          qfree(v145);
          v145 = 0;
          v146.m128i_i64[1] = 0;
        }
        sub_11F5B0((const __m128i *)v24, (__int64)v124);
        v41 = v121;
        if ( (unsigned __int8)sub_318470((unsigned __int64 **)(v20 + *(_QWORD *)(a1 + 176) + 16), (__int64)v121) )
        {
          v44 = v140.m128i_i64[0];
          v18.m128i_i64[0] = 0;
          memset(v133, 0, sizeof(v133));
          if ( v140.m128i_i64[0] )
          {
            *(_QWORD *)v133 = qalloc_or_throw(16 * v140.m128i_i64[0], (__int64)v41, v42, v43);
            *(_QWORD *)&v133[16] = v44;
            memcpy(*(void **)v133, src, 16 * v44);
            *(_QWORD *)&v133[8] = v44;
          }
          v45 = v121;
          v46 = (__int64 *)(v20 + *(_QWORD *)(a1 + 176) + 16);
          sub_317C60(v46, (__int64)v121);
          sub_3180C0((__int64 *)v115.m128i_i64[0], (__int64)v45, v47, v48);
          sub_316CB0(v46, (__int64 **)v115.m128i_i64[0], v49, v50);
          if ( *(_QWORD *)v133 )
          {
            *(_QWORD *)&v133[8] = 0;
            qfree(*(__int64 *)v133);
          }
        }
        v51 = v121;
        if ( (unsigned __int8)sub_318470((unsigned __int64 **)(v20 + *(_QWORD *)(a1 + 200) + 16), (__int64)v121) )
        {
          v75 = v142.m128i_i64[0];
          v18.m128i_i64[0] = 0;
          memset(v133, 0, sizeof(v133));
          if ( v142.m128i_i64[0] )
          {
            *(_QWORD *)v133 = qalloc_or_throw(16 * v142.m128i_i64[0], (__int64)v51, (__int64)v31, v35);
            *(_QWORD *)&v133[16] = v75;
            memcpy(*(void **)v133, v141, 16 * v75);
            *(_QWORD *)&v133[8] = v75;
          }
          v76 = v121;
          v77 = (__int64 *)(v20 + *(_QWORD *)(a1 + 200) + 16);
          sub_317C60(v77, (__int64)v121);
          sub_3180C0((__int64 *)v115.m128i_i64[0], (__int64)v76, v78, v79);
          sub_316CB0(v77, (__int64 **)v115.m128i_i64[0], v80, v81);
          if ( *(_QWORD *)v133 )
          {
            *(_QWORD *)&v133[8] = 0;
            qfree(*(__int64 *)v133);
          }
        }
      }
      sub_3180C0((__int64 *)(v20 + *(_QWORD *)(a1 + 176) + 16), (__int64)v123, v31, v35);
      v54 = v20 + *(_QWORD *)(a1 + 200);
      if ( !*(_DWORD *)(v24 + 72) )
      {
        sub_316CB0((__int64 *)(v54 + 16), (__int64 **)v121, (__int64)v52, (__int64)v53);
        v53 = nullsub_36;
        v54 = v20 + *(_QWORD *)(a1 + 200);
        v55 = *(void (**)())(*(_QWORD *)v125 + 80LL);
        if ( v55 != nullsub_36 )
        {
          ((void (__fastcall *)(__int64, _QWORD, __int64))v55)(v125, *(_QWORD *)(v24 + 64), v20 + *(_QWORD *)(a1 + 200));
          v54 = v20 + *(_QWORD *)(a1 + 200);
        }
      }
      sub_3180C0((__int64 *)(v54 + 16), (__int64)v123, v52, (__int64)v53);
LABEL_50:
      v23 = *(_QWORD *)(a1 + 320);
      ++v21;
      v20 += 40;
      if ( v119 == v21 )
        goto LABEL_51;
    }
    while ( *(char *)(v38 + 4) < 0 )
    {
      if ( v117.m128i_i8[0] < 0 )
        goto LABEL_25;
LABEL_28:
      v38 = *(_QWORD *)(v38 + 8);
      if ( !v38 )
        goto LABEL_31;
    }
    v33 = v120.m128i_i32[0];
    if ( !v120.m128i_i32[0] )
      goto LABEL_31;
LABEL_25:
    sub_127A20(v115.m128i_i64[0], v24, v38, (unsigned int)n, v32, v33);
    sub_64280(v30, (__int64 *)v115.m128i_i64[0], *(double *)v18.m128i_i64);
    sub_316CB0(v30 + 2, v118, v39, v40);
    if ( *(_QWORD *)&v133[16] )
    {
      v134 = 0;
      qfree(*(__int64 *)&v133[16]);
    }
    qfree(*(__int64 *)v133);
    goto LABEL_28;
  }
LABEL_51:
  if ( *(_QWORD *)(a1 + 336) )
  {
    sub_316CB0((__int64 *)(*(_QWORD *)(a1 + 200) + 16LL), (__int64 **)v121, v19, (__int64)v22);
    v82 = 8;
    v83 = 1;
    v84 = v126 - 1;
    if ( v126 - 1 > 1 )
    {
      do
      {
        while ( 1 )
        {
          v85 = *(_QWORD *)(a1 + 320);
          if ( v83 >= *(_DWORD *)(v85 + 64) )
            sub_101D70(*(double *)v18.m128i_i64);
          v86 = *(_QWORD *)(*(_QWORD *)(v85 + 528) + v82);
          if ( (get_flags_ex() & 0x10000) != 0 )
          {
            v87 = *(_QWORD **)(a1 + 320);
            v88 = *(_QWORD *)(v86 + 40);
            n = (size_t)(v87 + 1);
            v89 = sub_330F80(v87, v88);
            if ( (unsigned __int8)sub_332920((__int64)(v87 + 1), v89) )
              break;
          }
          ++v83;
          v82 += 8;
          v122 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 128LL);
          if ( v83 == v84 )
            goto LABEL_86;
        }
        v90 = sub_1CFBB0(*(_QWORD *)(a1 + 320), *(_QWORD *)(v86 + 40));
        v91 = 5 * v82;
        if ( v90 > v122 )
        {
          v111 = *(_QWORD *)(a1 + 320);
          n = 5 * v82;
          v112 = (__int64 *)(*(_QWORD *)(a1 + 224) + 5 * v82 + 16);
          v127.m128i_i64[0] = (v122 + *(_QWORD *)(v111 + 1440))
                            & *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v111 + 1496) + 24LL) + 16LL);
          v127.m128i_i64[1] = v90 - v122;
          sub_316BB0(v112, &v127, *(double *)v18.m128i_i64, a3);
          v91 = 5 * v82;
        }
        v92 = v91 + *(_QWORD *)(a1 + 200);
        if ( *(_QWORD *)(v92 + 24) )
        {
          v105 = *(_QWORD *)(a1 + 320);
          v106 = *(_QWORD *)(v105 + 1440);
          v107 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v105 + 1496) + 24LL) + 16LL);
          v108 = v107 & (**(_QWORD **)(v92 + 16) - v106);
          v109 = v108;
          if ( v108 < 0 )
          {
            if ( !under_debugger )
              sub_383060(0xC3E1u, *(double *)v18.m128i_i64);
            BUG();
          }
          if ( v90 > v108 )
          {
            v110 = v91 + *(_QWORD *)(a1 + 224);
            v128.m128i_i64[0] = v107 & (v109 + v106);
            v128.m128i_i64[1] = v90 - v109;
            sub_316BB0((__int64 *)(v110 + 16), &v128, *(double *)v18.m128i_i64, a3);
          }
        }
        ++v83;
        v122 = v90;
        v82 += 8;
      }
      while ( v83 != v84 );
    }
LABEL_86:
    v93 = *(int *)(a1 + 312);
    if ( (_DWORD)v93 != -1 )
    {
      v94 = (const void **)(*(_QWORD *)(a1 + 200) + 40 * v93);
      sub_648D0((__int64 *)(a1 + 248), v94, *(double *)v18.m128i_i64);
      memset(v133, 0, sizeof(v133));
      sub_101E10(v115.m128i_i64[0], (__int64)(v94 + 2), v95, v96);
      v97 = *(_QWORD *)(a1 + 264);
      v98 = *(_QWORD *)v133;
      v18 = _mm_loadu_si128((const __m128i *)&v133[8]);
      if ( v97 )
      {
        *(_QWORD *)(a1 + 272) = 0;
        v115 = v18;
        qfree(v97);
        v18 = _mm_load_si128(&v115);
      }
      *(_QWORD *)(a1 + 264) = v98;
      *(__m128i *)(a1 + 272) = v18;
    }
    if ( v126 > 0 )
    {
      v99 = 0;
      v100 = 40 * v119;
      do
      {
        sub_317C60((__int64 *)(v99 + *(_QWORD *)(a1 + 200) + 16), v99 + *(_QWORD *)(a1 + 224) + 16);
        v99 += 40;
      }
      while ( v100 != v99 );
      if ( (*(_BYTE *)(a1 + 316) & 0x40) != 0 )
      {
        v102 = 0;
        do
        {
          v103 = *(_QWORD *)(a1 + 320);
          if ( (unsigned int)v102 >= *(_DWORD *)(v103 + 64) )
            sub_101D70(*(double *)v18.m128i_i64);
          v18 = (__m128i)_mm_loadh_ps((const double *)(*(_QWORD *)(*(_QWORD *)(v103 + 528) + 8 * v102) + 320LL));
          v104 = (__int64 *)(*(_QWORD *)(a1 + 224) + 40 * v102 + 16);
          v128 = v18;
          sub_317210(v104, a1 + 328, &v128, v101, *(double *)v18.m128i_i64, a3);
          ++v102;
        }
        while ( v119 != v102 );
      }
    }
  }
  v135[0] = off_4DD430;
  if ( v145 )
  {
    v146.m128i_i64[0] = 0;
    qfree(v145);
  }
  qfree(v143);
  if ( v141 )
  {
    v142.m128i_i64[0] = 0;
    qfree((__int64)v141);
  }
  if ( src )
  {
    v140.m128i_i64[0] = 0;
    qfree((__int64)src);
  }
  if ( v137 )
  {
    *(_QWORD *)&v138 = 0;
    qfree(v137);
  }
  if ( v131 )
  {
    *(_QWORD *)&v132 = 0;
    qfree(v131);
  }
  if ( v129 )
  {
    *(_QWORD *)&v130 = 0;
    qfree(v129);
  }
  return v148 - __readfsqword(0x28u);
}

