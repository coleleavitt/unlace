__int64 __fastcall sub_4D2E0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        const char *a4,
        int a5,
        double a6,
        double a7,
        double a8)
{
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // r15
  __int64 v12; // rbx
  unsigned int v13; // eax
  __int16 v14; // di
  int v15; // edx
  __int64 v16; // rax
  _DWORD *v17; // rbx
  int v18; // eax
  _DWORD *v19; // r9
  int *v20; // rdi
  unsigned __int64 v21; // r12
  int v22; // eax
  unsigned int v23; // r8d
  unsigned __int64 v24; // r12
  int *v25; // rax
  int *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdx
  int *v29; // rcx
  unsigned __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rax
  int *v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // ebx
  unsigned __int64 v37; // rcx
  _DWORD *v38; // rax
  char v39; // dl
  bool v40; // si
  unsigned __int16 v41; // ax
  void *v42; // rdi
  int v43; // ecx
  unsigned int v44; // eax
  unsigned int v45; // edx
  unsigned int v46; // edx
  __int64 v47; // rax
  unsigned __int64 v48; // r12
  int *v49; // r8
  int *v50; // rax
  unsigned __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rdx
  __int64 v54; // rax
  int *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  _BYTE *v59; // r8
  const char *v60; // rsi
  int v61; // eax
  _QWORD *v62; // rdi
  __int64 (__fastcall *v63)(_QWORD *, __int64, __int64, unsigned __int64, unsigned __int64, unsigned __int64); // rax
  char v64; // al
  int v65; // eax
  size_t v66; // rax
  char v67; // al
  __int64 v68; // rsi
  bool v69; // zf
  int v70; // eax
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  __int64 v74; // rdi
  __int64 v75; // rax
  size_t v76; // rax
  size_t v77; // r15
  _DWORD *v78; // rsi
  char v79; // dl
  __int64 v80; // rdi
  __int64 v81; // rsi
  __int64 (__fastcall *v82)(_QWORD *, __int64, __int64, unsigned __int64, unsigned __int64, unsigned __int64); // rax
  char i; // al
  __int64 v84; // rax
  __int64 v85; // rsi
  size_t v86; // rax
  void *v87; // rdx
  void *v88; // rdi
  size_t v89; // rdx
  int *v90; // rdi
  void *v91; // rdx
  __int64 v92; // rax
  unsigned __int64 v93; // rax
  size_t v94; // rdx
  void *v95; // rdi
  __int64 v96; // rsi
  __int64 v97; // r15
  __int64 v98; // rax
  int v99; // [rsp+8h] [rbp-118h]
  int v100; // [rsp+8h] [rbp-118h]
  int v101; // [rsp+14h] [rbp-10Ch]
  unsigned int v102; // [rsp+18h] [rbp-108h]
  unsigned int v103; // [rsp+1Ch] [rbp-104h]
  unsigned int v104; // [rsp+2Ch] [rbp-F4h]
  __int64 v105; // [rsp+30h] [rbp-F0h]
  int *v107; // [rsp+38h] [rbp-E8h]
  int *v108; // [rsp+40h] [rbp-E0h]
  int *v109; // [rsp+40h] [rbp-E0h]
  int *v110; // [rsp+40h] [rbp-E0h]
  _DWORD *v111; // [rsp+48h] [rbp-D8h]
  int *v112; // [rsp+48h] [rbp-D8h]
  const char *v113; // [rsp+48h] [rbp-D8h]
  size_t v114; // [rsp+48h] [rbp-D8h]
  size_t v115; // [rsp+48h] [rbp-D8h]
  unsigned int v116; // [rsp+50h] [rbp-D0h]
  _DWORD *v117; // [rsp+50h] [rbp-D0h]
  unsigned int v118; // [rsp+50h] [rbp-D0h]
  _WORD *v120; // [rsp+60h] [rbp-C0h]
  unsigned int v121; // [rsp+60h] [rbp-C0h]
  void *v122; // [rsp+60h] [rbp-C0h]
  _BYTE *v123; // [rsp+60h] [rbp-C0h]
  void *v124; // [rsp+60h] [rbp-C0h]
  void *v125; // [rsp+60h] [rbp-C0h]
  unsigned __int64 v127; // [rsp+70h] [rbp-B0h]
  unsigned __int64 v128; // [rsp+78h] [rbp-A8h]
  unsigned __int16 v129; // [rsp+80h] [rbp-A0h]
  unsigned __int16 v130; // [rsp+80h] [rbp-A0h]
  size_t v131; // [rsp+80h] [rbp-A0h]
  unsigned __int64 v132; // [rsp+88h] [rbp-98h]
  __int64 v133; // [rsp+88h] [rbp-98h]
  __int64 v134; // [rsp+88h] [rbp-98h]
  __int64 v135; // [rsp+88h] [rbp-98h]
  __int64 v136; // [rsp+88h] [rbp-98h]
  __int64 v137; // [rsp+98h] [rbp-88h] BYREF
  __int64 v138; // [rsp+A0h] [rbp-80h] BYREF
  const char *v139; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v140; // [rsp+B0h] [rbp-70h] BYREF
  int v141; // [rsp+B8h] [rbp-68h] BYREF
  int *v142; // [rsp+C0h] [rbp-60h]
  int *v143; // [rsp+C8h] [rbp-58h]
  int *v144; // [rsp+D0h] [rbp-50h]
  __int64 v145; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v146; // [rsp+E8h] [rbp-38h]

  v9 = a3[1];
  v146 = __readfsqword(0x28u);
  v10 = *a3;
  v105 = v9;
  v11 = *(unsigned int *)(*a3 + 60);
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v12 = v10 + v11;
  v13 = *(_DWORD *)(v10 + v11 + 60);
  v127 = v10 + v11;
  v101 = v13;
  v103 = v13 - 1;
  if ( (v13 & (v13 - 1)) != 0 )
    return 34;
  v104 = *(_DWORD *)(v12 + 56);
  v102 = v104 & (v104 - 1);
  if ( v102 )
    return 34;
  v14 = *(_WORD *)(v12 + 92);
  if ( v104 < v13 && v14 != 1 )
    return 34;
  v128 = v10 + v105;
  if ( v127 >= v10 + v105 || v127 < v10 )
    return 34;
  v15 = *(_DWORD *)(v10 + 60);
  v16 = *(unsigned __int16 *)(v127 + 6);
  v17 = (_DWORD *)(v10 + v15 + *(unsigned __int16 *)(v127 + 20) + 24);
  if ( (_WORD)v16 )
  {
    v37 = (unsigned __int64)&v17[10 * v16];
    if ( v37 >= v10 && v37 < v128 + 1 )
    {
      v38 = (_DWORD *)(v10 + v15 + *(unsigned __int16 *)(v127 + 20) + 24);
      v39 = v101 == v104;
      do
      {
        while ( v38[5] != v38[3] )
        {
          v38 += 10;
          v39 = 0;
          if ( v38 == (_DWORD *)v37 )
            goto LABEL_44;
        }
        v40 = v38[4] >= v38[2];
        v38 += 10;
        v39 &= v40;
      }
      while ( v38 != (_DWORD *)v37 );
LABEL_44:
      v99 = 512;
      if ( !v39 )
        goto LABEL_9;
      goto LABEL_45;
    }
    return 34;
  }
  if ( v101 == v104 )
  {
LABEL_45:
    v99 = v101;
    goto LABEL_9;
  }
  v99 = 512;
LABEL_9:
  v18 = 1;
  v141 = 0;
  if ( (unsigned __int16)(v14 - 10) > 3u )
    v18 = v99;
  v142 = nullptr;
  v143 = &v141;
  v100 = v18;
  v144 = &v141;
  v145 = 0;
  if ( !*(_WORD *)(v127 + 6) )
    goto LABEL_94;
  v19 = v17;
  v20 = nullptr;
  v129 = 0;
  while ( 1 )
  {
    if ( v10 > (unsigned __int64)v19 || v128 <= (unsigned __int64)v19 )
    {
      v35 = 34;
      goto LABEL_143;
    }
    v21 = (unsigned __int64)((v19[2] + 4095) & 0xFFFFF000) >> 12;
    if ( ((v19[2] + 4095) & 0xFFFFF000) == 0 )
      v21 = 1;
    v132 = a2 + (v19[3] & 0xFFFFF000);
    v22 = v19[9] >> 31;
    if ( a5 && (v19[9] & a5) != 0 )
      v22 = (v19[9] >> 31) | 2;
    v23 = v22 | (8 * ((v19[9] & 0x20000000u) >> 29));
    v24 = v132 + (v21 << 12);
    if ( !v20 )
    {
LABEL_49:
      v29 = &v141;
LABEL_33:
      v108 = v29;
      v111 = v19;
      v116 = v23;
      v120 = (_WORD *)operator new(0x30u);
      v120[20] = 0;
      *((_QWORD *)v120 + 4) = v132;
      v33 = (int *)sub_4A8C0(&v140, v108, v132);
      v23 = v116;
      v19 = v111;
      v29 = v33;
      if ( v34 )
      {
        std::_Rb_tree_insert_and_rebalance();
        ++v145;
        v29 = (int *)v120;
        v23 = v116;
        v19 = v111;
      }
      else if ( v120 )
      {
        v42 = v120;
        v117 = v111;
        v121 = v23;
        v112 = v33;
        operator delete(v42, 0x30u);
        v29 = v112;
        v19 = v117;
        v23 = v121;
      }
      goto LABEL_35;
    }
    while ( 1 )
    {
      v25 = v20;
      v26 = &v141;
      do
      {
        while ( 1 )
        {
          v27 = *((_QWORD *)v25 + 2);
          v28 = *((_QWORD *)v25 + 3);
          if ( *((_QWORD *)v25 + 4) < v132 )
            break;
          v26 = v25;
          v25 = *((int **)v25 + 2);
          if ( !v27 )
            goto LABEL_25;
        }
        v25 = *((int **)v25 + 3);
      }
      while ( v28 );
LABEL_25:
      if ( v26 != &v141 )
      {
        if ( v132 < *((_QWORD *)v26 + 4) )
        {
          v29 = &v141;
          v30 = v132;
          goto LABEL_29;
        }
        *((_WORD *)v26 + 20) |= v23;
        goto LABEL_47;
      }
      v30 = v132;
      v29 = &v141;
      do
      {
LABEL_29:
        while ( 1 )
        {
          v31 = *((_QWORD *)v20 + 2);
          v32 = *((_QWORD *)v20 + 3);
          if ( *((_QWORD *)v20 + 4) < v30 )
            break;
          v29 = v20;
          v20 = *((int **)v20 + 2);
          if ( !v31 )
            goto LABEL_31;
        }
        v20 = *((int **)v20 + 3);
      }
      while ( v32 );
LABEL_31:
      v132 = v30;
      if ( v29 == &v141 || v30 < *((_QWORD *)v29 + 4) )
        goto LABEL_33;
LABEL_35:
      *((_WORD *)v29 + 20) = v23;
LABEL_47:
      v132 += 4096LL;
      if ( v132 == v24 )
        break;
      v20 = v142;
      if ( !v142 )
        goto LABEL_49;
    }
    ++v129;
    v19 += 10;
    v41 = *(_WORD *)(v127 + 6);
    if ( v129 >= v41 )
      break;
    v20 = v142;
  }
  if ( v41 )
  {
    v118 = -1;
    v130 = 0;
    while ( 2 )
    {
      v43 = v17[5] & -v100;
      v17[5] = v43;
      v122 = (void *)(v10 + v43);
      v44 = v17[4];
      if ( v44 )
      {
        if ( (unsigned __int64)v122 < v10 || (unsigned __int64)v122 >= v128 )
          goto LABEL_121;
        v45 = v17[2];
        if ( v45 && v44 > v45 )
          v44 = v17[2];
        v133 = -v101 & (v103 + v44);
        if ( (unsigned __int64)v122 + v133 >= v128 + 1 )
        {
          v133 = v105 - v43;
          if ( v133 < 0 )
            goto LABEL_121;
        }
      }
      else
      {
        v133 = 0;
        v45 = v17[2];
      }
      v46 = v104 - 1 + v45;
      v47 = (unsigned int)v17[3];
      v48 = v46 & -v104;
      if ( (v46 & -v104) == 0 )
        v48 = v133;
      if ( (unsigned int)v47 < v118 )
      {
        v102 = v43;
        v118 = v17[3];
      }
      v49 = &v141;
      v113 = (const char *)(a2 + v47);
      v138 = a2 + v47;
      v50 = v142;
      v51 = (unsigned __int64)v113 & 0xFFFFFFFFFFFFF000LL;
      if ( !v142 )
        goto LABEL_70;
      do
      {
        while ( 1 )
        {
          v52 = *((_QWORD *)v50 + 2);
          v53 = *((_QWORD *)v50 + 3);
          if ( *((_QWORD *)v50 + 4) < v51 )
            break;
          v49 = v50;
          v50 = *((int **)v50 + 2);
          if ( !v52 )
            goto LABEL_68;
        }
        v50 = *((int **)v50 + 3);
      }
      while ( v53 );
LABEL_68:
      if ( v49 == &v141 || v51 < *((_QWORD *)v49 + 4) )
      {
LABEL_70:
        v107 = v49;
        v54 = operator new(0x30u);
        *(_WORD *)(v54 + 40) = 0;
        *(_QWORD *)(v54 + 32) = (unsigned __int64)v113 & 0xFFFFFFFFFFFFF000LL;
        v109 = (int *)v54;
        v55 = (int *)sub_4A8C0(&v140, v107, (unsigned __int64)v113 & 0xFFFFFFFFFFFFF000LL);
        v49 = v55;
        if ( v56 )
        {
          std::_Rb_tree_insert_and_rebalance();
          ++v145;
          v49 = v109;
        }
        else if ( v109 )
        {
          v90 = v109;
          v110 = v55;
          operator delete(v90, 0x30u);
          v49 = v110;
        }
      }
      if ( (unsigned int)sub_3C370(
                           *(_QWORD *)(a1 + 64),
                           (double *)&v138,
                           v48,
                           128,
                           *((_WORD *)v49 + 20),
                           0,
                           (__int64)&v139,
                           &v137,
                           0) )
        goto LABEL_144;
      v60 = v139;
      if ( !v139 )
        goto LABEL_144;
      v61 = *(_DWORD *)debug & 0x10000;
      if ( v133 )
      {
        if ( v61 )
          goto LABEL_137;
        while ( 1 )
        {
          v62 = *(_QWORD **)(a1 + 64);
          v63 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, unsigned __int64, unsigned __int64, unsigned __int64))(*v62 + 16LL);
          if ( v63 == sub_3B0B0 )
          {
            if ( (unsigned __int64)v122 < v10
              || (unsigned __int64)v122 >= v128
              || (unsigned __int64)v122 + v133 < v10
              || v128 < (unsigned __int64)v122 + v133 )
            {
              goto LABEL_135;
            }
            v64 = (*(__int64 (**)(void))(*v62 + 8LL))();
          }
          else
          {
            v64 = v63(v62, (__int64)v60, v133, (unsigned __int64)v122, v10, v128);
          }
          if ( v64 )
            goto LABEL_83;
LABEL_135:
          if ( under_debugger )
LABEL_168:
            BUG();
          interr();
LABEL_137:
          sub_E960((__int64)"map_pe: serializing PHYS:%08a PSZ:%zu VA:%08a\n", a6, (size_t)v60, a7);
          v60 = v139;
        }
      }
      if ( v61 )
      {
        v60 = v113;
        sub_E960((__int64)"map_pe: serialization skipped zero physical sized VA:%08a PHYS:%08a PSZ:ZERO\n", a6, a7);
      }
LABEL_83:
      v65 = v17[9];
      v134 = v137;
      if ( (v65 & 0x20000000) != 0 )
      {
        *(_BYTE *)(v137 + 105) |= 1u;
        v65 = v17[9];
      }
      if ( v65 < 0 )
      {
        *(_BYTE *)(v134 + 105) |= 2u;
        v65 = v17[9];
      }
      if ( (v65 & 0x40000000) != 0 )
        *(_BYTE *)(v134 + 105) |= 4u;
      if ( a4 )
      {
        v66 = strlen(a4);
        v59 = (_BYTE *)v66;
        if ( !v66 )
          goto LABEL_91;
        v91 = (void *)(v66 + 1);
        v88 = *(void **)(v134 + 48);
        if ( *(_QWORD *)(v134 + 64) < v66 + 1 )
        {
          v114 = v66;
          v124 = (void *)(v66 + 1);
          v88 = (void *)qvector_reserve();
          v59 = (_BYTE *)v114;
          v91 = v124;
          *(_QWORD *)(v134 + 48) = v88;
        }
        v123 = v59;
        v60 = a4;
        *(_QWORD *)(v134 + 56) = v91;
        v89 = (size_t)v59;
LABEL_132:
        memmove(v88, v60, v89);
        v59 = v123;
        v123[*(_QWORD *)(v134 + 48)] = 0;
      }
      else
      {
        if ( v17 )
        {
          v86 = strlen((const char *)v17);
          v59 = (_BYTE *)v86;
          if ( v86 )
          {
            v87 = (void *)(v86 + 1);
            v88 = *(void **)(v134 + 48);
            if ( *(_QWORD *)(v134 + 64) < v86 + 1 )
            {
              v115 = v86;
              v125 = (void *)(v86 + 1);
              v88 = (void *)qvector_reserve();
              v59 = (_BYTE *)v115;
              v87 = v125;
              *(_QWORD *)(v134 + 48) = v88;
            }
            v123 = v59;
            v60 = (const char *)v17;
            *(_QWORD *)(v134 + 56) = v87;
            v89 = (size_t)v59;
            goto LABEL_132;
          }
        }
LABEL_91:
        *(_QWORD *)(v134 + 56) = 0;
      }
      v67 = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64, __int64, _BYTE *))(**(_QWORD **)(a1 + 64) + 40LL))(
              *(_QWORD *)(a1 + 64),
              v60,
              v57,
              v58,
              v59);
      v68 = v137;
      v69 = *(_QWORD *)(v137 + 24) == 0;
      v135 = v137;
      *(_BYTE *)(v137 + 104) = v67;
      if ( v69 )
      {
        v84 = v68;
        *(_DWORD *)(v68 + 112) |= 1u;
        v85 = *(_QWORD *)(v68 + 72);
        if ( *(_QWORD *)(v84 + 88) <= 3u )
        {
          v85 = qvector_reserve();
          *(_QWORD *)(v135 + 72) = v85;
        }
        *(_QWORD *)(v135 + 80) = 4;
        *(_WORD *)v85 = 21314;
        *(_BYTE *)(v85 + 2) = 83;
        *(_BYTE *)(*(_QWORD *)(v135 + 72) + 3LL) = 0;
        v135 = v137;
      }
      v17 += 10;
      ++v130;
      *(_DWORD *)(v135 + 112) |= *(_DWORD *)(a1 + 24);
      if ( v130 >= *(_WORD *)(v127 + 6) )
        break;
      continue;
    }
  }
LABEL_94:
  v70 = *(_DWORD *)debug & 0x10000;
  if ( a4 )
  {
    if ( v70 )
      sub_E960((__int64)"--map_pe_image: %s/%08a----------------\n", a4, a6);
  }
  else if ( v70 )
  {
    sub_E960((__int64)"--map_pe_image: BASE[%08a]---------------------\n", a6);
  }
  v71 = v128 + 1;
  if ( *(_WORD *)(v127 + 6) )
  {
    v105 = (*(_DWORD *)(v127 + 84) + v103) & -v101;
    v73 = (v105 + 4095) & 0xFFFFFFFFFFFFF000LL;
    v93 = v10 + v105;
  }
  else
  {
    v72 = *(unsigned int *)(v127 + 80);
    if ( v10 + v72 < v71 )
    {
      v105 = *(unsigned int *)(v127 + 80);
      v73 = (v72 + 4095) & 0xFFFFFFFFFFFFF000LL;
      goto LABEL_100;
    }
    v73 = (v105 + 4095) & 0xFFFFFFFFFFFFF000LL;
    if ( v105 < 0 )
    {
LABEL_148:
      v105 = *(unsigned int *)(v127 + 84);
      if ( v10 + v105 >= v71 )
      {
        if ( !v102 || (v105 = v102, v10 + v102 >= v71) )
        {
LABEL_121:
          v20 = v142;
          v35 = 34;
          goto LABEL_143;
        }
      }
      goto LABEL_100;
    }
    v93 = v10 + v105;
  }
  if ( v93 >= v71 )
    goto LABEL_148;
LABEL_100:
  v74 = *(_QWORD *)(a1 + 64);
  v138 = a2;
  v35 = sub_3C370(v74, (double *)&v138, v73, 128, 1u, 0, (__int64)&v139, &v137, 0);
  if ( v35 )
  {
LABEL_144:
    sub_4D220(a1);
    v20 = v142;
    v35 = 9;
  }
  else
  {
    v75 = v137;
    v136 = v137;
    *(_BYTE *)(v137 + 105) = 6;
    if ( a4 )
    {
      v76 = strlen(a4);
      v77 = v76;
      if ( v76 )
      {
        v94 = v76 + 1;
        v95 = *(void **)(v136 + 48);
        if ( *(_QWORD *)(v136 + 64) < v76 + 1 )
        {
          v131 = v76 + 1;
          v95 = (void *)qvector_reserve();
          v94 = v131;
          *(_QWORD *)(v136 + 48) = v95;
        }
        *(_QWORD *)(v136 + 56) = v94;
        memmove(v95, a4, v77);
        *(_BYTE *)(*(_QWORD *)(v136 + 48) + v77) = 0;
        v136 = v137;
      }
      else
      {
        *(_QWORD *)(v136 + 56) = 0;
      }
    }
    else
    {
      v96 = *(_QWORD *)(v75 + 48);
      if ( *(_QWORD *)(v75 + 64) <= 6u )
      {
        v97 = v75;
        v98 = qvector_reserve();
        *(_QWORD *)(v97 + 48) = v98;
        v96 = v98;
      }
      *(_QWORD *)(v136 + 56) = 7;
      *(_DWORD *)v96 = 1145128264;
      *(_WORD *)(v96 + 4) = 21061;
      *(_BYTE *)(*(_QWORD *)(v136 + 48) + 6LL) = 0;
      v136 = v137;
    }
    *(_DWORD *)(v136 + 112) |= *(_DWORD *)(a1 + 24);
    v78 = *(_DWORD **)(v136 + 72);
    if ( *(_QWORD *)(v136 + 88) <= 4u )
    {
      v92 = qvector_reserve();
      *(_QWORD *)(v136 + 72) = v92;
      v78 = (_DWORD *)v92;
    }
    *(_QWORD *)(v136 + 80) = 5;
    *v78 = 1096040772;
    *(_BYTE *)(*(_QWORD *)(v136 + 72) + 4LL) = 0;
    v79 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 64) + 40LL))(*(_QWORD *)(a1 + 64));
    *(_BYTE *)(v137 + 104) = v79;
    if ( (*(_DWORD *)debug & 0x10000) != 0 )
      sub_E960((__int64)"map_pe: serializing PHYS:%08a PSZ:%a VA:%08a\n", a6, a7, a8);
    v80 = *(_QWORD *)(a1 + 64);
    v81 = (__int64)v139;
    v82 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, unsigned __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v80 + 16LL);
    if ( v82 != sub_3B0B0 )
      goto LABEL_160;
    if ( __CFADD__(v10, v105) || v128 < v10 + v105 )
      goto LABEL_158;
    for ( i = (*(__int64 (__fastcall **)(__int64, const char *, unsigned __int64))(*(_QWORD *)v80 + 8LL))(
                v80,
                v139,
                v10); !i; i = v82((_QWORD *)v80, v81, v105, v10, v10, v128) )
    {
LABEL_158:
      if ( under_debugger )
        goto LABEL_168;
      v80 = 30136;
      v82 = (__int64 (__fastcall *)(_QWORD *, __int64, __int64, unsigned __int64, unsigned __int64, unsigned __int64))interr();
LABEL_160:
      ;
    }
    v20 = v142;
  }
LABEL_143:
  sub_4AE20(v20);
  return v35;
}

