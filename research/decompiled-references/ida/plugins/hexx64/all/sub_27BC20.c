__int64 __fastcall sub_27BC20(__int64 a1, char *a2, __int64 a3, double a4, __m128 a5)
{
  _DWORD *exception; // rdi
  unsigned int v6; // r13d
  int v8; // eax
  int *v9; // rbp
  bool v10; // al
  unsigned int v11; // r14d
  int tinfo_size; // r12d
  __m128i v13; // xmm0
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // r12
  const char *v17; // rdi
  int v18; // eax
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  unsigned int v30; // eax
  char v31; // bl
  unsigned int v32; // r12d
  int *v33; // r15
  int v34; // ebx
  _QWORD *v35; // r13
  __int64 *v36; // r15
  __int64 v37; // rsi
  int *v38; // r15
  _QWORD *v39; // rdx
  _QWORD *i; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rax
  int v46; // eax
  unsigned int v47; // edx
  int v48; // r15d
  unsigned int v49; // eax
  int v50; // eax
  int v51; // edx
  __int64 tinfo_property; // rax
  char v53; // r12
  char v54; // bp
  int *v55; // rax
  int *v56; // rbp
  __int64 v57; // rax
  __int64 v58; // r14
  __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // r14
  __int64 v65; // rbx
  int *v66; // rdx
  int *v67; // rbp
  int *v68; // rbx
  unsigned int v69; // edx
  unsigned int v70; // edx
  __int64 v71; // rax
  int *v72; // rax
  __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  int aflags; // ebp
  int v76; // eax
  int v77; // ebp
  unsigned int v78; // edx
  unsigned int v79; // eax
  __m128i v80; // xmm0
  __int64 v81; // r14
  int v82; // r12d
  int *v83; // rax
  __int64 v84; // rbx
  __int64 *v85; // r9
  __int64 v86; // rbx
  unsigned __int64 v87; // r8
  char v88; // bl
  char *v89; // rax
  __int64 tinfo_pdata; // rax
  char *v91; // rbp
  char v92; // al
  __int64 v96; // [rsp+18h] [rbp-2F0h]
  unsigned __int64 v97; // [rsp+20h] [rbp-2E8h]
  unsigned __int64 v98; // [rsp+20h] [rbp-2E8h]
  int flags; // [rsp+20h] [rbp-2E8h]
  unsigned __int8 v100; // [rsp+20h] [rbp-2E8h]
  unsigned int v101; // [rsp+2Ch] [rbp-2DCh]
  bool v102; // [rsp+2Ch] [rbp-2DCh]
  __int64 udm_by_tid; // [rsp+38h] [rbp-2D0h]
  unsigned int v104; // [rsp+40h] [rbp-2C8h]
  char v105; // [rsp+44h] [rbp-2C4h]
  int v106; // [rsp+44h] [rbp-2C4h]
  size_t n; // [rsp+50h] [rbp-2B8h]
  int data_elsize; // [rsp+58h] [rbp-2B0h]
  char *v109; // [rsp+60h] [rbp-2A8h]
  unsigned __int64 v110; // [rsp+68h] [rbp-2A0h]
  __int64 *v111[3]; // [rsp+70h] [rbp-298h] BYREF
  __int64 v112; // [rsp+88h] [rbp-280h] BYREF
  __int64 v113; // [rsp+90h] [rbp-278h] BYREF
  __int64 v114; // [rsp+98h] [rbp-270h] BYREF
  int *v115; // [rsp+A0h] [rbp-268h] BYREF
  __int128 v116; // [rsp+A8h] [rbp-260h]
  void *v117; // [rsp+C0h] [rbp-248h] BYREF
  __int128 v118; // [rsp+C8h] [rbp-240h]
  char *s1[3]; // [rsp+E0h] [rbp-228h] BYREF
  __int128 v120; // [rsp+F8h] [rbp-210h]
  __int64 v121; // [rsp+108h] [rbp-200h]
  int v122; // [rsp+110h] [rbp-1F8h]
  __m128i v123; // [rsp+120h] [rbp-1E8h] BYREF
  __int64 v124; // [rsp+130h] [rbp-1D8h]
  __int128 v125; // [rsp+138h] [rbp-1D0h]
  __int64 v126; // [rsp+148h] [rbp-1C0h]
  __int128 v127; // [rsp+150h] [rbp-1B8h]
  __int128 v128; // [rsp+160h] [rbp-1A8h]
  __int64 v129; // [rsp+190h] [rbp-178h]
  int v130; // [rsp+198h] [rbp-170h]
  __int64 v131; // [rsp+1A0h] [rbp-168h]
  char v132; // [rsp+1A8h] [rbp-160h]
  unsigned __int64 v133; // [rsp+2C8h] [rbp-40h]

  v133 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a3 + 8) )
    return 0;
  v6 = is_special_frame_member();
  if ( (_BYTE)v6 )
    return 0;
  v8 = sub_278DE0((int **)a3);
  v9 = *(int **)a3;
  v101 = v8;
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)(a3 + 8) || (v33 = *((int **)v9 + 1), v33 == v9) )
    {
      v96 = 0;
      v10 = 0;
      v9 = nullptr;
      v11 = 0;
      v97 = 0;
      tinfo_size = -1;
    }
    else
    {
      v96 = 0;
      v34 = 1;
      tinfo_size = -1;
      v97 = 0;
      if ( v8 > 0 )
        v34 = v8;
      v9 = nullptr;
      v11 = 0;
      v35 = v33;
      do
      {
        v36 = v35 + 3;
        if ( tinfo_size == -1 )
          tinfo_size = get_tinfo_size();
        if ( *((_DWORD *)v35 + 10) >= v34 && (*((_DWORD *)v35 + 10) < (signed int)v11 || !v11) )
          v11 = *((_DWORD *)v35 + 10);
        if ( *((_DWORD *)v35 + 8) != -1 )
        {
          v37 = *v36;
          v38 = (int *)(*(_QWORD *)(*v36 + 432) + 104LL * *((int *)v35 + 8));
          if ( !v9 )
          {
            v96 = v37;
            v9 = v38;
          }
          if ( (get_tinfo_property() & 0xF) == 0xB )
          {
            v44 = sub_1C35C0(v38, v38[22], a4);
            v45 = sub_1CFD50((_QWORD *)v96, v44, a4);
            if ( (__int64)v97 >= v45 )
              v45 = v97;
            v97 = v45;
          }
        }
        if ( (*v35 & 2) == 0 )
        {
          v39 = (_QWORD *)v35[2];
          if ( (*(_BYTE *)v39 & 2) != 0 )
          {
            v41 = (_QWORD *)(*v35 & 0xFFFFFFFFFFFFFFFCLL);
            v42 = *v41;
            if ( (*v41 & 2) == 0 )
            {
              while ( (_QWORD *)v41[2] == v35 )
              {
                v35 = v41;
                v43 = v42 & 0xFFFFFFFFFFFFFFFCLL;
                v42 = *(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v42 & 2) != 0 )
                {
                  v35 = (_QWORD *)v43;
                  goto LABEL_58;
                }
                v41 = (_QWORD *)v43;
              }
            }
            v35 = v41;
          }
          else
          {
            for ( i = (_QWORD *)v39[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
              v39 = i;
            v35 = v39;
          }
        }
LABEL_58:
        ;
      }
      while ( *(_QWORD **)a3 != v35 );
      v6 = 0;
      v10 = v11 != 0;
    }
  }
  else
  {
    v96 = 0;
    v10 = 0;
    tinfo_size = -1;
    v11 = 0;
    v97 = 0;
  }
  v13 = 0;
  v112 = 0;
  v124 = 0;
  v105 = v10 || (int)v101 > tinfo_size;
  v126 = 0;
  v129 = 1;
  v130 = -1;
  v131 = 0;
  v132 = 0;
  v123 = 0;
  v125 = 0;
  v127 = 0;
  v128 = 0;
  udm_by_tid = get_udm_by_tid();
  if ( udm_by_tid == -1 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) < (unsigned __int64)a2 )
      goto LABEL_70;
    flags = get_flags_ex();
    if ( (get_aflags() & 0x2000000) != 0 )
      goto LABEL_70;
    v31 = is_spec_ea();
    if ( v31 )
    {
      v46 = (unsigned __int8)getinf() == 8 ? get_qword() : get_dword();
      if ( v46 < 0 )
      {
        if ( v105 )
          tinfo_size = 0;
        v31 = v105;
        v104 = tinfo_size;
      }
      else
      {
        v47 = v101;
        if ( v101 < v11 )
          v47 = v11;
        if ( v47 >= v46 )
          v46 = v47;
        v31 = 0;
        v104 = v46;
      }
    }
    else
    {
      v104 = calc_max_item_end() - (_DWORD)a2;
    }
    v32 = get_item_end() - (_DWORD)a2;
    n = flags & 0x600;
    if ( n == 1024 && (flags & 0xF0000000) == 0x60000000 )
      goto LABEL_70;
LABEL_86:
    v48 = sub_278A80((_QWORD *)a3, nullptr);
    if ( v48 > 1 && v105 )
      v104 = v48 * (v104 / v48);
    if ( !v31 && (v32 >= v104 || v104 < v101 || v104 < v11) )
      goto LABEL_70;
    if ( udm_by_tid == -1 )
    {
      get_opinfo();
      data_elsize = get_data_elsize();
    }
    else
    {
      data_elsize = (unsigned __int64)v123.m128i_i64[1] >> 3;
    }
    if ( v11 < v32 )
    {
      v49 = v101;
      if ( *(_BYTE *)(a3 + 20) )
        v49 = v104;
      if ( v32 >= v49 && n == 1024 && v48 == data_elsize )
        goto LABEL_70;
    }
    v113 = 0;
    v102 = sub_27AE10((_QWORD *)a3, a1, v104, v105, &v113, 0, v13);
    if ( !v102 )
      goto LABEL_145;
    v50 = get_tinfo_size();
    v106 = v50;
    if ( v9 )
    {
      v51 = *(_DWORD *)(a3 + 16);
      if ( v51 )
      {
        if ( v51 > v50 )
          goto LABEL_145;
      }
    }
    if ( (get_tinfo_property() & 0xF) == 0xD )
    {
      if ( (v113 & 0x100) == 0 )
      {
LABEL_145:
        clear_tinfo_t();
        goto LABEL_70;
      }
LABEL_106:
      v114 = 0;
      if ( udm_by_tid == -1 )
      {
        if ( !(unsigned __int8)get_tinfo() || sub_278410(&v114, &v113, (int)v11) )
        {
          aflags = get_aflags();
          if ( (unsigned __int8)apply_tinfo() )
          {
            if ( (aflags & 0x400000) == 0 && (get_aflags() & 0x400000) != 0 )
            {
              exception = __cxa_allocate_exception(0x30u);
              *(_QWORD *)exception = off_4DBCD0;
              exception[2] = -17;
              *((_QWORD *)exception + 2) = a2;
              *((_QWORD *)exception + 3) = 0;
              *((_OWORD *)exception + 2) = 0;
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
            }
LABEL_116:
            v115 = nullptr;
            v116 = 0;
            v55 = *(int **)a3;
            if ( *(_QWORD *)a3 )
            {
              if ( *(_QWORD *)(a3 + 8) )
              {
                v56 = *((int **)v55 + 1);
                if ( v55 != v56 )
                {
                  v100 = 0;
                  do
                  {
                    v57 = v56[8];
                    if ( (_DWORD)v57 == -1 )
                    {
                      sub_278EB0(a1, (unsigned __int64)a2, &v113, 0, (__int64)&v112, udm_by_tid, 0.0);
                      v100 = v102;
                    }
                    else
                    {
                      v58 = *(_QWORD *)(*((_QWORD *)v56 + 3) + 432LL) + 104 * v57;
                      if ( !sub_1EF510(v58, *(_QWORD *)(a1 + 112), &v113, 0, 0.0) )
                        goto LABEL_142;
                      if ( *(_DWORD *)(v58 + 88) <= v106
                        || *(char *)(v58 + 26) >= 0
                        && (v71 = v58 - *(_QWORD *)(v96 + 432),
                            LOBYTE(v121) = 0,
                            s1[1] = nullptr,
                            s1[2] = nullptr,
                            v120 = 0u,
                            HIDWORD(v121) = -991146299 * (v71 >> 3),
                            s1[0] = (char *)&off_4E0850,
                            v122 = v106,
                            !(unsigned int)sub_11FBB0(v96, (__int64)s1)) )
                      {
                        if ( *(_DWORD *)v58 == 1 )
                        {
                          v59 = *(_QWORD *)(v58 + 8);
                          if ( udm_by_tid != -1 && v59 != -1 )
                          {
                            v60 = sub_1CFD50((_QWORD *)v96, v59, 0.0);
                            if ( v60 == (unsigned __int64)v123.m128i_i64[0] >> 3 )
                            {
                              v62 = (unsigned int)v56[10];
                              if ( *((_QWORD *)v56 + 5) )
                                goto LABEL_127;
                              v117 = nullptr;
                              v118 = 0;
                              v84 = *(_QWORD *)(v96 + 216);
                              if ( v84 )
                              {
                                v117 = (void *)qalloc_or_throw(16 * v84, v59, 16 * v84, v61);
                                *((_QWORD *)&v118 + 1) = v84;
                                memcpy(v117, *(const void **)(v96 + 208), 16 * v84);
                                *(_QWORD *)&v118 = v84;
                              }
                              memset(s1, 0, sizeof(s1));
                              v85 = *(__int64 **)(v96 + 568);
                              v111[0] = *(__int64 **)(v96 + 576);
                              if ( (__int64 *)((char *)v85 + (unsigned __int64)v111[0] - 1) >= v85 )
                              {
                                v111[1] = v85;
                                s1[0] = (char *)qvector_reserve((__int64)s1, 0, 1, 16);
                                v62 = 16 * (__int64)s1[1];
                                *(__m128 *)&s1[0][16 * (__int64)s1[1]++] = _mm_loadh_ps((const double *)v111);
                              }
                              v111[0] = (__int64 *)&v117;
                              sub_3180C0((__int64 *)&v117, (__int64)s1, (__m128i *)v62, v61);
                              if ( s1[0] )
                              {
                                s1[1] = nullptr;
                                qfree((__int64)s1[0]);
                              }
                              v86 = v56[14];
                              v87 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v96 + 1496) + 24LL) + 16LL)
                                  & (v59 + *(_QWORD *)(v96 + 1440));
                              memset(s1, 0, sizeof(s1));
                              if ( v86 + v87 - 1 >= v87 )
                              {
                                v110 = v87;
                                s1[0] = (char *)qvector_reserve((__int64)s1, 0, 1, 16);
                                v89 = &s1[0][16 * (__int64)s1[1]];
                                *(_QWORD *)v89 = v110;
                                *((_QWORD *)v89 + 1) = v86;
                                ++s1[1];
                              }
                              v88 = sub_317F40(v111[0], (__int64)s1);
                              if ( s1[0] )
                              {
                                s1[1] = nullptr;
                                qfree((__int64)s1[0]);
                              }
                              if ( v117 )
                              {
                                *(_QWORD *)&v118 = 0;
                                qfree((__int64)v117);
                              }
                              if ( !v88 )
                              {
LABEL_127:
                                v63 = v116;
                                v64 = (__int64)v115;
                                v65 = (__int64)&v115[4 * v116];
                                if ( v115 == (int *)v65 )
                                  goto LABEL_205;
                                do
                                {
                                  if ( !(unsigned int)sub_256980((__int64)(v56 + 6), v64) )
                                    break;
                                  v64 += 16;
                                }
                                while ( v65 != v64 );
                                v63 = v116;
                                v65 = (__int64)v115;
                                if ( (int *)v64 == &v115[4 * (_QWORD)v116] )
                                {
LABEL_205:
                                  v81 = *((_QWORD *)v56 + 3);
                                  v82 = v56[8];
                                  if ( *((_QWORD *)&v116 + 1) < (unsigned __int64)(v63 + 1) )
                                    v115 = (int *)qvector_reserve((__int64)&v115, v65, v63 + 1, 16);
                                  v83 = &v115[4 * v116];
                                  *(_QWORD *)v83 = v81;
                                  v83[2] = v82;
                                  *(_QWORD *)&v116 = v116 + 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    if ( (*(_QWORD *)v56 & 2) == 0 )
                    {
                      v66 = *((int **)v56 + 2);
                      if ( (*(_BYTE *)v66 & 2) != 0 )
                      {
                        v72 = (int *)(*(_QWORD *)v56 & 0xFFFFFFFFFFFFFFFCLL);
                        v73 = *(_QWORD *)v72;
                        if ( (*(_QWORD *)v72 & 2) == 0 )
                        {
                          while ( *((int **)v72 + 2) == v56 )
                          {
                            v56 = v72;
                            v74 = v73 & 0xFFFFFFFFFFFFFFFCLL;
                            v73 = *(_QWORD *)(v73 & 0xFFFFFFFFFFFFFFFCLL);
                            if ( (v73 & 2) != 0 )
                            {
                              v56 = (int *)v74;
                              goto LABEL_135;
                            }
                            v72 = (int *)v74;
                          }
                        }
                        v56 = v72;
                      }
                      else
                      {
                        do
                        {
                          v56 = v66;
                          v66 = *((int **)v66 + 1);
                        }
                        while ( (*(_BYTE *)v66 & 2) == 0 );
                      }
                    }
LABEL_135:
                    ;
                  }
                  while ( v56 != *(int **)a3 );
                  v67 = v115;
                  v68 = &v115[4 * v116];
                  if ( v68 != v115 )
                  {
                    while ( 1 )
                    {
                      v100 = sub_278FC0(a1, (unsigned __int64)a2, &v113, v67, (__int64)&v112, udm_by_tid, 0.0, a5);
                      if ( !v100 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v67 + 432LL) + 104LL * v67[2] + 25) & 1) == 0 )
                        break;
                      v67 += 4;
                      if ( v68 == v67 )
                        goto LABEL_140;
                    }
                    if ( !under_debugger )
                      sub_383060(0xC40Eu, 0.0);
LABEL_242:
                    BUG();
                  }
LABEL_140:
                  if ( v100 )
                  {
                    sub_374BA0(a1, (unsigned __int64)a2);
                    v6 = v100;
                  }
LABEL_142:
                  if ( v115 )
                  {
                    *(_QWORD *)&v116 = 0;
                    qfree((__int64)v115);
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        copy_tinfo_t();
        v117 = nullptr;
        tinfo_property = get_tinfo_property();
        v117 = (void *)tinfo_property;
        v53 = tinfo_property;
        if ( (unsigned __int8)v114 <= 0x3Fu
          && (unsigned __int8)tinfo_property <= 0x3Fu
          && (!(_BYTE)tinfo_property
           || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0
           || (s1[0] = nullptr,
               s1[0] = (char *)get_tinfo_property(),
               v54 = get_tinfo_property() & 0x3F,
               clear_tinfo_t(),
               v54 == 48)
           || (v53 & 0xCF) == 9) )
        {
          clear_tinfo_t();
        }
        else
        {
          clear_tinfo_t();
          if ( sub_32CB80(&v114, a1) && !sub_278410(&v114, &v113, (int)v11) )
            goto LABEL_144;
        }
        if ( (int)set_tinfo_property4() >= 0 )
          goto LABEL_116;
      }
LABEL_144:
      clear_tinfo_t();
      goto LABEL_145;
    }
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      if ( v104 == v32 && v11 == data_elsize || n == 1024 && (flags & 0xF0000000) == 0x60000000 )
        goto LABEL_145;
      goto LABEL_106;
    }
    v117 = nullptr;
    v111[0] = (__int64 *)&v117;
    *(_QWORD *)&v118 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      if ( (get_tinfo_property() & 0x3F) != 0xD )
      {
        v76 = get_tinfo_size();
        v77 = v76;
        if ( udm_by_tid == -1
          || v76 <= 1
          || (v78 = v76 - v32, v79 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL), v78 >= v79)
          || (v80 = _mm_load_si128(&v123),
              a5 = (__m128)_mm_add_epi64(_mm_srli_si128(v80, 8), v80),
              v104 + ((unsigned __int64)v80.m128i_i64[0] >> 3) != (((int)(v79 - 1) + (a5.m128_u64[0] >> 3)) & -v79)) )
        {
          if ( DWORD1(v118) != 2 )
            goto LABEL_200;
          if ( (unsigned __int8)(((unsigned __int8)v117 & 0xF) - 2) > 5u )
          {
            *(_OWORD *)s1 = 0;
            getinf_buf();
            if ( a2 >= s1[0] && a2 < s1[1] )
            {
              v92 = get_tinfo_property();
              if ( (v92 & 0xE) == 0 && (v92 & 0x30) != 0 && v77 > 3 )
                goto LABEL_204;
            }
LABEL_200:
            if ( ((unsigned __int8)v117 & 0xF) == 0xA && !get_tinfo_property() )
              goto LABEL_204;
LABEL_201:
            memset(s1, 0, sizeof(s1));
            if ( ((unsigned __int16)v117 & 0x100) != 0 )
            {
              tinfo_pdata = get_tinfo_pdata();
              v91 = s1[0];
              if ( tinfo_pdata && s1[1] && !strcmp(s1[0], "va_list") )
              {
                if ( v91 )
                {
                  s1[1] = nullptr;
                  qfree((__int64)v91);
                }
                goto LABEL_204;
              }
              if ( v91 )
              {
                s1[1] = nullptr;
                qfree((__int64)v91);
              }
            }
            clear_tinfo_t();
            goto LABEL_106;
          }
          if ( v77 <= 3 )
            goto LABEL_201;
        }
      }
    }
LABEL_204:
    clear_tinfo_t();
    goto LABEL_145;
  }
  if ( get_tinfo_property4() == -1 )
  {
    if ( !under_debugger )
      sub_383060(0xCDD8u, 0.0);
    goto LABEL_242;
  }
  v13 = 0;
  memset(s1, 0, sizeof(s1));
  v121 = 0;
  v122 = 1;
  v120 = 0;
  get_tinfo_details();
  v104 = v11;
  v14 = 144 * (udm_by_tid + 1);
  v15 = v14;
  v16 = *(_QWORD *)v14;
  if ( qword_18[v14 / 8] )
  {
    v17 = *(const char **)&word_10[72 * udm_by_tid + 72];
    if ( v17 )
    {
      v109 = &s1[0][v14];
      v18 = strncmp(v17, "anonymous", 9u);
      v15 = (unsigned __int64)v109;
      if ( v18 )
        goto LABEL_147;
    }
  }
  else if ( ::s1 )
  {
LABEL_147:
    v20 = v16 >> 3;
    if ( v16 >> 3 < v97 )
      v20 = v97;
    if ( v96 )
      goto LABEL_16;
    if ( !v20 )
      goto LABEL_36;
    goto LABEL_151;
  }
  v19 = *(_QWORD *)(v15 + 8);
  if ( (unsigned __int64)(v19 - 8) > 7 )
    goto LABEL_147;
  v20 = (v19 + v16) >> 3;
  if ( v97 >= v20 )
    goto LABEL_147;
  if ( v96 )
  {
LABEL_16:
    v98 = v20;
    if ( (unsigned __int64)v123.m128i_i64[0] >> 3 >= sub_1CFD50((_QWORD *)v96, *(_QWORD *)(v96 + 144), 0.0)
      || (v21 = *(_QWORD *)(v96 + 88), v21 >= v98) )
    {
      if ( v98 )
      {
        v70 = v98 - ((unsigned __int64)v123.m128i_i64[0] >> 3);
        if ( v11 >= v70 )
          v70 = v11;
        v104 = v70;
      }
    }
    else
    {
      if ( v21 < (unsigned __int64)v123.m128i_i64[0] >> 3 )
        v21 = (unsigned __int64)v123.m128i_i64[0] >> 3;
      if ( v21 )
      {
        v22 = v21 - ((unsigned __int64)v123.m128i_i64[0] >> 3);
        if ( v11 >= v22 )
          v22 = v11;
        v104 = v22;
      }
    }
    if ( *v9 == 1 )
    {
      v23 = *((_QWORD *)v9 + 1);
      if ( v23 >= 0 )
      {
        v24 = *(_QWORD *)(v96 + 440);
        v25 = v104 + v23;
        if ( v24 )
        {
          v26 = *(_QWORD *)(v96 + 432);
          v27 = v26 + 104 * v24;
          do
          {
            if ( *(_DWORD *)v26 == 1 )
            {
              v28 = *(_QWORD *)(v26 + 8);
              if ( v28 < v25 && v28 > v23 )
                v25 = *(_QWORD *)(v26 + 8);
            }
            v26 += 104;
          }
          while ( v26 != v27 );
        }
        v29 = v25 - v23;
        v30 = v29;
        if ( v29 >= v104 )
          v30 = v104;
        v104 = v30;
      }
    }
    goto LABEL_36;
  }
LABEL_151:
  v69 = v20 - ((unsigned __int64)v123.m128i_i64[0] >> 3);
  if ( v11 >= v69 )
    v69 = v11;
  v104 = v69;
LABEL_36:
  if ( (get_tinfo_property() & 0x2F) != 0xD )
  {
    flags = 1024;
    v31 = 0;
    n = 1024;
    v32 = (unsigned __int64)v123.m128i_i64[1] >> 3;
    goto LABEL_86;
  }
LABEL_70:
  clear_tinfo_t();
  if ( v126 )
  {
    *(_QWORD *)&v127 = 0;
    qfree(v126);
  }
  if ( v124 )
  {
    *(_QWORD *)&v125 = 0;
    qfree(v124);
  }
  clear_tinfo_t();
  return v6;
}

