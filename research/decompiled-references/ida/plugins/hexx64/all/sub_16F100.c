__int64 __fastcall sub_16F100(__int64 a1, _QWORD *a2, double a3, __m128 a4)
{
  unsigned int v4; // r15d
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v9; // ebp
  _BYTE *v10; // r13
  char v11; // bp
  unsigned int v13; // r13d
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 *v16; // r10
  int v17; // eax
  int v18; // r9d
  __int64 *v19; // r10
  _QWORD *v20; // rbx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rdx
  char v23; // cl
  _QWORD *v24; // rax
  __int64 *v25; // rdx
  size_t v26; // rsi
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  char v29; // di
  __int64 *v30; // rax
  bool v31; // cl
  unsigned __int64 **v32; // rcx
  char v33; // al
  __int64 *v34; // rdx
  _BYTE *v35; // rax
  __int64 first_fcref_from; // rax
  unsigned __int64 v37; // rax
  char v38; // al
  __int64 flags; // rax
  _BYTE *v40; // rdi
  _BYTE *v41; // rax
  __int64 v42; // rax
  char v43; // al
  unsigned __int8 v44; // al
  __int64 v45; // rsi
  char v46; // al
  __int64 *v47; // r9
  __int64 *v48; // r10
  __int64 v49; // rcx
  __m128i *v50; // rdx
  __m128 v51; // xmm0
  const char **v52; // rcx
  _BYTE *v53; // rax
  unsigned __int64 v54; // r8
  __m128i *v55; // rdx
  __int64 v56; // rcx
  _BYTE *v57; // r10
  __int64 *v58; // r10
  _BYTE *v59; // rax
  char v60; // al
  int v61; // r8d
  int v62; // r9d
  __int64 *v63; // r10
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  int v67; // r9d
  __int64 *v68; // r10
  __int64 *v69; // r10
  __int64 v70; // rdi
  unsigned __int64 v71; // rsi
  __int64 v72; // rdx
  __int64 *v73; // r10
  const char *v74; // rcx
  const char *v75; // rax
  __int64 v76; // rdx
  _QWORD *v77; // rax
  __int64 v78; // r15
  _BYTE *v79; // rsi
  const char *v80; // rax
  _BYTE *v81; // rcx
  __int64 v82; // rsi
  unsigned int v83; // ebp
  __int64 v84; // rax
  char *v85; // rdi
  __int64 v86; // rax
  char *v87; // rdx
  int v88; // eax
  int v89; // eax
  __int64 v90; // rax
  const void *v91; // rsi
  __int64 v92; // rdi
  char v93; // al
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rax
  bool v97; // al
  _QWORD *v98; // rdi
  char v99; // al
  _BYTE *v100; // [rsp+8h] [rbp-130h] BYREF
  __int64 *item_end; // [rsp+10h] [rbp-128h]
  __int64 *v102; // [rsp+18h] [rbp-120h]
  size_t n; // [rsp+20h] [rbp-118h]
  __int64 *v104; // [rsp+28h] [rbp-110h]
  __int64 *v105; // [rsp+30h] [rbp-108h]
  __int64 *v106; // [rsp+38h] [rbp-100h]
  unsigned __int64 **v107; // [rsp+40h] [rbp-F8h]
  __int64 *v108; // [rsp+48h] [rbp-F0h]
  _BYTE **v109; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v110; // [rsp+58h] [rbp-E0h]
  __int64 v111[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v112; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v113; // [rsp+88h] [rbp-B0h]
  void *v114; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v115; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v116; // [rsp+B8h] [rbp-80h]
  const char *v117; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v118; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v119; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v120; // [rsp+F8h] [rbp-40h]

  v120 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 56);
  if ( !v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 64);
  v9 = *(_DWORD *)(v7 + 4) & 0x80;
  if ( *(_DWORD *)v6 != 55 || *(_BYTE *)(v6 + 32) != 7 )
  {
    v10 = sub_120380((_BYTE *)v6, 1);
    v11 = (v10 != nullptr) & (v9 >> 7);
    if ( !v11 )
      return 0;
    v20 = (_QWORD *)a2[2];
    v21 = *((_QWORD *)v10 + 3);
    if ( !v20 )
    {
      if ( a2 + 1 != (_QWORD *)a2[3] && *(_QWORD *)(std::_Rb_tree_decrement() + 32) >= v21 )
        return 0;
      goto LABEL_28;
    }
    while ( 1 )
    {
      v22 = v20[4];
      v23 = 0;
      v24 = (_QWORD *)v20[3];
      if ( v21 < v22 )
      {
        v24 = (_QWORD *)v20[2];
        v23 = v11;
      }
      if ( !v24 )
        break;
      v20 = v24;
    }
    if ( v23 )
    {
      if ( (_QWORD *)a2[3] == v20 )
        goto LABEL_28;
      v22 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v22 >= v21 )
      return 0;
LABEL_28:
    *(_QWORD *)(operator new(0x28u) + 32) = *((_QWORD *)v10 + 3);
    std::_Rb_tree_insert_and_rebalance();
    ++a2[5];
    return 0;
  }
  if ( (*(_BYTE *)(v6 + 6) & 0x10) != 0 )
    return 0;
  v13 = *(_DWORD *)(v6 + 40);
  if ( v13 >= *(_DWORD *)(v7 + 64) )
    sub_167AF0(a3);
  v14 = *(_QWORD *)(*(_QWORD *)(v7 + 528) + 8LL * v13);
  if ( !v14 )
    return 0;
  v15 = sub_1229A0(*(_QWORD *)(v14 + 48));
  v16 = (__int64 *)v15;
  if ( !v15 )
    return 0;
  LOBYTE(v4) = v13 == 1 || *(_QWORD *)(v15 + 8) != 0;
  if ( (_BYTE)v4 || *(int *)(v14 + 352) <= 1 || *(int *)(v14 + 376) > 1 || (unsigned int)(*(_DWORD *)v15 - 42) <= 0xA )
    return 0;
  if ( v9 )
  {
    if ( (*(_BYTE *)(v15 + 4) & 0x40) != 0 )
    {
      v35 = *(_BYTE **)(a1 + 64);
      item_end = v16;
      v100 = v35;
      v117 = *(const char **)(*(_QWORD *)(a1 + 56) + 24LL);
      first_fcref_from = get_first_fcref_from();
      v16 = item_end;
      if ( first_fcref_from != -1 )
      {
        if ( *(char *)(*(_QWORD *)(*((_QWORD *)v100 + 187) + 8LL) + 10LL) < 0 )
        {
          LOBYTE(v111[0]) = 1;
          LOBYTE(v114) = 1;
          sub_CFF70();
          v16 = item_end;
        }
        v102 = v16;
        item_end = (__int64 *)get_item_end();
        v37 = sub_330F80(v100, (unsigned __int64)item_end);
        v38 = sub_332920((__int64)(v100 + 8), v37);
        v16 = v102;
        if ( v38 )
        {
          flags = get_flags_ex();
          v16 = v102;
          if ( (flags & 0x10000) != 0 )
            return 0;
        }
      }
    }
  }
  v109 = nullptr;
  v100 = v16;
  v110 = 0;
  v17 = sub_120460(v16, (__int64 *)&v109);
  v19 = (__int64 *)v100;
  if ( v17 == 1 )
  {
    v25 = (__int64 *)a2[2];
    v100 = *v109;
    v26 = *((_QWORD *)v100 + 3);
    v102 = a2 + 1;
    if ( !v25 )
    {
      n = v26;
      if ( v102 != (__int64 *)a2[3] )
      {
        item_end = v19;
        v90 = std::_Rb_tree_decrement();
        v19 = item_end;
        if ( *(_QWORD *)(v90 + 32) >= n )
          goto LABEL_45;
      }
      v25 = v102;
      v31 = 1;
      goto LABEL_44;
    }
    while ( 1 )
    {
      v27 = v25[4];
      v28 = v25[2];
      v29 = 0;
      v30 = (__int64 *)v25[3];
      if ( v26 < v27 )
      {
        v30 = (__int64 *)v25[2];
        v29 = 1;
      }
      if ( !v30 )
        break;
      v25 = v30;
    }
    if ( v29 )
    {
      if ( (__int64 *)a2[3] == v25 )
      {
LABEL_42:
        v31 = 1;
        if ( v102 != v25 )
          v31 = v26 < v25[4];
LABEL_44:
        LOBYTE(v104) = v31;
        n = (size_t)v25;
        item_end = v19;
        *(_QWORD *)(operator new(0x28u) + 32) = *((_QWORD *)v100 + 3);
        std::_Rb_tree_insert_and_rebalance();
        ++a2[5];
        v19 = item_end;
LABEL_45:
        if ( v100[64] != 8 )
          goto LABEL_18;
        item_end = *((__int64 **)v100 + 9);
        v104 = (__int64 *)item_end[4];
        if ( !v104 )
          goto LABEL_18;
        if ( (*(_DWORD *)(a1 + 24) & 0x600) != 0x200 )
        {
          n = (size_t)v19;
          sub_A7590(a1, 0, (__int64)v25, v27, v28, v18);
          v19 = (__int64 *)n;
        }
        if ( *(_DWORD *)v100 == 57
          && (n = (size_t)v19, v93 = sub_168CF0((_QWORD *)a1, (__int64)(v100 + 48), 0.0, a4), v19 = (__int64 *)n, v93)
          || ((LODWORD(n) = *((_DWORD *)item_end + 5), (n & 0xFFFFFFF0) == 0x40) || (n & 0xFFFFFFF0) == 0xD0)
          && (v105 = v19,
              LODWORD(n) = *((_DWORD *)item_end + 2),
              v46 = sub_168CF0((_QWORD *)a1, item_end[3] + 80LL * ((int)n - 1), 0.0, a4),
              v19 = v105,
              v46) )
        {
LABEL_81:
          v111[0] = 0;
          v111[1] = 0;
          v112 = 0;
          item_end = v19;
          v106 = v111;
          v113 = 0;
          sub_123EA0(a1, v111, (__int64)(v100 + 64), 0, 0xFFFF0000, 0.0);
          v47 = *(__int64 **)(a1 + 64);
          v48 = item_end;
          v114 = nullptr;
          v115 = 0;
          v49 = v47[27];
          if ( v49 )
          {
            v105 = v47;
            v104 = item_end;
            v100 = (_BYTE *)v49;
            n = 16 * v49;
            v114 = (void *)qalloc_or_throw(16 * v49, (__int64)v111, 16 * v49, v49);
            *((_QWORD *)&v115 + 1) = v100;
            v91 = (const void *)v105[26];
            item_end = (__int64 *)v100;
            v100 = v105;
            memcpy(v114, v91, n);
            v48 = v104;
            v47 = v105;
            *(_QWORD *)&v115 = item_end;
          }
          v50 = nullptr;
          v51.m128_u64[0] = 0;
          v52 = &v117;
          v117 = nullptr;
          v118 = 0;
          v53 = (_BYTE *)v47[72];
          v54 = v47[71];
          item_end = (__int64 *)&v117;
          v100 = v53;
          if ( (unsigned __int64)&v53[v54 - 1] >= v54 )
          {
            v104 = (__int64 *)v54;
            n = (size_t)v48;
            v117 = (const char *)qvector_reserve((__int64)item_end, 0, 1, 16);
            v48 = (__int64 *)n;
            v50 = (__m128i *)(16 * v118);
            v51 = _mm_loadh_ps((const double *)&v100);
            *(__m128 *)&v117[16 * v118] = v51;
            *(_QWORD *)&v118 = v118 + 1;
          }
          v100 = v48;
          n = (size_t)&v114;
          sub_3180C0((__int64 *)&v114, (__int64)item_end, v50, (__int64)v52);
          v57 = v100;
          if ( v117 )
          {
            *(_QWORD *)&v118 = 0;
            qfree((__int64)v117);
            v57 = v100;
          }
          v100 = v57;
          v105 = &v112;
          sub_3180C0(&v112, n, v55, v56);
          v58 = (__int64 *)v100;
          if ( v114 )
          {
            *(_QWORD *)&v115 = 0;
            qfree((__int64)v114);
            v58 = (__int64 *)v100;
          }
          v100 = *(_BYTE **)(*(_QWORD *)(a1 + 56) + 16LL);
          if ( v100 )
          {
            v107 = (unsigned __int64 **)&v115 + 1;
            while ( 1 )
            {
              if ( (v100[4] & 8) != 0 || (v104 = v58, v59 = sub_120380(v100, 0), v58 = v104, v59) )
              {
                LOBYTE(v104) = 0;
                goto LABEL_101;
              }
              sub_124680(n, a1, (__int64)v100, 0, *(double *)v51.m128_u64, a4);
              v60 = sub_318470(v107, (__int64)v105);
              v63 = v104;
              if ( v60 )
              {
                v108 = v104;
                LOBYTE(v104) = sub_64880((_QWORD *)n);
                v63 = v108;
                if ( (_BYTE)v104 )
                  break;
              }
              v104 = v63;
              sub_127A20((__int64)item_end, a1, (__int64)v100, 0, v61, v62, *(double *)v51.m128_u64, a4);
              sub_64640(v106, item_end, v64, v65, v66, v67);
              sub_317C60(v105, (__int64)&v118 + 8);
              v68 = v104;
              if ( *((_QWORD *)&v118 + 1) )
              {
                v119 = 0;
                qfree(*((__int64 *)&v118 + 1));
                v68 = v104;
              }
              v104 = v68;
              qfree((__int64)v117);
              v69 = v104;
              if ( *((_QWORD *)&v115 + 1) )
              {
                v116 = 0;
                qfree(*((__int64 *)&v115 + 1));
                v69 = v104;
              }
              v104 = v69;
              qfree((__int64)v114);
              v58 = v104;
              v100 = *((_BYTE **)v100 + 2);
              if ( !v100 )
                goto LABEL_131;
            }
            if ( *((_QWORD *)&v115 + 1) )
            {
              v100 = v108;
              v116 = 0;
              qfree(*((__int64 *)&v115 + 1));
              v63 = (__int64 *)v100;
            }
            v100 = v63;
            qfree((__int64)v114);
            v58 = (__int64 *)v100;
LABEL_101:
            v70 = v112;
            if ( !v112 )
            {
LABEL_103:
              v100 = v58;
              qfree(v111[0]);
              if ( (_BYTE)v104 )
                goto LABEL_18;
LABEL_104:
              v71 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL);
              if ( sub_11C5C0(*(_QWORD *)(a1 + 480), v71, 0) )
                goto LABEL_18;
              v72 = *(_QWORD *)(a1 + 56);
              v73 = (__int64 *)v100;
              v74 = *(const char **)(v72 + 24);
              v117 = v74;
              v75 = *((const char **)v100 + 3);
              if ( v74 == v75 && *(int *)(v14 + 376) > 0 )
              {
                v94 = *(_QWORD *)(a1 + 64);
                v95 = **(unsigned int **)(v14 + 368);
                if ( (unsigned int)v95 >= *(_DWORD *)(v94 + 64) )
                  sub_167AF0(*(double *)v51.m128_u64);
                v76 = *(_QWORD *)(v94 + 528);
                v96 = *(_QWORD *)(*(_QWORD *)(v76 + 8 * v95) + 48LL);
                if ( !v96 || *(_DWORD *)v96 != 55 )
                {
                  if ( v9 )
                    goto LABEL_18;
LABEL_116:
                  v100 = v73;
                  v78 = j__qalloc_or_throw(80, v71, v76, (__int64)v74);
                  *(_OWORD *)(v78 + 8) = 0;
                  *(_QWORD *)(v78 + 40) = 0;
                  v79 = v100;
                  *(_QWORD *)(v78 + 56) = 0;
                  *(_QWORD *)(v78 + 32) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v78 + 48) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v78 + 64) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v78 + 72) = 0;
                  sub_1253A0(v78, (__int64)v79);
                  v100 = sub_120380((_BYTE *)v78, 1);
                  if ( !v100 )
                  {
                    if ( !under_debugger )
                      sub_383060(0xC83Fu, 0.0);
                    BUG();
                  }
                  v80 = v117;
                  v81 = v100;
                  *(_QWORD *)(v78 + 24) = v117;
                  *((_QWORD *)v81 + 3) = v80;
                  if ( v9 )
                    sub_16EFC0(a2, (unsigned __int64 *)item_end);
                  sub_A3160(a1, (_QWORD *)v78, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL), 0.0);
                  v82 = *(_QWORD *)(a1 + 56);
                  if ( *(int *)(v14 + 376) <= 0 )
                  {
                    sub_A3480(a1, (_BYTE *)v82);
                    v92 = *(_QWORD *)(a1 + 368);
                    if ( v92 )
                    {
                      *(_QWORD *)(a1 + 376) = 0;
                      qfree(v92);
                      *(_QWORD *)(a1 + 368) = 0;
                      *(_QWORD *)(a1 + 384) = 0;
                    }
                    *(_DWORD *)(a1 + 76) = 2;
                  }
                  else
                  {
                    v83 = **(_DWORD **)(v14 + 368);
                    *(_DWORD *)(v82 + 40) = v83;
                    v84 = sub_167E70(*(_QWORD *)(a1 + 64), v83, 0.0);
                    sub_167D40((__int64 *)(v84 + 344), *(_DWORD *)(a1 + 72));
                    **(_DWORD **)(a1 + 368) = v83;
                  }
                  v85 = *(char **)(v14 + 344);
                  v86 = *(_QWORD *)(v14 + 352);
                  v87 = &v85[4 * v86];
                  while ( v87 != v85 )
                  {
                    if ( *(_DWORD *)(a1 + 72) == *(_DWORD *)v85 )
                    {
                      memmove(v85, v85 + 4, v87 - v85 - 4);
                      v86 = *(_QWORD *)(v14 + 352) - 1LL;
                      *(_QWORD *)(v14 + 352) = v86;
                      break;
                    }
                    v85 += 4;
                  }
                  if ( !v86 )
                    **(_DWORD **)(v14 + 64) |= 0x400u;
                  v88 = *(_DWORD *)(v14 + 24);
                  BYTE1(v88) &= ~2u;
                  LOBYTE(v88) = v88 | 0x80;
                  *(_DWORD *)(v14 + 24) = v88;
                  v89 = *(_DWORD *)(a1 + 24);
                  BYTE1(v89) &= ~2u;
                  LOBYTE(v89) = v89 | 0x80;
                  *(_DWORD *)(a1 + 24) = v89;
                  sub_EE7A0(a1, (_BYTE *)v78, v14, *(_BYTE **)(v14 + 56));
                  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL) |= 0x100000u;
                  *((_DWORD *)v100 + 1) |= 0x100000u;
                  sub_66FA0(*(_QWORD *)(a1 + 64), 1);
                  v4 = 1;
                  goto LABEL_18;
                }
                v117 = *(const char **)(v96 + 24);
              }
              else
              {
                v76 = *(_QWORD *)(v72 + 16);
                if ( v76 )
                {
                  if ( v74 == *(const char **)(v76 + 24) && v75 != ++v74 )
                  {
                    v98 = *(_QWORD **)(a1 + 64);
                    v104 = (__int64 *)v100;
                    v100 = v74;
                    n = (size_t)(v98 + 1);
                    v71 = sub_330F80(v98, (unsigned __int64)v74);
                    v99 = sub_332920(n, v71);
                    v73 = v104;
                    if ( v99 )
                    {
                      v74 = v100;
                      v117 = v100;
                    }
                  }
                }
              }
              if ( v9 )
              {
                v74 = v117;
                v77 = (_QWORD *)a2[2];
                v76 = (__int64)v102;
                while ( v77 )
                {
                  v71 = v77[3];
                  if ( v77[4] >= (unsigned __int64)v117 )
                  {
                    v76 = (__int64)v77;
                    v71 = v77[2];
                  }
                  v77 = (_QWORD *)v71;
                }
                if ( v102 != (__int64 *)v76 && (unsigned __int64)v117 >= *(_QWORD *)(v76 + 32) )
                  goto LABEL_18;
              }
              goto LABEL_116;
            }
          }
          else
          {
LABEL_131:
            v70 = v112;
            LOBYTE(v104) = 0;
            if ( !v112 )
            {
              v100 = v58;
              qfree(v111[0]);
              goto LABEL_104;
            }
          }
          v100 = v58;
          *(_QWORD *)&v113 = 0;
          qfree(v70);
          v58 = (__int64 *)v100;
          goto LABEL_103;
        }
        LOBYTE(n) = 0;
        v32 = nullptr;
        v105 = nullptr;
        while ( 1 )
        {
          v34 = (__int64 *)(item_end[3] + 80LL * (_QWORD)v32);
          if ( *(_BYTE *)v34 == 4 )
          {
            v40 = (_BYTE *)v34[1];
            v108 = (__int64 *)v32;
            v107 = (unsigned __int64 **)v19;
            v106 = v34;
            v41 = sub_120380(v40, 1);
            v34 = v106;
            v19 = (__int64 *)v107;
            v32 = (unsigned __int64 **)v108;
            if ( v41 )
              goto LABEL_18;
          }
          if ( (_BYTE)n )
            goto LABEL_59;
          v33 = *(_BYTE *)v34;
          if ( *(_BYTE *)v34 != 5 )
            goto LABEL_54;
          if ( *(_QWORD *)(v34[1] + 8) + *((int *)v34 + 1) <= *(__int64 *)(*(_QWORD *)v34[1] + 152LL) )
            break;
LABEL_56:
          v32 = (unsigned __int64 **)((char *)v32 + 1);
          if ( v104 == (__int64 *)v32 )
          {
            if ( (_BYTE)n || (v100[4] & 0x40) != 0 && v104 == v105 )
              goto LABEL_81;
            if ( v100[32] != 6 )
              goto LABEL_18;
            v117 = nullptr;
            v118 = 0;
            v45 = *((_QWORD *)v100 + 5);
            item_end = v19;
            if ( !(unsigned __int8)sub_1D2AB0((__int64 *)&v117, v45, 0)
              || (v97 = sub_32E710(v117), v19 = item_end, !v97) )
            {
              if ( v117 )
              {
                *(_QWORD *)&v118 = 0;
                qfree((__int64)v117);
              }
              goto LABEL_18;
            }
            if ( v117 )
            {
              *(_QWORD *)&v118 = 0;
              qfree((__int64)v117);
              v19 = item_end;
            }
            if ( !v105 )
              goto LABEL_18;
            goto LABEL_81;
          }
        }
        v108 = (__int64 *)v32;
        v107 = (unsigned __int64 **)v19;
        v106 = v34;
        v43 = sub_168CF0((_QWORD *)a1, (__int64)v34, 0.0, a4);
        v34 = v106;
        v19 = (__int64 *)v107;
        v32 = (unsigned __int64 **)v108;
        if ( !v43 )
        {
          v33 = *(_BYTE *)v106;
LABEL_54:
          if ( v33 == 1 )
          {
            v107 = v32;
            v106 = v19;
            v44 = sub_168CF0((_QWORD *)a1, (__int64)v34, 0.0, a4);
            v32 = v107;
            v105 = (__int64 *)((char *)v105 + v44);
            v19 = v106;
          }
          goto LABEL_56;
        }
LABEL_59:
        LOBYTE(n) = 1;
        goto LABEL_56;
      }
      v104 = (__int64 *)v26;
      n = (size_t)v19;
      item_end = v25;
      v42 = std::_Rb_tree_decrement();
      v19 = (__int64 *)n;
      v27 = *(_QWORD *)(v42 + 32);
      v25 = item_end;
    }
    if ( v27 >= v26 )
      goto LABEL_45;
    goto LABEL_42;
  }
LABEL_18:
  if ( v109 )
  {
    *(_QWORD *)&v110 = 0;
    qfree((__int64)v109);
  }
  return v4;
}

