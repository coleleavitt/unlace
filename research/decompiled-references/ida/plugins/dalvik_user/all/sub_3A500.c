__int64 __fastcall sub_3A500(char *a1, const char *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 *v5; // r14
  _QWORD *v6; // rax
  const char *v7; // rdx
  unsigned int v8; // r15d
  int v10; // r9d
  const char *(__fastcall *v11)(__int64); // rax
  __int64 v12; // rax
  _BYTE *v13; // rax
  __int64 v14; // rsi
  const char *(__fastcall *v15)(__int64); // rax
  unsigned __int8 *v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rsi
  char v24; // r11
  __int64 *v25; // rsi
  __int64 *v26; // rsi
  __int64 (__fastcall *v27)(__int64); // rax
  _BYTE *v28; // rax
  void *v29; // rbp
  __int64 (__fastcall *v30)(__int64); // rax
  __int64 v31; // rax
  void *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rbp
  void *v35; // r13
  __m128i v36; // xmm1
  void *v37; // rdi
  __m128i v38; // xmm1
  unsigned int v39; // eax
  void *v40; // rdx
  unsigned int v41; // eax
  __int64 (__fastcall *v42)(__int64); // rax
  _BYTE *v43; // rax
  void *v44; // rbp
  __int64 (__fastcall *v45)(__int64); // rax
  __int64 v46; // rax
  void *v47; // rax
  __int64 v48; // rdx
  void *v49; // rdi
  __m128i v50; // xmm1
  __int64 (__fastcall *v51)(__int64); // rax
  _BYTE *v52; // rax
  int v53; // ebp
  __int64 (__fastcall *v54)(__int64); // rax
  __int64 v55; // rax
  void *v56; // rax
  __int64 v57; // rdx
  void *v58; // rdi
  __m128i v59; // xmm1
  __int64 v60; // rax
  __int64 (__fastcall *v61)(__int64); // rax
  _BYTE *v62; // rax
  void *v63; // rbp
  __int64 (__fastcall *v64)(__int64); // rax
  __int64 v65; // rax
  _QWORD *v66; // rbp
  __m128i *v67; // rsi
  __m128i si128; // xmm0
  _QWORD *v69; // rax
  _QWORD *v70; // r8
  void *v71; // rsi
  __int64 v72; // rax
  unsigned __int64 v73; // rbp
  char v74; // bp
  __int64 (__fastcall *v75)(__int64); // rax
  char *v76; // rax
  void *v77; // rbp
  __int64 (__fastcall *v78)(__int64); // rax
  __int64 v79; // rax
  __int64 (__fastcall *v80)(__int64); // rax
  _BYTE *v81; // rax
  void *v82; // rbp
  __int64 (__fastcall *v83)(__int64); // rax
  __int64 v84; // rax
  __int64 *v85; // rsi
  __int64 (__fastcall *v86)(__int64); // rax
  _BYTE *v87; // rax
  int v88; // ebp
  __int64 (__fastcall *v89)(__int64); // rax
  __int64 v90; // rax
  void *v91; // rax
  __int64 v92; // rdx
  void *v93; // rdi
  __m128i v94; // xmm1
  __int64 v95; // rax
  __int64 v96; // rcx
  char v97; // si
  __int64 (__fastcall *v98)(__int64); // rax
  char *v99; // rax
  void *v100; // rsi
  __int64 (__fastcall *v101)(__int64); // rax
  __int64 v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // rdi
  void *v105; // rsi
  __int64 *v106; // rsi
  char v107; // bp
  __int64 v108; // rbp
  void *v109; // r13
  __m128i v110; // xmm0
  __int64 v111; // rax
  unsigned __int64 v112; // rbp
  char v113; // dl
  unsigned int v114; // eax
  __int64 *v115; // rsi
  void *v116; // rbp
  __int64 v117; // rbp
  void *v118; // r13
  __m128i v119; // xmm0
  __int64 *v120; // rsi
  int v121; // ebp
  __int64 v122; // rbp
  void *v123; // r13
  __m128i v124; // xmm0
  __m128i v125; // [rsp+0h] [rbp-158h] BYREF
  __int64 *v126; // [rsp+10h] [rbp-148h]
  size_t n; // [rsp+18h] [rbp-140h]
  void *src; // [rsp+20h] [rbp-138h]
  __int64 v129; // [rsp+28h] [rbp-130h]
  __int64 v130; // [rsp+38h] [rbp-120h] BYREF
  __int64 v131; // [rsp+40h] [rbp-118h] BYREF
  void *v132; // [rsp+48h] [rbp-110h]
  void *dest; // [rsp+50h] [rbp-108h] BYREF
  __m128i v134; // [rsp+58h] [rbp-100h] BYREF
  __m128i v135[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v136; // [rsp+90h] [rbp-C8h]
  __int64 v137; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v138; // [rsp+A8h] [rbp-B0h]
  __int128 v139; // [rsp+B0h] [rbp-A8h]
  __int64 v140; // [rsp+C0h] [rbp-98h]
  __int128 v141; // [rsp+C8h] [rbp-90h]
  __int64 v142; // [rsp+D8h] [rbp-80h]
  __int128 v143; // [rsp+E0h] [rbp-78h]
  int v144; // [rsp+F0h] [rbp-68h]
  int v145; // [rsp+F4h] [rbp-64h]
  char v146; // [rsp+F8h] [rbp-60h]
  char v147; // [rsp+100h] [rbp-58h]
  void *v148; // [rsp+108h] [rbp-50h]
  char v149; // [rsp+110h] [rbp-48h]
  unsigned __int64 v150; // [rsp+118h] [rbp-40h]

  v150 = __readfsqword(0x28u);
  v3 = (__int64)a2;
  v4 = sub_135E0(a1, a2);
  v5 = *((__int64 **)a2 + 1);
  if ( (debug & 0x40000) != 0 )
  {
    v6 = (_QWORD *)v5[6];
    v7 = nptr;
    if ( v6[5] )
    {
      v7 = (const char *)v6[4];
      a2 = nptr;
      if ( !v6[2] )
        goto LABEL_4;
    }
    else
    {
      a2 = nptr;
      if ( !v6[2] )
      {
LABEL_4:
        sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo %s`%s\n", a2, v7);
        goto LABEL_5;
      }
    }
    a2 = (const char *)v6[1];
    goto LABEL_4;
  }
LABEL_5:
  if ( !*(_BYTE *)(v5[6] + 88) || !(unsigned __int8)sub_33190((__int64)v5, (__int64)a2) )
    return 0;
  v11 = *(const char *(__fastcall **)(__int64))(*v5 + 32);
  if ( v11 == sub_30380 )
  {
    v12 = v5[6];
    if ( !*(_QWORD *)(v12 + 40) )
      goto LABEL_21;
    v13 = *(_BYTE **)(v12 + 32);
  }
  else
  {
    v13 = (_BYTE *)v11((__int64)v5);
  }
  if ( !*v13 || (v14 = v5[6], *(_BYTE *)(v14 + 112)) )
  {
LABEL_21:
    if ( word_7FB4A == 1 )
    {
      if ( *(int *)(v4 + 1072) > 27 )
      {
LABEL_23:
        v17 = v5[6];
        v136 = 0;
        *(_BYTE *)(v17 + 112) = 1;
        v18 = v5[4];
        v19 = v5[5];
        v135[1] = 0;
        v135[0].m128i_i64[0] = 0;
        if ( !(unsigned __int8)sub_27DB0(v4, &v130, v135, v18, v19, v10) )
        {
          if ( (debug & 0x40000) != 0 )
            sub_111A0(
              (__int64)"DEXSIP: aloc_var_get_tinfo could not get thread and frame ids of clazz %llX method %llX\n",
              v5[4],
              v5[5]);
          return 0;
        }
        v146 = 0;
        v149 = 0;
        v147 = 73;
        v142 = 0;
        v141 = 0;
        v143 = 0;
        v20 = v5[6];
        v138 = 0;
        LODWORD(v20) = *(_DWORD *)(v20 + 84);
        v139 = 0;
        v140 = 0;
        v145 = v20;
        v21 = v5[6];
        v125.m128i_i64[0] = (__int64)&dest;
        v22 = *(_QWORD *)v21;
        LODWORD(v21) = *(_DWORD *)(v21 + 80);
        v137 = v22;
        v144 = v21;
        v23 = (__int64 *)v5[6];
        v126 = &v137;
        v24 = sub_33080((__int64)&dest, v23, v130, v135[0].m128i_i64[0], 99);
        if ( v24 )
          v24 = (_WORD)dest == 0;
        v25 = (__int64 *)v5[6];
        LOBYTE(n) = v24;
        v126 = &v137;
        v8 = sub_33080(v125.m128i_i64[0], v25, v130, v135[0].m128i_i64[0], 73);
        if ( (_BYTE)v8 )
          LOBYTE(v8) = (_WORD)dest == 0;
        if ( !(_BYTE)n )
        {
          v26 = (__int64 *)v5[6];
          v126 = &v137;
          if ( !(unsigned __int8)sub_33080(v125.m128i_i64[0], v26, v130, v135[0].m128i_i64[0], 74) || (_WORD)dest )
          {
            if ( (_BYTE)v8 )
            {
              if ( (debug & 0x40000) != 0 )
              {
                v126 = &v137;
                sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo setting INT type\n", 0.0);
              }
              v147 = 73;
              v126 = &v137;
              sub_51F90(v4 + 864, &v137);
              v51 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
              if ( v51 == sub_30370 )
                v52 = (_BYTE *)(v5[6] + 96);
              else
                v52 = (_BYTE *)((__int64 (__fastcall *)(__int64 *, double))v51)(v5, 0.0);
              *v52 = 73;
              v53 = (int)v148;
              v54 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
              if ( v54 == sub_30370 )
                v55 = v5[6] + 96;
              else
                v55 = ((__int64 (__fastcall *)(__int64 *, double))v54)(v5, 0.0);
              *(_DWORD *)(v55 + 8) = v53;
              v134 = 0;
              dest = nullptr;
              v56 = (void *)qvector_reserve();
              v57 = v134.m128i_i64[0];
              dest = v56;
              if ( v134.m128i_i64[0] <= 1uLL )
              {
                *((_BYTE *)v56 + v134.m128i_i64[0]) = 73;
                if ( !v57 )
                  *((_BYTE *)dest + 1) = 73;
              }
              v134.m128i_i64[0] = 2;
              *((_BYTE *)dest + 1) = 0;
              v34 = v5[6];
              v35 = dest;
              v36 = _mm_loadu_si128(&v134);
              v134 = 0;
              dest = nullptr;
              if ( *(_QWORD *)(v34 + 32) )
              {
                *(_QWORD *)(v34 + 40) = 0;
                v125 = v36;
                qfree();
                v58 = dest;
                v59 = _mm_load_si128(&v125);
                *(_QWORD *)(v34 + 32) = v35;
                *(__m128i *)(v34 + 40) = v59;
                if ( !v58 )
                  goto LABEL_47;
                goto LABEL_46;
              }
            }
            else
            {
              v85 = (__int64 *)v5[6];
              v126 = &v137;
              if ( !(unsigned __int8)sub_33080(v125.m128i_i64[0], v85, v130, v135[0].m128i_i64[0], 83) || (_WORD)dest )
              {
                v106 = (__int64 *)v5[6];
                v126 = &v137;
                if ( !(unsigned __int8)sub_33080(v125.m128i_i64[0], v106, v130, v135[0].m128i_i64[0], 66) || (_WORD)dest )
                {
                  v115 = (__int64 *)v5[6];
                  v126 = &v137;
                  if ( !(unsigned __int8)sub_33080(v125.m128i_i64[0], v115, v130, v135[0].m128i_i64[0], 68)
                    || (_WORD)dest )
                  {
                    v120 = (__int64 *)v5[6];
                    v126 = &v137;
                    if ( !(unsigned __int8)sub_33080(v125.m128i_i64[0], v120, v130, v135[0].m128i_i64[0], 70)
                      || (_WORD)dest )
                    {
                      goto LABEL_49;
                    }
                    if ( (debug & 0x40000) != 0 )
                    {
                      v126 = &v137;
                      sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo setting FLOAT type\n", 0.0);
                    }
                    v147 = 70;
                    v126 = &v137;
                    sub_51F90(v4 + 864, &v137);
                    *(_BYTE *)(*(__int64 (__fastcall **)(__int64 *, double))(*v5 + 24))(v5, 0.0) = 70;
                    v121 = (int)v148;
                    *(_DWORD *)((*(__int64 (__fastcall **)(__int64 *))(*v5 + 24))(v5) + 8) = v121;
                    sub_347A0(v125.m128i_i64[0], 1, 70);
                    v122 = v5[6];
                    v123 = dest;
                    v124 = _mm_loadu_si128(&v134);
                    dest = nullptr;
                    v134 = 0;
                    if ( *(_QWORD *)(v122 + 32) )
                    {
                      v125 = v124;
                      *(_QWORD *)(v122 + 40) = 0;
                      qfree();
                      v124 = _mm_load_si128(&v125);
                    }
                    *(_QWORD *)(v122 + 32) = v123;
                    *(__m128i *)(v122 + 40) = v124;
                    if ( !dest )
                      goto LABEL_47;
                  }
                  else
                  {
                    if ( (debug & 0x40000) != 0 )
                    {
                      v126 = &v137;
                      sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo setting DOUBLE type\n", 0.0);
                    }
                    v147 = 68;
                    v126 = &v137;
                    sub_51F90(v4 + 864, &v137);
                    *(_BYTE *)(*(__int64 (__fastcall **)(__int64 *, double))(*v5 + 24))(v5, 0.0) = 68;
                    v116 = v148;
                    *(_QWORD *)((*(__int64 (__fastcall **)(__int64 *))(*v5 + 24))(v5) + 8) = v116;
                    sub_347A0(v125.m128i_i64[0], 1, 68);
                    v117 = v5[6];
                    v118 = dest;
                    v119 = _mm_loadu_si128(&v134);
                    dest = nullptr;
                    v134 = 0;
                    if ( *(_QWORD *)(v117 + 32) )
                    {
                      v125 = v119;
                      *(_QWORD *)(v117 + 40) = 0;
                      qfree();
                      v119 = _mm_load_si128(&v125);
                    }
                    *(_QWORD *)(v117 + 32) = v118;
                    *(__m128i *)(v117 + 40) = v119;
                    if ( !dest )
                      goto LABEL_47;
                  }
                }
                else
                {
                  if ( (debug & 0x40000) != 0 )
                  {
                    v126 = &v137;
                    sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo setting BYTE type\n", 0.0);
                  }
                  v147 = 66;
                  v126 = &v137;
                  sub_51F90(v4 + 864, &v137);
                  *(_BYTE *)(*(__int64 (__fastcall **)(__int64 *, double))(*v5 + 24))(v5, 0.0) = 66;
                  v107 = (char)v148;
                  *(_BYTE *)((*(__int64 (__fastcall **)(__int64 *))(*v5 + 24))(v5) + 8) = v107;
                  sub_347A0(v125.m128i_i64[0], 1, 66);
                  v108 = v5[6];
                  v109 = dest;
                  dest = nullptr;
                  v110 = _mm_loadu_si128(&v134);
                  v134 = 0;
                  if ( *(_QWORD *)(v108 + 32) )
                  {
                    v125 = v110;
                    *(_QWORD *)(v108 + 40) = 0;
                    qfree();
                    v110 = _mm_load_si128(&v125);
                  }
                  *(_QWORD *)(v108 + 32) = v109;
                  *(__m128i *)(v108 + 40) = v110;
                  if ( !dest )
                    goto LABEL_47;
                }
                goto LABEL_46;
              }
              if ( (debug & 0x40000) != 0 )
              {
                v126 = &v137;
                sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo setting SHORT type\n", 0.0);
              }
              v147 = 83;
              v126 = &v137;
              sub_51F90(v4 + 864, &v137);
              v86 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
              if ( v86 == sub_30370 )
                v87 = (_BYTE *)(v5[6] + 96);
              else
                v87 = (_BYTE *)((__int64 (__fastcall *)(__int64 *, double))v86)(v5, 0.0);
              *v87 = 83;
              v88 = (int)v148;
              v89 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
              if ( v89 == sub_30370 )
                v90 = v5[6] + 96;
              else
                v90 = ((__int64 (__fastcall *)(__int64 *, double))v89)(v5, 0.0);
              *(_DWORD *)(v90 + 8) = v88;
              v134 = 0;
              dest = nullptr;
              v91 = (void *)qvector_reserve();
              v92 = v134.m128i_i64[0];
              dest = v91;
              if ( v134.m128i_i64[0] <= 1uLL )
              {
                *((_BYTE *)v91 + v134.m128i_i64[0]) = 83;
                if ( !v92 )
                  *((_BYTE *)dest + 1) = 83;
              }
              v134.m128i_i64[0] = 2;
              *((_BYTE *)dest + 1) = 0;
              v34 = v5[6];
              v35 = dest;
              v36 = _mm_loadu_si128(&v134);
              v134 = 0;
              dest = nullptr;
              if ( *(_QWORD *)(v34 + 32) )
              {
                *(_QWORD *)(v34 + 40) = 0;
                v125 = v36;
                qfree();
                v93 = dest;
                v94 = _mm_load_si128(&v125);
                *(_QWORD *)(v34 + 32) = v35;
                *(__m128i *)(v34 + 40) = v94;
                if ( !v93 )
                  goto LABEL_47;
                goto LABEL_46;
              }
            }
          }
          else
          {
            if ( (debug & 0x40000) != 0 )
            {
              v126 = &v137;
              sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo setting LONG type\n", 0.0);
            }
            v147 = 74;
            v126 = &v137;
            sub_51F90(v4 + 864, &v137);
            v27 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
            if ( v27 == sub_30370 )
              v28 = (_BYTE *)(v5[6] + 96);
            else
              v28 = (_BYTE *)((__int64 (__fastcall *)(__int64 *, double))v27)(v5, 0.0);
            *v28 = 74;
            v29 = v148;
            v30 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
            if ( v30 == sub_30370 )
              v31 = v5[6] + 96;
            else
              v31 = ((__int64 (__fastcall *)(__int64 *, double))v30)(v5, 0.0);
            *(_QWORD *)(v31 + 8) = v29;
            v134 = 0;
            dest = nullptr;
            v32 = (void *)qvector_reserve();
            v33 = v134.m128i_i64[0];
            dest = v32;
            if ( v134.m128i_i64[0] <= 1uLL )
            {
              *((_BYTE *)v32 + v134.m128i_i64[0]) = 74;
              if ( !v33 )
                *((_BYTE *)dest + 1) = 74;
            }
            v134.m128i_i64[0] = 2;
            *((_BYTE *)dest + 1) = 0;
            v34 = v5[6];
            v35 = dest;
            v36 = _mm_loadu_si128(&v134);
            v134 = 0;
            dest = nullptr;
            if ( *(_QWORD *)(v34 + 32) )
            {
              *(_QWORD *)(v34 + 40) = 0;
              v125 = v36;
              qfree();
              v37 = dest;
              v38 = _mm_load_si128(&v125);
              *(_QWORD *)(v34 + 32) = v35;
              *(__m128i *)(v34 + 40) = v38;
              if ( !v37 )
              {
LABEL_47:
                v39 = sub_3A3E0(a1, v3);
LABEL_48:
                v8 = v39;
LABEL_49:
                if ( v142 )
                {
                  *(_QWORD *)&v143 = 0;
                  qfree();
                }
                if ( v140 )
                {
                  *(_QWORD *)&v141 = 0;
                  qfree();
                }
                if ( v138 )
                {
                  *(_QWORD *)&v139 = 0;
                  qfree();
                }
                return v8;
              }
LABEL_46:
              v134.m128i_i64[0] = 0;
              qfree();
              goto LABEL_47;
            }
          }
LABEL_72:
          *(_QWORD *)(v34 + 32) = v35;
          *(__m128i *)(v34 + 40) = v36;
          goto LABEL_47;
        }
        v147 = 99;
        n = v4 + 864;
        v126 = &v137;
        sub_51F90(v4 + 864, &v137);
        v40 = v148;
        if ( (debug & 0x40000) != 0 )
        {
          src = v148;
          sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo object_id = %llX\n", v148);
          v40 = src;
        }
        if ( !v40 )
        {
          v41 = debug & 0x40000;
          if ( !(_BYTE)v8 )
          {
            if ( v41 )
              sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo setting OBJECT type\n", 0.0);
            v61 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
            if ( v61 == sub_30370 )
              v62 = (_BYTE *)(v5[6] + 96);
            else
              v62 = (_BYTE *)((__int64 (__fastcall *)(__int64 *, double))v61)(v5, 0.0);
            *v62 = 76;
            v63 = v148;
            v64 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
            if ( v64 == sub_30370 )
              v65 = v5[6] + 96;
            else
              v65 = ((__int64 (__fastcall *)(__int64 *, double))v64)(v5, 0.0);
            *(_QWORD *)(v65 + 8) = v63;
            v66 = (_QWORD *)v5[6];
            v67 = (__m128i *)v66[4];
            if ( v66[6] <= 0x12u )
            {
              v95 = qvector_reserve();
              v66[4] = v95;
              v67 = (__m128i *)v95;
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_6A3E0);
            v66[5] = 19;
            v67[1].m128i_i16[0] = 15220;
            *v67 = si128;
            *(_BYTE *)(v66[4] + 18LL) = 0;
            v39 = sub_3A3E0(a1, v3);
            goto LABEL_48;
          }
          if ( v41 )
            sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo setting INT type\n", 0.0);
          v42 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
          if ( v42 == sub_30370 )
            v43 = (_BYTE *)(v5[6] + 96);
          else
            v43 = (_BYTE *)((__int64 (__fastcall *)(__int64 *, double))v42)(v5, 0.0);
          *v43 = 73;
          v44 = v148;
          v45 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
          if ( v45 == sub_30370 )
            v46 = v5[6] + 96;
          else
            v46 = ((__int64 (__fastcall *)(__int64 *, double))v45)(v5, 0.0);
          *(_QWORD *)(v46 + 8) = v44;
          v134 = 0;
          dest = nullptr;
          v47 = (void *)qvector_reserve();
          v48 = v134.m128i_i64[0];
          dest = v47;
          if ( v134.m128i_i64[0] <= 1uLL )
          {
            *((_BYTE *)v47 + v134.m128i_i64[0]) = 73;
            if ( !v48 )
              *((_BYTE *)dest + 1) = 73;
          }
          v134.m128i_i64[0] = 2;
          *((_BYTE *)dest + 1) = 0;
          v34 = v5[6];
          v35 = dest;
          v36 = _mm_loadu_si128(&v134);
          v134 = 0;
          dest = nullptr;
          if ( *(_QWORD *)(v34 + 32) )
          {
            *(_QWORD *)(v34 + 40) = 0;
            v125 = v36;
            qfree();
            v49 = dest;
            v50 = _mm_load_si128(&v125);
            *(_QWORD *)(v34 + 32) = v35;
            *(__m128i *)(v34 + 40) = v50;
            if ( !v49 )
              goto LABEL_47;
            goto LABEL_46;
          }
          goto LABEL_72;
        }
        src = v40;
        dest = nullptr;
        v134 = 0;
        qmutex_lock();
        v69 = *(_QWORD **)(v4 + 1168);
        if ( v69 )
        {
          v70 = (_QWORD *)(v4 + 1160);
          do
          {
            v71 = (void *)v69[3];
            if ( v69[4] >= (unsigned __int64)src )
            {
              v70 = v69;
              v69 = (_QWORD *)v69[2];
            }
            else
            {
              v69 = (_QWORD *)v69[3];
            }
          }
          while ( v69 );
          if ( (_QWORD *)(v4 + 1160) != v70 && (unsigned __int64)src >= v70[4] )
          {
            v72 = *(_QWORD *)(v4 + 1080) + 72LL * *((int *)v70 + 10);
            if ( v125.m128i_i64[0] != v72 + 16 )
            {
              v73 = *(_QWORD *)(v72 + 24);
              if ( v73 && (n = v73 - 1, v73 != 1) )
              {
                src = *(void **)(v72 + 16);
                if ( v134.m128i_i64[1] < v73 )
                  dest = (void *)qvector_reserve();
                v71 = src;
                v134.m128i_i64[0] = v73;
                memmove(dest, src, n);
                *((char *)dest + v73 - 1) = 0;
              }
              else
              {
                v134.m128i_i64[0] = 0;
              }
            }
            qmutex_unlock();
            if ( (debug & 0x40000) != 0 )
              sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo setting CLASS_OBJECT type (cached)\n", v71);
            v74 = v147;
            v75 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
            if ( v75 == sub_30370 )
              v76 = (char *)(v5[6] + 96);
            else
              v76 = (char *)((__int64 (__fastcall *)(__int64 *, void *))v75)(v5, v71);
            *v76 = v74;
            v77 = v148;
            v78 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
            if ( v78 == sub_30370 )
              v79 = v5[6] + 96;
            else
              v79 = ((__int64 (__fastcall *)(__int64 *, void *))v78)(v5, v71);
            *(_QWORD *)(v79 + 8) = v77;
            sub_31970(v5[6] + 32, v125.m128i_i64[0]);
            goto LABEL_115;
          }
        }
        v129 = v4 + 1160;
        qmutex_unlock();
        v131 = 0;
        v132 = nullptr;
        if ( !(unsigned __int8)sub_4EA10(n, &v131, src) )
        {
          if ( (debug & 0x40000) != 0 )
            sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo setting generic OBJECT type\n");
          v80 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
          if ( v80 == sub_30370 )
            v81 = (_BYTE *)(v5[6] + 96);
          else
            v81 = (_BYTE *)v80((__int64)v5);
          *v81 = 99;
          v82 = v148;
          v83 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
          if ( v83 == sub_30370 )
            v84 = v5[6] + 96;
          else
            v84 = v83((__int64)v5);
LABEL_124:
          *(_QWORD *)(v84 + 8) = v82;
          sub_318D0(v5[6] + 32, "Ljava/lang/Object;");
          goto LABEL_115;
        }
        v96 = v129;
        v97 = v147;
        v98 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
        if ( v98 == sub_30370 )
        {
          v99 = (char *)(v5[6] + 96);
        }
        else
        {
          LOBYTE(src) = v147;
          v99 = (char *)v98((__int64)v5);
          v96 = v129;
          v97 = (char)src;
        }
        *v99 = v97;
        v100 = v148;
        v101 = *(__int64 (__fastcall **)(__int64))(*v5 + 24);
        if ( v101 == sub_30370 )
        {
          v102 = v5[6] + 96;
        }
        else
        {
          v129 = v96;
          src = v148;
          v102 = v101((__int64)v5);
          v96 = v129;
          v100 = src;
        }
        *(_QWORD *)(v102 + 8) = v100;
        v129 = v96;
        src = v132;
        qmutex_lock();
        v103 = *(_QWORD **)(v4 + 1168);
        if ( !v103 )
          goto LABEL_176;
        v104 = (_QWORD *)v129;
        do
        {
          v105 = (void *)v103[2];
          if ( v103[4] >= (unsigned __int64)src )
          {
            v104 = v103;
            v103 = (_QWORD *)v103[2];
          }
          else
          {
            v103 = (_QWORD *)v103[3];
          }
        }
        while ( v103 );
        if ( v104 == (_QWORD *)v129 || (unsigned __int64)src < v104[4] )
        {
LABEL_176:
          qmutex_unlock();
          v113 = sub_4B4B0(n, v125.m128i_i64[0], v132);
          v114 = debug & 0x40000;
          if ( !v113 )
          {
            if ( v114 )
              sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo setting generic OBJECT type\n");
            *(_BYTE *)(*(__int64 (__fastcall **)(__int64 *))(*v5 + 24))(v5) = 76;
            v82 = v148;
            v84 = (*(__int64 (__fastcall **)(__int64 *))(*v5 + 24))(v5);
            goto LABEL_124;
          }
          if ( v114 )
            sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo setting OBJECT type (jdwp)\n");
        }
        else
        {
          v111 = *(_QWORD *)(v4 + 1080) + 72LL * *((int *)v104 + 10);
          if ( v125.m128i_i64[0] != v111 + 16 )
          {
            v112 = *(_QWORD *)(v111 + 24);
            if ( v112 && (n = v112 - 1, v112 != 1) )
            {
              src = *(void **)(v111 + 16);
              if ( v134.m128i_i64[1] < v112 )
                dest = (void *)qvector_reserve();
              v105 = src;
              v134.m128i_i64[0] = v112;
              memmove(dest, src, n);
              *((char *)dest + v112 - 1) = 0;
            }
            else
            {
              v134.m128i_i64[0] = 0;
            }
          }
          qmutex_unlock();
          if ( (debug & 0x40000) != 0 )
            sub_111A0((__int64)"DEXSIP: aloc_var_get_tinfo setting OBJECT type (cached)\n", v105);
        }
        sub_31970(v5[6] + 32, v125.m128i_i64[0]);
LABEL_115:
        v8 = sub_3A3E0(a1, v3);
        if ( dest )
        {
          v134.m128i_i64[0] = 0;
          qfree();
        }
        goto LABEL_49;
      }
    }
    else if ( word_7FB4A != 2 )
    {
      goto LABEL_23;
    }
    return 0;
  }
  v15 = *(const char *(__fastcall **)(__int64))(*v5 + 32);
  if ( v15 == sub_30380 )
  {
    v16 = (unsigned __int8 *)nptr;
    if ( *(_QWORD *)(v14 + 40) )
      v16 = *(unsigned __int8 **)(v14 + 32);
  }
  else
  {
    v60 = (__int64)v15((__int64)v5);
    v14 = v5[6];
    v16 = (unsigned __int8 *)v60;
  }
  sub_27EB0(v4, v14, v5[4], v5[5], v16, v10);
  return sub_3A3E0(a1, v3);
}

