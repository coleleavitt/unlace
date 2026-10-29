unsigned __int64 __fastcall sub_326B80(unsigned __int64 a1, unsigned int a2)
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
  __int64 v19; // rdi
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
  __int64 v47; // rdi
  __m128i *v48; // rdi
  __int64 v49; // r13
  __int64 v50; // rbx
  __m128i *v51; // rax
  __int64 v52; // rdi
  __m128i *v53; // r15
  __int64 v54; // rdi
  char **v55; // rbx
  char *v56; // rax
  unsigned int v57; // r14d
  int v58; // ebx
  __int64 kk; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // rax
  _QWORD *v63; // r12
  __int64 v64; // r8
  __int64 v65; // r9
  void *v66; // r15
  char v67; // bl
  void (__fastcall *v68)(void *); // rax
  __m128i *v69; // rbx
  __m128i *v70; // r14
  unsigned __int64 j; // r12
  __m128i *v72; // r15
  __m128i *v73; // r13
  char tinfo_details; // al
  __m128i *v75; // r15
  __int64 v76; // rbx
  __int64 v77; // r13
  __m128i *v78; // r15
  __int64 v79; // rdi
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 (__fastcall **v82)(); // rcx
  __int64 (__fastcall **v83)(); // r15
  __int64 (__fastcall *v84)(); // rdx
  __int64 (__fastcall **v85)(); // rdi
  __m128i *v86; // r12
  __m128i *v87; // r14
  unsigned __int64 *k; // rax
  __int64 (__fastcall ***v89)(); // rsi
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  unsigned __int64 *v93; // r15
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned __int64 v97; // r13
  __int64 (__fastcall ***v98)(); // r12
  __int64 v99; // rbx
  __int64 v100; // r15
  __int64 v101; // rax
  __m128i v102; // xmm0
  __int64 (__fastcall ****v103)(); // r13
  __int64 (__fastcall ***v104)(); // r14
  __int64 v105; // [rsp+0h] [rbp-6C0h]
  char *v106; // [rsp+0h] [rbp-6C0h]
  __int64 v107; // [rsp+8h] [rbp-6B8h]
  __int64 v108; // [rsp+8h] [rbp-6B8h]
  void *srca; // [rsp+10h] [rbp-6B0h]
  char *src; // [rsp+10h] [rbp-6B0h]
  _BYTE *srcb; // [rsp+10h] [rbp-6B0h]
  _BYTE *srcc; // [rsp+10h] [rbp-6B0h]
  __int64 v113; // [rsp+18h] [rbp-6A8h]
  void **v114; // [rsp+18h] [rbp-6A8h]
  __int64 v115; // [rsp+20h] [rbp-6A0h]
  __m128i *v116; // [rsp+20h] [rbp-6A0h]
  __int64 (__fastcall ***v118)(); // [rsp+30h] [rbp-690h]
  __int64 fchunk; // [rsp+38h] [rbp-688h]
  __int64 v121; // [rsp+38h] [rbp-688h]
  size_t na; // [rsp+40h] [rbp-680h]
  size_t n; // [rsp+40h] [rbp-680h]
  __int64 (__fastcall ***v124)(); // [rsp+48h] [rbp-678h]
  __m128i *v125; // [rsp+78h] [rbp-648h] BYREF
  void *v126; // [rsp+80h] [rbp-640h] BYREF
  char *s; // [rsp+88h] [rbp-638h]
  char *v128; // [rsp+90h] [rbp-630h]
  char *v129; // [rsp+98h] [rbp-628h]
  __int128 v130; // [rsp+A0h] [rbp-620h] BYREF
  char *s1; // [rsp+B0h] [rbp-610h] BYREF
  __int128 v132; // [rsp+B8h] [rbp-608h]
  char *haystack; // [rsp+D0h] [rbp-5F0h]
  __int128 v134; // [rsp+D8h] [rbp-5E8h]
  __int64 (__fastcall **v135)(); // [rsp+F0h] [rbp-5D0h] BYREF
  __int128 v136; // [rsp+F8h] [rbp-5C8h]
  _OWORD v137[2]; // [rsp+110h] [rbp-5B0h] BYREF
  __int64 (__fastcall **v138)(); // [rsp+130h] [rbp-590h] BYREF
  __int128 v139; // [rsp+138h] [rbp-588h]
  __int64 v140; // [rsp+148h] [rbp-578h]
  int v141; // [rsp+150h] [rbp-570h]
  __m128i *idati; // [rsp+160h] [rbp-560h] BYREF
  __int128 v143; // [rsp+168h] [rbp-558h]
  _BYTE v144[24]; // [rsp+178h] [rbp-548h] BYREF
  int v145; // [rsp+190h] [rbp-530h]
  __m128i v146; // [rsp+1A0h] [rbp-520h]
  __int128 v147; // [rsp+1B0h] [rbp-510h]
  __int64 v148; // [rsp+1C0h] [rbp-500h]
  __int64 v149; // [rsp+1C8h] [rbp-4F8h]
  __int64 v150; // [rsp+1D0h] [rbp-4F0h]
  __int128 v151; // [rsp+1D8h] [rbp-4E8h]
  __int128 v152; // [rsp+1E8h] [rbp-4D8h]
  __int128 v153; // [rsp+1F8h] [rbp-4C8h]
  __int128 v154; // [rsp+208h] [rbp-4B8h]
  __int128 v155; // [rsp+218h] [rbp-4A8h]
  __int128 v156; // [rsp+228h] [rbp-498h]
  __int128 v157; // [rsp+238h] [rbp-488h]
  __int128 v158; // [rsp+248h] [rbp-478h]
  unsigned __int64 v159; // [rsp+258h] [rbp-468h]
  char v160[32]; // [rsp+260h] [rbp-460h] BYREF
  char v161; // [rsp+280h] [rbp-440h] BYREF
  unsigned __int64 v162; // [rsp+688h] [rbp-38h]

  v162 = __readfsqword(0x28u);
  func = (unsigned __int64 *)get_func();
  if ( func )
  {
    a1 = *func;
  }
  else if ( (a2 & 4) == 0 )
  {
    return v162 - __readfsqword(0x28u);
  }
  lock_func_range();
  v132 = 0;
  s1 = nullptr;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(61, 1, v3, &callui, v4, v5);
  p_s1 = &s1;
  callui(146, &s1, v6, &callui, v8, v9, v105, v107, srca, v113);
  sub_137260((__int64)"HIDECANCEL\nDeleting segments...");
  if ( (a2 & 8) != 0 )
  {
    ordinal_limit = get_ordinal_limit();
    if ( ordinal_limit > 1 )
    {
      v11 = 1;
      v115 = ordinal_limit;
      v114 = &v126;
      while ( 1 )
      {
        p_s1 = (char **)(unsigned int)v11;
        if ( (unsigned __int8)get_numbered_type() )
          break;
LABEL_31:
        if ( v115 == ++v11 )
          goto LABEL_32;
      }
      v135 = nullptr;
      v136 = 0;
      if ( s )
      {
        src = s;
        na = strlen(s);
        v12 = (__int64 (__fastcall **)())qvector_reserve((__int64)&v135, 0, na + 1, 1);
        *(_QWORD *)&v136 = na + 1;
        v135 = v12;
        memmove(v12, src, na);
        *((_BYTE *)v135 + na) = 0;
      }
      qsnprintf();
      numbered_type_name = (const char *)get_numbered_type_name();
      if ( !numbered_type_name || (p_s1 = (char **)v160, strcmp(numbered_type_name, v160)) )
      {
        v14 = v128;
        memset(v137, 0, 24);
        if ( v128 )
        {
          srcb = (_BYTE *)strlen(v128);
          v15 = (void *)qvector_reserve((__int64)v137, 0, (__int64)(srcb + 1), 1);
          *((_QWORD *)&v137[0] + 1) = srcb + 1;
          *(_QWORD *)&v137[0] = v15;
          memmove(v15, v14, (size_t)srcb);
          srcb[*(_QWORD *)&v137[0]] = 0;
        }
        v16 = v129;
        v138 = nullptr;
        v139 = 0;
        if ( v129 )
        {
          srcc = (_BYTE *)strlen(v129);
          v106 = srcc + 1;
          v138 = (__int64 (__fastcall **)())qvector_reserve((__int64)&v138, 0, (__int64)(srcc + 1), 1);
          *(_QWORD *)&v139 = srcc + 1;
          memmove(v138, v16, (size_t)srcc);
          srcc[(_QWORD)v138] = 0;
        }
        idati = nullptr;
        v143 = 0;
        src = (char *)v130;
        if ( (_QWORD)v130 )
        {
          v17 = strlen((const char *)v130);
          v106 = (char *)(v17 + 1);
          idati = (__m128i *)qvector_reserve((__int64)&idati, 0, v17 + 1, 1);
          *(_QWORD *)&v143 = v17 + 1;
          memmove(idati, src, v17);
          idati->m128i_i8[v17] = 0;
          v18 = idati;
          haystack = nullptr;
          if ( idati )
            src = (char *)&v125;
          else
            src = nullptr;
        }
        else
        {
          v18 = nullptr;
          haystack = nullptr;
        }
        v125 = v18;
        p_s1 = nullptr;
        if ( !(unsigned __int8)deserialize_tinfo() || (p_s1 = nullptr, (unsigned int)save_tinfo()) )
        {
          clear_tinfo_t();
          if ( idati )
          {
            *(_QWORD *)&v143 = 0;
            qfree((__int64)idati);
          }
          if ( v138 )
          {
            *(_QWORD *)&v139 = 0;
            qfree((__int64)v138);
          }
          if ( *(_QWORD *)&v137[0] )
          {
            *((_QWORD *)&v137[0] + 1) = 0;
            qfree(*(__int64 *)&v137[0]);
          }
          v19 = (__int64)v135;
          if ( !v135 )
            goto LABEL_31;
LABEL_30:
          *(_QWORD *)&v136 = 0;
          qfree(v19);
          goto LABEL_31;
        }
        clear_tinfo_t();
        if ( idati )
        {
          *(_QWORD *)&v143 = 0;
          qfree((__int64)idati);
        }
        if ( v138 )
        {
          *(_QWORD *)&v139 = 0;
          qfree((__int64)v138);
        }
        if ( *(_QWORD *)&v137[0] )
        {
          *((_QWORD *)&v137[0] + 1) = 0;
          qfree(*(__int64 *)&v137[0]);
        }
      }
      v19 = (__int64)v135;
      if ( (unsigned __int64)v136 > 1 && (*(_BYTE *)v135 & 0x3F) == 0x2D )
      {
        qsnprintf();
        p_s1 = (char **)&v161;
        parse_decls();
        v19 = (__int64)v135;
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
    v138 = nullptr;
    v140 = 0;
    v141 = -1;
    v139 = 0;
    if ( (a2 & 4) != 0 )
    {
      for ( i = getn_func(); i; i = get_next_func() )
      {
        if ( (*(_BYTE *)(i + 16) & 4) == 0 && !(unsigned __int8)is_spec_ea() )
        {
          p_s1 = (char **)&v138;
          sub_3260D0(n, (__int64)&v138, *(_QWORD *)i, (a2 >> 1) & 1);
        }
      }
    }
    else
    {
      p_s1 = (char **)&v138;
      sub_3260D0(module_data, (__int64)&v138, a1, (a2 >> 1) & 1);
    }
    callui(27, p_s1, v21, &callui, v22, v23, v106, v108, src, v114);
    if ( (a2 & 0x80u) != 0 )
    {
      netnode_check();
      netnode_kill();
      goto LABEL_190;
    }
    idati = nullptr;
    *(_QWORD *)v144 = 0;
    *(_DWORD *)&v144[8] = -1;
    v126 = nullptr;
    v143 = 0;
    callui(7, 0x9676D4FFFEBD5C67LL, &v126, &callui, v64, v65, v106, v108, src, v114);
    v66 = v126;
    if ( v126 )
    {
      v67 = (**(__int64 (__fastcall ***)(void *, __int64 (__fastcall ***)(), __m128i **, unsigned __int64))v126)(
              v126,
              &v138,
              &idati,
              a1);
      v68 = *(void (__fastcall **)(void *))(*(_QWORD *)v66 + 16LL);
      if ( v68 == sub_326020 )
        operator delete(v66, 0x10u);
      else
        v68(v66);
      if ( v67 )
      {
        v69 = idati;
        v70 = &idati[v143];
        if ( idati == v70 )
          goto LABEL_157;
        do
        {
          for ( j = v69->m128i_i64[0]; j < v69->m128i_i64[1]; ++j )
          {
            del_items();
            put_byte();
          }
          ++v69;
        }
        while ( v70 != v69 );
      }
      else
      {
        sub_2B4E70((__int64)"Failed to interact with the eh34 plugin, will delete eh34 data");
      }
    }
    v70 = idati;
LABEL_157:
    if ( v70 )
    {
      *(_QWORD *)&v143 = 0;
      qfree((__int64)v70);
    }
LABEL_190:
    v81 = v139;
    v82 = v138;
    idati = nullptr;
    v143 = 0;
    *(_DWORD *)&v144[8] = -1;
    v83 = v138;
    *(_QWORD *)v144 = 0;
    if ( 16LL * (_QWORD)v139 )
    {
      while ( 1 )
      {
        v84 = v83[1];
        v85 = v83 + 2;
        v83 = v85;
        if ( v85 == &v82[2 * v81] )
          break;
        if ( v84 != (__int64 (__fastcall *)())-1LL && (unsigned __int64)((char *)*v85 - (char *)v84) <= 0xF )
        {
          v137[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v84, (__m128i)(unsigned __int64)*v85);
          rangeset_t_add();
          v82 = v138;
          v81 = v139;
        }
      }
      v86 = idati;
      v87 = &idati[v143];
      if ( idati != v87 )
      {
        do
        {
          rangeset_t_add();
          ++v86;
        }
        while ( v87 != v86 );
        v87 = idati;
      }
      if ( v87 )
      {
        *(_QWORD *)&v143 = 0;
        qfree((__int64)v87);
      }
    }
    for ( k = (unsigned __int64 *)get_last_seg(); ; k = (unsigned __int64 *)get_prev_seg() )
    {
      v93 = k;
      if ( !k )
        break;
      v124 = (__int64 (__fastcall ***)())*k;
      if ( !(unsigned __int8)rangeset_t_has_common() )
      {
        callui(27, v93, v94, &callui, v95, v96, v106, v108, src, v114);
        v89 = (__int64 (__fastcall ***)())&byte_5;
        del_segm();
        goto LABEL_202;
      }
      idati = nullptr;
      v143 = 0;
      v97 = *v93;
      v98 = (__int64 (__fastcall ***)())v93[1];
      *(_QWORD *)v144 = 0;
      *(_DWORD *)&v144[8] = -1;
      if ( v97 < (unsigned __int64)v98 )
      {
        idati = (__m128i *)qvector_reserve((__int64)&idati, 0, 1, 16);
        idati[(_QWORD)v143] = _mm_unpacklo_epi64((__m128i)v97, (__m128i)(unsigned __int64)v98);
        *(_QWORD *)&v143 = v143 + 1;
        v98 = (__int64 (__fastcall ***)())v93[1];
      }
      v89 = &v138;
      rangeset_t_sub2();
      v99 = (unsigned int)(v143 - 1);
      v100 = v99;
      if ( (int)v99 >= 0 )
      {
        do
        {
          while ( 1 )
          {
            v103 = (__int64 (__fastcall ****)())&idati[v100];
            callui(27, v89, v90, &callui, v91, v92, v106, v108, src, v114);
            v104 = *v103;
            v89 = v103[1];
            if ( *v103 != v124 )
              break;
            set_segm_start();
LABEL_213:
            LODWORD(v99) = v99 - 1;
            --v100;
            if ( (_DWORD)v99 == -1 )
              goto LABEL_217;
          }
          if ( v89 != v98 )
          {
            v118 = v103[1];
            if ( v104 != v89 )
            {
              v148 = 0;
              v149 = 0;
              v150 = 0;
              v159 = 0xFFFFFFFF00000000LL;
              v146 = 0;
              v147 = 0;
              v151 = -1;
              v152 = -1;
              v153 = -1;
              v154 = -1;
              v155 = -1;
              v156 = -1;
              v157 = -1;
              v158 = -1;
              v101 = getseg();
              v102 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v104, (__m128i)(unsigned __int64)v118);
              if ( v101 )
              {
                v150 = *(_QWORD *)(v101 + 48);
                BYTE3(v149) = *(_BYTE *)(v101 + 43);
              }
              v146 = v102;
              add_segm_ex();
              v89 = (__int64 (__fastcall ***)())&byte_5;
              del_segm();
            }
            goto LABEL_213;
          }
          v89 = *v103;
          set_segm_end();
          LODWORD(v99) = v99 - 1;
          --v100;
        }
        while ( (_DWORD)v99 != -1 );
      }
LABEL_217:
      if ( idati )
      {
        *(_QWORD *)&v143 = 0;
        qfree((__int64)idati);
      }
LABEL_202:
      callui(27, v89, v90, &callui, v91, v92, v106, v108, src, v114);
    }
    if ( v138 )
    {
      *(_QWORD *)&v139 = 0;
      qfree((__int64)v138);
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
  v26 = off_4E33E0;
  do
  {
    netnode_check();
    netnode_kill();
    netnode_rename();
    ++v26;
  }
  while ( v26 != (char **)algn_4E3590 );
  for ( ii = 65; ii != 90; ++ii )
  {
    v143 = 0;
    idati = nullptr;
    sub_6B870((__int64 *)&idati);
    netnode_check();
    netnode_kill();
    netnode_rename();
    sub_6B870((__int64 *)&idati);
    v28 = (char *)::s1;
    if ( (_QWORD)v132 )
      v28 = s1;
    if ( !strcmp(v28, &idati->m128i_i8[2]) )
    {
      callui(100, "EmptyStack", 0, 0, v29, v30, v106, v108, src, v114);
    }
    else
    {
      netnode_check();
      netnode_kill();
      netnode_rename();
    }
    if ( idati )
    {
      *(_QWORD *)&v143 = 0;
      qfree((__int64)idati);
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
      v63 = (_QWORD *)kk;
      if ( !kk )
        break;
      v61 = *(_QWORD *)(kk + 16);
      v62 = v61 & 0xFFFFFFFFFFFFFFFBLL;
      if ( *v63 != a1 )
        v62 = v61 | 4;
      v63[2] = v62;
      update_func();
    }
  }
  haystack = nullptr;
  v134 = 0;
  if ( (unsigned __int8)netnode_start() )
  {
    do
    {
      v32 = node2ea();
      if ( netnode_get_name() <= 0 )
      {
        if ( (a2 & 0x10) == 0 )
          goto LABEL_70;
        v130 = 0;
        getinf_buf();
        if ( v32 >= (unsigned __int64)v130 && v32 < *((_QWORD *)&v130 + 1) )
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
    if ( !(unsigned __int8)sub_326A40() )
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
  sub_326960((__int64)"Deleting unused types...", v34);
  head = 0;
  v130 = 0u;
  LODWORD(src) = a2 & 0x80;
  v129 = nullptr;
  while ( 2 )
  {
    if ( (unsigned __int8)get_tinfo() )
    {
      *(_QWORD *)&v136 = 4;
      v135 = off_4E33C8;
      *((_QWORD *)&v136 + 1) = &v130;
      visit_subtypes();
    }
    fchunk = get_fchunk();
    if ( fchunk && (unsigned __int8)get_func_frame() )
    {
      idati = nullptr;
      v145 = 1;
      v143 = 0;
      memset(v144, 0, sizeof(v144));
      tinfo_details = get_tinfo_details();
      v75 = idati;
      if ( tinfo_details )
      {
        v116 = &idati[9 * v143];
        if ( idati != v116 )
        {
          v114 = (void **)v137;
          do
          {
            *((_QWORD *)&v137[0] + 1) = 4;
            *(_QWORD *)&v137[0] = off_4E33C8;
            *(_QWORD *)&v137[1] = &v130;
            visit_subtypes();
            v75 += 9;
          }
          while ( v116 != v75 );
          v75 = idati;
        }
      }
      if ( v75 )
      {
        if ( (_QWORD)v143 )
        {
          v76 = fchunk;
          v121 = 0;
          v77 = v143;
          do
          {
            v78 = &v75[9 * v121];
            clear_tinfo_t();
            v79 = v78[2].m128i_i64[1];
            if ( v79 )
            {
              v78[3].m128i_i64[0] = 0;
              qfree(v79);
            }
            v80 = v78[1].m128i_i64[0];
            if ( v80 )
            {
              v78[1].m128i_i64[1] = 0;
              qfree(v80);
            }
            ++v121;
            v75 = idati;
          }
          while ( v77 != v121 );
          fchunk = v76;
        }
        *(_QWORD *)&v143 = 0;
        qfree((__int64)v75);
      }
    }
    idati = nullptr;
    memset(v144, 0, sizeof(v144));
    v145 = 1;
    v143 = 0;
    if ( !(unsigned __int8)sub_2B86B0(*(_QWORD *)(n + 112), (__int64)&idati, head)
      || (v72 = idati, v73 = &idati[6 * v143], idati == v73) )
    {
      if ( !fchunk )
        goto LABEL_164;
      goto LABEL_98;
    }
    do
    {
      *(_QWORD *)&v139 = 4;
      v138 = off_4E33C8;
      *((_QWORD *)&v139 + 1) = &v130;
      visit_subtypes();
      v72 += 6;
    }
    while ( v73 != v72 );
    if ( fchunk )
    {
LABEL_98:
      head = *(_QWORD *)(fchunk + 8);
      goto LABEL_99;
    }
LABEL_164:
    head = next_head();
LABEL_99:
    v41 = *(unsigned __int64 **)v144;
    if ( !*(_QWORD *)v144 )
      goto LABEL_110;
    v42 = **(_QWORD **)v144;
    v43 = **(_QWORD **)v144;
    if ( !*(_QWORD *)&v144[8] )
    {
      **(_QWORD **)v144 = **(_QWORD **)v144 & 3LL | *(_QWORD *)v144 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(*(_QWORD *)v144 + 8LL) = _mm_unpacklo_epi64(
                                              (__m128i)*(unsigned __int64 *)v144,
                                              (__m128i)*(unsigned __int64 *)v144);
      **(_QWORD **)v144 &= ~1uLL;
      **(_QWORD **)v144 |= 2uLL;
      v47 = *(_QWORD *)v144;
      if ( !*(_QWORD *)v144 )
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
        sub_326810(v46);
        goto LABEL_105;
      }
      goto LABEL_223;
    }
    sub_326810(v45);
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
      qfree((__int64)v44);
    v41 = *(unsigned __int64 **)v144;
    v43 = **(_QWORD **)v144;
LABEL_109:
    *v41 = v43 & 3 | (unsigned __int64)v41 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(*(_QWORD *)v144 + 8LL) = _mm_unpacklo_epi64(
                                            (__m128i)*(unsigned __int64 *)v144,
                                            (__m128i)*(unsigned __int64 *)v144);
    **(_QWORD **)v144 &= ~1uLL;
    **(_QWORD **)v144 |= 2uLL;
    v47 = *(_QWORD *)v144;
    *(_QWORD *)&v144[8] = 0;
    if ( *(_QWORD *)v144 )
LABEL_160:
      qfree(v47);
LABEL_110:
    v48 = idati;
    if ( idati )
    {
      v49 = v143;
      if ( (_QWORD)v143 )
      {
        v50 = 0;
        do
        {
          v51 = &v48[6 * v50];
          v52 = v51[3].m128i_i64[1];
          v53 = v51;
          if ( v52 )
          {
            v51[4].m128i_i64[0] = 0;
            qfree(v52);
          }
          clear_tinfo_t();
          v54 = v53[1].m128i_i64[1];
          if ( v54 )
          {
            v53[2].m128i_i64[0] = 0;
            qfree(v54);
          }
          ++v50;
          cleanup_argloc();
          v48 = idati;
        }
        while ( v49 != v50 );
      }
      *(_QWORD *)&v143 = 0;
      qfree((__int64)v48);
    }
    if ( head != -1 )
      continue;
    break;
  }
  if ( !(_DWORD)src )
  {
    v55 = off_4E35A0;
    do
    {
      while ( 1 )
      {
        v56 = *v55;
        if ( *v55 )
        {
          WORD4(v143) = 256;
          *(_QWORD *)&v143 = v56;
          idati = (__m128i *)get_idati();
          if ( (unsigned __int8)create_tinfo() )
            break;
        }
        if ( &unk_4E35F8 == (_UNKNOWN *)++v55 )
          goto LABEL_126;
      }
      *(_QWORD *)&v143 = 4;
      idati = (__m128i *)off_4E33C8;
      *((_QWORD *)&v143 + 1) = &v130;
      visit_subtypes();
      ++v55;
    }
    while ( &unk_4E35F8 != (_UNKNOWN *)v55 );
  }
LABEL_126:
  clear_tinfo_t();
  v57 = get_ordinal_limit();
  v58 = 1;
  if ( v57 > 1 )
  {
    do
    {
      while ( sub_64930(&v130, v58) )
      {
        if ( v57 == ++v58 )
          goto LABEL_131;
      }
      del_numbered_type();
      ++v58;
    }
    while ( v57 != v58 );
  }
LABEL_131:
  qfree(v130);
LABEL_132:
  callui(24, 10, 0, &callui, v36, v37, v106, v108, src, v114);
  if ( haystack )
  {
    *(_QWORD *)&v134 = 0;
    qfree((__int64)haystack);
  }
  if ( s1 )
  {
    *(_QWORD *)&v132 = 0;
    qfree((__int64)s1);
  }
  lock_func_range();
  return v162 - __readfsqword(0x28u);
}

