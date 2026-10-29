__int64 __fastcall sub_168A40(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rdi
  __int64 v5; // rax
  unsigned int v7; // ebp
  _BYTE *v8; // r13
  char v9; // bp
  unsigned int v11; // r13d
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 *v14; // r10
  int v15; // eax
  int v16; // r9d
  __int64 *v17; // r10
  _QWORD *v18; // rbx
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdx
  char v21; // cl
  _QWORD *v22; // rax
  __int64 *v23; // rdx
  size_t v24; // rsi
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  char v27; // di
  __int64 *v28; // rax
  bool v29; // cl
  __int64 *v30; // rcx
  char v31; // al
  __int64 *v32; // rdx
  _BYTE *v33; // rax
  __int64 first_fcref_from; // rax
  __int64 v35; // rax
  char v36; // al
  __int64 flags; // rax
  _BYTE *v38; // rdi
  _BYTE *v39; // rax
  __int64 v40; // rax
  __int128 v41; // rdi
  char v42; // al
  __int128 v43; // rdi
  unsigned __int8 v44; // al
  __int64 v45; // rsi
  __int128 v46; // rdi
  char v47; // al
  __int128 v48; // rdi
  __int64 *v49; // r9
  __int64 *v50; // r10
  __int64 v51; // rcx
  _BYTE *v52; // rax
  unsigned __int64 v53; // r8
  _BYTE *v54; // r10
  __int64 *v55; // r10
  _BYTE *v56; // rax
  char v57; // al
  __int64 *v58; // r10
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // r9d
  __int64 *v63; // r10
  __int64 *v64; // r10
  __int64 v65; // rdi
  __int64 v66; // rdx
  __int64 *v67; // r10
  _BYTE *v68; // rcx
  _BYTE *v69; // rax
  __int64 v70; // rdx
  __int64 *v71; // rax
  __int64 *v72; // rdx
  __int64 *v73; // rsi
  __int64 v74; // r15
  _BYTE *v75; // rsi
  _BYTE *v76; // rax
  _BYTE *v77; // rcx
  __int64 v78; // rsi
  unsigned int v79; // ebp
  __int64 v80; // rax
  char *v81; // rdi
  __int64 v82; // rax
  char *v83; // rdx
  int v84; // eax
  int v85; // eax
  __int64 v86; // rax
  const void *v87; // rsi
  __int128 v88; // rdi
  char v89; // al
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rax
  char v93; // al
  _BYTE *v94; // rcx
  __int64 v95; // rdi
  __int64 v96; // rax
  char v97; // al
  _BYTE *v98; // [rsp+8h] [rbp-130h] BYREF
  __int64 *item_end; // [rsp+10h] [rbp-128h]
  __int64 *v100; // [rsp+18h] [rbp-120h]
  size_t n; // [rsp+20h] [rbp-118h]
  __int64 *v102; // [rsp+28h] [rbp-110h]
  __int64 *v103; // [rsp+30h] [rbp-108h]
  __int64 *v104; // [rsp+38h] [rbp-100h]
  __int64 *v105; // [rsp+40h] [rbp-F8h]
  __int64 *v106; // [rsp+48h] [rbp-F0h]
  _BYTE **v107; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v108; // [rsp+58h] [rbp-E0h]
  _QWORD v109[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v110; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v111; // [rsp+88h] [rbp-B0h]
  void *v112; // [rsp+A0h] [rbp-98h] BYREF
  __int128 v113; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v114; // [rsp+B8h] [rbp-80h]
  _BYTE *v115; // [rsp+D0h] [rbp-68h] BYREF
  __int128 v116; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v117; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v118; // [rsp+F8h] [rbp-40h]

  v118 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 56);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 64);
  v7 = *(_DWORD *)(v5 + 4) & 0x80;
  if ( *(_DWORD *)v4 != 55 || *(_BYTE *)(v4 + 32) != 7 )
  {
    v8 = sub_119CC0((_BYTE *)v4, 1);
    v9 = (v8 != nullptr) & (v7 >> 7);
    if ( !v9 )
      return 0;
    v18 = (_QWORD *)a2[2];
    v19 = *((_QWORD *)v8 + 3);
    if ( !v18 )
    {
      if ( a2 + 1 != (_QWORD *)a2[3] && *(_QWORD *)(std::_Rb_tree_decrement() + 32) >= v19 )
        return 0;
      goto LABEL_28;
    }
    while ( 1 )
    {
      v20 = v18[4];
      v21 = 0;
      v22 = (_QWORD *)v18[3];
      if ( v19 < v20 )
      {
        v22 = (_QWORD *)v18[2];
        v21 = v9;
      }
      if ( !v22 )
        break;
      v18 = v22;
    }
    if ( v21 )
    {
      if ( (_QWORD *)a2[3] == v18 )
        goto LABEL_28;
      v20 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v20 >= v19 )
      return 0;
LABEL_28:
    *(_QWORD *)(operator new(0x28u) + 32) = *((_QWORD *)v8 + 3);
    std::_Rb_tree_insert_and_rebalance();
    ++a2[5];
    return 0;
  }
  if ( (*(_BYTE *)(v4 + 6) & 0x10) != 0 )
    return 0;
  v11 = *(_DWORD *)(v4 + 40);
  if ( v11 >= *(_DWORD *)(v5 + 64) )
    sub_161430(v4);
  v12 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8LL * v11);
  if ( !v12 )
    return 0;
  v13 = sub_11C2E0(*(_QWORD *)(v12 + 48));
  v14 = (__int64 *)v13;
  if ( !v13 )
    return 0;
  LOBYTE(v2) = v11 == 1 || *(_QWORD *)(v13 + 8) != 0;
  if ( (_BYTE)v2 || *(int *)(v12 + 352) <= 1 || *(int *)(v12 + 376) > 1 || (unsigned int)(*(_DWORD *)v13 - 42) <= 0xA )
    return 0;
  if ( v7 )
  {
    if ( (*(_BYTE *)(v13 + 4) & 0x40) != 0 )
    {
      v33 = *(_BYTE **)(a1 + 64);
      item_end = v14;
      v98 = v33;
      v115 = *(_BYTE **)(*(_QWORD *)(a1 + 56) + 24LL);
      first_fcref_from = get_first_fcref_from();
      v14 = item_end;
      if ( first_fcref_from != -1 )
      {
        if ( *(char *)(*(_QWORD *)(*((_QWORD *)v98 + 187) + 8LL) + 10LL) < 0 )
        {
          LOBYTE(v109[0]) = 1;
          LOBYTE(v112) = 1;
          sub_C98B0();
          v14 = item_end;
        }
        v100 = v14;
        item_end = (__int64 *)get_item_end();
        v35 = sub_329920(v98);
        v36 = sub_32B2E0(v98 + 8, v35);
        v14 = v100;
        if ( v36 )
        {
          flags = get_flags_ex();
          v14 = v100;
          if ( (flags & 0x10000) != 0 )
            return 0;
        }
      }
    }
  }
  v107 = nullptr;
  v98 = v14;
  v108 = 0;
  v15 = sub_119DA0(v14, (__int64 *)&v107);
  v17 = (__int64 *)v98;
  if ( v15 == 1 )
  {
    v23 = (__int64 *)a2[2];
    v98 = *v107;
    v24 = *((_QWORD *)v98 + 3);
    v100 = a2 + 1;
    if ( !v23 )
    {
      n = v24;
      if ( v100 != (__int64 *)a2[3] )
      {
        item_end = v17;
        v86 = std::_Rb_tree_decrement();
        v17 = item_end;
        if ( *(_QWORD *)(v86 + 32) >= n )
          goto LABEL_45;
      }
      v23 = v100;
      v29 = 1;
      goto LABEL_44;
    }
    while ( 1 )
    {
      v25 = v23[4];
      v26 = v23[2];
      v27 = 0;
      v28 = (__int64 *)v23[3];
      if ( v24 < v25 )
      {
        v28 = (__int64 *)v23[2];
        v27 = 1;
      }
      if ( !v28 )
        break;
      v23 = v28;
    }
    if ( v27 )
    {
      if ( (__int64 *)a2[3] == v23 )
      {
LABEL_42:
        v29 = 1;
        if ( v100 != v23 )
          v29 = v24 < v23[4];
LABEL_44:
        LOBYTE(v102) = v29;
        n = (size_t)v23;
        item_end = v17;
        *(_QWORD *)(operator new(0x28u) + 32) = *((_QWORD *)v98 + 3);
        std::_Rb_tree_insert_and_rebalance();
        ++a2[5];
        v17 = item_end;
LABEL_45:
        if ( v98[64] != 8 )
          goto LABEL_18;
        item_end = *((__int64 **)v98 + 9);
        v102 = (__int64 *)item_end[4];
        if ( !v102 )
          goto LABEL_18;
        if ( (*(_DWORD *)(a1 + 24) & 0x600) != 0x200 )
        {
          n = (size_t)v17;
          sub_A0ED0(a1, 0, (__int64)v23, v25, v26, v16);
          v17 = (__int64 *)n;
        }
        if ( *(_DWORD *)v98 == 57
          && (*(_QWORD *)&v88 = a1,
              n = (size_t)v17,
              *((_QWORD *)&v88 + 1) = v98 + 48,
              v89 = sub_162630(v88),
              v17 = (__int64 *)n,
              v89)
          || ((LODWORD(n) = *((_DWORD *)item_end + 5), (n & 0xFFFFFFF0) == 0x40) || (n & 0xFFFFFFF0) == 0xD0)
          && (*(_QWORD *)&v46 = a1,
              v103 = v17,
              LODWORD(n) = *((_DWORD *)item_end + 2),
              *((_QWORD *)&v46 + 1) = item_end[3] + 80LL * ((int)n - 1),
              v47 = sub_162630(v46),
              v17 = v103,
              v47) )
        {
LABEL_81:
          v109[0] = 0;
          *(_QWORD *)&v48 = a1;
          v109[1] = 0;
          v110 = 0;
          *((_QWORD *)&v48 + 1) = v109;
          item_end = v17;
          v104 = v109;
          v111 = 0;
          sub_11D7E0(v48, (__int64)(v98 + 64), 0, 0xFFFF0000);
          v49 = *(__int64 **)(a1 + 64);
          v50 = item_end;
          v112 = nullptr;
          v113 = 0;
          v51 = v49[27];
          if ( v51 )
          {
            v103 = v49;
            v102 = item_end;
            v98 = (_BYTE *)v51;
            n = 16 * v51;
            v112 = (void *)qalloc_or_throw();
            *((_QWORD *)&v113 + 1) = v98;
            v87 = (const void *)v103[26];
            item_end = (__int64 *)v98;
            v98 = v103;
            memcpy(v112, v87, n);
            v50 = v102;
            v49 = v103;
            *(_QWORD *)&v113 = item_end;
          }
          v115 = nullptr;
          v116 = 0;
          v52 = (_BYTE *)v49[72];
          v53 = v49[71];
          item_end = (__int64 *)&v115;
          v98 = v52;
          if ( (unsigned __int64)&v52[v53 - 1] >= v53 )
          {
            v102 = (__int64 *)v53;
            n = (size_t)v50;
            v115 = (_BYTE *)qvector_reserve();
            v50 = (__int64 *)n;
            *(__m128 *)&v115[16 * v116] = _mm_loadh_ps((const double *)&v98);
            *(_QWORD *)&v116 = v116 + 1;
          }
          v98 = v50;
          n = (size_t)&v112;
          sub_310D40(&v112, item_end);
          v54 = v98;
          if ( v115 )
          {
            *(_QWORD *)&v116 = 0;
            qfree();
            v54 = v98;
          }
          v98 = v54;
          v103 = &v110;
          sub_310D40(&v110, n);
          v55 = (__int64 *)v98;
          if ( v112 )
          {
            *(_QWORD *)&v113 = 0;
            qfree();
            v55 = (__int64 *)v98;
          }
          v98 = *(_BYTE **)(*(_QWORD *)(a1 + 56) + 16LL);
          if ( v98 )
          {
            v105 = (__int64 *)&v113 + 1;
            while ( 1 )
            {
              if ( (v98[4] & 8) != 0 || (v102 = v55, v56 = sub_119CC0(v98, 0), v55 = v102, v56) )
              {
                LOBYTE(v102) = 0;
                goto LABEL_101;
              }
              sub_11DFC0(n, a1, (__int64)v98, 0);
              v57 = sub_3110F0(v105, v103);
              v58 = v102;
              if ( v57 )
              {
                v106 = v102;
                LOBYTE(v102) = sub_5E300((_QWORD *)n);
                v58 = v106;
                if ( (_BYTE)v102 )
                  break;
              }
              v102 = v58;
              sub_121360((__int64)item_end, a1, (__int64)v98, 0);
              sub_5E0C0(v104, item_end, v59, v60, v61, v62);
              sub_3108E0(v103, (char *)&v116 + 8);
              v63 = v102;
              if ( *((_QWORD *)&v116 + 1) )
              {
                v117 = 0;
                qfree();
                v63 = v102;
              }
              v102 = v63;
              qfree();
              v64 = v102;
              if ( *((_QWORD *)&v113 + 1) )
              {
                v114 = 0;
                qfree();
                v64 = v102;
              }
              v102 = v64;
              qfree();
              v55 = v102;
              v98 = *((_BYTE **)v98 + 2);
              if ( !v98 )
                goto LABEL_131;
            }
            if ( *((_QWORD *)&v113 + 1) )
            {
              v98 = v106;
              v114 = 0;
              qfree();
              v58 = (__int64 *)v98;
            }
            v98 = v58;
            qfree();
            v55 = (__int64 *)v98;
LABEL_101:
            if ( !v110 )
            {
LABEL_103:
              v98 = v55;
              qfree();
              if ( (_BYTE)v102 )
                goto LABEL_18;
LABEL_104:
              v65 = *(_QWORD *)(a1 + 480);
              if ( sub_115F00(v65, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 24LL), 0) )
                goto LABEL_18;
              v66 = *(_QWORD *)(a1 + 56);
              v67 = (__int64 *)v98;
              v68 = *(_BYTE **)(v66 + 24);
              v115 = v68;
              v69 = *((_BYTE **)v98 + 3);
              if ( v68 == v69 && *(int *)(v12 + 376) > 0 )
              {
                v90 = *(_QWORD *)(a1 + 64);
                v91 = **(unsigned int **)(v12 + 368);
                if ( (unsigned int)v91 >= *(_DWORD *)(v90 + 64) )
                  sub_161430(v65);
                v92 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v90 + 528) + 8 * v91) + 48LL);
                if ( !v92 || *(_DWORD *)v92 != 55 )
                {
                  if ( v7 )
                    goto LABEL_18;
LABEL_116:
                  v98 = v67;
                  v74 = j__qalloc_or_throw();
                  *(_OWORD *)(v74 + 8) = 0;
                  *(_QWORD *)(v74 + 40) = 0;
                  v75 = v98;
                  *(_QWORD *)(v74 + 56) = 0;
                  *(_QWORD *)(v74 + 32) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v74 + 48) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v74 + 64) = 0xFFFFFFFF00000000LL;
                  *(_QWORD *)(v74 + 72) = 0;
                  sub_11ECE0(v74, (__int64)v75);
                  v98 = sub_119CC0((_BYTE *)v74, 1);
                  if ( !v98 )
                  {
                    if ( !under_debugger )
                      sub_37B760(51263);
                    BUG();
                  }
                  v76 = v115;
                  v77 = v98;
                  *(_QWORD *)(v74 + 24) = v115;
                  *((_QWORD *)v77 + 3) = v76;
                  if ( v7 )
                    sub_168900(a2, (unsigned __int64 *)item_end);
                  sub_9CAA0(a1, (_QWORD *)v74, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL));
                  v78 = *(_QWORD *)(a1 + 56);
                  if ( *(int *)(v12 + 376) <= 0 )
                  {
                    sub_9CDC0(a1, v78);
                    if ( *(_QWORD *)(a1 + 368) )
                    {
                      *(_QWORD *)(a1 + 376) = 0;
                      qfree();
                      *(_QWORD *)(a1 + 368) = 0;
                      *(_QWORD *)(a1 + 384) = 0;
                    }
                    *(_DWORD *)(a1 + 76) = 2;
                  }
                  else
                  {
                    v79 = **(_DWORD **)(v12 + 368);
                    *(_DWORD *)(v78 + 40) = v79;
                    v80 = sub_1617B0(*(_QWORD *)(a1 + 64), v79);
                    sub_161680((__int64 *)(v80 + 344), *(_DWORD *)(a1 + 72));
                    **(_DWORD **)(a1 + 368) = v79;
                  }
                  v81 = *(char **)(v12 + 344);
                  v82 = *(_QWORD *)(v12 + 352);
                  v83 = &v81[4 * v82];
                  while ( v83 != v81 )
                  {
                    if ( *(_DWORD *)(a1 + 72) == *(_DWORD *)v81 )
                    {
                      memmove(v81, v81 + 4, v83 - v81 - 4);
                      v82 = *(_QWORD *)(v12 + 352) - 1LL;
                      *(_QWORD *)(v12 + 352) = v82;
                      break;
                    }
                    v81 += 4;
                  }
                  if ( !v82 )
                    **(_DWORD **)(v12 + 64) |= 0x400u;
                  v84 = *(_DWORD *)(v12 + 24);
                  BYTE1(v84) &= ~2u;
                  LOBYTE(v84) = v84 | 0x80;
                  *(_DWORD *)(v12 + 24) = v84;
                  v85 = *(_DWORD *)(a1 + 24);
                  BYTE1(v85) &= ~2u;
                  LOBYTE(v85) = v85 | 0x80;
                  *(_DWORD *)(a1 + 24) = v85;
                  sub_E80E0(a1, v74, v12, *(_QWORD *)(v12 + 56));
                  *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL) |= 0x100000u;
                  *((_DWORD *)v98 + 1) |= 0x100000u;
                  sub_60A20(*(_QWORD *)(a1 + 64), 1u, (__int64)"UNMERGE_CALLS (%d -> %d)", *(_DWORD *)(a1 + 72), v11);
                  v2 = 1;
                  goto LABEL_18;
                }
                v115 = *(_BYTE **)(v92 + 24);
              }
              else
              {
                v70 = *(_QWORD *)(v66 + 16);
                if ( v70 )
                {
                  if ( v68 == *(_BYTE **)(v70 + 24) )
                  {
                    v94 = v68 + 1;
                    if ( v69 != v94 )
                    {
                      v95 = *(_QWORD *)(a1 + 64);
                      v102 = (__int64 *)v98;
                      v98 = v94;
                      n = v95 + 8;
                      v96 = sub_329920(v95);
                      v97 = sub_32B2E0(n, v96);
                      v67 = v102;
                      if ( v97 )
                        v115 = v98;
                    }
                  }
                }
              }
              if ( v7 )
              {
                v71 = (__int64 *)a2[2];
                v72 = v100;
                while ( v71 )
                {
                  v73 = (__int64 *)v71[3];
                  if ( v71[4] >= (unsigned __int64)v115 )
                  {
                    v72 = v71;
                    v73 = (__int64 *)v71[2];
                  }
                  v71 = v73;
                }
                if ( v100 != v72 && (unsigned __int64)v115 >= v72[4] )
                  goto LABEL_18;
              }
              goto LABEL_116;
            }
          }
          else
          {
LABEL_131:
            LOBYTE(v102) = 0;
            if ( !v110 )
            {
              v98 = v55;
              qfree();
              goto LABEL_104;
            }
          }
          v98 = v55;
          *(_QWORD *)&v111 = 0;
          qfree();
          v55 = (__int64 *)v98;
          goto LABEL_103;
        }
        LOBYTE(n) = 0;
        v30 = nullptr;
        v103 = nullptr;
        while ( 1 )
        {
          v32 = (__int64 *)(item_end[3] + 80LL * (_QWORD)v30);
          if ( *(_BYTE *)v32 == 4 )
          {
            v38 = (_BYTE *)v32[1];
            v106 = v30;
            v105 = v17;
            v104 = v32;
            v39 = sub_119CC0(v38, 1);
            v32 = v104;
            v17 = v105;
            v30 = v106;
            if ( v39 )
              goto LABEL_18;
          }
          if ( (_BYTE)n )
            goto LABEL_59;
          v31 = *(_BYTE *)v32;
          if ( *(_BYTE *)v32 != 5 )
            goto LABEL_54;
          if ( *(_QWORD *)(v32[1] + 8) + *((int *)v32 + 1) <= *(__int64 *)(*(_QWORD *)v32[1] + 152LL) )
            break;
LABEL_56:
          v30 = (__int64 *)((char *)v30 + 1);
          if ( v102 == v30 )
          {
            if ( (_BYTE)n || (v98[4] & 0x40) != 0 && v102 == v103 )
              goto LABEL_81;
            if ( v98[32] != 6 )
              goto LABEL_18;
            v115 = nullptr;
            v116 = 0;
            v45 = *((_QWORD *)v98 + 5);
            item_end = v17;
            if ( !(unsigned __int8)sub_1CBB30(&v115, v45, 0, 0) || (v93 = sub_3271D0(v115), v17 = item_end, !v93) )
            {
              if ( v115 )
              {
                *(_QWORD *)&v116 = 0;
                qfree();
              }
              goto LABEL_18;
            }
            if ( v115 )
            {
              *(_QWORD *)&v116 = 0;
              qfree();
              v17 = item_end;
            }
            if ( !v103 )
              goto LABEL_18;
            goto LABEL_81;
          }
        }
        *((_QWORD *)&v41 + 1) = v32;
        *(_QWORD *)&v41 = a1;
        v106 = v30;
        v105 = v17;
        v104 = v32;
        v42 = sub_162630(v41);
        v32 = v104;
        v17 = v105;
        v30 = v106;
        if ( !v42 )
        {
          v31 = *(_BYTE *)v104;
LABEL_54:
          if ( v31 == 1 )
          {
            *((_QWORD *)&v43 + 1) = v32;
            *(_QWORD *)&v43 = a1;
            v105 = v30;
            v104 = v17;
            v44 = sub_162630(v43);
            v30 = v105;
            v103 = (__int64 *)((char *)v103 + v44);
            v17 = v104;
          }
          goto LABEL_56;
        }
LABEL_59:
        LOBYTE(n) = 1;
        goto LABEL_56;
      }
      v102 = (__int64 *)v24;
      n = (size_t)v17;
      item_end = v23;
      v40 = std::_Rb_tree_decrement();
      v17 = (__int64 *)n;
      v25 = *(_QWORD *)(v40 + 32);
      v23 = item_end;
    }
    if ( v25 >= v24 )
      goto LABEL_45;
    goto LABEL_42;
  }
LABEL_18:
  if ( v107 )
  {
    *(_QWORD *)&v108 = 0;
    qfree();
  }
  return v2;
}

