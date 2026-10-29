__int64 __fastcall sub_3DBC50(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3,
        _BYTE *a4,
        _DWORD *a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __int64 a10,
        _DWORD *a11)
{
  __int64 v12; // r15
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  _DWORD *v23; // rbx
  int v24; // r14d
  int v25; // r8d
  int v26; // r11d
  double v27; // rax
  double v28; // xmm1_8
  __m128i v29; // xmm0
  __int64 v30; // rax
  unsigned int v31; // eax
  __m128i v32; // xmm2
  const char *v33; // rcx
  double v34; // xmm0_8
  int v35; // eax
  __int64 v36; // rsi
  unsigned int v37; // eax
  unsigned int v38; // ecx
  int v39; // esi
  int v40; // ebp
  __int64 v41; // rbp
  unsigned __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rbx
  _BYTE *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 func; // r14
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // r14
  _BYTE *v64; // rax
  __int64 v65; // rdi
  int v66; // ebx
  int v67; // eax
  const char *v68; // rsi
  __int64 v69; // rbp
  unsigned __int64 v70; // rbx
  __int64 v71; // rcx
  __int64 v72; // r14
  __int64 v73; // rbx
  const char *i; // rdx
  const char *v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rsi
  __int64 v78; // rbx
  _BYTE *v79; // rax
  _DWORD *v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // edx
  int v86; // ebp
  __int64 v87; // r8
  unsigned __int64 v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rcx
  int v92; // ebp
  unsigned __int64 v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rbp
  __int64 v98; // rbx
  __int64 *v99; // rax
  __int64 v100; // rdi
  const char *v101; // rdx
  unsigned int **v102; // rcx
  int v103; // r8d
  __int64 v104; // rdx
  __int64 v105; // rcx
  int v106; // r8d
  __int64 v107; // rcx
  const char *v108; // rax
  __int64 *v109; // rsi
  __int64 v110; // rdx
  __int64 v111; // rcx
  const char *v112; // r8
  __int64 v113; // rax
  __int64 *v114; // rax
  void *v115; // r14
  __int64 v116; // rax
  size_t v117; // r11
  __int64 v118; // rbx
  __int64 v119; // r14
  __int64 *v120; // rdx
  __int64 v121; // rdi
  __int64 v122; // rsi
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // [rsp+8h] [rbp-170h]
  __int64 v130; // [rsp+10h] [rbp-168h]
  _DWORD *v131; // [rsp+18h] [rbp-160h]
  const char *v132; // [rsp+20h] [rbp-158h]
  const char *v133; // [rsp+20h] [rbp-158h]
  int n; // [rsp+28h] [rbp-150h]
  size_t nb; // [rsp+28h] [rbp-150h]
  size_t na; // [rsp+28h] [rbp-150h]
  unsigned __int64 v137; // [rsp+30h] [rbp-148h]
  const void **v138; // [rsp+30h] [rbp-148h]
  const char *v139; // [rsp+30h] [rbp-148h]
  unsigned __int64 v140; // [rsp+38h] [rbp-140h]
  int v141; // [rsp+40h] [rbp-138h]
  int v142; // [rsp+48h] [rbp-130h]
  int v143; // [rsp+54h] [rbp-124h]
  __int64 v144; // [rsp+58h] [rbp-120h]
  __m128i v145; // [rsp+60h] [rbp-118h] BYREF
  __int64 v146; // [rsp+70h] [rbp-108h]
  __int64 v147; // [rsp+80h] [rbp-F8h] BYREF
  __int128 v148; // [rsp+88h] [rbp-F0h]
  __int64 v149; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v150; // [rsp+A8h] [rbp-D0h]
  __int64 v151; // [rsp+C0h] [rbp-B8h] BYREF
  __int128 v152; // [rsp+C8h] [rbp-B0h]
  _BYTE v153[32]; // [rsp+D8h] [rbp-A0h] BYREF
  _QWORD v154[2]; // [rsp+F8h] [rbp-80h] BYREF
  _QWORD v155[2]; // [rsp+108h] [rbp-70h] BYREF
  _QWORD v156[2]; // [rsp+118h] [rbp-60h] BYREF
  int v157; // [rsp+128h] [rbp-50h]
  unsigned __int64 v158; // [rsp+138h] [rbp-40h]

  v158 = __readfsqword(0x28u);
  *a3 = 0;
  *a4 = 1;
  *a5 = -1;
  v12 = *(_QWORD *)(a1 + 64);
  if ( !v12 || (unsigned int)(*(_DWORD *)(v12 + 60) - 1) > 1 )
  {
    v18 = a2[1];
    v19 = *a2;
    if ( a2[2] < (unsigned __int64)(v18 + 1) )
    {
      v48 = qvector_reserve((__int64)a2, v19, v18 + 1, 24);
      v18 = a2[1];
      *a2 = v48;
      v19 = v48;
    }
    sub_81980(v19 + 24 * v18, "Empty model");
    v16 = a2[1] + 1;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v12 + 72) != a11[4] )
  {
    v20 = a2[1];
    v21 = *a2;
    if ( a2[2] < (unsigned __int64)(v20 + 1) )
    {
      v55 = qvector_reserve((__int64)a2, v21, v20 + 1, 24);
      v20 = a2[1];
      *a2 = v55;
      v21 = v55;
    }
    sub_81980(v21 + 24 * v20, "Inconsistent place for model");
    v16 = a2[1] + 1;
    goto LABEL_9;
  }
  v13 = a11[5];
  if ( v13 < 0 || v13 >= *(_DWORD *)(*(_QWORD *)(v12 + 64) + 64LL) )
  {
    v14 = a2[1];
    v15 = *a2;
    if ( a2[2] < (unsigned __int64)(v14 + 1) )
    {
      v47 = qvector_reserve((__int64)a2, v15, v14 + 1, 24);
      v14 = a2[1];
      *a2 = v47;
      v15 = v47;
    }
    sub_81980(v15 + 24 * v14, "Invalid block index");
    v16 = a2[1] + 1;
LABEL_9:
    a2[1] = v16;
    return 1;
  }
  v23 = a3;
  v130 = sub_3D2B20(*(_QWORD *)(a1 + 64), v13, a6);
  v24 = a11[6];
  v129 = sub_3D2B60(v12, a11[5], v24);
  v27 = *(double *)(v12 + 64);
  v146 = v12 + 160;
  v28 = v27;
  v29 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)(*(_QWORD *)&v27 + 1496LL)),
          (__m128i)*(unsigned __int64 *)&v27);
  v145 = v29;
  if ( !(v26 | v25) )
  {
    if ( (**(_DWORD **)&v27 & 0x400000) != 0 )
      goto LABEL_63;
    v147 = 0;
    v148 = 0;
    get_ash();
    sub_6B870(&v147);
    sub_3D7560(a2, (__int64)&v147, v56, v57);
    func = get_func();
    if ( func )
    {
      v151 = 0;
      v152 = 0;
      if ( get_func_cmt() > 0 )
        sub_3DBA30(a2, (const char **)&v151);
      if ( v151 )
      {
        *(_QWORD *)&v152 = 0;
        qfree(v151);
      }
    }
    v149 = 0;
    v150 = 0;
    if ( !(unsigned __int8)print_type() )
    {
      *(_QWORD *)&v150 = 0;
      if ( get_ea_name() < 0 || !tag_strlen() )
      {
        *(_QWORD *)&v150 = 0;
        get_ea_name();
      }
    }
    sub_3D7560(a2, (__int64)&v149, v59, v60);
    if ( func )
    {
      v152 = 0;
      v151 = 0;
      if ( get_func_cmt() > 0 )
        sub_3DBA30(a2, (const char **)&v151);
      if ( v151 )
      {
        *(_QWORD *)&v152 = 0;
        qfree(v151);
      }
    }
    v61 = a2[1];
    v62 = *a2;
    if ( a2[2] < (unsigned __int64)(v61 + 1) )
    {
      v123 = qvector_reserve((__int64)a2, v62, v61 + 1, 24);
      *a2 = v123;
      v61 = a2[1];
      v62 = v123;
    }
    v29.m128i_i64[0] = 0;
    v63 = v62 + 24 * v61;
    *(_QWORD *)v63 = 0;
    *(_OWORD *)(v63 + 8) = 0;
    v64 = (_BYTE *)qvector_reserve(v63, 0, 1, 1);
    *(_QWORD *)v63 = v64;
    *(_QWORD *)(v63 + 8) = 1;
    *v64 = 0;
    v65 = v149;
    ++a2[1];
    if ( v65 )
    {
      *(_QWORD *)&v150 = 0;
      qfree(v65);
    }
    if ( v147 )
    {
      *(_QWORD *)&v148 = 0;
      qfree(v147);
    }
    v25 = a11[6];
    v24 = v25;
  }
  if ( !v25 )
  {
    if ( (**(_DWORD **)(v12 + 64) & 0x400000) == 0 )
    {
      v29.m128i_i64[0] = 0;
      v149 = 0;
      v150 = 0;
      sub_6B870(&v149);
      sub_FAAD0(&v149);
      v101 = "Predecessors";
      v102 = (unsigned int **)(v130 + 344);
      if ( !*(_DWORD *)(v130 + 72) )
      {
        v102 = (unsigned int **)(v130 + 368);
        v101 = "Successors";
      }
      v103 = 0;
      if ( *(_DWORD *)(v12 + 80) - 1 >= 0 )
        v103 = *(_DWORD *)(v12 + 80) - 1;
      sub_3D9810(&v149, (__int64)&v145, v101, v102, v103);
      sub_3D7560(a2, (__int64)&v149, v104, v105);
      if ( (**(_DWORD **)(v12 + 64) & 0x400000) == 0 )
      {
        v29.m128i_i64[0] = 0;
        v151 = 0;
        v109 = &v151;
        v152 = 0;
        sub_1B6B20(v130, &v151, 0.0, v28, a8, a9);
        v112 = (const char *)v151;
        v133 = (const char *)(v151 + 24 * v152);
        if ( (const char *)v151 != v133 )
        {
          do
          {
            v117 = *((_QWORD *)v112 + 1);
            v115 = nullptr;
            if ( v117 )
            {
              v138 = (const void **)v112;
              nb = *((_QWORD *)v112 + 1);
              v115 = (void *)qalloc_or_throw(nb, (__int64)v109, v110, v111);
              memcpy(v115, *v138, nb);
              v112 = (const char *)v138;
              v117 = nb;
            }
            v113 = a2[1];
            v109 = (__int64 *)*a2;
            v110 = v113 + 1;
            if ( a2[2] < (unsigned __int64)(v113 + 1) )
            {
              v139 = v112;
              na = v117;
              v116 = qvector_reserve((__int64)a2, (__int64)v109, v110, 24);
              *a2 = v116;
              v109 = (__int64 *)v116;
              v112 = v139;
              v113 = a2[1];
              v117 = na;
            }
            v112 += 24;
            v114 = &v109[3 * v113];
            v29 = _mm_unpacklo_epi64((__m128i)v117, (__m128i)v117);
            *v114 = (__int64)v115;
            *(__m128i *)(v114 + 1) = v29;
            ++a2[1];
          }
          while ( v133 != v112 );
          v112 = (const char *)v151;
        }
        if ( v112 )
        {
          if ( (_QWORD)v152 )
          {
            v131 = v23;
            v118 = 0;
            v119 = v152;
            do
            {
              v120 = (__int64 *)&v112[24 * v118];
              v121 = *v120;
              if ( *v120 )
              {
                v120[1] = 0;
                qfree(v121);
                v112 = (const char *)v151;
              }
              ++v118;
            }
            while ( v119 != v118 );
            v23 = v131;
          }
          *(_QWORD *)&v152 = 0;
          qfree((__int64)v112);
        }
      }
      if ( v149 )
      {
        *(_QWORD *)&v150 = 0;
        qfree(v149);
      }
      v24 = a11[6];
      goto LABEL_19;
    }
    v26 = a11[5];
LABEL_63:
    v24 = v25;
    goto LABEL_20;
  }
LABEL_19:
  v26 = a11[5];
LABEL_20:
  v30 = sub_3D2E20((_QWORD *)v12, v26, v24, 1);
  if ( v30 && *(_QWORD *)(v30 + 8) > 1u )
    sub_3DBA30(a2, (const char **)v30);
  if ( !v129 )
  {
    result = a2[1];
    if ( !a11[6] )
    {
      if ( !result )
      {
        v122 = *a2;
        if ( !a2[2] )
        {
          v127 = qvector_reserve((__int64)a2, v122, 1, 24);
          *a2 = v127;
          v122 = v127;
          result = a2[1];
        }
        sub_81980(v122 + 24 * result, "; empty block");
        ++a2[1];
      }
      if ( *(_QWORD *)(v130 + 48) || (**(_DWORD **)(v12 + 64) & 0x400000) != 0 )
        return a2[1];
      if ( !*(_QWORD *)(v130 + 376) )
      {
        v151 = 0;
        v152 = 0;
        get_ash();
        sub_6B870(&v151);
        sub_3D7560(a2, (__int64)&v151, v49, v50);
        if ( v151 )
        {
          *(_QWORD *)&v152 = 0;
          qfree(v151);
        }
      }
      v51 = a2[1];
      v52 = *a2;
      if ( a2[2] < (unsigned __int64)(v51 + 1) )
      {
        v128 = qvector_reserve((__int64)a2, v52, v51 + 1, 24);
        *a2 = v128;
        v52 = v128;
        v51 = a2[1];
      }
      v53 = v52 + 24 * v51;
      *(_QWORD *)v53 = 0;
      *(_OWORD *)(v53 + 8) = 0;
      v54 = (_BYTE *)qvector_reserve(v53, 0, 1, 1);
      *(_QWORD *)v53 = v54;
      *(_QWORD *)(v53 + 8) = 1;
      *v54 = 0;
      result = a2[1] + 1;
      a2[1] = result;
    }
    return result;
  }
  v151 = -1;
  v154[0] = 0xFFFFFFFF00000000LL;
  *(_QWORD *)&v152 = 0;
  DWORD2(v152) = -1;
  v154[1] = 0;
  v155[0] = 0xFFFFFFFF00000000LL;
  v155[1] = 0;
  v156[0] = 0xFFFFFFFF00000000LL;
  v156[1] = 0;
  sub_330970((__int64)v153, -1);
  v157 = 0;
  v31 = sub_137710(*(_QWORD *)(v12 + 64), v129, *(_DWORD *)(v130 + 72), *(double *)v29.m128i_i64);
  v32 = _mm_cvtsi32_si128(*(_DWORD *)(v130 + 72));
  v33 = *(const char **)(v129 + 24);
  LODWORD(v152) = *(_DWORD *)v129;
  *(_QWORD *)&v34 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31), v32).m128i_u64[0];
  v151 = (__int64)v33;
  *(double *)((char *)&v152 + 4) = v34;
  v132 = "DELETED";
  if ( !sub_137D90(*(_QWORD *)(v12 + 64), (__int64)&v151, 9u, v34) )
  {
    v107 = sub_3CEF80(*(_QWORD *)(v12 + 64), (__int64)&v151, (_DWORD *)v129, v34);
    v108 = "ADDED BY USER";
    if ( !v107 )
      v108 = nullptr;
    v132 = v108;
  }
  sub_11CDA0((__int64)v156);
  sub_11CDA0((__int64)v155);
  sub_11CDA0((__int64)v154);
  v35 = a11[6];
  v147 = 0;
  v148 = 0;
  n = v35;
  if ( *(_BYTE *)(v12 + 84) )
  {
    sub_6B870(&v147);
    if ( **(int **)(v12 + 64) < 0 && *(_QWORD *)(v129 + 24) != -1 )
      sub_FAAD0(&v147);
    *a4 = 6;
    v36 = *(int *)(v12 + 76);
    if ( v36 > 0 )
      goto LABEL_27;
  }
  else
  {
    v36 = *(int *)(v12 + 76);
    if ( v36 > 0 )
LABEL_27:
      sub_3CFE40(&v147, v36);
  }
  v141 = tag_strlen();
  v37 = **(_DWORD **)(v12 + 64);
  v38 = (v37 >> 20) & 4;
  if ( (v37 & 0x40000000) != 0 )
    v38 = (**(_DWORD **)(v12 + 64) >> 20) & 4 | 2;
  if ( (v37 & 0x20000000) != 0 )
    v38 |= 1u;
  sub_1B43D0((int *)v129, &v147, (__int64)&v145, v38, (__m128)0LL);
  v142 = tag_strlen();
  v143 = *(_DWORD *)(v12 + 76);
  if ( v132 )
  {
    v39 = 0;
    v40 = *(_DWORD *)(v12 + 80) - 1;
    if ( v40 >= 0 )
      v39 = *(_DWORD *)(v12 + 80) - 1;
    if ( v39 > (int)tag_strlen() && v40 > 0 )
      sub_3CFE40(&v147, v39);
    v41 = v148;
    v42 = 2;
    if ( (_QWORD)v148 )
    {
      v42 = v148 + 1;
      v41 = v148 - 1;
    }
    v43 = v147;
    if ( *((_QWORD *)&v148 + 1) < v42 )
    {
      v137 = v42;
      v147 = qvector_reserve((__int64)&v147, v147, v42, 1);
      v42 = v137;
      v43 = v147;
    }
    *(_QWORD *)&v148 = v42;
    *(_BYTE *)(v43 + v41) = 32;
    *(_BYTE *)(v147 + v41 + 1) = 0;
    get_ash();
    sub_FAAD0(&v147);
  }
  else if ( v129 == *(_QWORD *)(v130 + 56) && *(_QWORD *)(v130 + 376) )
  {
    v106 = 0;
    if ( *(_DWORD *)(v12 + 80) - 1 >= 0 )
      v106 = *(_DWORD *)(v12 + 80) - 1;
    sub_3D9810(&v147, (__int64)&v145, "Successors", (unsigned int **)(v130 + 368), v106);
  }
  v44 = sub_3D2E20((_QWORD *)v12, *(_DWORD *)(v130 + 72), n, 0);
  if ( v44 && *(_QWORD *)(v44 + 8) > 1u )
  {
    v149 = 0;
    v150 = 0;
    sub_3D14F0((const char **)v44, &v149, "\n", 0);
    if ( (_QWORD)v150 )
    {
      v85 = 0;
      if ( *(_DWORD *)(v12 + 80) - 1 >= 0 )
        v85 = *(_DWORD *)(v12 + 80) - 1;
      v86 = v85;
      if ( *(_DWORD *)(v12 + 80) - 1 > 0 )
        sub_3CFE40(&v147, v85);
      v87 = v148;
      v88 = 2;
      if ( (_QWORD)v148 )
      {
        v88 = v148 + 1;
        v87 = v148 - 1;
      }
      v89 = v147;
      if ( *((_QWORD *)&v148 + 1) < v88 )
      {
        v144 = v87;
        v140 = v88;
        v147 = qvector_reserve((__int64)&v147, v147, v88, 1);
        v87 = v144;
        v89 = v147;
        v88 = v140;
      }
      *(_QWORD *)&v148 = v88;
      *(_BYTE *)(v89 + v87) = 32;
      *(_BYTE *)(v147 + v87 + 1) = 0;
      get_ash();
      sub_FAAD0(&v147);
      *v23 = a2[1];
      sub_3D7560(a2, (__int64)&v147, v90, v91);
      if ( (unsigned __int64)v150 > 1 )
      {
        v92 = v86 + 1;
        v93 = 1;
        do
        {
          v151 = 0;
          v152 = 0;
          if ( *(_BYTE *)(v12 + 84) )
          {
            sub_6B870(&v151);
            if ( **(int **)(v12 + 64) < 0 && *(_QWORD *)(v129 + 24) != -1 )
              sub_FAAD0(&v151);
          }
          if ( v92 > 0 )
            sub_3CFE40(&v151, v92);
          get_ash();
          sub_FAAD0(&v151);
          sub_3D7560(a2, (__int64)&v151, v94, v95);
          if ( v151 )
          {
            *(_QWORD *)&v152 = 0;
            qfree(v151);
          }
          ++v93;
        }
        while ( v93 < (unsigned __int64)v150 );
      }
    }
    else
    {
      *v23 = a2[1];
      sub_3D7560(a2, (__int64)&v147, v83, v84);
    }
    v96 = v149;
    if ( v149 )
    {
      v97 = v150;
      if ( (_QWORD)v150 )
      {
        v98 = 0;
        do
        {
          v99 = (__int64 *)(v96 + 24 * v98);
          v100 = *v99;
          if ( *v99 )
          {
            v99[1] = 0;
            qfree(v100);
            v96 = v149;
          }
          ++v98;
        }
        while ( v97 != v98 );
      }
      *(_QWORD *)&v150 = 0;
      qfree(v96);
    }
  }
  else
  {
    *v23 = a2[1];
    sub_3D7560(a2, (__int64)&v147, v45, v46);
  }
  if ( v147 )
  {
    *(_QWORD *)&v148 = 0;
    qfree(v147);
  }
  if ( *(_QWORD *)(v130 + 56) != v129 || (**(_DWORD **)(v12 + 64) & 0x400000) != 0 )
    return a2[1];
  if ( *(_QWORD *)(v130 + 376) )
  {
    if ( !v132 )
      goto LABEL_103;
    v151 = 0;
    v152 = 0;
    v66 = v142 + v143 - v141;
    if ( *(_BYTE *)(v12 + 84) )
    {
      sub_6B870(&v151);
      v67 = *(_DWORD *)(v12 + 80) - 1;
      if ( v67 < 0 )
        v67 = 0;
      if ( v67 < v66 )
        v67 = v142 + v143 - v141;
      if ( !v67 )
      {
LABEL_96:
        v68 = (const char *)v151;
        if ( (_QWORD)v152 )
        {
          v69 = v152 - 1;
          v70 = v152 + 1;
        }
        else
        {
          v69 = 0;
          v70 = 2;
        }
        if ( *((_QWORD *)&v152 + 1) >= v70 )
        {
LABEL_99:
          *(_QWORD *)&v152 = v70;
          v68[v69] = 32;
          *(_BYTE *)(v151 + v69 + 1) = 0;
          get_ash();
          sub_FAAD0(&v151);
          v72 = *(_QWORD *)(v130 + 368);
          v73 = v72 + 4LL * *(_QWORD *)(v130 + 376);
          for ( i = (const char *)&unk_418793; v73 != v72; i = ", " )
          {
            sub_FAAD0(&v151);
            v72 += 4;
          }
          sub_3D7560(a2, (__int64)&v151, (__int64)i, v71);
          v75 = (const char *)v151;
          if ( v151 )
            goto LABEL_102;
          goto LABEL_103;
        }
LABEL_183:
        v151 = qvector_reserve((__int64)&v151, (__int64)v68, v70, 1);
        v68 = (const char *)v151;
        goto LABEL_99;
      }
    }
    else
    {
      v67 = *(_DWORD *)(v12 + 80) - 1;
      if ( v67 < 0 )
        v67 = 0;
      if ( v67 < v66 )
        v67 = v142 + v143 - v141;
      if ( !v67 )
      {
        v68 = nullptr;
        v70 = 2;
        v69 = 0;
        goto LABEL_183;
      }
    }
    sub_3CFE40(&v151, v67);
    goto LABEL_96;
  }
  v151 = 0;
  v152 = 0;
  get_ash();
  sub_6B870(&v151);
  sub_3D7560(a2, (__int64)&v151, v124, v125);
  v75 = (const char *)v151;
  if ( v151 )
  {
LABEL_102:
    *(_QWORD *)&v152 = 0;
    qfree((__int64)v75);
  }
LABEL_103:
  v76 = a2[1];
  v77 = *a2;
  if ( a2[2] < (unsigned __int64)(v76 + 1) )
  {
    v126 = qvector_reserve((__int64)a2, v77, v76 + 1, 24);
    v76 = a2[1];
    *a2 = v126;
    v77 = v126;
  }
  v78 = v77 + 24 * v76;
  *(_QWORD *)v78 = 0;
  *(_OWORD *)(v78 + 8) = 0;
  v79 = (_BYTE *)qvector_reserve(v78, 0, 1, 1);
  *(_QWORD *)v78 = v79;
  *(_QWORD *)(v78 + 8) = 1;
  *v79 = 0;
  result = a2[1] + 1;
  a2[1] = result;
  if ( *(_QWORD *)(v130 + 56) == v129 )
  {
    v80 = *(_DWORD **)(v12 + 64);
    if ( a11[5] == v80[16] - 1 && (*v80 & 0x400000) == 0 )
    {
      v150 = 0;
      v149 = 0;
      v151 = 0;
      v152 = 0;
      get_ea_name();
      get_ash();
      sub_6B870(&v149);
      if ( v151 )
      {
        *(_QWORD *)&v152 = 0;
        qfree(v151);
      }
      sub_3D7560(a2, (__int64)&v149, v81, v82);
      if ( v149 )
      {
        *(_QWORD *)&v150 = 0;
        qfree(v149);
      }
    }
    return a2[1];
  }
  return result;
}

