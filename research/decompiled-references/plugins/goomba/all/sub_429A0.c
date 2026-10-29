unsigned __int64 __fastcall sub_429A0(__int64 a1, __int64 a2)
{
  _QWORD *exception; // rax
  size_t v3; // rbx
  _QWORD *v4; // r12
  __int64 v5; // rax
  void *v6; // rax
  void *v7; // rsi
  __int64 v10; // rax
  int *v11; // rax
  int *v12; // rbp
  __int64 v13; // rax
  int *v14; // r14
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  _BOOL8 v18; // rdi
  unsigned int v19; // r12d
  size_t v20; // rax
  int v21; // eax
  __m128i v22; // xmm0
  __int64 v23; // rbp
  unsigned __int64 v24; // r12
  int *v25; // rax
  int *v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rsi
  _QWORD *v31; // rdi
  __int64 v32; // r14
  void (__fastcall *v33)(__int64, __int64); // rax
  void (__fastcall *v34)(__int64, __int64); // rax
  void (__fastcall *v35)(__int64, __int64); // rax
  void (__fastcall *v36)(__int64, __int64); // rax
  unsigned __int64 v37; // r12
  unsigned __int64 *v38; // rax
  __int64 v39; // rdx
  unsigned __int64 *v40; // rdx
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rsi
  int *v43; // rax
  int *v44; // rbp
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdi
  void *v49; // rbp
  unsigned __int64 ***v50; // r13
  unsigned __int64 ***v51; // r14
  unsigned __int64 **v52; // r15
  __int64 v53; // rbp
  __int64 v54; // r14
  int v55; // r12d
  __int64 v56; // r12
  __int64 i; // r13
  __int64 v58; // r14
  __int64 v59; // rbp
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int64 ***v62; // rdx
  unsigned __int64 v63; // rbp
  __int64 v64; // rbx
  unsigned __int64 ***v65; // rax
  unsigned __int64 **v66; // rdi
  __int64 v68; // rsi
  _QWORD *v69; // rdi
  unsigned __int64 ***v70; // r12
  __int64 v71; // rax
  unsigned __int8 (__fastcall *hexdsp)(__int64, _QWORD *, unsigned __int64 **, __int64, __int64 (__fastcall ***)(std::exception *)); // rax
  unsigned __int64 *v73; // r13
  int v74; // r15d
  __int64 v75; // rax
  _QWORD *v76; // rdx
  _QWORD *v77; // rax
  unsigned __int64 v78; // r12
  __int64 v79; // rax
  __m128i v80; // [rsp+0h] [rbp-618h] BYREF
  __int64 v81; // [rsp+18h] [rbp-600h]
  int *v82; // [rsp+20h] [rbp-5F8h]
  unsigned __int64 ***v83; // [rsp+28h] [rbp-5F0h]
  __int64 *v84; // [rsp+30h] [rbp-5E8h]
  _QWORD *v85; // [rsp+38h] [rbp-5E0h]
  unsigned int v86; // [rsp+4Ch] [rbp-5CCh] BYREF
  char *v87; // [rsp+50h] [rbp-5C8h] BYREF
  __int64 *v88; // [rsp+58h] [rbp-5C0h]
  __m128i v89; // [rsp+60h] [rbp-5B8h] BYREF
  unsigned __int64 *v90; // [rsp+70h] [rbp-5A8h] BYREF
  int v91; // [rsp+78h] [rbp-5A0h]
  __int64 v92; // [rsp+80h] [rbp-598h] BYREF
  __int128 v93; // [rsp+88h] [rbp-590h]
  _QWORD v94[4]; // [rsp+A0h] [rbp-578h] BYREF
  __int64 v95; // [rsp+C0h] [rbp-558h] BYREF
  int v96; // [rsp+C8h] [rbp-550h] BYREF
  int *v97; // [rsp+D0h] [rbp-548h]
  int *v98; // [rsp+D8h] [rbp-540h]
  int *v99; // [rsp+E0h] [rbp-538h]
  __int64 v100; // [rsp+E8h] [rbp-530h]
  __int64 (__fastcall **v101)(std::exception *); // [rsp+F0h] [rbp-528h] BYREF
  __int128 v102; // [rsp+F8h] [rbp-520h]
  void *src; // [rsp+108h] [rbp-510h]
  size_t n[2]; // [rsp+110h] [rbp-508h]
  __int64 v105; // [rsp+120h] [rbp-4F8h] BYREF
  __int128 v106; // [rsp+128h] [rbp-4F0h]
  __int64 v107; // [rsp+138h] [rbp-4E0h] BYREF
  int v108; // [rsp+140h] [rbp-4D8h] BYREF
  int *v109; // [rsp+148h] [rbp-4D0h]
  int *v110; // [rsp+150h] [rbp-4C8h]
  int *v111; // [rsp+158h] [rbp-4C0h]
  __int64 v112; // [rsp+160h] [rbp-4B8h]
  _QWORD v113[7]; // [rsp+170h] [rbp-4A8h] BYREF
  unsigned __int64 ***v114; // [rsp+1A8h] [rbp-470h]
  unsigned __int64 v115; // [rsp+1B0h] [rbp-468h]
  char v116; // [rsp+1C7h] [rbp-451h] BYREF
  __int64 v117; // [rsp+1C8h] [rbp-450h]
  char s[1032]; // [rsp+1D0h] [rbp-448h] BYREF
  unsigned __int64 v119; // [rsp+5D8h] [rbp-40h]

  v119 = __readfsqword(0x28u);
  v110 = &v108;
  v105 = 0;
  v108 = 0;
  v109 = nullptr;
  v111 = &v108;
  v112 = 0;
  v106 = 0;
  v105 = qvector_reserve(&v105, 0, 1, 16);
  v10 = 16 * v106 + v105;
  *(_QWORD *)v10 = 0;
  *(_WORD *)(v10 + 8) = 0;
  v11 = v109;
  *(_QWORD *)&v106 = v106 + 1;
  if ( !v109 )
  {
    v12 = &v108;
    goto LABEL_5;
  }
  do
  {
    v12 = v11;
    v11 = *((int **)v11 + 2);
  }
  while ( v11 );
  if ( v12 == &v108 || *((_BYTE *)v12 + 40) || *((_QWORD *)v12 + 4) )
  {
LABEL_5:
    v13 = operator new(0x38u);
    *(_QWORD *)(v13 + 32) = 0;
    *(_QWORD *)(v13 + 40) = 0;
    v14 = (int *)v13;
    *(_DWORD *)(v13 + 48) = 0;
    v16 = sub_414E0(&v107, (__int64)v12, 0, 0, v15);
    v12 = (int *)v16;
    if ( v17 )
    {
      v18 = 1;
      if ( !v16 && &v108 != (int *)v17 && !*(_BYTE *)(v17 + 40) )
        v18 = *(_QWORD *)(v17 + 32) != 0;
      v12 = v14;
      std::_Rb_tree_insert_and_rebalance(v18, v14, v17, &v108);
      ++v112;
    }
    else if ( v14 )
    {
      operator delete(v14, 0x38u);
    }
  }
  v88 = &v105;
  v19 = 0;
  v87 = nullptr;
  v12[12] = 0;
  while ( qfgets(s, 1024, a1) )
  {
    while ( 1 )
    {
      ++v19;
      v20 = strlen(s);
      if ( v20 && s[v20 - 1] == 10 )
        s[v20 - 1] = 0;
      if ( !s[0] || !strncmp(s, "ExprInt", 7u) )
        break;
      if ( v19 && __ROR4__(197912093 * v19, 5) <= 0xA7C5u )
        sub_C720(
          (__int64)"parsed %d expressions (%d.%02d%%)\n",
          v19,
          (unsigned int)(10000 * (unsigned __int64)v19 / 0x4F8077E) / 0x64,
          (unsigned int)(10000 * (unsigned __int64)v19 / 0x4F8077E) % 0x64);
      v87 = s;
      v21 = sub_41EF0((const char **)&v87);
      *(_BYTE *)(*v88 + 16LL * v21 + 9) = 1;
      if ( !qfgets(s, 1024, a1) )
        goto LABEL_24;
    }
  }
LABEL_24:
  v80 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_4DC40, (__m128i)(unsigned __int64)&v105);
  sub_C720((__int64)"parsed exprs=%d trees=%zu\n", v19, (size_t)v106);
  v22 = _mm_load_si128(&v80);
  v85 = v113;
  v89 = v22;
  sub_42640(v113);
  v96 = 0;
  v23 = 1;
  v97 = nullptr;
  v82 = &v96;
  v98 = &v96;
  v99 = &v96;
  v100 = 0;
  v80.m128i_i32[0] = 1;
  if ( (unsigned __int64)v106 > 1 )
  {
    do
    {
      if ( v80.m128i_i32[0] && __ROR4__(197912093 * v80.m128i_i32[0], 5) <= 0xA7C5u )
        sub_C720((__int64)"fingerprinted %d trees\n", v80.m128i_i32[0]);
      if ( *(_BYTE *)(v105 + 16 * v23 + 9) )
      {
        v81 = sub_C950(&v89, v80.m128i_u32[0]);
        v24 = 0xCBF29CE484222325LL;
        v93 = 0;
        v92 = 0;
        if ( v115 )
        {
          v68 = 0;
          v84 = &v92;
          v92 = qvector_reserve(&v92, 0, v115, 8);
          v69 = (_QWORD *)v92;
          v70 = v114;
          v83 = &v114[3 * v115];
          if ( v114 == v83 )
          {
            v76 = (_QWORD *)(v92 + 8 * v93);
          }
          else
          {
            do
            {
              v94[1] = v70;
              v94[0] = off_4DBF0;
              v94[2] = 0;
              v90 = nullptr;
              v91 = 1;
              v101 = off_4D788;
              *(_QWORD *)&v102 = 0;
              *((_QWORD *)&v102 + 1) = -1;
              src = nullptr;
              *(_OWORD *)n = 0;
              hexdsp = (unsigned __int8 (__fastcall *)(__int64, _QWORD *, unsigned __int64 **, __int64, __int64 (__fastcall ***)(std::exception *)))get_hexdsp(v69, v68);
              if ( !hexdsp(623, v94, &v90, v81, &v101) )
              {
                exception = __cxa_allocate_exception(0x30u);
                v3 = n[0];
                *exception = off_4D788;
                v4 = exception;
                LODWORD(exception) = v102;
                v4[3] = 0;
                *((_DWORD *)v4 + 2) = (_DWORD)exception;
                v5 = *((_QWORD *)&v102 + 1);
                *((_OWORD *)v4 + 2) = 0;
                v4[2] = v5;
                if ( v3 )
                {
                  v6 = (void *)qalloc_or_throw(v3);
                  v4[3] = v6;
                  v7 = src;
                  v4[5] = v3;
                  memcpy(v6, v7, v3);
                  v4[4] = v3;
                }
                __cxa_throw(v4, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_E530);
              }
              v101 = off_4D788;
              v73 = v90;
              v74 = v91;
              if ( src )
              {
                n[0] = 0;
                qfree(src);
              }
              std::exception::~exception((std::exception *)&v101);
              v75 = v93;
              v101 = (__int64 (__fastcall **)(std::exception *))v73;
              LODWORD(v102) = v74;
              v68 = v92;
              v69 = (_QWORD *)(v93 + 1);
              if ( *((_QWORD *)&v93 + 1) < (unsigned __int64)(v93 + 1) )
              {
                v69 = v84;
                v92 = qvector_reserve(v84, v92, v93 + 1, 8);
                v68 = v92;
                v75 = v93;
              }
              *(_QWORD *)(v68 + 8 * v75) = v73;
              v70 += 3;
              v71 = v93 + 1;
              *(_QWORD *)&v93 = v93 + 1;
            }
            while ( v83 != v70 );
            v69 = (_QWORD *)v92;
            v76 = (_QWORD *)(v92 + 8 * v71);
          }
          v24 = 0xCBF29CE484222325LL;
          if ( v69 != v76 )
          {
            v77 = v69;
            do
            {
              v78 = *v77++ ^ v24;
              v24 = 0x100000001B3LL * v78;
            }
            while ( v76 != v77 );
          }
          if ( v69 )
          {
            *(_QWORD *)&v93 = 0;
            qfree(v69);
          }
        }
        v25 = v97;
        v94[0] = v24;
        v26 = v82;
        if ( !v97 )
          goto LABEL_39;
        do
        {
          while ( 1 )
          {
            v27 = *((_QWORD *)v25 + 2);
            v28 = *((_QWORD *)v25 + 3);
            if ( *((_QWORD *)v25 + 4) < v24 )
              break;
            v26 = v25;
            v25 = *((int **)v25 + 2);
            if ( !v27 )
              goto LABEL_37;
          }
          v25 = *((int **)v25 + 3);
        }
        while ( v28 );
LABEL_37:
        if ( v26 == v82 || v24 < *((_QWORD *)v26 + 4) )
        {
LABEL_39:
          v101 = (__int64 (__fastcall **)(std::exception *))v94;
          v26 = (int *)sub_42810(&v95, v26, (__int64)&unk_44B91, (unsigned __int64 **)&v101);
        }
        LODWORD(v101) = v80.m128i_i32[0];
        v29 = *((_QWORD *)v26 + 6);
        v30 = *((_QWORD *)v26 + 5);
        v31 = (_QWORD *)(v29 + 1);
        if ( *((_QWORD *)v26 + 7) < (unsigned __int64)(v29 + 1) )
        {
          v31 = v26 + 10;
          v79 = qvector_reserve(v26 + 10, v30, v29 + 1, 4);
          *((_QWORD *)v26 + 5) = v79;
          v30 = v79;
          v29 = *((_QWORD *)v26 + 6);
        }
        *(_DWORD *)(v30 + 4 * v29) = v80.m128i_i32[0];
        v32 = v81;
        ++*((_QWORD *)v26 + 6);
        if ( v32 )
        {
          v33 = (void (__fastcall *)(__int64, __int64))get_hexdsp(v31, v30);
          v33(276, v32 + 64);
          v34 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v32 + 64);
          v34(276, v32 + 48);
          v35 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v32 + 48);
          v35(276, v32 + 32);
          v36 = (void (__fastcall *)(__int64, __int64))get_hexdsp(276, v32 + 32);
          v36(130, v32);
        }
      }
      ++v80.m128i_i32[0];
      v23 = v80.m128i_u32[0];
    }
    while ( v80.m128i_u32[0] < (unsigned __int64)v106 );
  }
  v37 = v115;
  v101 = nullptr;
  v102 = 0;
  if ( !v115 )
    goto LABEL_99;
  v38 = (unsigned __int64 *)qvector_reserve(&v101, 0, v115, 8);
  v39 = v102;
  v101 = (__int64 (__fastcall **)(std::exception *))v38;
  if ( (unsigned __int64)v102 < v37 )
  {
    do
    {
      v38[v39++] = 0;
      v38 = (unsigned __int64 *)v101;
    }
    while ( v37 != v39 );
  }
  v40 = &v38[v37];
  *(_QWORD *)&v102 = v37;
  if ( v38 == v40 )
  {
LABEL_99:
    v41 = 0xCBF29CE484222325LL;
  }
  else
  {
    v41 = 0xCBF29CE484222325LL;
    do
    {
      v42 = *v38++ ^ v41;
      v41 = 0x100000001B3LL * v42;
    }
    while ( v40 != v38 );
  }
  v43 = v97;
  if ( v97 )
  {
    v44 = v82;
    do
    {
      while ( 1 )
      {
        v45 = *((_QWORD *)v43 + 2);
        v46 = *((_QWORD *)v43 + 3);
        if ( *((_QWORD *)v43 + 4) < v41 )
          break;
        v44 = v43;
        v43 = *((int **)v43 + 2);
        if ( !v45 )
          goto LABEL_55;
      }
      v43 = *((int **)v43 + 3);
    }
    while ( v46 );
LABEL_55:
    if ( v44 != v82 && v41 >= *((_QWORD *)v44 + 4) )
    {
      sub_C720((__int64)"deleted zero bucket 0x%016llX size=%zu\n", v41, *((_QWORD *)v44 + 6));
      v47 = std::_Rb_tree_rebalance_for_erase(v44, v82);
      v48 = *(_QWORD *)(v47 + 40);
      v49 = (void *)v47;
      if ( v48 )
      {
        *(_QWORD *)(v47 + 48) = 0;
        qfree(v48);
      }
      operator delete(v49, 0x40u);
      --v100;
    }
  }
  if ( v101 )
  {
    *(_QWORD *)&v102 = 0;
    qfree(v101);
  }
  v86 = v100;
  sub_C720((__int64)"fingerprints=%u\n", v100);
  qfwrite(a2, "gooMBA oracle v2", 16);
  LODWORD(v90) = v115;
  qfwrite(a2, &v90, 4);
  v50 = v114;
  v51 = &v114[3 * v115];
  if ( v114 != v51 )
  {
    do
    {
      v52 = *v50;
      v53 = (__int64)&(*v50)[(_QWORD)v50[1]];
      if ( (unsigned __int64 **)v53 != *v50 )
      {
        do
        {
          v101 = (__int64 (__fastcall **)(std::exception *))*v52;
          qfwrite(a2, &v101, 8);
          ++v52;
        }
        while ( (unsigned __int64 **)v53 != v52 );
      }
      v50 += 3;
    }
    while ( v51 != v50 );
  }
  sub_C720((__int64)"test cases=%u\n", (_DWORD)v90);
  v92 = 0;
  v94[0] = qftell(a2);
  sub_C720((__int64)"index start=0x%llX #entries=%d\n", v94[0], v86);
  v94[0] += 16LL * v86 + 12;
  sub_C720((__int64)"root start=0x%llX\n", v94[0]);
  qfwrite(a2, &v86, 4);
  v54 = (__int64)v98;
  v55 = 0;
  if ( v98 != v82 )
  {
    while ( 1 )
    {
      ++v55;
      v101 = *(__int64 (__fastcall ***)(std::exception *))(v54 + 32);
      qfwrite(a2, &v101, 8);
      qfwrite(a2, v94, 8);
      v94[0] += 4LL * *(_QWORD *)(v54 + 48) + 4;
      v54 = std::_Rb_tree_increment(v54);
      if ( (int *)v54 == v82 )
        break;
      if ( v55 )
      {
        if ( __ROR4__(197912093 * v55 + 687168, 5) <= 0xA7C4u )
          sub_C720((__int64)"written %d index entries\n", v55);
      }
    }
  }
  v56 = qftell(a2);
  v84 = &v92;
  qfwrite(a2, &v92, 8);
  sub_C720((__int64)"corpus start=0x%llX\n", v94[0]);
  for ( i = (__int64)v98; (int *)i != v82; i = std::_Rb_tree_increment(i) )
  {
    LODWORD(v101) = *(_QWORD *)(i + 48);
    qfwrite(a2, &v101, 4);
    qfwrite(a2, *(_QWORD *)(i + 40), 4LL * (unsigned int)v101);
  }
  v92 = qftell(a2);
  LODWORD(v101) = v106;
  qfwrite(a2, &v101, 4);
  v58 = v105;
  v59 = v105 + 16 * v106;
  if ( v105 != v59 )
  {
    do
    {
      v60 = *(_QWORD *)v58;
      v116 = *(_BYTE *)(v58 + 8);
      v117 = v60;
      qfwrite(a2, &v116, 9);
      v58 += 16;
    }
    while ( v59 != v58 );
  }
  v61 = qftell(a2);
  sub_C720((__int64)"corpus end=0x%llX\n", v61);
  qfseek(a2, v56, 0);
  qfwrite(a2, v84, 8);
  sub_41A50(v97);
  v62 = v114;
  v113[0] = &off_4D698;
  if ( v114 )
  {
    v63 = v115;
    if ( v115 )
    {
      v64 = 0;
      do
      {
        v65 = &v62[3 * v64];
        v66 = *v65;
        if ( *v65 )
        {
          v65[1] = nullptr;
          qfree(v66);
          v62 = v114;
        }
        ++v64;
      }
      while ( v63 != v64 );
    }
    v115 = 0;
    qfree(v62);
  }
  sub_41800((void **)v113[3]);
  sub_41880(v109);
  if ( v105 )
  {
    *(_QWORD *)&v106 = 0;
    qfree(v105);
  }
  return v119 - __readfsqword(0x28u);
}
