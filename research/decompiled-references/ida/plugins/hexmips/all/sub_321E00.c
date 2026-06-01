unsigned __int64 __fastcall sub_321E00(unsigned __int64 a1, unsigned int a2)
{
  unsigned __int64 *func; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  char **p_s1; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int ordinal_limit; // eax
  __int64 v11; // r13
  __int64 (__fastcall **v12)(); // rax
  const char *numbered_type_name; // rdi
  char *v14; // rbx
  void *v15; // rax
  char *v16; // r14
  size_t v17; // rbx
  __m128i *v18; // rdx
  __int64 (__fastcall **v19)(); // rdi
  __int64 module_data; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 i; // r12
  __int64 m; // rax
  char **v26; // rbx
  int ii; // ebx
  char *v28; // rdi
  __int64 v29; // r8
  __int64 v30; // r9
  int jj; // r12d
  unsigned __int64 v32; // r15
  char *v33; // r13
  __int64 v34; // rsi
  __int64 mm; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  char tinfo_property; // r15
  __int64 head; // r12
  unsigned __int64 *v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // r15
  _QWORD *v44; // rbx
  _QWORD *v45; // rdi
  _QWORD *v46; // rdi
  __m128i *v47; // rdi
  __int64 v48; // r13
  __int64 v49; // rbx
  __m128i *v50; // rax
  __m128i *v51; // r15
  char **v52; // rbx
  char *v53; // rax
  unsigned int v54; // r14d
  int v55; // ebx
  __int64 kk; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  _QWORD *v60; // r12
  __int64 v61; // r8
  __int64 v62; // r9
  void *v63; // r15
  char v64; // bl
  void (__fastcall *v65)(void *); // rax
  __m128i *v66; // rbx
  __m128i *v67; // r14
  unsigned __int64 j; // r12
  __m128i *v69; // r15
  __m128i *v70; // r13
  char tinfo_details; // al
  __m128i *v72; // r15
  __int64 v73; // rbx
  __int64 v74; // r13
  __m128i *v75; // r15
  __int64 v76; // rsi
  __int64 (__fastcall **v77)(); // rcx
  __int64 (__fastcall **v78)(); // r15
  __int64 (__fastcall *v79)(); // rdx
  __int64 (__fastcall **v80)(); // rdi
  __m128i *v81; // r12
  __m128i *v82; // r14
  unsigned __int64 *k; // rax
  __int64 (__fastcall ***v84)(); // rsi
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  unsigned __int64 *v88; // r15
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  unsigned __int64 v92; // r13
  __int64 (__fastcall ***v93)(); // r12
  __int64 v94; // rbx
  __int64 v95; // r15
  __int64 v96; // rax
  __m128i v97; // xmm0
  __int64 (__fastcall ****v98)(); // r13
  __int64 (__fastcall ***v99)(); // r14
  __int64 v100; // [rsp+0h] [rbp-6C0h]
  char *v101; // [rsp+0h] [rbp-6C0h]
  __int64 v102; // [rsp+8h] [rbp-6B8h]
  __int64 v103; // [rsp+8h] [rbp-6B8h]
  void *srca; // [rsp+10h] [rbp-6B0h]
  char *src; // [rsp+10h] [rbp-6B0h]
  _BYTE *srcb; // [rsp+10h] [rbp-6B0h]
  _BYTE *srcc; // [rsp+10h] [rbp-6B0h]
  __int64 v108; // [rsp+18h] [rbp-6A8h]
  void **v109; // [rsp+18h] [rbp-6A8h]
  __int64 v110; // [rsp+20h] [rbp-6A0h]
  __m128i *v111; // [rsp+20h] [rbp-6A0h]
  __int64 (__fastcall ***v113)(); // [rsp+30h] [rbp-690h]
  __int64 fchunk; // [rsp+38h] [rbp-688h]
  __int64 v116; // [rsp+38h] [rbp-688h]
  size_t na; // [rsp+40h] [rbp-680h]
  size_t n; // [rsp+40h] [rbp-680h]
  __int64 (__fastcall ***v119)(); // [rsp+48h] [rbp-678h]
  __m128i *v120; // [rsp+78h] [rbp-648h] BYREF
  void *v121; // [rsp+80h] [rbp-640h] BYREF
  char *s; // [rsp+88h] [rbp-638h]
  char *v123; // [rsp+90h] [rbp-630h]
  char *v124; // [rsp+98h] [rbp-628h]
  __int128 v125; // [rsp+A0h] [rbp-620h] BYREF
  char *s1; // [rsp+B0h] [rbp-610h] BYREF
  __int128 v127; // [rsp+B8h] [rbp-608h]
  char *haystack; // [rsp+D0h] [rbp-5F0h]
  __int128 v129; // [rsp+D8h] [rbp-5E8h]
  __int64 (__fastcall **v130)(); // [rsp+F0h] [rbp-5D0h]
  __int128 v131; // [rsp+F8h] [rbp-5C8h]
  _OWORD v132[2]; // [rsp+110h] [rbp-5B0h] BYREF
  __int64 (__fastcall **v133)(); // [rsp+130h] [rbp-590h] BYREF
  __int128 v134; // [rsp+138h] [rbp-588h]
  __int64 v135; // [rsp+148h] [rbp-578h]
  int v136; // [rsp+150h] [rbp-570h]
  __m128i *idati; // [rsp+160h] [rbp-560h] BYREF
  __int128 v138; // [rsp+168h] [rbp-558h]
  _BYTE v139[24]; // [rsp+178h] [rbp-548h] BYREF
  int v140; // [rsp+190h] [rbp-530h]
  __m128i v141; // [rsp+1A0h] [rbp-520h]
  __int128 v142; // [rsp+1B0h] [rbp-510h]
  __int64 v143; // [rsp+1C0h] [rbp-500h]
  __int64 v144; // [rsp+1C8h] [rbp-4F8h]
  __int64 v145; // [rsp+1D0h] [rbp-4F0h]
  __int128 v146; // [rsp+1D8h] [rbp-4E8h]
  __int128 v147; // [rsp+1E8h] [rbp-4D8h]
  __int128 v148; // [rsp+1F8h] [rbp-4C8h]
  __int128 v149; // [rsp+208h] [rbp-4B8h]
  __int128 v150; // [rsp+218h] [rbp-4A8h]
  __int128 v151; // [rsp+228h] [rbp-498h]
  __int128 v152; // [rsp+238h] [rbp-488h]
  __int128 v153; // [rsp+248h] [rbp-478h]
  unsigned __int64 v154; // [rsp+258h] [rbp-468h]
  char v155[32]; // [rsp+260h] [rbp-460h] BYREF
  char v156; // [rsp+280h] [rbp-440h] BYREF
  unsigned __int64 v157; // [rsp+688h] [rbp-38h]

  v157 = __readfsqword(0x28u);
  func = (unsigned __int64 *)get_func();
  if ( func )
  {
    a1 = *func;
  }
  else if ( (a2 & 4) == 0 )
  {
    return v157 - __readfsqword(0x28u);
  }
  lock_func_range();
  v127 = 0;
  s1 = nullptr;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(61, 1, v3, &callui, v4, v5);
  p_s1 = &s1;
  callui(146, &s1, v6, &callui, v8, v9, v100, v102, srca, v108);
  sub_133060((__int64)"HIDECANCEL\nDeleting segments...");
  if ( (a2 & 8) != 0 )
  {
    ordinal_limit = get_ordinal_limit();
    if ( ordinal_limit > 1 )
    {
      v11 = 1;
      v110 = ordinal_limit;
      v109 = &v121;
      while ( 1 )
      {
        p_s1 = (char **)(unsigned int)v11;
        if ( (unsigned __int8)get_numbered_type() )
          break;
LABEL_31:
        if ( v110 == ++v11 )
          goto LABEL_32;
      }
      v130 = nullptr;
      v131 = 0;
      if ( s )
      {
        src = s;
        na = strlen(s);
        v12 = (__int64 (__fastcall **)())qvector_reserve();
        *(_QWORD *)&v131 = na + 1;
        v130 = v12;
        memmove(v12, src, na);
        *((_BYTE *)v130 + na) = 0;
      }
      qsnprintf();
      numbered_type_name = (const char *)get_numbered_type_name();
      if ( !numbered_type_name || (p_s1 = (char **)v155, strcmp(numbered_type_name, v155)) )
      {
        v14 = v123;
        memset(v132, 0, 24);
        if ( v123 )
        {
          srcb = (_BYTE *)strlen(v123);
          v15 = (void *)qvector_reserve();
          *((_QWORD *)&v132[0] + 1) = srcb + 1;
          *(_QWORD *)&v132[0] = v15;
          memmove(v15, v14, (size_t)srcb);
          srcb[*(_QWORD *)&v132[0]] = 0;
        }
        v16 = v124;
        v133 = nullptr;
        v134 = 0;
        if ( v124 )
        {
          srcc = (_BYTE *)strlen(v124);
          v101 = srcc + 1;
          v133 = (__int64 (__fastcall **)())qvector_reserve();
          *(_QWORD *)&v134 = srcc + 1;
          memmove(v133, v16, (size_t)srcc);
          srcc[(_QWORD)v133] = 0;
        }
        idati = nullptr;
        v138 = 0;
        src = (char *)v125;
        if ( (_QWORD)v125 )
        {
          v17 = strlen((const char *)v125);
          v101 = (char *)(v17 + 1);
          idati = (__m128i *)qvector_reserve();
          *(_QWORD *)&v138 = v17 + 1;
          memmove(idati, src, v17);
          idati->m128i_i8[v17] = 0;
          v18 = idati;
          haystack = nullptr;
          if ( idati )
            src = (char *)&v120;
          else
            src = nullptr;
        }
        else
        {
          v18 = nullptr;
          haystack = nullptr;
        }
        v120 = v18;
        p_s1 = nullptr;
        if ( !(unsigned __int8)deserialize_tinfo() || (p_s1 = nullptr, (unsigned int)save_tinfo()) )
        {
          clear_tinfo_t();
          if ( idati )
          {
            *(_QWORD *)&v138 = 0;
            qfree();
          }
          if ( v133 )
          {
            *(_QWORD *)&v134 = 0;
            qfree();
          }
          if ( *(_QWORD *)&v132[0] )
          {
            *((_QWORD *)&v132[0] + 1) = 0;
            qfree();
          }
          if ( !v130 )
            goto LABEL_31;
LABEL_30:
          *(_QWORD *)&v131 = 0;
          qfree();
          goto LABEL_31;
        }
        clear_tinfo_t();
        if ( idati )
        {
          *(_QWORD *)&v138 = 0;
          qfree();
        }
        if ( v133 )
        {
          *(_QWORD *)&v134 = 0;
          qfree();
        }
        if ( *(_QWORD *)&v132[0] )
        {
          *((_QWORD *)&v132[0] + 1) = 0;
          qfree();
        }
      }
      v19 = v130;
      if ( (unsigned __int64)v131 > 1 && (*(_BYTE *)v130 & 0x3F) == 0x2D )
      {
        qsnprintf();
        p_s1 = (char **)&v156;
        parse_decls();
        v19 = v130;
      }
      if ( !v19 )
        goto LABEL_31;
      goto LABEL_30;
    }
  }
LABEL_32:
  module_data = get_module_data();
  n = module_data;
  if ( (a2 & 1) != 0 )
  {
    v133 = nullptr;
    v135 = 0;
    v136 = -1;
    v134 = 0;
    if ( (a2 & 4) != 0 )
    {
      for ( i = getn_func(); i; i = get_next_func() )
      {
        if ( (*(_BYTE *)(i + 16) & 4) == 0 && !(unsigned __int8)is_spec_ea() )
        {
          p_s1 = (char **)&v133;
          sub_321350(n, (__int64)&v133, *(_QWORD *)i, (a2 >> 1) & 1);
        }
      }
    }
    else
    {
      p_s1 = (char **)&v133;
      sub_321350(module_data, (__int64)&v133, a1, (a2 >> 1) & 1);
    }
    callui(27, p_s1, v21, &callui, v22, v23, v101, v103, src, v109);
    if ( (a2 & 0x80u) != 0 )
    {
      netnode_check();
      netnode_kill();
      goto LABEL_190;
    }
    idati = nullptr;
    *(_QWORD *)v139 = 0;
    *(_DWORD *)&v139[8] = -1;
    v121 = nullptr;
    v138 = 0;
    callui(7, 0x9676D4FFFEBD5C67LL, &v121, &callui, v61, v62, v101, v103, src, v109);
    v63 = v121;
    if ( v121 )
    {
      v64 = (**(__int64 (__fastcall ***)(void *, __int64 (__fastcall ***)(), __m128i **, unsigned __int64))v121)(
              v121,
              &v133,
              &idati,
              a1);
      v65 = *(void (__fastcall **)(void *))(*(_QWORD *)v63 + 16LL);
      if ( v65 == sub_3212A0 )
        operator delete(v63, 0x10u);
      else
        v65(v63);
      if ( v64 )
      {
        v66 = idati;
        v67 = &idati[v138];
        if ( idati == v67 )
          goto LABEL_157;
        do
        {
          for ( j = v66->m128i_i64[0]; j < v66->m128i_i64[1]; ++j )
          {
            del_items();
            put_byte();
          }
          ++v66;
        }
        while ( v67 != v66 );
      }
      else
      {
        sub_2B05F0((__int64)"Failed to interact with the eh34 plugin, will delete eh34 data");
      }
    }
    v67 = idati;
LABEL_157:
    if ( v67 )
    {
      *(_QWORD *)&v138 = 0;
      qfree();
    }
LABEL_190:
    v76 = v134;
    v77 = v133;
    idati = nullptr;
    v138 = 0;
    *(_DWORD *)&v139[8] = -1;
    v78 = v133;
    *(_QWORD *)v139 = 0;
    if ( 16LL * (_QWORD)v134 )
    {
      while ( 1 )
      {
        v79 = v78[1];
        v80 = v78 + 2;
        v78 = v80;
        if ( v80 == &v77[2 * v76] )
          break;
        if ( v79 != (__int64 (__fastcall *)())-1LL && (unsigned __int64)((char *)*v80 - (char *)v79) <= 0xF )
        {
          v132[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v79, (__m128i)(unsigned __int64)*v80);
          rangeset_t_add();
          v77 = v133;
          v76 = v134;
        }
      }
      v81 = idati;
      v82 = &idati[v138];
      if ( idati != v82 )
      {
        do
        {
          rangeset_t_add();
          ++v81;
        }
        while ( v82 != v81 );
        v82 = idati;
      }
      if ( v82 )
      {
        *(_QWORD *)&v138 = 0;
        qfree();
      }
    }
    for ( k = (unsigned __int64 *)get_last_seg(); ; k = (unsigned __int64 *)get_prev_seg() )
    {
      v88 = k;
      if ( !k )
        break;
      v119 = (__int64 (__fastcall ***)())*k;
      if ( !(unsigned __int8)rangeset_t_has_common() )
      {
        callui(27, v88, v89, &callui, v90, v91, v101, v103, src, v109);
        v84 = (__int64 (__fastcall ***)())&byte_5;
        del_segm();
        goto LABEL_202;
      }
      idati = nullptr;
      v138 = 0;
      v92 = *v88;
      v93 = (__int64 (__fastcall ***)())v88[1];
      *(_QWORD *)v139 = 0;
      *(_DWORD *)&v139[8] = -1;
      if ( v92 < (unsigned __int64)v93 )
      {
        idati = (__m128i *)qvector_reserve();
        idati[(_QWORD)v138] = _mm_unpacklo_epi64((__m128i)v92, (__m128i)(unsigned __int64)v93);
        *(_QWORD *)&v138 = v138 + 1;
        v93 = (__int64 (__fastcall ***)())v88[1];
      }
      v84 = &v133;
      rangeset_t_sub2();
      v94 = (unsigned int)(v138 - 1);
      v95 = v94;
      if ( (int)v94 >= 0 )
      {
        do
        {
          while ( 1 )
          {
            v98 = (__int64 (__fastcall ****)())&idati[v95];
            callui(27, v84, v85, &callui, v86, v87, v101, v103, src, v109);
            v99 = *v98;
            v84 = v98[1];
            if ( *v98 != v119 )
              break;
            set_segm_start();
LABEL_213:
            LODWORD(v94) = v94 - 1;
            --v95;
            if ( (_DWORD)v94 == -1 )
              goto LABEL_217;
          }
          if ( v84 != v93 )
          {
            v113 = v98[1];
            if ( v99 != v84 )
            {
              v143 = 0;
              v144 = 0;
              v145 = 0;
              v154 = 0xFFFFFFFF00000000LL;
              v141 = 0;
              v142 = 0;
              v146 = -1;
              v147 = -1;
              v148 = -1;
              v149 = -1;
              v150 = -1;
              v151 = -1;
              v152 = -1;
              v153 = -1;
              v96 = getseg();
              v97 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v99, (__m128i)(unsigned __int64)v113);
              if ( v96 )
              {
                v145 = *(_QWORD *)(v96 + 48);
                BYTE3(v144) = *(_BYTE *)(v96 + 43);
              }
              v141 = v97;
              add_segm_ex();
              v84 = (__int64 (__fastcall ***)())&byte_5;
              del_segm();
            }
            goto LABEL_213;
          }
          v84 = *v98;
          set_segm_end();
          LODWORD(v94) = v94 - 1;
          --v95;
        }
        while ( (_DWORD)v94 != -1 );
      }
LABEL_217:
      if ( idati )
      {
        *(_QWORD *)&v138 = 0;
        qfree();
      }
LABEL_202:
      callui(27, v84, v85, &callui, v86, v87, v101, v103, src, v109);
    }
    if ( v133 )
    {
      *(_QWORD *)&v134 = 0;
      qfree();
    }
  }
  netnode_check();
  for ( m = netnode_hashfirst(); m > 0; m = netnode_hashnext() )
  {
    idati = (__m128i *)netnode_hashval_long();
    netnode_kill();
  }
  netnode_kill();
  delete_imports();
  v26 = off_4C3B00;
  do
  {
    netnode_check();
    netnode_kill();
    netnode_rename();
    ++v26;
  }
  while ( v26 != (char **)algn_4C3CB0 );
  for ( ii = 65; ii != 90; ++ii )
  {
    v138 = 0;
    idati = nullptr;
    sub_67670((__int64 *)&idati);
    netnode_check();
    netnode_kill();
    netnode_rename();
    sub_67670((__int64 *)&idati);
    v28 = (char *)::s1;
    if ( (_QWORD)v127 )
      v28 = s1;
    if ( !strcmp(v28, &idati->m128i_i8[2]) )
    {
      callui(100, "EmptyStack", 0, 0, v29, v30, v101, v103, src, v109);
    }
    else
    {
      netnode_check();
      netnode_kill();
      netnode_rename();
    }
    if ( idati )
    {
      *(_QWORD *)&v138 = 0;
      qfree();
    }
  }
  for ( jj = 1; jj != 17; ++jj )
  {
    get_problem_name();
    netnode_check();
    netnode_kill();
    netnode_rename();
  }
  do
  {
    if ( !(unsigned __int8)is_mapped() )
      netnode_supdel();
    ea2node();
    netnode_supnext();
  }
  while ( node2ea() != -1 );
  if ( (a2 & 4) == 0 )
  {
    for ( kk = getn_func(); ; kk = get_next_func() )
    {
      v60 = (_QWORD *)kk;
      if ( !kk )
        break;
      v58 = *(_QWORD *)(kk + 16);
      v59 = v58 & 0xFFFFFFFFFFFFFFFBLL;
      if ( *v60 != a1 )
        v59 = v58 | 4;
      v60[2] = v59;
      update_func();
    }
  }
  haystack = nullptr;
  v129 = 0;
  if ( (unsigned __int8)netnode_start() )
  {
    do
    {
      v32 = node2ea();
      if ( netnode_get_name() <= 0 )
      {
        if ( (a2 & 0x10) == 0 )
          goto LABEL_70;
        v125 = 0;
        getinf_buf();
        if ( v32 >= (unsigned __int64)v125 && v32 < *((_QWORD *)&v125 + 1) )
          goto LABEL_70;
        if ( (unsigned __int8)is_mapped() )
          goto LABEL_70;
      }
      else
      {
        v33 = haystack;
        if ( strncmp(haystack, "$ chooser\\", 0xAu)
          && strncmp(v33, "TIB[", 4u)
          && (strncmp(v33, "debug", 5u) || (unsigned __int8)(v33[5] - 48) > 9u)
          && (!strchr(v33, 91) || !strchr(v33, 93) || *v33 == 45)
          && !strstr(v33, ".dll")
          || a1 == v32 )
        {
          goto LABEL_70;
        }
      }
      netnode_rename();
      netnode_kill();
LABEL_70:
      if ( (a2 & 0x40) != 0 )
        netnode_delblob();
    }
    while ( (unsigned __int8)netnode_next() );
  }
  v34 = 0;
  for ( mm = first_named_type(); ; mm = next_named_type() )
  {
    v38 = mm;
    if ( !mm )
      break;
    idati = nullptr;
    if ( !(unsigned __int8)sub_321CC0() )
    {
      clear_tinfo_t();
LABEL_75:
      del_named_type();
      goto LABEL_76;
    }
    tinfo_property = get_tinfo_property();
    clear_tinfo_t();
    if ( (tinfo_property & 0x3F) != 0x2D )
      goto LABEL_75;
LABEL_76:
    v34 = v38;
  }
  if ( (a2 & 0x20) == 0 )
    goto LABEL_132;
  sub_321BE0((__int64)"Deleting unused types...", v34);
  head = 0;
  v125 = 0u;
  LODWORD(src) = a2 & 0x80;
  v124 = nullptr;
  while ( 2 )
  {
    if ( (unsigned __int8)get_tinfo() )
    {
      *(_QWORD *)&v131 = 4;
      v130 = off_4C3AE0;
      *((_QWORD *)&v131 + 1) = &v125;
      visit_subtypes();
    }
    fchunk = get_fchunk();
    if ( fchunk && (unsigned __int8)get_func_frame() )
    {
      idati = nullptr;
      v140 = 1;
      v138 = 0;
      memset(v139, 0, sizeof(v139));
      tinfo_details = get_tinfo_details();
      v72 = idati;
      if ( tinfo_details )
      {
        v111 = &idati[9 * v138];
        if ( idati != v111 )
        {
          v109 = (void **)v132;
          do
          {
            *((_QWORD *)&v132[0] + 1) = 4;
            *(_QWORD *)&v132[0] = off_4C3AE0;
            *(_QWORD *)&v132[1] = &v125;
            visit_subtypes();
            v72 += 9;
          }
          while ( v111 != v72 );
          v72 = idati;
        }
      }
      if ( v72 )
      {
        if ( (_QWORD)v138 )
        {
          v73 = fchunk;
          v116 = 0;
          v74 = v138;
          do
          {
            v75 = &v72[9 * v116];
            clear_tinfo_t();
            if ( v75[2].m128i_i64[1] )
            {
              v75[3].m128i_i64[0] = 0;
              qfree();
            }
            if ( v75[1].m128i_i64[0] )
            {
              v75[1].m128i_i64[1] = 0;
              qfree();
            }
            ++v116;
            v72 = idati;
          }
          while ( v74 != v116 );
          fchunk = v73;
        }
        *(_QWORD *)&v138 = 0;
        qfree();
      }
    }
    idati = nullptr;
    memset(v139, 0, sizeof(v139));
    v140 = 1;
    v138 = 0;
    if ( !(unsigned __int8)sub_2B3E30(*(_QWORD *)(n + 112), (__int64)&idati, head)
      || (v69 = idati, v70 = &idati[6 * v138], idati == v70) )
    {
      if ( !fchunk )
        goto LABEL_164;
      goto LABEL_98;
    }
    do
    {
      *(_QWORD *)&v134 = 4;
      v133 = off_4C3AE0;
      *((_QWORD *)&v134 + 1) = &v125;
      visit_subtypes();
      v69 += 6;
    }
    while ( v70 != v69 );
    if ( fchunk )
    {
LABEL_98:
      head = *(_QWORD *)(fchunk + 8);
      goto LABEL_99;
    }
LABEL_164:
    head = next_head();
LABEL_99:
    v41 = *(unsigned __int64 **)v139;
    if ( !*(_QWORD *)v139 )
      goto LABEL_110;
    v42 = **(_QWORD **)v139;
    v43 = **(_QWORD **)v139;
    if ( !*(_QWORD *)&v139[8] )
    {
      **(_QWORD **)v139 = **(_QWORD **)v139 & 3LL | *(_QWORD *)v139 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)v139 + 8LL) = _mm_unpacklo_epi64(
                                              (__m128i)*(unsigned __int64 *)v139,
                                              (__m128i)*(unsigned __int64 *)v139);
      **(_QWORD **)v139 &= ~1uLL;
      **(_QWORD **)v139 |= 2uLL;
      if ( !*(_QWORD *)v139 )
        goto LABEL_110;
      goto LABEL_160;
    }
    v44 = (_QWORD *)(v42 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (*(_BYTE *)(v42 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
      goto LABEL_109;
    v45 = (_QWORD *)v44[1];
    if ( (*(_BYTE *)v45 & 2) != 0 )
    {
      v46 = (_QWORD *)v44[2];
      if ( (*(_BYTE *)v46 & 2) == 0 )
      {
LABEL_104:
        sub_321A90(v46);
        goto LABEL_105;
      }
      goto LABEL_223;
    }
    sub_321A90(v45);
    v46 = (_QWORD *)v44[2];
    if ( (*(_BYTE *)v46 & 2) == 0 )
      goto LABEL_104;
LABEL_105:
    if ( (*(_BYTE *)v44 & 2) == 0 )
    {
LABEL_223:
      cleanup_argloc();
      cleanup_argloc();
      *v44 |= 2uLL;
    }
    if ( v43 > 3 )
      qfree();
    v41 = *(unsigned __int64 **)v139;
    v43 = **(_QWORD **)v139;
LABEL_109:
    *v41 = v43 & 3 | (unsigned __int64)v41 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*(_QWORD *)v139 + 8LL) = _mm_unpacklo_epi64(
                                            (__m128i)*(unsigned __int64 *)v139,
                                            (__m128i)*(unsigned __int64 *)v139);
    **(_QWORD **)v139 &= ~1uLL;
    **(_QWORD **)v139 |= 2uLL;
    *(_QWORD *)&v139[8] = 0;
    if ( *(_QWORD *)v139 )
LABEL_160:
      qfree();
LABEL_110:
    v47 = idati;
    if ( idati )
    {
      v48 = v138;
      if ( (_QWORD)v138 )
      {
        v49 = 0;
        do
        {
          v50 = &v47[6 * v49];
          v51 = v50;
          if ( v50[3].m128i_i64[1] )
          {
            v50[4].m128i_i64[0] = 0;
            qfree();
          }
          clear_tinfo_t();
          if ( v51[1].m128i_i64[1] )
          {
            v51[2].m128i_i64[0] = 0;
            qfree();
          }
          ++v49;
          cleanup_argloc();
          v47 = idati;
        }
        while ( v48 != v49 );
      }
      *(_QWORD *)&v138 = 0;
      qfree();
    }
    if ( head != -1 )
      continue;
    break;
  }
  if ( !(_DWORD)src )
  {
    v52 = off_4C3CC0;
    do
    {
      while ( 1 )
      {
        v53 = *v52;
        if ( *v52 )
        {
          WORD4(v138) = 256;
          *(_QWORD *)&v138 = v53;
          idati = (__m128i *)get_idati();
          if ( (unsigned __int8)create_tinfo() )
            break;
        }
        if ( &unk_4C3D18 == (_UNKNOWN *)++v52 )
          goto LABEL_126;
      }
      *(_QWORD *)&v138 = 4;
      idati = (__m128i *)off_4C3AE0;
      *((_QWORD *)&v138 + 1) = &v125;
      visit_subtypes();
      ++v52;
    }
    while ( &unk_4C3D18 != (_UNKNOWN *)v52 );
  }
LABEL_126:
  clear_tinfo_t();
  v54 = get_ordinal_limit();
  v55 = 1;
  if ( v54 > 1 )
  {
    do
    {
      while ( sub_60730(&v125, v55) )
      {
        if ( v54 == ++v55 )
          goto LABEL_131;
      }
      del_numbered_type();
      ++v55;
    }
    while ( v54 != v55 );
  }
LABEL_131:
  qfree();
LABEL_132:
  callui(24, 10, 0, &callui, v36, v37, v101, v103, src, v109);
  if ( haystack )
  {
    *(_QWORD *)&v129 = 0;
    qfree();
  }
  if ( s1 )
  {
    *(_QWORD *)&v127 = 0;
    qfree();
  }
  lock_func_range();
  return v157 - __readfsqword(0x28u);
}

