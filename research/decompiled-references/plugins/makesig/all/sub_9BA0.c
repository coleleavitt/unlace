__int64 __fastcall sub_9BA0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v5; // ebx
  int v6; // r12d
  const char *v7; // rsi
  int *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r15
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 v26; // rbp
  const char *v27; // rax
  __int64 v28; // rdx
  const char **v29; // rdx
  int v30; // ebp
  int i; // eax
  __int64 v32; // r12
  __int64 v33; // r14
  __int64 *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  const char *v37; // rsi
  unsigned __int64 v38; // r14
  __int64 v39; // r15
  __int128 *v40; // rbp
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rax
  const char **v44; // r12
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rdx
  char *v52; // rax
  __int128 *v53; // rdx
  __int64 v54; // rax
  _BOOL8 v55; // rdi
  __int64 v56; // rax
  __int64 v57; // rsi
  __int64 v59; // rdx
  const char *v60; // rdi
  unsigned __int64 v61; // rcx
  int v62; // r13d
  int *v63; // r12
  __int64 v64; // rax
  __int128 *v65; // r14
  char v66; // al
  bool v67; // cc
  unsigned __int64 v68; // r13
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned int v71; // r15d
  __int64 v72; // rbx
  const char **v73; // r14
  __int128 *v74; // r12
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  const char *v78; // r12
  void *v79; // rdi
  __int64 v80; // rax
  __int64 *v81; // r14
  __int64 v82; // rax
  __int64 v83; // r11
  _BYTE *v84; // rsi
  __int64 v85; // rax
  _BYTE *v86; // rdi
  __int64 v87; // rcx
  char v88; // r15
  _BYTE *v89; // rdx
  _BYTE *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 j; // rbx
  __int64 v96; // r12
  char v97; // r12
  _QWORD *v98; // rdi
  void *v99; // rax
  const char *v100; // rsi
  unsigned __int64 v101; // rdx
  char *v102; // rax
  __int64 v103; // rax
  __int64 v104; // [rsp+0h] [rbp-E8h]
  __int64 *v105; // [rsp+8h] [rbp-E0h]
  __int64 v106; // [rsp+10h] [rbp-D8h]
  __int64 v107; // [rsp+18h] [rbp-D0h]
  __int64 v108; // [rsp+20h] [rbp-C8h]
  __int64 v109; // [rsp+28h] [rbp-C0h]
  __int64 *v110; // [rsp+30h] [rbp-B8h]
  __int64 v111; // [rsp+38h] [rbp-B0h]
  int v112; // [rsp+40h] [rbp-A8h]
  unsigned __int8 v113; // [rsp+47h] [rbp-A1h]
  char v114; // [rsp+47h] [rbp-A1h]
  __int64 v115; // [rsp+48h] [rbp-A0h]
  __int64 v116; // [rsp+50h] [rbp-98h] BYREF
  __int128 v117; // [rsp+58h] [rbp-90h]
  __int64 v118; // [rsp+68h] [rbp-80h]
  __int64 v119; // [rsp+70h] [rbp-78h] BYREF
  __int128 v120; // [rsp+78h] [rbp-70h] BYREF
  __int128 *v121; // [rsp+88h] [rbp-60h]
  __int16 *v122; // [rsp+90h] [rbp-58h]
  __int64 v123; // [rsp+98h] [rbp-50h]
  __int64 v124; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v125; // [rsp+A8h] [rbp-40h]

  v111 = a1;
  v110 = a2;
  v125 = __readfsqword(0x28u);
  v3 = a2[1];
  if ( (int)v3 <= 1 )
    return 1;
  v5 = a2[1];
  v115 = (unsigned int)(v3 - 1);
  v6 = -1;
  v7 = *(const char **)a1;
  v8 = (int *)*v110;
  v9 = *v110 + 4;
  v10 = v9 + 4 * v115;
  while ( 1 )
  {
    v11 = *(_QWORD *)(**(_QWORD **)(a1 + 24) + 208LL * *(unsigned int *)&v7[4 * *v8] + 160);
    if ( v6 < 0 || v11 < v6 )
      v6 = v11;
    v8 = (int *)v9;
    if ( v10 == v9 )
      break;
    v9 += 4;
  }
  v119 = 0;
  v120 = 0;
  if ( !v6 )
    goto LABEL_69;
  v7 = nullptr;
  v105 = &v119;
  v12 = qvector_reserve(&v119, 0, v6, 24);
  v13 = *((_QWORD *)&v120 + 1);
  *((_QWORD *)&v120 + 1) = 0;
  v14 = v119;
  v15 = v120 - 1;
  if ( (__int64)v120 - 1 >= 0 )
  {
    v16 = v12;
    do
    {
      v17 = *(_QWORD *)v14;
      v18 = _mm_loadu_si128((const __m128i *)(v14 + 8));
      v16 += 24;
      v14 += 24;
      *(_QWORD *)(v14 - 24) = 0;
      *(_QWORD *)(v16 - 24) = v17;
      *(__m128i *)(v16 - 16) = v18;
      *(_QWORD *)(v14 - 8) = 0;
    }
    while ( v15-- != 0 );
    v14 = v119;
  }
  v104 = v6;
  qfree(v14);
  v22 = v120;
  v23 = v6;
  v119 = v12;
  *((_QWORD *)&v120 + 1) = v13;
  if ( (unsigned __int64)v120 < v6 )
  {
    v24 = 24 * v120;
    do
    {
      v25 = v12 + v24;
      ++v22;
      v24 += 24;
      *(_QWORD *)v25 = 0;
      *(_OWORD *)(v25 + 8) = 0;
      v12 = v119;
    }
    while ( v6 != v22 );
  }
  *(_QWORD *)&v120 = v6;
  if ( v6 <= 0 )
  {
    v30 = -1;
    if ( !v12 )
    {
LABEL_69:
      v39 = 0;
      v113 = byte_204E0;
      if ( !byte_204E0 )
        return 1;
      while ( 2 )
      {
        LODWORD(v105) = 0;
        v59 = *v110;
        v40 = **(__int128 ***)(v111 + 24);
        v69 = *(unsigned int *)(*(_QWORD *)v111 + 4LL * *(int *)(*v110 + 4 * v39));
        v61 = 3 * v69;
        v65 = &v40[13 * v69];
        a3 = *((_QWORD *)v65 + 17);
        v44 = *((const char ***)v65 + 16);
        LODWORD(v107) = a3;
        if ( (int)a3 <= 0 )
          goto LABEL_79;
        v104 = **(_QWORD **)(v111 + 24);
        v70 = v39;
        v71 = v5;
        v106 = *v110;
        v72 = v70;
        v109 = *((_QWORD *)v65 + 17);
        v108 = (__int64)v65;
        v73 = *((const char ***)v65 + 16);
        v74 = *(__int128 **)v111;
LABEL_88:
        v62 = 0;
        v40 = v74;
        v63 = (int *)v106;
        while ( 1 )
        {
          if ( v62 != (_DWORD)v72 )
          {
            v7 = (const char *)v104;
            v59 = *((unsigned int *)v73 + 6);
            v75 = v104 + 208LL * *((unsigned int *)v40 + *v63);
            v61 = *(_QWORD *)(v75 + 136);
            if ( (int)v61 > 0 )
            {
              v76 = *(_QWORD *)(v75 + 128);
              v61 = v76 + ((unsigned __int64)(unsigned int)(v61 - 1) << 6) + 64;
              while ( (_DWORD)v59 != *(_DWORD *)(v76 + 24) )
              {
                v76 += 64;
                if ( v76 == v61 )
                  goto LABEL_77;
              }
              if ( v76 )
                break;
            }
          }
LABEL_77:
          ++v62;
          ++v63;
          if ( v71 == v62 )
            goto LABEL_78;
        }
        v59 = (__int64)v73[1];
        if ( *(_QWORD *)(v76 + 8) )
        {
          v7 = *(const char **)v76;
          v60 = s1;
          if ( !v59 )
            goto LABEL_76;
        }
        else
        {
          if ( !v59 )
          {
LABEL_96:
            v74 = v40;
            if ( v71 == v62 )
            {
LABEL_78:
              v64 = v72;
              v44 = v73;
              a3 = v109;
              v65 = (__int128 *)v108;
              v5 = v71;
              v39 = v64;
LABEL_79:
              v66 = *((_BYTE *)v65 + 200);
              if ( (_DWORD)a3 == (_DWORD)v105 )
                goto LABEL_99;
              v67 = *((_QWORD *)v65 + 5) <= 1u;
              *((_BYTE *)v65 + 200) = v66 & 0xFE;
              if ( v67 )
              {
                *((_DWORD *)v65 + 14) = *((_DWORD *)v44 + 6);
                if ( v44 != (const char **)(v65 + 2) )
                {
                  v68 = (unsigned __int64)v44[1];
                  if ( v68 > 1 )
                  {
                    v78 = *v44;
                    v79 = *((void **)v65 + 4);
                    if ( *((_QWORD *)v65 + 6) < v68 )
                    {
                      v80 = qvector_reserve(v65 + 2, *((_QWORD *)v65 + 4), v68, 1);
                      *((_QWORD *)v65 + 4) = v80;
                      v79 = (void *)v80;
                    }
                    *((_QWORD *)v65 + 5) = v68;
                    v7 = v78;
                    memmove(v79, v78, v68 - 1);
                    *(_BYTE *)(*((_QWORD *)v65 + 4) + v68 - 1) = 0;
                  }
                  else
                  {
                    *((_QWORD *)v65 + 5) = 0;
                  }
                }
                goto LABEL_84;
              }
              if ( !under_debugger )
              {
                interr(578, v7, v59, v61);
                goto LABEL_136;
              }
LABEL_150:
              BUG();
            }
            LODWORD(v105) = (_DWORD)v105 + 1;
            v73 += 8;
            if ( (_DWORD)v107 == (_DWORD)v105 )
            {
              v65 = (__int128 *)v108;
              v77 = v72;
              v5 = v71;
              v39 = v77;
              v66 = *(_BYTE *)(v108 + 200);
LABEL_99:
              v113 = 0;
              *((_BYTE *)v65 + 200) = v66 | 1;
LABEL_84:
              if ( v115 == v39 )
                return v113;
              ++v39;
              continue;
            }
            goto LABEL_88;
          }
          v7 = s1;
        }
        break;
      }
      v60 = *v73;
LABEL_76:
      if ( !strcmp(v60, v7) )
        goto LABEL_96;
      goto LABEL_77;
    }
    goto LABEL_30;
  }
  v26 = 0;
  do
  {
    v27 = *(const char **)a3;
    v28 = *(_QWORD *)a3 + 4LL * *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)a3 == v28 )
      goto LABEL_104;
    while ( *(_DWORD *)v27 != (_DWORD)v26 )
    {
      v27 += 4;
      if ( (const char *)v28 == v27 )
        goto LABEL_104;
    }
    if ( (const char *)v28 == v27 )
    {
LABEL_104:
      v21 = 2 * v26;
      v81 = (__int64 *)(v12 + 24 * v26);
      v82 = v110[1];
      if ( (int)v82 > 0 )
      {
        v20 = 0;
        v83 = 4LL * (unsigned int)(v82 - 1) + 4;
        while ( 1 )
        {
          v84 = (_BYTE *)*v81;
          v85 = **(_QWORD **)(v111 + 24) + 208LL * *(unsigned int *)(*(_QWORD *)v111 + 4LL * *(int *)(*v110 + v20));
          if ( v26 >= *(_QWORD *)(v85 + 160) )
            break;
          v86 = (_BYTE *)(v21 + *(_QWORD *)(v85 + 152));
          if ( !*v86 )
            break;
          v87 = v81[1];
          v88 = v86[1];
          v89 = &v84[v87];
          if ( &v84[v87] == v84 )
            goto LABEL_117;
          v90 = (_BYTE *)*v81;
          while ( v88 != *v90 )
          {
            if ( v89 == ++v90 )
              goto LABEL_117;
          }
          if ( v89 == v90 )
          {
LABEL_117:
            if ( v81[2] < (unsigned __int64)(v87 + 1) )
            {
              v108 = v21;
              v107 = v83;
              v106 = v20;
              v104 = v23;
              v93 = qvector_reserve(v81, v84, v87 + 1, 1);
              v21 = v108;
              v83 = v107;
              *v81 = v93;
              v20 = v106;
              v23 = v104;
              v89 = (_BYTE *)(v81[1] + v93);
            }
            *v89 = v88;
            ++v81[1];
          }
          v20 += 4;
          if ( v20 == v83 )
            goto LABEL_114;
        }
        if ( !v84 )
        {
LABEL_114:
          v12 = v119;
          goto LABEL_23;
        }
        v81[1] = 0;
        v104 = v23;
        qfree(v84);
        *v81 = 0;
        v23 = v104;
        v81[2] = 0;
        v12 = v119;
      }
    }
LABEL_23:
    ++v26;
  }
  while ( v23 != v26 );
  v29 = (const char **)(v12 + 8);
  v30 = -1;
  v7 = (_BYTE *)(&dword_0 + 1);
  for ( i = 0; i != v6; ++i )
  {
    if ( v7 < *v29 )
    {
      v7 = *v29;
      v30 = i;
    }
    v29 += 3;
  }
  if ( v12 )
  {
    v23 = v120;
    if ( !(_QWORD)v120 )
    {
LABEL_34:
      *(_QWORD *)&v120 = 0;
      qfree(v12);
      goto LABEL_35;
    }
LABEL_30:
    v32 = 0;
    v33 = v23;
    do
    {
      v34 = (__int64 *)(v12 + 24 * v32);
      v35 = *v34;
      if ( *v34 )
      {
        v34[1] = 0;
        qfree(v35);
      }
      ++v32;
      v12 = v119;
    }
    while ( v32 != v33 );
    goto LABEL_34;
  }
LABEL_35:
  if ( v30 < 0 )
    goto LABEL_69;
  v36 = *(_QWORD *)(a3 + 8);
  v37 = *(const char **)a3;
  if ( *(_QWORD *)(a3 + 16) < (unsigned __int64)(v36 + 1) )
  {
    v92 = qvector_reserve(a3, v37, v36 + 1, 4);
    *(_QWORD *)a3 = v92;
    v37 = (const char *)v92;
    v36 = *(_QWORD *)(a3 + 8);
  }
  *(_DWORD *)&v37[4 * v36] = v30;
  v38 = v30;
  LODWORD(v39) = v30;
  ++*(_QWORD *)(a3 + 8);
  v40 = (__int128 *)v111;
  v41 = 0;
  v113 = 1;
  v104 = 4 * v115 + 4;
  v107 = a3;
  do
  {
    v42 = *(_QWORD *)(v111 + 24);
    v43 = *(unsigned int *)(*(_QWORD *)v111 + 4LL * *(int *)(*v110 + v41));
    v44 = (const char **)(*(_QWORD *)v42 + 208 * v43);
    if ( v38 >= (unsigned __int64)v44[20] || (v106 = 2 * v38, v42 = (__int64)&v44[19][2 * v38], !*(_BYTE *)v42) )
    {
      if ( !under_debugger )
      {
        interr("GNU", v37, v42, 3 * v43);
        goto LABEL_122;
      }
      goto LABEL_150;
    }
    v45 = (unsigned __int64)v44[14];
    if ( v45 <= 0xFE )
    {
      a3 = *(unsigned __int8 *)(v42 + 1);
      v37 = v44[13];
      v101 = v45 + 1;
      if ( (unsigned __int64)v44[15] < v45 + 1 )
      {
        v103 = qvector_reserve(v44 + 13, v37, v101, 8);
        v44[13] = (const char *)v103;
        v37 = (const char *)v103;
        v45 = (unsigned __int64)v44[14];
        v101 = v45 + 1;
      }
      v102 = (char *)&v37[8 * v45];
      v44[14] = (const char *)v101;
      *(_DWORD *)v102 = v39;
      v102[4] = a3;
    }
    else
    {
      *((_BYTE *)v44 + 200) |= 1u;
      v113 = 0;
    }
    v41 += 4;
  }
  while ( v104 != v41 );
  v40 = &v120;
  LODWORD(v120) = 0;
  v121 = &v120;
  a3 = v107;
  v46 = v110[1];
  *((_QWORD *)&v120 + 1) = 0;
  v122 = (__int16 *)&v120;
  v123 = 0;
  if ( (int)v46 <= 0 )
  {
    v98 = nullptr;
    goto LABEL_144;
  }
  v104 = 0;
  v107 = 4LL * (unsigned int)(v46 - 1);
  v47 = 0;
  while ( 2 )
  {
    v38 = (unsigned __int64)v40;
    v39 = *(int *)(*v110 + v104);
    v48 = *(unsigned int *)(*(_QWORD *)v111 + 4 * v39);
    v49 = 3 * v48;
    v5 = *(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v111 + 24) + 208 * v48 + 152) + v106 + 1);
    if ( !v47 )
      goto LABEL_53;
    do
    {
      while ( 1 )
      {
        v50 = *(_QWORD *)(v47 + 16);
        v51 = *(_QWORD *)(v47 + 24);
        if ( (__int16)v5 > *(__int16 *)(v47 + 32) )
          break;
        v38 = v47;
        v47 = *(_QWORD *)(v47 + 16);
        if ( !v50 )
          goto LABEL_51;
      }
      v47 = *(_QWORD *)(v47 + 24);
    }
    while ( v51 );
LABEL_51:
    if ( (__int128 *)v38 == v40 || (__int16)v5 < *(__int16 *)(v38 + 32) )
    {
LABEL_53:
      v52 = (char *)operator new(0x40u);
      *((_WORD *)v52 + 16) = v5;
      v44 = (const char **)v52;
      *((_QWORD *)v52 + 5) = 0;
      *((_OWORD *)v52 + 3) = 0;
      if ( (__int128 *)v38 == v40 )
      {
        if ( !v123 )
          goto LABEL_126;
        v53 = (__int128 *)v122;
        v38 = 0;
        if ( (__int16)v5 <= v122[16] )
          goto LABEL_126;
LABEL_59:
        if ( !v53 )
          goto LABEL_122;
        if ( !v38 && v53 != v40 )
        {
LABEL_136:
          LOWORD(v50) = *((_WORD *)v53 + 16);
          v38 = (unsigned __int64)v53;
          goto LABEL_133;
        }
        v55 = 1;
LABEL_63:
        v38 = (unsigned __int64)v44;
        std::_Rb_tree_insert_and_rebalance(v55, v44, v53, v40);
        ++v123;
      }
      else
      {
        LODWORD(v50) = *(unsigned __int16 *)(v38 + 32);
        if ( (__int16)v5 < (__int16)v50 )
        {
          v53 = (__int128 *)v38;
          if ( v121 == (__int128 *)v38 )
            goto LABEL_59;
          v54 = std::_Rb_tree_decrement(v38, v49);
          v53 = (__int128 *)v54;
          if ( (__int16)v5 > *(__int16 *)(v54 + 32) )
          {
            if ( *(_QWORD *)(v54 + 24) )
              v53 = (__int128 *)v38;
            else
              v38 = 0;
            goto LABEL_59;
          }
LABEL_126:
          v38 = sub_8080((__int64)v105, v5);
          goto LABEL_59;
        }
        if ( (__int16)v5 > (__int16)v50 )
        {
          if ( v122 != (__int16 *)v38 )
          {
            LODWORD(v108) = *(unsigned __int16 *)(v38 + 32);
            v94 = std::_Rb_tree_increment(v38);
            v53 = (__int128 *)v94;
            if ( (__int16)v5 >= *(__int16 *)(v94 + 32) )
              goto LABEL_126;
            LODWORD(v50) = v108;
            if ( *(_QWORD *)(v38 + 24) )
            {
              v38 = v94;
              goto LABEL_59;
            }
          }
          if ( v38 )
          {
LABEL_133:
            v53 = (__int128 *)v38;
            v55 = (__int16)v5 < (__int16)v50;
            goto LABEL_63;
          }
        }
LABEL_122:
        if ( v44 )
          operator delete(v44, 0x40u);
      }
    }
    v56 = *(_QWORD *)(v38 + 48);
    v57 = *(_QWORD *)(v38 + 40);
    if ( *(_QWORD *)(v38 + 56) < (unsigned __int64)(v56 + 1) )
    {
      v91 = qvector_reserve(v38 + 40, v57, v56 + 1, 4);
      *(_QWORD *)(v38 + 40) = v91;
      v57 = v91;
      v56 = *(_QWORD *)(v38 + 48);
    }
    *(_DWORD *)(v57 + 4 * v56) = v39;
    ++*(_QWORD *)(v38 + 48);
    if ( v104 != v107 )
    {
      v47 = *((_QWORD *)&v120 + 1);
      v104 += 4;
      continue;
    }
    break;
  }
  for ( j = (__int64)v121; (__int128 *)j != v40; j = std::_Rb_tree_increment(j) )
  {
    v96 = *(_QWORD *)(a3 + 8);
    v116 = 0;
    v117 = 0;
    if ( v96 )
    {
      v99 = (void *)qalloc_or_throw(4 * v96);
      v100 = *(const char **)a3;
      v116 = (__int64)v99;
      *((_QWORD *)&v117 + 1) = v96;
      memcpy(v99, v100, 4 * v96);
      *(_QWORD *)&v117 = v96;
    }
    v97 = sub_9BA0(
            v111,
            (int)j + 40,
            (unsigned int)&v116,
            v50,
            v20,
            v21,
            v104,
            (_DWORD)v105,
            v106,
            v107,
            v108,
            v109,
            (_DWORD)v110,
            v111,
            v112,
            v115,
            v116,
            v117,
            DWORD2(v117),
            v118,
            v119,
            v120,
            DWORD2(v120),
            (_DWORD)v121,
            (_DWORD)v122,
            v123,
            v124);
    if ( v116 )
    {
      *(_QWORD *)&v117 = 0;
      qfree(v116);
    }
    v113 = v97 & v114;
  }
  v98 = *((_QWORD **)&v120 + 1);
LABEL_144:
  sub_98E0(v98);
  return v113;
}
