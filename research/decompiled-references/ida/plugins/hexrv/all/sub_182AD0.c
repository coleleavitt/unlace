__int64 __fastcall sub_182AD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __m128i si128; // xmm0
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // ebp
  __int64 v9; // r13
  unsigned int v10; // ebp
  int v11; // eax
  int v12; // ecx
  int v13; // r12d
  __int64 v14; // rax
  int v15; // r8d
  int v16; // r13d
  _QWORD *v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // rax
  int v20; // r13d
  int v21; // eax
  int v22; // r12d
  bool v23; // zf
  unsigned int v24; // ebx
  __int128 v25; // rdi
  __int64 *v26; // rax
  int v27; // eax
  __int64 v28; // rdi
  char v29; // r12
  int v30; // ecx
  _QWORD *v31; // rbp
  _BYTE *v32; // rax
  _QWORD *v33; // r12
  char v34; // al
  unsigned __int64 v35; // r12
  __int64 v36; // rbp
  __int64 v37; // rbx
  _QWORD *v38; // rax
  int v40; // esi
  __int64 v41; // rax
  int v42; // eax
  unsigned __int8 v43; // bl
  char v44; // al
  __int64 v45; // rsi
  __int64 v46; // rax
  __int32 v47; // edx
  __int32 v48; // esi
  int flags; // eax
  int v50; // r12d
  __int64 v51; // rdx
  __int64 v52; // r12
  int v53; // eax
  _QWORD *v54; // rbx
  _QWORD *v55; // r13
  int v56; // r12d
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  size_t v59; // rbp
  __int64 v60; // r9
  size_t v61; // r8
  __int64 v62; // rsi
  __int64 v63; // rbx
  int v64; // esi
  __int64 tinfo_size; // rbx
  int v66; // edx
  __m128i v67; // xmm1
  __int64 v68; // r12
  char *v69; // rax
  int v70; // eax
  __int64 v71; // rax
  int v72; // ecx
  __int64 v73; // r13
  int v74; // eax
  int v75; // ebx
  char *v76; // rbx
  __int64 v77; // rax
  int v78; // esi
  __int64 v79; // rax
  char v80; // dl
  unsigned __int64 v81; // rbp
  unsigned __int64 v82; // r13
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rdx
  int v87; // ecx
  int v88; // ecx
  int v89; // eax
  unsigned __int64 v90; // rsi
  __int64 v91; // rdi
  int v92; // ecx
  int v93; // r8d
  int v94; // r9d
  __int64 v95; // rax
  __int64 v96; // rbp
  unsigned __int64 v97; // r9
  size_t v98; // r10
  __int64 v99; // r13
  __int64 v100; // r12
  int v101; // ebx
  unsigned __int64 v102; // rbx
  int v103; // eax
  __int64 v104; // r13
  int v105; // eax
  unsigned __int64 v106; // rbx
  _QWORD *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rax
  const char *v110; // r12
  __int64 v111; // rax
  __int64 v112; // [rsp+8h] [rbp-2E0h]
  unsigned __int8 v113; // [rsp+18h] [rbp-2D0h]
  int v114; // [rsp+18h] [rbp-2D0h]
  __int64 v115; // [rsp+18h] [rbp-2D0h]
  unsigned __int64 v116; // [rsp+18h] [rbp-2D0h]
  int v117; // [rsp+20h] [rbp-2C8h]
  bool v118; // [rsp+20h] [rbp-2C8h]
  size_t v119; // [rsp+20h] [rbp-2C8h]
  unsigned __int8 v120; // [rsp+2Fh] [rbp-2B9h]
  bool src; // [rsp+30h] [rbp-2B8h]
  __int64 srca; // [rsp+30h] [rbp-2B8h]
  void *srcb; // [rsp+30h] [rbp-2B8h]
  char v124; // [rsp+38h] [rbp-2B0h]
  char v125; // [rsp+38h] [rbp-2B0h]
  __int64 v126; // [rsp+38h] [rbp-2B0h]
  int v127; // [rsp+40h] [rbp-2A8h]
  unsigned int v128; // [rsp+40h] [rbp-2A8h]
  __int64 v129; // [rsp+40h] [rbp-2A8h]
  unsigned __int64 v130; // [rsp+50h] [rbp-298h]
  unsigned __int64 v131; // [rsp+50h] [rbp-298h]
  size_t v132; // [rsp+58h] [rbp-290h]
  int v133; // [rsp+64h] [rbp-284h] BYREF
  __int64 v134; // [rsp+68h] [rbp-280h] BYREF
  __int64 v135; // [rsp+70h] [rbp-278h] BYREF
  char v136[8]; // [rsp+78h] [rbp-270h] BYREF
  __int64 v137; // [rsp+80h] [rbp-268h]
  int v138; // [rsp+88h] [rbp-260h]
  int v139; // [rsp+8Ch] [rbp-25Ch]
  unsigned __int64 v140; // [rsp+90h] [rbp-258h] BYREF
  __int64 v141; // [rsp+98h] [rbp-250h]
  int v142; // [rsp+A0h] [rbp-248h]
  char v143; // [rsp+A4h] [rbp-244h]
  unsigned __int64 v144; // [rsp+A8h] [rbp-240h] BYREF
  __int128 v145; // [rsp+B0h] [rbp-238h]
  __int128 v146; // [rsp+C0h] [rbp-228h]
  unsigned __int64 v147; // [rsp+D0h] [rbp-218h]
  __int128 v148; // [rsp+D8h] [rbp-210h]
  __int128 v149; // [rsp+E8h] [rbp-200h]
  __int128 v150; // [rsp+F8h] [rbp-1F0h]
  __m128i v151; // [rsp+108h] [rbp-1E0h]
  int v152; // [rsp+118h] [rbp-1D0h]
  _BYTE v153[24]; // [rsp+120h] [rbp-1C8h] BYREF
  __int128 v154; // [rsp+138h] [rbp-1B0h]
  __int64 v155; // [rsp+148h] [rbp-1A0h]
  __int128 v156; // [rsp+150h] [rbp-198h]
  __int128 v157; // [rsp+160h] [rbp-188h]
  __int64 v158; // [rsp+190h] [rbp-158h]
  int v159; // [rsp+198h] [rbp-150h]
  __int64 v160; // [rsp+1A0h] [rbp-148h]
  char v161; // [rsp+1A8h] [rbp-140h]
  char v162[8]; // [rsp+1B0h] [rbp-138h] BYREF
  _BYTE *v163; // [rsp+1B8h] [rbp-130h]
  __int64 v164; // [rsp+1C0h] [rbp-128h]
  void *dest; // [rsp+1D0h] [rbp-118h] BYREF
  unsigned __int64 v166; // [rsp+1D8h] [rbp-110h]
  unsigned __int64 v167; // [rsp+1E0h] [rbp-108h]
  int v168; // [rsp+1F8h] [rbp-F0h]
  char v169[4]; // [rsp+200h] [rbp-E8h] BYREF
  int v170; // [rsp+204h] [rbp-E4h]
  __int64 v171; // [rsp+208h] [rbp-E0h]
  __int64 v172; // [rsp+210h] [rbp-D8h]
  __int64 v173; // [rsp+218h] [rbp-D0h] BYREF
  char v174[24]; // [rsp+250h] [rbp-98h] BYREF
  char v175; // [rsp+2A0h] [rbp-48h] BYREF
  unsigned __int64 v176; // [rsp+2A8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 64);
  v176 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 1344) + 8LL) )
  {
    v41 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)&v153[8] = 0;
    *(_QWORD *)v153 = v41;
    if ( (sub_1331B0(v3, (__int64)v153) & 7) != 0 )
      return 0;
  }
  v145 = 0;
  v140 = 0xFFFFFFFF00000000LL;
  v144 = 0xFFFFFFFF00000000LL;
  v146 = 0;
  v148 = 0;
  v150 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3FE270);
  v141 = 0;
  v142 = 0;
  v143 = 0;
  v147 = 0;
  v152 = 16;
  v149 = -1;
  v151 = si128;
  v120 = sub_182380((__int64)&v140, a1, a2, 0, si128);
  if ( !v120 )
    goto LABEL_67;
  v6 = *(_QWORD *)(a1 + 64);
  v133 = 0;
  v7 = a2;
  v117 = -1;
  v112 = *(_QWORD *)(v6 + 1504);
  src = (unsigned int)(*(_DWORD *)a2 - 56) <= 1;
  while ( 1 )
  {
    v8 = v152;
    if ( (v152 & 1) != 0 )
      goto LABEL_8;
    if ( (_BYTE)v140 != 3 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( (_BYTE)v140 == 6 )
      {
        if ( !(unsigned int)sub_33E1E0(*(_QWORD *)(v9 + 1496), v141) )
        {
          v8 = v152;
LABEL_8:
          v113 = 0;
          v10 = v8 & 0xFFFFFFFB;
          goto LABEL_9;
        }
        if ( (get_flags_ex() & 0x600) == 0x200 )
          prev_not_tail();
        flags = get_flags_ex();
        v8 = v152;
        if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x50000000 )
          goto LABEL_8;
      }
      else
      {
        if ( (_BYTE)v140 != 2 )
          goto LABEL_8;
        v31 = *(_QWORD **)(v9 + 1328);
        if ( !*v31 )
          goto LABEL_62;
        v32 = (_BYTE *)(*(_QWORD *)*v31 & 0xFFFFFFFFFFFFFFFCLL);
        v33 = v32;
        if ( !v32 )
          goto LABEL_172;
        if ( (*v32 & 2) != 0 )
          goto LABEL_62;
        v115 = v141;
        do
        {
          if ( (int)sub_253040(v115) >= 0 )
          {
            if ( (int)sub_253040(v33 + 3) >= 0 )
              goto LABEL_171;
            v33 = (_QWORD *)v33[2];
          }
          else
          {
            v33 = (_QWORD *)v33[1];
          }
        }
        while ( (*(_BYTE *)v33 & 2) == 0 );
        v33 = (_QWORD *)*v31;
LABEL_171:
        if ( v33 == **(_QWORD ***)(v9 + 1328) )
        {
LABEL_62:
          get_flags_ex();
          v34 = is_char();
        }
        else
        {
LABEL_172:
          v34 = is_char();
        }
        v8 = v152;
        if ( !v34 )
          goto LABEL_8;
      }
    }
    v10 = v8 | 4;
    v113 = v120;
LABEL_9:
    v152 = v10;
    v11 = sub_180740(v112, (char *)&v140);
    v12 = v152;
    v13 = v11;
    if ( ((unsigned __int8)v152 & ((_QWORD)v150 != 0)) != 0 )
      goto LABEL_67;
    if ( v11 == 1 )
    {
      if ( (unsigned int)(*(_DWORD *)v7 - 56) <= 1 && HIDWORD(v140) )
      {
        v40 = v151.m128i_i32[1];
        if ( v151.m128i_i32[1] <= 0 )
          v40 = 1;
        if ( HIDWORD(v140) - v40 != v151.m128i_i32[2] )
        {
          if ( v117 != -1 || (~(_BYTE)v152 & 3) != 0 )
          {
LABEL_13:
            if ( (v152 & 0xC) != 0 )
              goto LABEL_14;
            if ( a2 == v7 )
              goto LABEL_67;
LABEL_15:
            v14 = v148;
            v15 = v133;
            v16 = v10 & 2;
            if ( (_QWORD)v148 )
              goto LABEL_16;
            goto LABEL_19;
          }
          if ( (unsigned __int64)v146 > 4 )
            goto LABEL_173;
          if ( (v152 & 0xC) != 0 )
            goto LABEL_14;
          v13 = -1;
          goto LABEL_144;
        }
      }
    }
    else if ( v11 == -1 )
    {
      if ( v117 != -1 || (~(_BYTE)v152 & 3) != 0 )
        goto LABEL_13;
      if ( (unsigned __int64)v146 > 4 )
        goto LABEL_173;
      if ( (v152 & 0xC) != 0 )
        goto LABEL_14;
      goto LABEL_144;
    }
    if ( a2 != v7 )
      break;
    if ( v117 != -1 )
    {
      v20 = v152 & 0xC;
      if ( (v152 & 0xC) == 0 )
        goto LABEL_152;
      if ( v113 )
        goto LABEL_97;
      goto LABEL_104;
    }
LABEL_149:
    if ( (~(_BYTE)v152 & 3) != 0 )
    {
      v20 = v152 & 0xC;
      if ( (v152 & 0xC) != 0 )
        goto LABEL_103;
      if ( a2 != v7 )
        goto LABEL_28;
      goto LABEL_152;
    }
    if ( (unsigned __int64)v146 > 4 )
      goto LABEL_173;
    v20 = v152 & 0xC;
    if ( (v152 & 0xC) != 0 )
      goto LABEL_103;
LABEL_144:
    if ( a2 != v7 )
    {
      if ( v13 != 1 )
      {
        if ( v13 == -1 )
          goto LABEL_14;
        goto LABEL_29;
      }
      goto LABEL_157;
    }
LABEL_152:
    if ( v13 || !v113 && (~(_BYTE)v152 & 0x21) == 0 )
      goto LABEL_67;
    if ( (unsigned int)(*(_DWORD *)v7 - 56) <= 1 )
      v117 = v146;
LABEL_35:
    v22 = HIDWORD(v140) + v133;
    v23 = *(_QWORD *)(a2 + 8) == 0;
    v133 += HIDWORD(v140);
    if ( v23 && !*(_QWORD *)(a2 + 16) )
    {
LABEL_66:
      if ( !(_QWORD)v146 || (_BYTE)v140 == 2 && (~(_BYTE)v152 & 3) == 0 )
        goto LABEL_67;
      v124 = v120;
      goto LABEL_122;
    }
    v24 = HIDWORD(v144);
    v124 = sub_17F560(v112, (unsigned __int64)&v144, HIDWORD(v144));
    if ( !v124
      || (unsigned __int8)(v140 - 2) > 1u
      && (HIDWORD(v140) != v24 || !(unsigned __int8)sub_17F560(v112, (unsigned __int64)&v140, v24)) )
    {
      goto LABEL_67;
    }
    *((_QWORD *)&v25 + 1) = a2;
    *(_QWORD *)&v25 = a1;
    v26 = sub_181710(v25, (__int64)&v144, 0);
    v7 = (__int64)v26;
    if ( !v26 || (*((_BYTE *)v26 + 4) & 0x10) != 0 )
      goto LABEL_66;
    *(_OWORD *)v153 = 0xFFFFFFFF00000000LL;
    if ( !(unsigned __int8)sub_17FDC0((__int64)v153, a1, (__int64)v26, 0, 0, si128) )
      goto LABEL_116;
    v27 = sub_17EF40(v112, (__int64)&v144, (__int64)v153);
    if ( v27 == -1 )
      goto LABEL_116;
    if ( SHIDWORD(v140) <= v27 )
    {
      if ( !under_debugger )
        sub_37DDE0(51548);
      goto LABEL_419;
    }
    if ( v27 )
    {
      v28 = v147 + 40 * v148 - 40;
      if ( *(_DWORD *)(v28 + 32) != -1 )
        *(_QWORD *)(v28 + 24) -= v27;
      v127 = v27;
      sub_32CCC0(v28, (unsigned int)v27);
      v133 = v22 - v127;
    }
    sub_120CC0((__int64)&v144, v153);
    v29 = sub_17FB30((__int64)&v140, a1, v7);
    if ( !v29 )
      goto LABEL_116;
    if ( v143 && (v152 & 2) != 0 )
    {
      v30 = v151.m128i_i32[1];
      if ( v151.m128i_i32[1] <= 0 )
        v30 = 1;
      if ( SHIDWORD(v140) / v30 > 64 )
        goto LABEL_116;
    }
    if ( (unsigned int)(*(_DWORD *)v7 - 56) <= 1 )
    {
      v42 = 32;
      if ( *(_BYTE *)(v7 + 32) == 11 )
        v42 = (*(_DWORD *)(*(_QWORD *)(v7 + 72) + 280LL) & 0x80) == 0 ? 64 : 32;
      v152 |= v42;
      if ( (unsigned int)(*(_DWORD *)v7 - 56) <= 1
        && (*(_BYTE *)(v7 + 32) != 11 || *(char *)(*(_QWORD *)(v7 + 72) + 280LL) < 0)
        && !v113 )
      {
LABEL_116:
        sub_1188E0((__int64)v153);
        v19 = v146;
LABEL_117:
        if ( v19 )
          goto LABEL_122;
LABEL_118:
        if ( HIDWORD(v140) == 1 )
          goto LABEL_67;
LABEL_119:
        if ( (v152 & 8) != 0 || (_BYTE)v140 != 2 )
        {
          v117 = -1;
          goto LABEL_122;
        }
        goto LABEL_67;
      }
    }
    if ( !src )
    {
      if ( (unsigned __int64)v146 <= 4 )
        goto LABEL_58;
      if ( !(unsigned __int8)sub_1815E0(a1, a2) )
      {
        sub_1188E0((__int64)v153);
        goto LABEL_67;
      }
    }
    src = v29;
LABEL_58:
    sub_1188E0((__int64)v153);
  }
  if ( (v152 & 2) == 0 )
    goto LABEL_27;
  v16 = v10 & 2;
  if ( (v10 & 2) != 0 )
  {
    if ( v117 == -1 )
      goto LABEL_149;
LABEL_27:
    v20 = v152 & 0xC;
    if ( (v152 & 0xC) == 0 )
      goto LABEL_28;
LABEL_103:
    if ( v113 )
      goto LABEL_105;
LABEL_104:
    if ( (~(_BYTE)v152 & 0x21) != 0 )
      goto LABEL_105;
    if ( !v11 )
      goto LABEL_14;
    v48 = v151.m128i_i32[2];
    goto LABEL_245;
  }
  if ( (v152 & 1) != 0 )
  {
    if ( v117 != -1 )
    {
      v15 = v133;
LABEL_83:
      v14 = v148;
      if ( !(_QWORD)v148 )
      {
LABEL_84:
        v18 = v12 & 0xFFFFFFFD;
        goto LABEL_21;
      }
LABEL_16:
      *(_QWORD *)&v148 = v14 - 1;
      v17 = (_QWORD *)(v147 + 40 * (v14 - 1));
      if ( *v17 )
      {
        v17[1] = 0;
        v114 = v15;
        qfree();
        v15 = v114;
      }
      v12 = v152;
LABEL_19:
      if ( !v16 )
        goto LABEL_84;
      v18 = v12 | 2;
LABEL_21:
      v152 = v18;
      if ( v15 <= 9 )
      {
        v19 = v146;
        v124 = v120;
      }
      else
      {
        v124 = v10 & 1;
        v19 = v146;
        if ( (v10 & 1) != 0 )
        {
          v152 = v18 | 1;
        }
        else
        {
          v152 = v18 & 0xFFFFFFFE;
          v124 = v120;
        }
      }
      goto LABEL_117;
    }
    if ( (unsigned __int64)v146 > 4 )
    {
LABEL_173:
      if ( (v152 & 0xC) != 0 )
      {
        v117 = -1;
        goto LABEL_14;
      }
      if ( a2 == v7 )
        goto LABEL_67;
      v117 = -1;
    }
    else
    {
      if ( (v152 & 0xC) != 0 )
      {
        v14 = v148;
        v15 = v133;
        if ( !(_QWORD)v148 )
          goto LABEL_84;
        goto LABEL_16;
      }
LABEL_14:
      if ( a2 == v7 )
        goto LABEL_67;
    }
    goto LABEL_15;
  }
  v78 = v151.m128i_i32[1];
  v15 = v133;
  if ( v151.m128i_i32[1] <= 0 )
    v78 = 1;
  if ( v133 / v78 > 64 )
    goto LABEL_83;
  v20 = v152 & 0xC;
  if ( (v152 & 0xC) != 0 )
  {
LABEL_105:
    if ( a2 != v7 )
    {
      if ( *((_QWORD *)&v146 + 1) >= (unsigned __int64)(v146 + 1) )
      {
        *(_QWORD *)(*((_QWORD *)&v145 + 1) + 8 * v146) = v7;
        *(_QWORD *)&v146 = v146 + 1;
        v117 = v146;
        goto LABEL_34;
      }
LABEL_132:
      *((_QWORD *)&v145 + 1) = qvector_reserve();
      v45 = *((_QWORD *)&v145 + 1);
      v46 = v146;
LABEL_133:
      *(_QWORD *)(v45 + 8 * v46) = v7;
      v21 = v146 + 1;
      *(_QWORD *)&v146 = v146 + 1;
      if ( v20 )
      {
        v117 = v21;
LABEL_34:
        if ( v13 != 1 )
          goto LABEL_35;
        v47 = v151.m128i_i32[2];
        v77 = v146;
        v48 = v151.m128i_i32[2];
LABEL_297:
        if ( !v77 )
        {
          v13 = HIDWORD(v140);
          if ( HIDWORD(v140) )
            goto LABEL_364;
          v124 = 0;
          v133 += v47 + 1;
          goto LABEL_119;
        }
        v124 = 0;
        v133 += v47 + 1;
LABEL_122:
        v43 = 0;
        if ( *(_BYTE *)(a2 + 64) == 5 )
          v43 = sub_1EADB0(**(_QWORD **)(a2 + 72), *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL), *(unsigned int *)(a2 + 68));
        v44 = v152;
        if ( (v152 & 2) == 0 && v151.m128i_i32[1] <= 1 && *(_DWORD *)(v112 + 88) + 1 <= v133 )
        {
          if ( (v152 & 1) == 0 )
          {
            if ( v43 )
            {
              if ( v133 > 2 )
              {
                if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 || *(_BYTE *)(a2 + 64) != 6 )
                  goto LABEL_315;
                goto LABEL_303;
              }
            }
            else if ( v133 > 9 )
            {
              if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 || *(_BYTE *)(a2 + 64) != 6 )
              {
LABEL_315:
                if ( !v124 )
                  goto LABEL_185;
LABEL_307:
                if ( v117 == -1 )
                {
LABEL_308:
                  v117 = v146;
                  goto LABEL_274;
                }
                goto LABEL_274;
              }
              v43 = v120;
              goto LABEL_303;
            }
          }
          if ( v124 )
            goto LABEL_307;
          goto LABEL_177;
        }
        if ( (v152 & 1) != 0 )
        {
          if ( v124 )
          {
            if ( v151.m128i_i32[1] > 1 || v117 == -1 )
              goto LABEL_67;
            goto LABEL_274;
          }
          goto LABEL_177;
        }
        if ( v43 )
        {
          if ( v133 > 2 )
          {
            if ( (unsigned int)(*(_DWORD *)a2 - 56) > 1 )
            {
              if ( *(_BYTE *)(a2 + 64) != 6 )
                goto LABEL_269;
              v43 = 0;
              goto LABEL_303;
            }
LABEL_343:
            if ( !v124 )
              goto LABEL_185;
            v80 = v124;
LABEL_273:
            if ( v117 == -1 )
            {
              if ( !v80 )
                goto LABEL_67;
              goto LABEL_308;
            }
LABEL_274:
            if ( !v117 )
              goto LABEL_67;
            if ( v117 < (unsigned __int64)v146 )
            {
              v81 = v148;
              *(_QWORD *)&v146 = v117;
              if ( v117 >= (unsigned __int64)v148 )
              {
                if ( !under_debugger )
                  sub_37DDE0(51852);
                goto LABEL_419;
              }
              v82 = v117 + 1;
              if ( v82 != (_QWORD)v148 )
              {
                v52 = v147;
                *(_QWORD *)&v154 = 0;
                memset(v153, 0, sizeof(v153));
                DWORD2(v154) = -1;
                v83 = v147;
                if ( v82 < (unsigned __int64)v148 )
                {
                  v106 = v117 + 1;
                  do
                  {
                    v107 = (_QWORD *)(v52 + 40 * v106);
                    if ( *v107 )
                    {
                      v107[1] = 0;
                      qfree();
                      v52 = v147;
                    }
                    ++v106;
                  }
                  while ( v106 < v81 );
                }
                else if ( (unsigned __int64)v153 < v147
                       || (unsigned __int64)v153 >= v147 + 40LL * *((_QWORD *)&v148 + 1) )
                {
                  if ( *((_QWORD *)&v148 + 1) < v82 )
                  {
                    v83 = qvector_reserve();
                    v147 = v83;
                    v81 = v148;
                  }
                  v52 = v147;
                  if ( v81 < v82 )
                  {
                    v108 = 40 * v81;
                    do
                    {
                      v109 = v108 + v83;
                      ++v81;
                      v108 += 40;
                      *(_QWORD *)v109 = 0;
                      *(_QWORD *)(v109 + 24) = 0;
                      *(_DWORD *)(v109 + 32) = -1;
                      *(_OWORD *)(v109 + 8) = 0;
                      v83 = v147;
                      v52 = v147;
                    }
                    while ( v82 != v81 );
                  }
                }
                else
                {
                  v84 = v148;
                  if ( *((_QWORD *)&v148 + 1) >= v82
                    || (v111 = qvector_reserve(), v84 = v148, v147 = v111, v52 = v111, (unsigned __int64)v148 < v82) )
                  {
                    v85 = 40 * v84;
                    do
                    {
                      v86 = v52 + v85;
                      ++v84;
                      v85 += 40;
                      *(_QWORD *)v86 = 0;
                      *(_QWORD *)(v86 + 24) = 0;
                      *(_DWORD *)(v86 + 32) = -1;
                      *(_OWORD *)(v86 + 8) = 0;
                      v52 = v147;
                    }
                    while ( v82 != v84 );
                  }
                }
                *(_QWORD *)&v148 = v117 + 1;
                v53 = *(_DWORD *)(v52 + 32);
                v54 = (_QWORD *)v52;
                if ( v53 == -1 )
                  goto LABEL_289;
                goto LABEL_186;
              }
            }
LABEL_185:
            v52 = v147;
            v53 = *(_DWORD *)(v147 + 32);
            v54 = (_QWORD *)v147;
            if ( v53 == -1 )
            {
LABEL_202:
              if ( (unsigned __int64)v148 <= 1 )
              {
                v55 = (_QWORD *)v52;
LABEL_204:
                if ( v55[1] <= 1u )
                  goto LABEL_67;
                goto LABEL_205;
              }
              v52 = v147;
LABEL_289:
              v55 = v54;
              v54 = (_QWORD *)v52;
              goto LABEL_188;
            }
LABEL_186:
            if ( *(_QWORD *)(v52 + 8) > 1u )
            {
              v55 = (_QWORD *)v52;
              if ( (unsigned __int64)v148 > 1 )
              {
LABEL_188:
                v56 = 1;
                v57 = 1;
                while ( 1 )
                {
                  v63 = (__int64)&v54[5 * v57];
                  v64 = *(_DWORD *)(v63 + 32);
                  if ( v64 == -1 )
                    break;
                  v58 = *(_QWORD *)(v63 + 8);
                  v59 = v58 - 1;
                  if ( v58 <= 1 )
                  {
                    sub_17F8A0(v63, v64, *(_DWORD *)(v63 + 24));
                    v58 = *(_QWORD *)(v63 + 8);
                    if ( !v58 )
                      goto LABEL_195;
                    goto LABEL_199;
                  }
LABEL_190:
                  v60 = v55[1];
                  v61 = v59;
                  if ( v60 )
                  {
                    --v60;
                    v61 = v59 + v60;
                    v58 = v59 + v60 + 1;
                  }
                  v62 = *v55;
                  if ( v55[2] < v58 )
                  {
                    v129 = v60;
                    v119 = v61;
                    v116 = v58;
                    v79 = qvector_reserve();
                    *v55 = v79;
                    v60 = v129;
                    v62 = v79;
                    v61 = v119;
                    v58 = v116;
                  }
                  v55[1] = v58;
                  *(_BYTE *)(v62 + v61) = 0;
                  memcpy((void *)(v60 + *v55), *(const void **)v63, v59);
LABEL_195:
                  v57 = ++v56;
                  if ( v56 >= (unsigned __int64)v148 )
                    goto LABEL_204;
                  v54 = (_QWORD *)v147;
                }
                v58 = *(_QWORD *)(v63 + 8);
                if ( !v58 )
                  goto LABEL_195;
LABEL_199:
                v59 = v58 - 1;
                if ( v58 == 1 )
                  goto LABEL_195;
                goto LABEL_190;
              }
LABEL_205:
              tinfo_size = get_tinfo_size();
              v66 = 1;
              v67 = _mm_load_si128((const __m128i *)&xmmword_3FE250);
              if ( v151.m128i_i32[1] > 0 )
                v66 = v151.m128i_i32[1];
              v68 = v66;
              v118 = v66 != tinfo_size;
              v125 = v124 | (v118 && v151.m128i_i32[1] > 1);
              v69 = v162;
              do
              {
                *((_DWORD *)v69 + 1) = -1;
                v69 += 80;
                *((_WORD *)v69 - 40) = 0;
                *((_WORD *)v69 - 39) = 0;
                *((_QWORD *)v69 - 9) = 0;
                *((__m128i *)v69 - 4) = v67;
                *((_QWORD *)v69 - 6) = 0;
                *(_OWORD *)(v69 - 40) = 0;
                *((_DWORD *)v69 - 6) = 0;
                *((_QWORD *)v69 - 2) = 0;
                *((_DWORD *)v69 - 2) = 0;
              }
              while ( &v175 != v69 );
              if ( v125 )
              {
                v89 = 5;
                if ( v66 == tinfo_size )
                  v89 = 34;
                v128 = v89;
              }
              else
              {
                v70 = 6;
                if ( v66 == tinfo_size )
                  v70 = 36;
                v128 = v70;
              }
              if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
              {
                v95 = *(_QWORD *)(a2 + 72);
                if ( (_QWORD)v146 || *(_BYTE *)(a2 + 64) != 8 || v128 != *(_DWORD *)(v95 + 284) )
                {
                  v96 = *(_QWORD *)(v95 + 24);
                  sub_120CC0((__int64)v162, (unsigned __int8 *)v96);
                  v164 = *(_QWORD *)(v96 + 16);
                  copy_tinfo_t();
                  if ( &dest != (void **)(v96 + 32) )
                  {
                    v97 = *(_QWORD *)(v96 + 40);
                    if ( v97 && (v98 = v97 - 1, v97 != 1) )
                    {
                      srcb = *(void **)(v96 + 32);
                      if ( v167 < v97 )
                      {
                        v132 = v97 - 1;
                        v131 = *(_QWORD *)(v96 + 40);
                        dest = (void *)qvector_reserve();
                        v98 = v132;
                        v97 = v131;
                      }
                      v166 = v97;
                      v130 = v97;
                      memmove(dest, srcb, v98);
                      *((char *)dest + v130 - 1) = 0;
                    }
                    else
                    {
                      v166 = 0;
                    }
                  }
                  copy_argloc();
                  v168 = *(_DWORD *)(v96 + 72);
LABEL_219:
                  if ( v68 == tinfo_size )
                  {
                    sub_327290(v153, v112, *(_QWORD *)(a1 + 480) + 376LL);
                  }
                  else
                  {
                    *(_QWORD *)v153 = 0;
                    copy_tinfo_t();
                  }
                  copy_tinfo_t();
                  clear_tinfo_t();
                  srca = sub_32CC20(*v55, 0);
                  if ( v68 == tinfo_size && (v152 & 0x10) != 0 )
                  {
                    v169[0] = 6;
                    v71 = *((_QWORD *)&v149 + 1);
                    v72 = 8 * *(_DWORD *)(v112 + 84);
                    if ( (unsigned __int64)v72 <= 0x3F )
                      v71 = ~(-1LL << v72) & *((_QWORD *)&v149 + 1);
                    v171 = v71;
                    sub_118490(v169, v112);
                    if ( (_BYTE)v173 )
                      v173 |= 0x40uLL;
                  }
                  else
                  {
                    v169[0] = 3;
                    v90 = v55[1];
                    v91 = *v55;
                    if ( v90 < v55[2] )
                    {
                      if ( v91 )
                      {
                        if ( v90 )
                        {
                          v91 = qrealloc();
                          if ( !v91 )
                            v91 = *v55;
                        }
                      }
                    }
                    *v55 = 0;
                    *(_OWORD *)(v55 + 1) = 0;
                    v171 = v91;
                  }
                  v170 = *(_DWORD *)(v112 + 84);
                  v172 = v149;
                  if ( v125 )
                  {
                    if ( (v152 & 2) != 0 )
                    {
                      if ( v151.m128i_i32[1] <= 1 )
                        goto LABEL_232;
                      goto LABEL_230;
                    }
                    if ( v151.m128i_i32[1] > 1 )
                    {
LABEL_230:
                      if ( v118 )
                        srca *= v151.m128i_i32[1];
LABEL_232:
                      *(_QWORD *)v153 = 7;
                      copy_tinfo_t();
                      clear_tinfo_t();
                      v73 = *(_QWORD *)(a2 + 24);
                      v74 = get_tinfo_size();
                      sub_11C550((__int64)v174, v112, srca, v74, v73, 2);
                      if ( v68 != tinfo_size )
                        copy_tinfo_t();
                      v75 = 3;
                      if ( v128 == 2 )
                        goto LABEL_235;
                      goto LABEL_325;
                    }
                    *(_QWORD *)v153 = 7;
                    copy_tinfo_t();
                    clear_tinfo_t();
                    if ( *(_DWORD *)(v147 + 32) != -1 )
                    {
                      v104 = *(_QWORD *)(a2 + 24);
                      v105 = get_tinfo_size();
                      sub_11C550((__int64)v169, v112, *(int *)(v147 + 32), v105, v104, 1);
                      v128 = 2;
                      goto LABEL_232;
                    }
                    if ( !under_debugger )
                      sub_37DDE0(52621);
LABEL_419:
                    BUG();
                  }
                  if ( v162[0] != 10 || *v163 != 5 )
                  {
LABEL_324:
                    v75 = 2;
LABEL_325:
                    copy_tinfo_t();
                    sub_327450(v112, (unsigned int)&v173, 1, v92, v93, v94);
LABEL_235:
                    sub_181C60(a1, a2, (__int64)&v140, v75, v162, v128);
                    goto LABEL_236;
                  }
                  sub_329F60(v163, &v134);
                  v99 = *(_QWORD *)(a1 + 64);
                  v100 = v134;
                  v135 = 0;
                  v101 = *(_DWORD *)(*(_QWORD *)(v99 + 1504) + 80LL);
                  v155 = 0;
                  v158 = 1;
                  v159 = -1;
                  v160 = 0;
                  v161 = 0;
                  memset(v153, 0, sizeof(v153));
                  v154 = 0;
                  v156 = 0;
                  v157 = 0;
                  v126 = sub_1CBBD0(v99, v153, v134, 0, &v135);
                  if ( sub_1CB6D0(v99, v100) < 0 )
                  {
LABEL_359:
                    clear_tinfo_t();
                    clear_tinfo_t();
                    if ( v155 )
                    {
                      *(_QWORD *)&v156 = 0;
                      qfree();
                    }
                    if ( *(_QWORD *)&v153[16] )
                    {
                      *(_QWORD *)&v154 = 0;
                      qfree();
                    }
                    goto LABEL_324;
                  }
                  v102 = (srca + v101 - 1 + 1) & -v101;
                  if ( v126 != -1 )
                  {
                    if ( *(_QWORD *)&v153[8] >> 3 >= v102 || (get_tinfo_property() & 0x2F) == 0xD )
                      goto LABEL_359;
                    if ( (_QWORD)v154 )
                    {
                      v110 = *(const char **)&v153[16];
                      if ( !*(_QWORD *)&v153[16]
                        || !strncmp(*(const char **)&v153[16], "arg_", 4u)
                        || !strncmp(v110, "var_", 4u) )
                      {
                        goto LABEL_394;
                      }
                    }
                    else
                    {
                      v110 = s1;
                      if ( !s1 )
                        goto LABEL_394;
                    }
                    if ( strncmp(v110, "anonymous", 9u) )
                      goto LABEL_359;
                  }
LABEL_394:
                  get_tinfo_property4();
                  get_func();
                  delete_frame_members();
                  sub_326FC0(v136, *(_QWORD *)(v99 + 1504), 1);
                  if ( v102 != 1 )
                  {
                    v138 = 0;
                    v139 = v102;
                    v137 = 0;
                    copy_tinfo_t();
                    create_tinfo();
                    clear_tinfo_t();
                  }
                  if ( v126 == -1 )
                    add_frame_member();
                  else
                    set_frame_member_type();
                  clear_tinfo_t();
                  goto LABEL_359;
                }
              }
              else if ( src || (unsigned __int8)sub_1815E0(a1, a2) )
              {
                sub_118550(v162, (char *)(a2 + 64));
                if ( *(_DWORD *)a2 != 1 )
                  sub_118490(v162, v112);
                v164 = *(_QWORD *)(a2 + 24);
                goto LABEL_219;
              }
              v120 = 0;
LABEL_236:
              v76 = &v175;
              do
              {
                v76 -= 80;
                cleanup_argloc();
                if ( *((_QWORD *)v76 + 4) )
                {
                  *((_QWORD *)v76 + 5) = 0;
                  qfree();
                }
                clear_tinfo_t();
                sub_1188E0((__int64)v76);
              }
              while ( v76 != v162 );
              goto LABEL_68;
            }
            sub_17F8A0(v52, v53, *(_DWORD *)(v52 + 24));
            goto LABEL_202;
          }
        }
        else if ( v133 > 9 )
        {
          if ( (unsigned int)(*(_DWORD *)a2 - 56) > 1 )
          {
            if ( *(_BYTE *)(a2 + 64) != 6 )
            {
LABEL_269:
              if ( !v124 )
                goto LABEL_185;
              v80 = v124;
LABEL_271:
              if ( (v44 & 1) != 0 && v151.m128i_i32[1] > 1 )
                goto LABEL_67;
              goto LABEL_273;
            }
LABEL_303:
            if ( (get_flags_ex() & 0x400) != 0 )
            {
              if ( !v124 )
                goto LABEL_185;
              v80 = v124;
              goto LABEL_306;
            }
            v80 = 0;
            if ( v124 )
            {
LABEL_306:
              if ( v43 )
                goto LABEL_307;
              v44 = v152;
              goto LABEL_271;
            }
LABEL_177:
            if ( v117 < 0 && (_QWORD)v146 )
            {
              if ( !(unsigned __int8)sub_17EEC0(
                                       (unsigned int *)&v133,
                                       (int *)a2,
                                       *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL)) )
                goto LABEL_67;
              v50 = 0;
              v51 = 0;
              if ( (_QWORD)v146 != 1 )
              {
                do
                {
                  if ( v133 <= 0 )
                    break;
                  if ( !(unsigned __int8)sub_17EEC0(
                                           (unsigned int *)&v133,
                                           *(int **)(*((_QWORD *)&v145 + 1) + 8 * v51),
                                           *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL)) )
                    goto LABEL_67;
                  v51 = ++v50;
                }
                while ( v50 < (unsigned __int64)(v146 - 1) );
              }
            }
            goto LABEL_185;
          }
          goto LABEL_343;
        }
        if ( v124 )
        {
          if ( v117 == -1 )
            goto LABEL_67;
          goto LABEL_274;
        }
        goto LABEL_177;
      }
LABEL_33:
      if ( (unsigned int)(*(_DWORD *)v7 - 56) > 1 )
        goto LABEL_34;
LABEL_98:
      v117 = v21;
      goto LABEL_34;
    }
LABEL_97:
    v21 = v146;
    goto LABEL_98;
  }
LABEL_28:
  if ( v11 != 1 )
  {
LABEL_29:
    if ( !v113 && (~(_BYTE)v152 & 0x21) == 0 )
      goto LABEL_14;
    v13 = 0;
    goto LABEL_31;
  }
LABEL_157:
  v47 = v151.m128i_i32[2];
  v48 = v151.m128i_i32[2];
  if ( v151.m128i_i32[2] < SHIDWORD(v140) / 2 )
    goto LABEL_14;
  if ( v113 )
  {
    if ( a2 == v7 )
    {
      v77 = v146;
      v88 = v117;
      if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
        v88 = v146;
      v117 = v88;
      goto LABEL_297;
    }
    goto LABEL_160;
  }
  if ( (~(_BYTE)v152 & 0x21) != 0 )
  {
    if ( a2 == v7 )
    {
      v77 = v146;
      if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
      {
        v117 = v146;
        v48 = v151.m128i_i32[2];
      }
      goto LABEL_297;
    }
LABEL_160:
    v13 = 1;
LABEL_31:
    if ( *((_QWORD *)&v146 + 1) < (unsigned __int64)(v146 + 1) )
    {
      v20 = 0;
      goto LABEL_132;
    }
    *(_QWORD *)(*((_QWORD *)&v145 + 1) + 8 * v146) = v7;
    v21 = v146 + 1;
    *(_QWORD *)&v146 = v146 + 1;
    goto LABEL_33;
  }
  v20 = 0;
LABEL_245:
  if ( v48 )
    goto LABEL_14;
  v13 = HIDWORD(v140);
  if ( HIDWORD(v140) != 1 )
    goto LABEL_14;
  v46 = v146;
  if ( a2 != v7 )
  {
    v45 = *((_QWORD *)&v145 + 1);
    if ( *((_QWORD *)&v146 + 1) < (unsigned __int64)(v146 + 1) )
      goto LABEL_132;
    goto LABEL_133;
  }
  if ( v20 )
  {
    v117 = v146;
  }
  else
  {
    v87 = v117;
    if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
      v87 = v146;
    v117 = v87;
  }
  if ( (_QWORD)v146 )
  {
    ++v133;
    v124 = 0;
    goto LABEL_122;
  }
LABEL_364:
  v103 = v151.m128i_i32[1];
  if ( v151.m128i_i32[1] <= 0 )
    v103 = 1;
  if ( v48 == v13 - v103 )
  {
    v124 = 0;
    v133 += v48 + 1;
    goto LABEL_118;
  }
LABEL_67:
  v120 = 0;
LABEL_68:
  clear_tinfo_t();
  v35 = v147;
  if ( v147 )
  {
    v36 = v148;
    if ( (_QWORD)v148 )
    {
      v37 = 0;
      do
      {
        v38 = (_QWORD *)(v35 + 40 * v37);
        if ( *v38 )
        {
          v38[1] = 0;
          qfree();
          v35 = v147;
        }
        ++v37;
      }
      while ( v36 != v37 );
    }
    *(_QWORD *)&v148 = 0;
    qfree();
  }
  if ( *((_QWORD *)&v145 + 1) )
  {
    *(_QWORD *)&v146 = 0;
    qfree();
  }
  sub_1188E0((__int64)&v144);
  sub_1188E0((__int64)&v140);
  return v120;
}

