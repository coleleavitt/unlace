__int64 __fastcall sub_2773A0(__int64 a1, char *a2, __int64 a3)
{
  _DWORD *exception; // rdi
  unsigned int v4; // r13d
  int v6; // eax
  int *v7; // rbp
  bool v8; // al
  unsigned int v9; // r14d
  int tinfo_size; // r12d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r12
  const char *v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  unsigned int v27; // eax
  char v28; // bl
  unsigned int v29; // r12d
  int *v30; // r15
  int v31; // ebx
  _QWORD *v32; // r13
  __int64 *v33; // r15
  __int64 v34; // rsi
  int *v35; // r15
  _QWORD *v36; // rdx
  _QWORD *i; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rax
  int v43; // eax
  unsigned int v44; // edx
  int v45; // r15d
  unsigned int v46; // eax
  int v47; // eax
  int v48; // edx
  __int64 tinfo_property; // rax
  char v50; // r12
  char v51; // bp
  int *v52; // rax
  int *v53; // rbp
  __int64 v54; // rax
  __int64 v55; // r14
  __int64 v56; // r14
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // r14
  __int64 v60; // rbx
  int *v61; // rdx
  int *v62; // rbp
  int *v63; // rbx
  unsigned int v64; // edx
  unsigned int v65; // edx
  __int64 v66; // rax
  int *v67; // rax
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  int aflags; // ebp
  int v71; // eax
  int v72; // ebp
  unsigned int v73; // edx
  unsigned int v74; // eax
  __m128i v75; // xmm0
  __int64 v76; // r14
  int v77; // r12d
  __int64 v78; // rax
  __int64 v79; // rbx
  unsigned __int64 v80; // r9
  __int64 v81; // rbx
  unsigned __int64 v82; // r8
  char v83; // bl
  char *v84; // rax
  __int64 tinfo_pdata; // rax
  char *v86; // rbp
  char v87; // al
  __int64 v91; // [rsp+18h] [rbp-2F0h]
  unsigned __int64 v92; // [rsp+20h] [rbp-2E8h]
  unsigned __int64 v93; // [rsp+20h] [rbp-2E8h]
  int flags; // [rsp+20h] [rbp-2E8h]
  unsigned __int8 v95; // [rsp+20h] [rbp-2E8h]
  unsigned int v96; // [rsp+2Ch] [rbp-2DCh]
  unsigned __int8 v97; // [rsp+2Ch] [rbp-2DCh]
  __int64 udm_by_tid; // [rsp+38h] [rbp-2D0h]
  unsigned int v99; // [rsp+40h] [rbp-2C8h]
  unsigned __int8 v100; // [rsp+40h] [rbp-2C8h]
  char v101; // [rsp+44h] [rbp-2C4h]
  int v102; // [rsp+44h] [rbp-2C4h]
  size_t n; // [rsp+50h] [rbp-2B8h]
  int data_elsize; // [rsp+58h] [rbp-2B0h]
  char *v105; // [rsp+60h] [rbp-2A8h]
  unsigned __int64 v106; // [rsp+68h] [rbp-2A0h]
  double v107[3]; // [rsp+70h] [rbp-298h] BYREF
  __int64 v108; // [rsp+88h] [rbp-280h] BYREF
  __int64 v109; // [rsp+90h] [rbp-278h] BYREF
  __int64 v110; // [rsp+98h] [rbp-270h] BYREF
  __int64 v111; // [rsp+A0h] [rbp-268h]
  __int128 v112; // [rsp+A8h] [rbp-260h]
  void *v113; // [rsp+C0h] [rbp-248h] BYREF
  __int128 v114; // [rsp+C8h] [rbp-240h]
  char *s1[3]; // [rsp+E0h] [rbp-228h] BYREF
  __int128 v116; // [rsp+F8h] [rbp-210h]
  __int64 v117; // [rsp+108h] [rbp-200h]
  int v118; // [rsp+110h] [rbp-1F8h]
  __m128i v119; // [rsp+120h] [rbp-1E8h] BYREF
  __int64 v120; // [rsp+130h] [rbp-1D8h]
  __int128 v121; // [rsp+138h] [rbp-1D0h]
  __int64 v122; // [rsp+148h] [rbp-1C0h]
  __int128 v123; // [rsp+150h] [rbp-1B8h]
  __int128 v124; // [rsp+160h] [rbp-1A8h]
  __int64 v125; // [rsp+190h] [rbp-178h]
  int v126; // [rsp+198h] [rbp-170h]
  __int64 v127; // [rsp+1A0h] [rbp-168h]
  char v128; // [rsp+1A8h] [rbp-160h]
  unsigned __int64 v129; // [rsp+2C8h] [rbp-40h]

  v129 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a3 + 8) )
    return 0;
  v4 = is_special_frame_member();
  if ( (_BYTE)v4 )
    return 0;
  v6 = sub_274560((int **)a3);
  v7 = *(int **)a3;
  v96 = v6;
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)(a3 + 8) || (v30 = *((int **)v7 + 1), v30 == v7) )
    {
      v91 = 0;
      v8 = 0;
      v7 = nullptr;
      v9 = 0;
      v92 = 0;
      tinfo_size = -1;
    }
    else
    {
      v91 = 0;
      v31 = 1;
      tinfo_size = -1;
      v92 = 0;
      if ( v6 > 0 )
        v31 = v6;
      v7 = nullptr;
      v9 = 0;
      v100 = v4;
      v32 = v30;
      do
      {
        v33 = v32 + 3;
        if ( tinfo_size == -1 )
          tinfo_size = get_tinfo_size();
        if ( *((_DWORD *)v32 + 10) >= v31 && (*((_DWORD *)v32 + 10) < (signed int)v9 || !v9) )
          v9 = *((_DWORD *)v32 + 10);
        if ( *((_DWORD *)v32 + 8) != -1 )
        {
          v34 = *v33;
          v35 = (int *)(*(_QWORD *)(*v33 + 432) + 104LL * *((int *)v32 + 8));
          if ( !v7 )
          {
            v91 = v34;
            v7 = v35;
          }
          if ( (get_tinfo_property() & 0xF) == 0xB )
          {
            v41 = sub_1BF200(v35, v35[22]);
            v42 = sub_1CB990((_QWORD *)v91, v41);
            if ( (__int64)v92 >= v42 )
              v42 = v92;
            v92 = v42;
          }
        }
        if ( (*v32 & 2) == 0 )
        {
          v36 = (_QWORD *)v32[2];
          if ( (*(_BYTE *)v36 & 2) != 0 )
          {
            v38 = (_QWORD *)(*v32 & 0xFFFFFFFFFFFFFFFCLL);
            v39 = *v38;
            if ( (*v38 & 2) == 0 )
            {
              while ( (_QWORD *)v38[2] == v32 )
              {
                v32 = v38;
                v40 = v39 & 0xFFFFFFFFFFFFFFFCLL;
                v39 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v39 & 2) != 0 )
                {
                  v32 = (_QWORD *)v40;
                  goto LABEL_58;
                }
                v38 = (_QWORD *)v40;
              }
            }
            v32 = v38;
          }
          else
          {
            for ( i = (_QWORD *)v36[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
              v36 = i;
            v32 = v36;
          }
        }
LABEL_58:
        ;
      }
      while ( *(_QWORD **)a3 != v32 );
      v4 = v100;
      v8 = v9 != 0;
    }
  }
  else
  {
    v91 = 0;
    v8 = 0;
    tinfo_size = -1;
    v9 = 0;
    v92 = 0;
  }
  v108 = 0;
  v120 = 0;
  v101 = v8 || (int)v96 > tinfo_size;
  v122 = 0;
  v125 = 1;
  v126 = -1;
  v127 = 0;
  v128 = 0;
  v119 = 0;
  v121 = 0;
  v123 = 0;
  v124 = 0;
  udm_by_tid = get_udm_by_tid();
  if ( udm_by_tid == -1 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) < (unsigned __int64)a2 )
      goto LABEL_70;
    flags = get_flags_ex();
    if ( (get_aflags() & 0x2000000) != 0 )
      goto LABEL_70;
    v28 = is_spec_ea();
    if ( v28 )
    {
      v43 = (unsigned __int8)getinf() == 8 ? get_qword() : get_dword();
      if ( v43 < 0 )
      {
        if ( v101 )
          tinfo_size = 0;
        v28 = v101;
        v99 = tinfo_size;
      }
      else
      {
        v44 = v96;
        if ( v96 < v9 )
          v44 = v9;
        if ( v44 >= v43 )
          v43 = v44;
        v28 = 0;
        v99 = v43;
      }
    }
    else
    {
      v99 = calc_max_item_end() - (_DWORD)a2;
    }
    v29 = get_item_end() - (_DWORD)a2;
    n = flags & 0x600;
    if ( n == 1024 && (flags & 0xF0000000) == 0x60000000 )
      goto LABEL_70;
LABEL_86:
    v45 = sub_274200((_QWORD *)a3, nullptr);
    if ( v45 > 1 && v101 )
      v99 = v45 * (v99 / v45);
    if ( !v28 && (v29 >= v99 || v99 < v96 || v99 < v9) )
      goto LABEL_70;
    if ( udm_by_tid == -1 )
    {
      get_opinfo();
      data_elsize = get_data_elsize();
    }
    else
    {
      data_elsize = (unsigned __int64)v119.m128i_i64[1] >> 3;
    }
    if ( v9 < v29 )
    {
      v46 = v96;
      if ( *(_BYTE *)(a3 + 20) )
        v46 = v99;
      if ( v29 >= v46 && n == 1024 && v45 == data_elsize )
        goto LABEL_70;
    }
    v109 = 0;
    v97 = sub_276590((_QWORD *)a3, a1, v99, v101, &v109, 0);
    if ( !v97 )
      goto LABEL_146;
    v47 = get_tinfo_size();
    v102 = v47;
    if ( v7 )
    {
      v48 = *(_DWORD *)(a3 + 16);
      if ( v48 )
      {
        if ( v48 > v47 )
          goto LABEL_146;
      }
    }
    if ( (get_tinfo_property() & 0xF) == 0xD )
    {
      if ( (v109 & 0x100) == 0 )
      {
LABEL_146:
        clear_tinfo_t();
        goto LABEL_70;
      }
LABEL_106:
      v110 = 0;
      if ( udm_by_tid == -1 )
      {
        if ( !(unsigned __int8)get_tinfo() || (unsigned __int8)sub_273B90(&v110, &v109, v9) )
        {
          aflags = get_aflags();
          if ( (unsigned __int8)apply_tinfo() )
          {
            if ( (aflags & 0x400000) == 0 && (get_aflags() & 0x400000) != 0 )
            {
              exception = __cxa_allocate_exception(0x30u);
              *(_QWORD *)exception = off_4BC450;
              exception[2] = -17;
              *((_QWORD *)exception + 2) = a2;
              *((_QWORD *)exception + 3) = 0;
              *((_OWORD *)exception + 2) = 0;
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_762C0);
            }
LABEL_116:
            v111 = 0;
            v112 = 0;
            v52 = *(int **)a3;
            if ( *(_QWORD *)a3 )
            {
              if ( *(_QWORD *)(a3 + 8) )
              {
                v53 = *((int **)v52 + 1);
                if ( v52 != v53 )
                {
                  v95 = 0;
                  do
                  {
                    v54 = v53[8];
                    if ( (_DWORD)v54 == -1 )
                    {
                      sub_274630(a1, (__int64)a2, &v109, 0, (__int64)&v108, udm_by_tid);
                      v95 = v97;
                    }
                    else
                    {
                      v55 = *(_QWORD *)(*((_QWORD *)v53 + 3) + 432LL) + 104 * v54;
                      if ( !sub_1EAC90(v55, *(_QWORD *)(a1 + 112), &v109, 0) )
                        goto LABEL_143;
                      if ( *(_DWORD *)(v55 + 88) <= v102
                        || *(char *)(v55 + 26) >= 0
                        && (v66 = v55 - *(_QWORD *)(v91 + 432),
                            LOBYTE(v117) = 0,
                            s1[1] = nullptr,
                            s1[2] = nullptr,
                            v116 = 0u,
                            HIDWORD(v117) = -991146299 * (v66 >> 3),
                            s1[0] = (char *)off_4C0F90,
                            v118 = v102,
                            !(unsigned int)sub_11B9B0(v91, (__int64)s1)) )
                      {
                        if ( *(_DWORD *)v55 == 1 )
                        {
                          v56 = *(_QWORD *)(v55 + 8);
                          if ( udm_by_tid != -1 && v56 != -1 )
                          {
                            v57 = sub_1CB990((_QWORD *)v91, v56);
                            if ( v57 == (unsigned __int64)v119.m128i_i64[0] >> 3 )
                            {
                              if ( v53[10] || v53[11] )
                                goto LABEL_128;
                              v113 = nullptr;
                              v114 = 0;
                              v79 = *(_QWORD *)(v91 + 216);
                              if ( v79 )
                              {
                                v113 = (void *)qalloc_or_throw();
                                *((_QWORD *)&v114 + 1) = v79;
                                memcpy(v113, *(const void **)(v91 + 208), 16 * v79);
                                *(_QWORD *)&v114 = v79;
                              }
                              memset(s1, 0, sizeof(s1));
                              v80 = *(_QWORD *)(v91 + 568);
                              v107[0] = *(double *)(v91 + 576);
                              if ( v80 + *(_QWORD *)&v107[0] - 1 >= v80 )
                              {
                                *(_QWORD *)&v107[1] = v80;
                                s1[0] = (char *)qvector_reserve();
                                *(__m128 *)&s1[0][16 * (__int64)s1[1]++] = _mm_loadh_ps(v107);
                              }
                              *(_QWORD *)&v107[0] = &v113;
                              sub_313340(&v113, s1);
                              if ( s1[0] )
                              {
                                s1[1] = nullptr;
                                qfree();
                              }
                              v81 = v53[14];
                              v82 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v91 + 1496) + 24LL) + 16LL)
                                  & (v56 + *(_QWORD *)(v91 + 1440));
                              memset(s1, 0, sizeof(s1));
                              if ( v81 + v82 - 1 >= v82 )
                              {
                                v106 = v82;
                                s1[0] = (char *)qvector_reserve();
                                v84 = &s1[0][16 * (__int64)s1[1]];
                                *(_QWORD *)v84 = v106;
                                *((_QWORD *)v84 + 1) = v81;
                                ++s1[1];
                              }
                              v83 = sub_3131C0(*(_QWORD *)&v107[0], s1);
                              if ( s1[0] )
                              {
                                s1[1] = nullptr;
                                qfree();
                              }
                              if ( v113 )
                              {
                                *(_QWORD *)&v114 = 0;
                                qfree();
                              }
                              if ( !v83 )
                              {
LABEL_128:
                                v58 = v112;
                                v59 = v111;
                                v60 = v111 + 16 * v112;
                                if ( v111 == v60 )
                                  goto LABEL_206;
                                do
                                {
                                  if ( !(unsigned int)sub_252100((__int64)(v53 + 6), v59) )
                                    break;
                                  v59 += 16;
                                }
                                while ( v60 != v59 );
                                v58 = v112;
                                if ( v59 == v111 + 16LL * (_QWORD)v112 )
                                {
LABEL_206:
                                  v76 = *((_QWORD *)v53 + 3);
                                  v77 = v53[8];
                                  if ( *((_QWORD *)&v112 + 1) < (unsigned __int64)(v58 + 1) )
                                    v111 = qvector_reserve();
                                  v78 = v111 + 16 * v112;
                                  *(_QWORD *)v78 = v76;
                                  *(_DWORD *)(v78 + 8) = v77;
                                  *(_QWORD *)&v112 = v112 + 1;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    if ( (*(_QWORD *)v53 & 2) == 0 )
                    {
                      v61 = *((int **)v53 + 2);
                      if ( (*(_BYTE *)v61 & 2) != 0 )
                      {
                        v67 = (int *)(*(_QWORD *)v53 & 0xFFFFFFFFFFFFFFFCLL);
                        v68 = *(_QWORD *)v67;
                        if ( (*(_QWORD *)v67 & 2) == 0 )
                        {
                          while ( *((int **)v67 + 2) == v53 )
                          {
                            v53 = v67;
                            v69 = v68 & 0xFFFFFFFFFFFFFFFCLL;
                            v68 = *(_QWORD *)(v68 & 0xFFFFFFFFFFFFFFFCLL);
                            if ( (v68 & 2) != 0 )
                            {
                              v53 = (int *)v69;
                              goto LABEL_136;
                            }
                            v67 = (int *)v69;
                          }
                        }
                        v53 = v67;
                      }
                      else
                      {
                        do
                        {
                          v53 = v61;
                          v61 = *((int **)v61 + 1);
                        }
                        while ( (*(_BYTE *)v61 & 2) == 0 );
                      }
                    }
LABEL_136:
                    ;
                  }
                  while ( v53 != *(int **)a3 );
                  v62 = (int *)v111;
                  v63 = (int *)(v111 + 16 * v112);
                  if ( v63 != (int *)v111 )
                  {
                    while ( 1 )
                    {
                      v95 = sub_274740(a1, (__int64)a2, &v109, v62, (__int64)&v108, udm_by_tid);
                      if ( !v95 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v62 + 432LL) + 104LL * v62[2] + 25) & 1) == 0 )
                        break;
                      v62 += 4;
                      if ( v63 == v62 )
                        goto LABEL_141;
                    }
                    if ( !under_debugger )
                      sub_37E160(50190);
LABEL_243:
                    BUG();
                  }
LABEL_141:
                  if ( v95 )
                  {
                    sub_36FCA0(a1, a2);
                    v4 = v95;
                  }
LABEL_143:
                  if ( v111 )
                  {
                    *(_QWORD *)&v112 = 0;
                    qfree();
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
        v113 = nullptr;
        tinfo_property = get_tinfo_property();
        v113 = (void *)tinfo_property;
        v50 = tinfo_property;
        if ( (unsigned __int8)v110 <= 0x3Fu
          && (unsigned __int8)tinfo_property <= 0x3Fu
          && (!(_BYTE)tinfo_property
           || (tinfo_property & 0xE) == 0 && (tinfo_property & 0x30) != 0
           || (s1[0] = nullptr,
               s1[0] = (char *)get_tinfo_property(),
               v51 = get_tinfo_property() & 0x3F,
               clear_tinfo_t(),
               v51 == 48)
           || (v50 & 0xCF) == 9) )
        {
          clear_tinfo_t();
        }
        else
        {
          clear_tinfo_t();
          if ( (unsigned __int8)sub_327C40(&v110, a1, -1) && !(unsigned __int8)sub_273B90(&v110, &v109, v9) )
            goto LABEL_145;
        }
        if ( (int)set_tinfo_property4() >= 0 )
          goto LABEL_116;
      }
LABEL_145:
      clear_tinfo_t();
      goto LABEL_146;
    }
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      if ( v99 == v29 && v9 == data_elsize || n == 1024 && (flags & 0xF0000000) == 0x60000000 )
        goto LABEL_146;
      goto LABEL_106;
    }
    v113 = nullptr;
    *(_QWORD *)&v107[0] = &v113;
    *(_QWORD *)&v114 = 0;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      if ( (get_tinfo_property() & 0x3F) != 0xD )
      {
        v71 = get_tinfo_size();
        v72 = v71;
        if ( udm_by_tid == -1
          || v71 <= 1
          || (v73 = v71 - v29, v74 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL), v73 >= v74)
          || (v75 = _mm_load_si128(&v119),
              v99 + ((unsigned __int64)v75.m128i_i64[0] >> 3) != (((int)(v74 - 1)
                                                                 + (_mm_add_epi64(_mm_srli_si128(v75, 8), v75).m128i_u64[0] >> 3))
                                                                & -v74)) )
        {
          if ( DWORD1(v114) != 2 )
            goto LABEL_201;
          if ( (unsigned __int8)(((unsigned __int8)v113 & 0xF) - 2) > 5u )
          {
            *(_OWORD *)s1 = 0;
            getinf_buf();
            if ( a2 >= s1[0] && a2 < s1[1] )
            {
              v87 = get_tinfo_property();
              if ( (v87 & 0xE) == 0 && (v87 & 0x30) != 0 && v72 > 3 )
                goto LABEL_205;
            }
LABEL_201:
            if ( ((unsigned __int8)v113 & 0xF) == 0xA && !get_tinfo_property() )
              goto LABEL_205;
LABEL_202:
            memset(s1, 0, sizeof(s1));
            if ( ((unsigned __int16)v113 & 0x100) != 0 )
            {
              tinfo_pdata = get_tinfo_pdata();
              v86 = s1[0];
              if ( tinfo_pdata && s1[1] && !strcmp(s1[0], "va_list") )
              {
                if ( v86 )
                {
                  s1[1] = nullptr;
                  qfree();
                }
                goto LABEL_205;
              }
              if ( v86 )
              {
                s1[1] = nullptr;
                qfree();
              }
            }
            clear_tinfo_t();
            goto LABEL_106;
          }
          if ( v72 <= 3 )
            goto LABEL_202;
        }
      }
    }
LABEL_205:
    clear_tinfo_t();
    goto LABEL_146;
  }
  if ( get_tinfo_property4() == -1 )
  {
    if ( !under_debugger )
      sub_37E160(52696);
    goto LABEL_243;
  }
  memset(s1, 0, sizeof(s1));
  v117 = 0;
  v118 = 1;
  v116 = 0;
  get_tinfo_details();
  v99 = v9;
  v11 = 144 * (udm_by_tid + 1);
  v12 = v11;
  v13 = *(_QWORD *)v11;
  if ( qword_18[v11 / 8] )
  {
    v14 = *(const char **)&word_10[72 * udm_by_tid + 72];
    if ( v14 )
    {
      v105 = &s1[0][v11];
      v15 = strncmp(v14, "anonymous", 9u);
      v12 = (unsigned __int64)v105;
      if ( v15 )
        goto LABEL_148;
    }
  }
  else if ( ::s1 )
  {
LABEL_148:
    v17 = v13 >> 3;
    if ( v13 >> 3 < v92 )
      v17 = v92;
    if ( v91 )
      goto LABEL_16;
    if ( !v17 )
      goto LABEL_36;
    goto LABEL_152;
  }
  v16 = *(_QWORD *)(v12 + 8);
  if ( (unsigned __int64)(v16 - 8) > 7 )
    goto LABEL_148;
  v17 = (v16 + v13) >> 3;
  if ( v92 >= v17 )
    goto LABEL_148;
  if ( v91 )
  {
LABEL_16:
    v93 = v17;
    if ( (unsigned __int64)v119.m128i_i64[0] >> 3 >= sub_1CB990((_QWORD *)v91, *(_QWORD *)(v91 + 144))
      || (v18 = *(_QWORD *)(v91 + 88), v18 >= v93) )
    {
      if ( v93 )
      {
        v65 = v93 - ((unsigned __int64)v119.m128i_i64[0] >> 3);
        if ( v9 >= v65 )
          v65 = v9;
        v99 = v65;
      }
    }
    else
    {
      if ( v18 < (unsigned __int64)v119.m128i_i64[0] >> 3 )
        v18 = (unsigned __int64)v119.m128i_i64[0] >> 3;
      if ( v18 )
      {
        v19 = v18 - ((unsigned __int64)v119.m128i_i64[0] >> 3);
        if ( v9 >= v19 )
          v19 = v9;
        v99 = v19;
      }
    }
    if ( *v7 == 1 )
    {
      v20 = *((_QWORD *)v7 + 1);
      if ( v20 >= 0 )
      {
        v21 = *(_QWORD *)(v91 + 440);
        v22 = v99 + v20;
        if ( v21 )
        {
          v23 = *(_QWORD *)(v91 + 432);
          v24 = v23 + 104 * v21;
          do
          {
            if ( *(_DWORD *)v23 == 1 )
            {
              v25 = *(_QWORD *)(v23 + 8);
              if ( v25 < v22 && v25 > v20 )
                v22 = *(_QWORD *)(v23 + 8);
            }
            v23 += 104;
          }
          while ( v23 != v24 );
        }
        v26 = v22 - v20;
        v27 = v26;
        if ( v26 >= v99 )
          v27 = v99;
        v99 = v27;
      }
    }
    goto LABEL_36;
  }
LABEL_152:
  v64 = v17 - ((unsigned __int64)v119.m128i_i64[0] >> 3);
  if ( v9 >= v64 )
    v64 = v9;
  v99 = v64;
LABEL_36:
  if ( (get_tinfo_property() & 0x2F) != 0xD )
  {
    flags = 1024;
    v28 = 0;
    n = 1024;
    v29 = (unsigned __int64)v119.m128i_i64[1] >> 3;
    goto LABEL_86;
  }
LABEL_70:
  clear_tinfo_t();
  if ( v122 )
  {
    *(_QWORD *)&v123 = 0;
    qfree();
  }
  if ( v120 )
  {
    *(_QWORD *)&v121 = 0;
    qfree();
  }
  clear_tinfo_t();
  return v4;
}

