__int64 __fastcall sub_4B830(__int64 *a1, __int64 a2, __int64 **a3, __int64 a4)
{
  __int64 **v5; // rbx
  __int64 (__fastcall *v6)(__int64, int *); // rax
  int *v8; // rax
  __int64 *v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64 *); // rax
  const char **v11; // rax
  const char *v12; // r13
  size_t v13; // rax
  size_t v14; // r12
  void *v15; // rdi
  size_t v16; // r14
  const char *v17; // r12
  int v18; // eax
  __int64 v19; // rdx
  char v20; // r14
  char **v21; // rdi
  const char *v22; // r13
  __int64 *v23; // rax
  char **v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rax
  __m128i *v27; // r13
  size_t v28; // r12
  __m128i v29; // xmm0
  __int32 v30; // eax
  __m128i v31; // xmm0
  __int32 v32; // eax
  __m128i v33; // xmm0
  __m128i v34; // xmm0
  void *v35; // rax
  unsigned int v36; // r13d
  size_t v38; // r12
  __m128i v39; // xmm0
  char **v40; // rax
  __int64 v41; // r14
  __int64 v42; // r13
  __int64 v43; // rbx
  char **v44; // r12
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // r15
  char *v51; // r12
  unsigned __int64 v52; // r13
  char *i; // r14
  __int64 v54; // rdi
  __int64 v55; // rdi
  unsigned int (__fastcall *v56)(__int64 **, char **, double); // rax
  char *v57; // rax
  char v58; // al
  __int64 v59; // rdi
  __int64 v60; // r12
  __int64 v61; // rbp
  _QWORD *v62; // rbx
  __int64 v63; // rdi
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // r12
  __int64 v67; // rbp
  _QWORD *v68; // rbx
  __int64 v69; // rdi
  __int64 v70; // rdi
  const char *v71; // rdx
  char *v72; // rax
  const char *v73; // r14
  size_t v74; // r13
  size_t v75; // r13
  char *v76; // r8
  size_t v77; // r13
  __int64 v78; // r13
  __int64 v79; // r9
  unsigned __int64 v80; // rdx
  char *v81; // rax
  const char *v82; // r13
  __int64 v83; // r14
  const char *v84; // rcx
  char *v85; // rax
  __int64 v86; // rax
  __int64 **v87; // rsi
  unsigned __int8 v88; // bl
  char *v89; // rdx
  char *idati; // rax
  int tinfo_property; // edx
  void *v92; // rax
  const __m128i *v93; // r8
  __int64 v94; // [rsp+8h] [rbp-230h]
  bool v96; // [rsp+18h] [rbp-220h]
  unsigned __int64 v97; // [rsp+18h] [rbp-220h]
  __int64 v98; // [rsp+28h] [rbp-210h]
  __int64 **v99; // [rsp+28h] [rbp-210h]
  char v100; // [rsp+28h] [rbp-210h]
  size_t na; // [rsp+30h] [rbp-208h]
  size_t nb; // [rsp+30h] [rbp-208h]
  char *nc; // [rsp+30h] [rbp-208h]
  size_t nd; // [rsp+30h] [rbp-208h]
  size_t n; // [rsp+30h] [rbp-208h]
  __int64 v106; // [rsp+38h] [rbp-200h]
  const __m128i *v107; // [rsp+48h] [rbp-1F0h]
  int v108; // [rsp+50h] [rbp-1E8h] BYREF
  int v109; // [rsp+54h] [rbp-1E4h] BYREF
  __int64 v110; // [rsp+58h] [rbp-1E0h] BYREF
  void *dest; // [rsp+60h] [rbp-1D8h] BYREF
  __int128 v112; // [rsp+68h] [rbp-1D0h]
  __int64 v113; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v114; // [rsp+88h] [rbp-1B0h]
  __int64 v115; // [rsp+90h] [rbp-1A8h]
  void *src; // [rsp+A0h] [rbp-198h] BYREF
  size_t v117[3]; // [rsp+A8h] [rbp-190h]
  char *s; // [rsp+C0h] [rbp-178h] BYREF
  __int128 v119; // [rsp+C8h] [rbp-170h]
  __int64 v120; // [rsp+E0h] [rbp-158h] BYREF
  __int128 v121; // [rsp+E8h] [rbp-150h]
  __int64 v122; // [rsp+F8h] [rbp-140h]
  int v123; // [rsp+100h] [rbp-138h]
  char v124; // [rsp+104h] [rbp-134h]
  _QWORD v125[6]; // [rsp+110h] [rbp-128h] BYREF
  __int16 v126; // [rsp+140h] [rbp-F8h]
  __int64 v127; // [rsp+150h] [rbp-E8h] BYREF
  __int128 v128; // [rsp+158h] [rbp-E0h]
  __m128i v129; // [rsp+168h] [rbp-D0h] BYREF
  __int64 v130; // [rsp+178h] [rbp-C0h]
  __int64 v131; // [rsp+180h] [rbp-B8h]
  void *v132; // [rsp+188h] [rbp-B0h]
  size_t v133[2]; // [rsp+190h] [rbp-A8h]
  char *v134; // [rsp+1A0h] [rbp-98h] BYREF
  _BYTE v135[24]; // [rsp+1A8h] [rbp-90h]
  __m128i v136; // [rsp+1C0h] [rbp-78h]
  __int64 v137; // [rsp+1D0h] [rbp-68h]
  int v138; // [rsp+1D8h] [rbp-60h]
  char **v139; // [rsp+1E0h] [rbp-58h]
  __int128 v140; // [rsp+1E8h] [rbp-50h]
  unsigned __int64 v141; // [rsp+1F8h] [rbp-40h]

  v5 = a3;
  v6 = (__int64 (__fastcall *)(__int64, int *))(*a3)[24];
  v141 = __readfsqword(0x28u);
  if ( v6 == sub_2DDB0 )
  {
    v8 = (int *)sub_2CEC0(a3[2], 0x200000, 0x400u, 0x4000000);
    if ( v8 )
    {
      v108 = *v8;
      goto LABEL_4;
    }
    return 0;
  }
  if ( (unsigned int)v6((__int64)a3, &v108) )
    return 0;
LABEL_4:
  v9 = *v5;
  dest = nullptr;
  v112 = 0;
  v10 = (__int64 (__fastcall *)(__int64, __int64 *))v9[18];
  if ( v10 == sub_2D280 )
  {
    v11 = (const char **)sub_2CEC0(v5[2], 0x10000000, 0x10000000u, 0x10000000);
    if ( v11 )
    {
      v12 = *v11;
      if ( !*v11 || (v13 = strlen(*v11), (v14 = v13) == 0) )
      {
        *(_QWORD *)&v112 = 0;
        goto LABEL_16;
      }
      v15 = dest;
      v16 = v13 + 1;
      if ( *((_QWORD *)&v112 + 1) < v13 + 1 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v16, 1);
        v15 = dest;
      }
      *(_QWORD *)&v112 = v16;
      memmove(v15, v12, v14);
      *((_BYTE *)dest + v14) = 0;
    }
  }
  else
  {
    v10((__int64)v5, (__int64 *)&dest);
  }
  if ( !(_QWORD)v112 )
  {
LABEL_16:
    v115 = 0;
    v17 = ::src;
    goto LABEL_17;
  }
  v17 = (const char *)dest;
  if ( (unsigned __int64)(v112 - 1) <= 5 )
  {
    v115 = 0;
  }
  else
  {
    v18 = strcmp((char *)dest + v112 - 5, "Vtbl");
    v115 = 0;
    if ( !v18 )
    {
      v96 = 1;
      v19 = 0;
      v20 = 0;
      v109 = 0;
      v120 = 0;
      v122 = 0;
      v124 = 0;
      v123 = 256;
      v94 = 0;
      v121 = 0;
      goto LABEL_20;
    }
  }
LABEL_17:
  v109 = 0;
  v113 = 0;
  v114 = 0;
  v96 = sub_47410((__int64)a1, &v113, &v109, v17, 0);
  v19 = v114;
  v94 = v113;
  if ( v96 )
  {
    v120 = 0;
    v122 = 0;
    v123 = 0;
    v124 = 0;
    v121 = 0;
LABEL_19:
    v96 = 0;
    v20 = 0;
    goto LABEL_20;
  }
  v120 = 0;
  v20 = 1;
  v122 = 0;
  v124 = 0;
  v123 = 0;
  v121 = 0;
  if ( v109 )
    goto LABEL_19;
LABEL_20:
  v21 = (char **)a1[40];
  v22 = ::src;
  v125[3] = &v120;
  v130 = 0x10000000000LL;
  v23 = nullptr;
  if ( v20 )
    v23 = &v127;
  if ( v19 )
    v22 = (const char *)v94;
  v125[0] = off_A9DF0;
  v126 = 1;
  v24 = (char **)v5;
  v127 = 0;
  v131 = 1;
  v132 = nullptr;
  v125[2] = a1;
  v125[4] = v22;
  v125[5] = v23;
  v125[1] = v5;
  v128 = 0;
  v129 = 0;
  *(_OWORD *)v133 = 0;
  (*((void (__fastcall **)(char **, __int64 **, _QWORD, _QWORD *))*v21 + 2))(v21, v5, 0, v125);
  if ( !v20 || (v25 = v128) == 0 )
  {
LABEL_53:
    if ( !v96 )
    {
      v47 = v121;
      if ( a4 )
      {
        if ( (_QWORD)v121 )
        {
          if ( (_QWORD)v121 != 1 || (v48 = v120, v47 = 1, (*(_BYTE *)(v120 + 132) & 0x20) == 0) )
          {
LABEL_57:
            v48 = v120;
            goto LABEL_58;
          }
          goto LABEL_148;
        }
LABEL_128:
        v48 = v120;
        v47 = 0;
LABEL_129:
        v123 |= 0x80u;
        goto LABEL_58;
      }
LABEL_135:
      if ( !v47 )
      {
        v86 = *a1;
        v87 = v5;
        v119 = 0;
        s = nullptr;
        (*(void (__fastcall **)(__int64 *, __int64 **, char **))(v86 + 40))(a1, v5, &s);
        v88 = 13;
        if ( v108 == 2 )
          v88 = 29;
        v89 = (char *)::src;
        if ( (_QWORD)v119 )
          v89 = s;
        if ( v89 )
        {
          idati = (char *)a1[39];
          *(_QWORD *)v135 = v89;
          *(_WORD *)&v135[8] = 0;
          if ( !idati )
            idati = (char *)get_idati(a1, v87);
          v134 = idati;
          create_tinfo(a2, v88, 61, &v134);
        }
        if ( s )
        {
          *(_QWORD *)&v119 = 0;
          qfree(s);
        }
        v36 = 2;
        goto LABEL_75;
      }
      goto LABEL_57;
    }
    goto LABEL_101;
  }
  if ( v133[0] > 1 )
  {
    v134 = (char *)v22;
    *(_OWORD *)&v135[8] = 0;
    v26 = qalloc_or_throw(144 * v128);
    v27 = (__m128i *)(v26 + 64);
    *(_QWORD *)v135 = v26;
    *(_QWORD *)&v135[16] = v25;
    v98 = 0;
    v106 = -64 - v26;
    do
    {
      v93 = (__m128i *)((char *)v27 + v106 + v127);
      v34 = _mm_loadu_si128(v93);
      v27[-3].m128i_i64[0] = 0;
      v27[-4] = v34;
      *(__m128i *)((char *)&v27[-3] + 8) = 0;
      if ( v93[1].m128i_i64[1] )
      {
        v107 = v93;
        nb = v93[1].m128i_u64[1];
        v35 = (void *)qalloc_or_throw(nb);
        v27[-3].m128i_i64[0] = (__int64)v35;
        v27[-2].m128i_i64[0] = nb;
        memcpy(v35, (const void *)v107[1].m128i_i64[0], nb);
        v93 = v107;
        v27[-3].m128i_i64[1] = nb;
      }
      v27[-2].m128i_i64[1] = 0;
      v27[-1] = 0;
      v28 = v93[3].m128i_u64[0];
      if ( v28 )
      {
        n = (size_t)v93;
        v92 = (void *)qalloc_or_throw(v93[3].m128i_i64[0]);
        v27[-2].m128i_i64[1] = (__int64)v92;
        v27[-1].m128i_i64[1] = v28;
        memcpy(v92, *(const void **)(n + 40), v28);
        v27[-1].m128i_i64[0] = v28;
        v93 = (const __m128i *)n;
      }
      v27->m128i_i64[0] = 0;
      na = (size_t)v93;
      copy_tinfo_t(v27, &v93[4]);
      ++v98;
      v27 += 9;
      v29 = _mm_loadu_si128((const __m128i *)(na + 72));
      v27[-6].m128i_i64[1] = *(_QWORD *)(na + 120);
      v30 = *(_DWORD *)(na + 128);
      *(__m128i *)((char *)v27 - 136) = v29;
      v31 = _mm_loadu_si128((const __m128i *)(na + 88));
      v27[-5].m128i_i32[0] = v30;
      v32 = *(_DWORD *)(na + 132);
      *(__m128i *)((char *)v27 - 120) = v31;
      v33 = _mm_loadu_si128((const __m128i *)(na + 104));
      v27[-5].m128i_i32[1] = v32;
      LOBYTE(v32) = *(_BYTE *)(na + 136);
      *(__m128i *)((char *)v27 - 104) = v33;
      v27[-5].m128i_i8[8] = v32;
    }
    while ( v25 != v98 );
    v38 = v133[0];
    *(_QWORD *)&v135[8] = v25;
    v39 = _mm_loadu_si128(&v129);
    v139 = nullptr;
    v137 = v130;
    v136 = v39;
    v138 = v131;
    v140 = 0;
    if ( v133[0] )
    {
      v139 = (char **)qalloc_or_throw(v133[0]);
      *((_QWORD *)&v140 + 1) = v38;
      memcpy(v139, v132, v38);
      *(_QWORD *)&v140 = v38;
    }
    v24 = &v134;
    sub_487A0(a1 + 32, (const char *)&v134);
    v21 = v139;
    if ( v139 )
      qfree(v139);
    v40 = *(char ***)v135;
    if ( *(_QWORD *)v135 )
    {
      v41 = *(_QWORD *)&v135[8];
      v42 = 0;
      if ( *(_QWORD *)&v135[8] )
      {
        v99 = v5;
        v43 = *(_QWORD *)v135 + 64LL;
        v44 = *(char ***)v135;
        do
        {
          clear_tinfo_t(v43);
          v45 = *(_QWORD *)(v43 - 24);
          if ( v45 )
          {
            *(_QWORD *)(v43 - 16) = 0;
            qfree(v45);
          }
          v46 = *(_QWORD *)(v43 - 48);
          if ( v46 )
          {
            *(_QWORD *)(v43 - 40) = 0;
            qfree(v46);
          }
          ++v42;
          v43 += 144;
        }
        while ( v41 != v42 );
        v5 = v99;
        v40 = v44;
      }
      v21 = v40;
      qfree(v40);
    }
    goto LABEL_53;
  }
  udt_type_data_t__deduplicate_members(&v127);
  v24 = (char **)(byte_9 + 4);
  v134 = nullptr;
  v100 = create_tinfo(&v134, 13, 13, &v127);
  if ( v100 )
  {
    v24 = (char **)(&dword_0 + 2);
    if ( set_tinfo_property(&v134, 2, 4) )
    {
      v24 = (char **)v22;
      if ( !(unsigned int)get_type_ordinal(a1[39]) )
      {
        v24 = (char **)a1[39];
        save_tinfo(&v134, v24, 0, v22, 3);
      }
      v21 = &v134;
      clear_tinfo_t(&v134);
      if ( !v96 )
      {
        v47 = v121;
        if ( !a4 )
          goto LABEL_151;
        if ( !(_QWORD)v121 )
          goto LABEL_128;
        v48 = v120;
        if ( (_QWORD)v121 != 1 )
          goto LABEL_129;
        if ( (*(_BYTE *)(v120 + 132) & 0x20) == 0 )
          goto LABEL_177;
        goto LABEL_149;
      }
LABEL_102:
      v110 = 0;
      if ( (_QWORD)v112 )
      {
        v73 = (const char *)dest;
        v71 = (const char *)dest;
        if ( !dest )
          goto LABEL_108;
      }
      else
      {
        v71 = ::src;
        if ( !::src )
        {
LABEL_107:
          v73 = ::src;
          goto LABEL_108;
        }
      }
      v72 = (char *)a1[39];
      *(_QWORD *)v135 = v71;
      *(_WORD *)&v135[8] = 0;
      if ( !v72 )
        v72 = (char *)get_idati(v21, v24);
      v134 = v72;
      create_tinfo(&v110, 61, 61, &v134);
      if ( !(_QWORD)v112 )
        goto LABEL_107;
      v73 = (const char *)dest;
LABEL_108:
      src = nullptr;
      *(_OWORD *)v117 = 0;
      if ( v73 )
      {
        v74 = strlen(v73);
        src = (void *)qvector_reserve(&src, 0, v74 + 1, 1);
        v117[0] = v74 + 1;
        memmove(src, v73, v74);
        *((_BYTE *)src + v74) = 0;
        v75 = v117[0];
        s = nullptr;
        v119 = 0;
        if ( v117[0] )
        {
          s = (char *)qalloc_or_throw(v117[0]);
          *((_QWORD *)&v119 + 1) = v75;
          memcpy(s, src, v75);
          *(_QWORD *)&v119 = v75;
          if ( !v117[0] || v117[0] - 1 <= 5 || strcmp((char *)src + v117[0] - 5, "Vtbl") )
          {
LABEL_113:
            v76 = s;
            goto LABEL_114;
          }
          v76 = s;
          v85 = s;
          if ( v75 - 5 >= v75 - 1 )
          {
LABEL_114:
            v134 = nullptr;
            *(_OWORD *)v135 = 0;
            if ( v76 )
            {
              nc = v76;
              v77 = strlen(v76);
              v134 = (char *)qvector_reserve(&v134, 0, v77 + 1, 1);
              *(_QWORD *)v135 = v77 + 1;
              memmove(v134, nc, v77);
              v134[v77] = 0;
              v76 = v134;
              v78 = *(_QWORD *)v135 - 1LL;
              v79 = *(_QWORD *)v135 + 4LL;
              v80 = *(_QWORD *)v135 + 5LL;
              if ( !*(_QWORD *)v135 )
              {
                v78 = 0;
                v80 = 6;
                v79 = 5;
              }
              if ( *(_QWORD *)&v135[8] >= v80 )
              {
LABEL_118:
                *(_QWORD *)v135 = v80;
                v76[v79] = 0;
                v81 = &v134[v78];
                *(_DWORD *)v81 = 1651799647;
                v81[4] = 108;
                v82 = v134;
                v83 = *(_QWORD *)v135;
                if ( s )
                {
                  *(_QWORD *)&v119 = 0;
                  qfree(s);
                }
                if ( src )
                {
                  v117[0] = 0;
                  qfree(src);
                }
                v84 = ::src;
                if ( v83 )
                  v84 = v82;
                save_tinfo(&v110, a1[39], 0, v84, 3);
                if ( v82 )
                  qfree(v82);
                clear_tinfo_t(&v110);
                v47 = v121;
                if ( !a4 )
                {
LABEL_150:
                  if ( v100 )
                    goto LABEL_151;
                  goto LABEL_135;
                }
                if ( !(_QWORD)v121 )
                  goto LABEL_128;
                v48 = v120;
                if ( (_QWORD)v121 != 1 )
                {
                  if ( v100 )
                    goto LABEL_129;
                  goto LABEL_58;
                }
                if ( (*(_BYTE *)(v120 + 132) & 0x20) == 0 )
                {
                  if ( !v100 )
                  {
LABEL_168:
                    v47 = 1;
                    goto LABEL_58;
                  }
LABEL_177:
                  v47 = 1;
                  goto LABEL_129;
                }
LABEL_149:
                tinfo_property = get_tinfo_property(*(_QWORD *)(v48 + 64), 16);
                v47 = v121;
                if ( !tinfo_property )
                {
LABEL_151:
                  v48 = v120;
                  goto LABEL_129;
                }
                goto LABEL_150;
              }
            }
            else
            {
              v78 = 0;
              v80 = 6;
              v79 = 5;
            }
            nd = v79;
            v97 = v80;
            v134 = (char *)qvector_reserve(&v134, v76, v80, 1);
            v79 = nd;
            v76 = v134;
            v80 = v97;
            goto LABEL_118;
          }
          if ( *((_QWORD *)&v119 + 1) < v75 - 4 )
          {
            v85 = (char *)qvector_reserve(&s, s, v75 - 4, 1);
            s = v85;
          }
          *(_QWORD *)&v119 = v75 - 4;
          v85[v75 - 5] = 0;
          if ( (_QWORD)v119 )
            goto LABEL_113;
        }
      }
      else
      {
        s = nullptr;
        v119 = 0;
      }
      v76 = (char *)::src;
      goto LABEL_114;
    }
  }
  v21 = &v134;
  clear_tinfo_t(&v134);
  if ( v96 )
  {
LABEL_101:
    v100 = 0;
    goto LABEL_102;
  }
  v47 = v121;
  if ( !a4 )
    goto LABEL_135;
  if ( !(_QWORD)v121 )
    goto LABEL_128;
  v48 = v120;
  if ( (_QWORD)v121 == 1 )
  {
    if ( (*(_BYTE *)(v120 + 132) & 0x20) != 0 )
    {
LABEL_148:
      v100 = 0;
      goto LABEL_149;
    }
    goto LABEL_168;
  }
LABEL_58:
  v122 = a4;
  v49 = 144 * v47;
  v50 = v48 + v49;
  if ( v48 != v48 + v49 )
  {
    *(_QWORD *)&v135[8] = 0;
    sub_49C50((__int64 *)&v134, v48, (__int64)(0x8E38E38E38E38E39LL * (v49 >> 4) + 1) / 2);
    v51 = *(char **)&v135[8];
    v52 = 144LL * *(_QWORD *)v135;
    if ( v134 == *(char **)v135 )
    {
      sub_2A8D0(v48, v48 + v52, v50, *(__int64 *)&v135[8]);
    }
    else if ( *(_QWORD *)&v135[8] )
    {
      sub_2C6F0(v48, v50, *(__int64 *)&v135[8], *(__int64 *)v135);
    }
    else
    {
      sub_4B7A0((char *)v48, v50);
    }
    for ( i = v51; &v51[v52] != i; i += 144 )
    {
      clear_tinfo_t(i + 64);
      v54 = *((_QWORD *)i + 5);
      if ( v54 )
      {
        *((_QWORD *)i + 6) = 0;
        qfree(v54);
      }
      v55 = *((_QWORD *)i + 2);
      if ( v55 )
      {
        *((_QWORD *)i + 3) = 0;
        qfree(v55);
      }
    }
    operator delete(v51, v52);
  }
  v56 = (unsigned int (__fastcall *)(__int64 **, char **, double))(*v5)[5];
  if ( (char *)v56 == (char *)sub_2DAC0 )
  {
    v57 = (char *)sub_2CEC0(v5[2], 256, 1u, 512);
    if ( v57 )
    {
      v58 = *v57;
      LOBYTE(v134) = v58;
      goto LABEL_71;
    }
  }
  else if ( !v56(v5, &v134, 0.0) )
  {
    v58 = (char)v134;
LABEL_71:
    if ( v58 )
      v123 |= 0x80u;
  }
  v36 = sub_46AA0((__int64)a1, a2, (__int64)&v120, v108);
  if ( v36 == 1 )
    sub_478E0((__int64)a1, (__int64)&dest);
LABEL_75:
  if ( v132 )
  {
    v133[0] = 0;
    qfree(v132);
  }
  v59 = v127;
  if ( v127 )
  {
    v60 = v128;
    if ( (_QWORD)v128 )
    {
      v61 = 0;
      do
      {
        v62 = (_QWORD *)(v59 + 144 * v61);
        clear_tinfo_t(v62 + 8);
        v63 = v62[5];
        if ( v63 )
        {
          v62[6] = 0;
          qfree(v63);
        }
        v64 = v62[2];
        if ( v64 )
        {
          v62[3] = 0;
          qfree(v64);
        }
        ++v61;
        v59 = v127;
      }
      while ( v60 != v61 );
    }
    *(_QWORD *)&v128 = 0;
    qfree(v59);
  }
  v65 = v120;
  if ( v120 )
  {
    v66 = v121;
    if ( (_QWORD)v121 )
    {
      v67 = 0;
      do
      {
        v68 = (_QWORD *)(v65 + 144 * v67);
        clear_tinfo_t(v68 + 8);
        v69 = v68[5];
        if ( v69 )
        {
          v68[6] = 0;
          qfree(v69);
        }
        v70 = v68[2];
        if ( v70 )
        {
          v68[3] = 0;
          qfree(v70);
        }
        ++v67;
        v65 = v120;
      }
      while ( v66 != v67 );
    }
    *(_QWORD *)&v121 = 0;
    qfree(v65);
  }
  if ( v94 )
    qfree(v94);
  if ( dest )
  {
    *(_QWORD *)&v112 = 0;
    qfree(dest);
  }
  return v36;
}

