__int64 __fastcall sub_186F90(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __m128i si128; // xmm0
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // r13
  unsigned int v10; // ebp
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r12d
  __int64 v14; // rax
  int v15; // r8d
  int v16; // r13d
  __int64 *v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // ecx
  __int64 v20; // rax
  int v21; // r13d
  __int64 v22; // rsi
  __int64 v23; // rdx
  int v24; // eax
  int v25; // r12d
  bool v26; // zf
  unsigned int v27; // ebx
  __int64 v28; // rcx
  int v29; // r8d
  int v30; // r9d
  __int64 *v31; // rax
  int v32; // eax
  __int64 v33; // rdi
  __int64 v34; // rcx
  char v35; // r12
  int v36; // ecx
  _QWORD *v37; // rbp
  _BYTE *v38; // rax
  _QWORD *v39; // r12
  char v40; // al
  __int64 v41; // r12
  __int64 v42; // rbp
  __int64 v43; // rbx
  __int64 *v44; // rax
  __int64 v45; // rdi
  int v47; // esi
  __int64 v48; // rax
  int v49; // eax
  char v50; // bl
  char v51; // al
  __int64 v52; // rax
  __int64 v53; // rdx
  __int32 v54; // edx
  __int32 v55; // esi
  int flags; // eax
  int v57; // r12d
  __int64 v58; // rdx
  __int64 v59; // r12
  int v60; // eax
  unsigned __int64 v61; // rbx
  __int64 v62; // r13
  int v63; // r12d
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  size_t v66; // rbp
  __int64 v67; // r9
  size_t v68; // r8
  char *v69; // rsi
  __int64 v70; // rbx
  int v71; // esi
  __int64 tinfo_size; // rbx
  int v73; // edx
  __m128 v74; // xmm0
  __m128i v75; // xmm1
  __int64 v76; // r12
  char *v77; // rax
  int v78; // eax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // r13
  int v85; // eax
  int v86; // ebx
  char *v87; // rbx
  __int64 v88; // rdi
  __int64 v89; // rax
  int v90; // esi
  __int64 v91; // rax
  char v92; // dl
  unsigned __int64 v93; // rbp
  unsigned __int64 v94; // r13
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rdx
  int v99; // ecx
  int v100; // ecx
  int v101; // eax
  unsigned __int64 v102; // rsi
  char *v103; // rdi
  __int64 v104; // rax
  __int64 v105; // rbp
  unsigned __int64 v106; // r9
  size_t v107; // r10
  _QWORD *v108; // r13
  __int64 v109; // r12
  int v110; // ebx
  unsigned __int64 v111; // rbx
  int v112; // eax
  __int64 v113; // r13
  int v114; // eax
  unsigned __int64 v115; // rbx
  __int64 *v116; // rax
  __int64 v117; // rdi
  __int64 v118; // rdx
  __int64 v119; // rax
  const char *v120; // r12
  __m128i v121; // xmm0
  __int64 v122; // rax
  __int64 v123; // [rsp+8h] [rbp-2E0h]
  unsigned __int8 v124; // [rsp+18h] [rbp-2D0h]
  int v125; // [rsp+18h] [rbp-2D0h]
  __int64 v126; // [rsp+18h] [rbp-2D0h]
  unsigned __int64 v127; // [rsp+18h] [rbp-2D0h]
  int v128; // [rsp+20h] [rbp-2C8h]
  bool v129; // [rsp+20h] [rbp-2C8h]
  size_t v130; // [rsp+20h] [rbp-2C8h]
  unsigned __int8 v131; // [rsp+2Fh] [rbp-2B9h]
  bool src; // [rsp+30h] [rbp-2B8h]
  __int64 srca; // [rsp+30h] [rbp-2B8h]
  void *srcb; // [rsp+30h] [rbp-2B8h]
  char v135; // [rsp+38h] [rbp-2B0h]
  char v136; // [rsp+38h] [rbp-2B0h]
  __int64 v137; // [rsp+38h] [rbp-2B0h]
  int v138; // [rsp+40h] [rbp-2A8h]
  unsigned int v139; // [rsp+40h] [rbp-2A8h]
  __int64 v140; // [rsp+40h] [rbp-2A8h]
  unsigned __int64 v141; // [rsp+50h] [rbp-298h]
  unsigned __int64 v142; // [rsp+50h] [rbp-298h]
  size_t v143; // [rsp+58h] [rbp-290h]
  int v144; // [rsp+64h] [rbp-284h] BYREF
  __int64 v145; // [rsp+68h] [rbp-280h] BYREF
  __int64 v146; // [rsp+70h] [rbp-278h] BYREF
  char v147[8]; // [rsp+78h] [rbp-270h] BYREF
  __int64 v148; // [rsp+80h] [rbp-268h]
  int v149; // [rsp+88h] [rbp-260h]
  int v150; // [rsp+8Ch] [rbp-25Ch]
  unsigned __int64 v151; // [rsp+90h] [rbp-258h] BYREF
  unsigned __int64 v152; // [rsp+98h] [rbp-250h]
  int v153; // [rsp+A0h] [rbp-248h]
  char v154; // [rsp+A4h] [rbp-244h]
  unsigned __int64 v155; // [rsp+A8h] [rbp-240h] BYREF
  __int128 v156; // [rsp+B0h] [rbp-238h] BYREF
  __int128 v157; // [rsp+C0h] [rbp-228h]
  unsigned __int64 v158; // [rsp+D0h] [rbp-218h] BYREF
  __int128 v159; // [rsp+D8h] [rbp-210h]
  __int128 v160; // [rsp+E8h] [rbp-200h]
  __int128 v161; // [rsp+F8h] [rbp-1F0h]
  __m128i v162; // [rsp+108h] [rbp-1E0h]
  unsigned int v163; // [rsp+118h] [rbp-1D0h]
  _BYTE v164[24]; // [rsp+120h] [rbp-1C8h] BYREF
  __int128 v165; // [rsp+138h] [rbp-1B0h]
  __int64 v166; // [rsp+148h] [rbp-1A0h]
  __int128 v167; // [rsp+150h] [rbp-198h]
  __int128 v168; // [rsp+160h] [rbp-188h]
  __int64 v169; // [rsp+190h] [rbp-158h]
  int v170; // [rsp+198h] [rbp-150h]
  __int64 v171; // [rsp+1A0h] [rbp-148h]
  char v172; // [rsp+1A8h] [rbp-140h]
  char v173[8]; // [rsp+1B0h] [rbp-138h] BYREF
  _BYTE *v174; // [rsp+1B8h] [rbp-130h]
  __int64 v175; // [rsp+1C0h] [rbp-128h]
  void *dest; // [rsp+1D0h] [rbp-118h] BYREF
  unsigned __int64 v177; // [rsp+1D8h] [rbp-110h]
  unsigned __int64 v178; // [rsp+1E0h] [rbp-108h]
  int v179; // [rsp+1F8h] [rbp-F0h]
  unsigned __int8 v180[4]; // [rsp+200h] [rbp-E8h] BYREF
  int v181; // [rsp+204h] [rbp-E4h]
  char *v182; // [rsp+208h] [rbp-E0h]
  __int64 v183; // [rsp+210h] [rbp-D8h]
  __int64 v184; // [rsp+218h] [rbp-D0h] BYREF
  char v185[24]; // [rsp+250h] [rbp-98h] BYREF
  char v186; // [rsp+2A0h] [rbp-48h] BYREF
  unsigned __int64 v187; // [rsp+2A8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 64);
  v187 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 1344) + 8LL) )
  {
    v48 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)&v164[8] = 0;
    *(_QWORD *)v164 = v48;
    if ( (sub_137670(v3, (__int64)v164) & 7) != 0 )
      return 0;
  }
  v156 = 0;
  v151 = 0xFFFFFFFF00000000LL;
  v155 = 0xFFFFFFFF00000000LL;
  v157 = 0;
  v159 = 0;
  v161 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424810);
  v152 = 0;
  v153 = 0;
  v154 = 0;
  v158 = 0;
  v163 = 16;
  v160 = -1;
  v162 = si128;
  v131 = sub_186840((__int64)&v151, a1, a2, 0, si128, (__m128)-1LL);
  if ( !v131 )
    goto LABEL_67;
  v6 = *(_QWORD *)(a1 + 64);
  v144 = 0;
  v7 = a2;
  v128 = -1;
  v123 = *(_QWORD *)(v6 + 1504);
  src = (unsigned int)(*(_DWORD *)a2 - 56) <= 1;
  while ( 1 )
  {
    v8 = v163;
    if ( (v163 & 1) != 0 )
      goto LABEL_8;
    if ( (_BYTE)v151 != 3 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( (_BYTE)v151 == 6 )
      {
        v53 = SHIDWORD(v151);
        if ( SHIDWORD(v151) <= 0 )
          v53 = 1;
        if ( !(unsigned int)sub_343460(*(_QWORD *)(v9 + 1496), v152, v53) )
        {
          v8 = v163;
LABEL_8:
          v124 = 0;
          v10 = v8 & 0xFFFFFFFB;
          goto LABEL_9;
        }
        if ( (get_flags_ex() & 0x600) == 0x200 )
          prev_not_tail();
        flags = get_flags_ex();
        v8 = v163;
        if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x50000000 )
          goto LABEL_8;
      }
      else
      {
        if ( (_BYTE)v151 != 2 )
          goto LABEL_8;
        v37 = *(_QWORD **)(v9 + 1328);
        if ( !*v37 )
          goto LABEL_62;
        v38 = (_BYTE *)(*(_QWORD *)*v37 & 0xFFFFFFFFFFFFFFFCLL);
        v39 = v38;
        if ( !v38 )
          goto LABEL_174;
        if ( (*v38 & 2) != 0 )
          goto LABEL_62;
        v126 = v152;
        do
        {
          if ( (int)sub_257C40(v126, (__int64)(v39 + 3)) >= 0 )
          {
            if ( (int)sub_257C40((__int64)(v39 + 3), v126) >= 0 )
              goto LABEL_173;
            v39 = (_QWORD *)v39[2];
          }
          else
          {
            v39 = (_QWORD *)v39[1];
          }
        }
        while ( (*(_BYTE *)v39 & 2) == 0 );
        v39 = (_QWORD *)*v37;
LABEL_173:
        if ( v39 == **(_QWORD ***)(v9 + 1328) )
        {
LABEL_62:
          get_flags_ex();
          v40 = is_char();
        }
        else
        {
LABEL_174:
          v40 = is_char();
        }
        v8 = v163;
        if ( !v40 )
          goto LABEL_8;
      }
    }
    v10 = v8 | 4;
    v124 = v131;
LABEL_9:
    v163 = v10;
    v11 = sub_184C00(v123, (char *)&v151);
    v12 = v163;
    v13 = v11;
    if ( ((unsigned __int8)v163 & ((_QWORD)v161 != 0)) != 0 )
      goto LABEL_67;
    if ( v11 == 1 )
    {
      if ( (unsigned int)(*(_DWORD *)v7 - 56) <= 1 && HIDWORD(v151) )
      {
        v47 = v162.m128i_i32[1];
        if ( v162.m128i_i32[1] <= 0 )
          v47 = 1;
        if ( HIDWORD(v151) - v47 != v162.m128i_i32[2] )
        {
          if ( v128 != -1 || (~(_BYTE)v163 & 3) != 0 )
          {
LABEL_13:
            if ( (v163 & 0xC) != 0 )
              goto LABEL_14;
            if ( a2 == v7 )
              goto LABEL_67;
LABEL_15:
            v14 = v159;
            v15 = v144;
            v16 = v10 & 2;
            if ( (_QWORD)v159 )
              goto LABEL_16;
            goto LABEL_19;
          }
          if ( (unsigned __int64)v157 > 4 )
            goto LABEL_175;
          if ( (v163 & 0xC) != 0 )
            goto LABEL_14;
          v13 = -1;
          goto LABEL_146;
        }
      }
    }
    else if ( v11 == -1 )
    {
      if ( v128 != -1 || (~(_BYTE)v163 & 3) != 0 )
        goto LABEL_13;
      if ( (unsigned __int64)v157 > 4 )
        goto LABEL_175;
      if ( (v163 & 0xC) != 0 )
        goto LABEL_14;
      goto LABEL_146;
    }
    if ( a2 != v7 )
      break;
    if ( v128 != -1 )
    {
      v21 = v163 & 0xC;
      if ( (v163 & 0xC) == 0 )
        goto LABEL_154;
      if ( v124 )
        goto LABEL_97;
      goto LABEL_104;
    }
LABEL_151:
    if ( (~(_BYTE)v163 & 3) != 0 )
    {
      v21 = v163 & 0xC;
      if ( (v163 & 0xC) != 0 )
        goto LABEL_103;
      if ( a2 != v7 )
        goto LABEL_28;
      goto LABEL_154;
    }
    if ( (unsigned __int64)v157 > 4 )
      goto LABEL_175;
    v21 = v163 & 0xC;
    if ( (v163 & 0xC) != 0 )
      goto LABEL_103;
LABEL_146:
    if ( a2 != v7 )
    {
      if ( v13 != 1 )
      {
        if ( v13 == -1 )
          goto LABEL_14;
        goto LABEL_29;
      }
      goto LABEL_159;
    }
LABEL_154:
    if ( v13 )
      goto LABEL_67;
    if ( !v124 )
    {
      v12 = ~(_BYTE)v163 & 0x21;
      if ( (~(_BYTE)v163 & 0x21) == 0 )
        goto LABEL_67;
    }
    if ( (unsigned int)(*(_DWORD *)v7 - 56) <= 1 )
      v128 = v157;
LABEL_35:
    v25 = HIDWORD(v151) + v144;
    v26 = *(_QWORD *)(a2 + 8) == 0;
    v144 += HIDWORD(v151);
    if ( v26 && !*(_QWORD *)(a2 + 16) )
    {
LABEL_66:
      if ( !(_QWORD)v157 || (_BYTE)v151 == 2 && (~(_BYTE)v163 & 3) == 0 )
        goto LABEL_67;
      v135 = v131;
      goto LABEL_122;
    }
    v27 = HIDWORD(v155);
    v135 = sub_183A20((unsigned __int64 *)v123, (__int64)&v155, HIDWORD(v155), v12, si128);
    if ( !v135
      || (unsigned __int8)(v151 - 2) > 1u
      && (HIDWORD(v151) != v27 || !(unsigned __int8)sub_183A20(
                                                      (unsigned __int64 *)v123,
                                                      (__int64)&v151,
                                                      v27,
                                                      v28,
                                                      si128)) )
    {
      goto LABEL_67;
    }
    v31 = sub_185BD0(a1, a2, (__int64)&v155, 0, v29, v30, *(double *)si128.m128i_i64, (__m128)-1LL);
    v7 = (__int64)v31;
    if ( !v31 || (*((_BYTE *)v31 + 4) & 0x10) != 0 )
      goto LABEL_66;
    *(_OWORD *)v164 = 0xFFFFFFFF00000000LL;
    if ( !(unsigned __int8)sub_184280((unsigned __int64)v164, a1, (__int64)v31, 0, 0, si128, (__m128)-1LL) )
      goto LABEL_116;
    v32 = sub_183400(v123, (__int64)&v155, (__int64)v164, si128, (__m128)-1LL);
    if ( v32 == -1 )
      goto LABEL_116;
    if ( SHIDWORD(v151) <= v32 )
    {
      if ( !under_debugger )
        sub_383060(0xC95Cu, *(double *)si128.m128i_i64);
      goto LABEL_424;
    }
    if ( v32 )
    {
      v33 = v158 + 40 * v159 - 40;
      if ( *(_DWORD *)(v33 + 32) != -1 )
        *(_QWORD *)(v33 + 24) -= v32;
      v138 = v32;
      sub_332080((__int64 *)v33, v32);
      v144 = v25 - v138;
    }
    sub_125180((unsigned __int8 *)&v155, v164);
    v35 = sub_183FF0((__int64)&v151, a1, v7, v34, si128);
    if ( !v35 )
      goto LABEL_116;
    if ( v154 && (v163 & 2) != 0 )
    {
      v36 = v162.m128i_i32[1];
      if ( v162.m128i_i32[1] <= 0 )
        v36 = 1;
      if ( SHIDWORD(v151) / v36 > 64 )
        goto LABEL_116;
    }
    if ( (unsigned int)(*(_DWORD *)v7 - 56) <= 1 )
    {
      v49 = 32;
      if ( *(_BYTE *)(v7 + 32) == 11 )
        v49 = (*(_DWORD *)(*(_QWORD *)(v7 + 72) + 280LL) & 0x80) == 0 ? 64 : 32;
      v163 |= v49;
      if ( (unsigned int)(*(_DWORD *)v7 - 56) <= 1
        && (*(_BYTE *)(v7 + 32) != 11 || *(char *)(*(_QWORD *)(v7 + 72) + 280LL) < 0)
        && !v124 )
      {
LABEL_116:
        sub_11CDA0((__int64)v164);
        v20 = v157;
LABEL_117:
        if ( v20 )
          goto LABEL_122;
LABEL_118:
        if ( HIDWORD(v151) == 1 )
          goto LABEL_67;
LABEL_119:
        if ( (v163 & 8) != 0 || (_BYTE)v151 != 2 )
        {
          v128 = -1;
          goto LABEL_122;
        }
        goto LABEL_67;
      }
    }
    if ( !src )
    {
      if ( (unsigned __int64)v157 <= 4 )
        goto LABEL_58;
      if ( !(unsigned __int8)sub_185AA0(a1, a2, *(double *)si128.m128i_i64, (__m128)-1LL) )
      {
        sub_11CDA0((__int64)v164);
        goto LABEL_67;
      }
    }
    src = v35;
LABEL_58:
    sub_11CDA0((__int64)v164);
  }
  if ( (v163 & 2) == 0 )
    goto LABEL_27;
  v16 = v10 & 2;
  if ( (v10 & 2) != 0 )
  {
    if ( v128 == -1 )
      goto LABEL_151;
LABEL_27:
    v21 = v163 & 0xC;
    if ( (v163 & 0xC) == 0 )
      goto LABEL_28;
LABEL_103:
    if ( v124 )
      goto LABEL_105;
LABEL_104:
    if ( (~(_BYTE)v163 & 0x21) != 0 )
      goto LABEL_105;
    if ( !v11 )
      goto LABEL_14;
    v55 = v162.m128i_i32[2];
    goto LABEL_247;
  }
  if ( (v163 & 1) != 0 )
  {
    if ( v128 != -1 )
    {
      v15 = v144;
LABEL_83:
      v14 = v159;
      if ( !(_QWORD)v159 )
      {
LABEL_84:
        v19 = v12 & 0xFFFFFFFD;
        goto LABEL_21;
      }
LABEL_16:
      *(_QWORD *)&v159 = v14 - 1;
      v17 = (__int64 *)(v158 + 40 * (v14 - 1));
      v18 = *v17;
      if ( *v17 )
      {
        v17[1] = 0;
        v125 = v15;
        qfree(v18);
        v15 = v125;
      }
      LODWORD(v12) = v163;
LABEL_19:
      if ( !v16 )
        goto LABEL_84;
      v19 = v12 | 2;
LABEL_21:
      v163 = v19;
      if ( v15 <= 9 )
      {
        v20 = v157;
        v135 = v131;
      }
      else
      {
        v135 = v10 & 1;
        v20 = v157;
        if ( (v10 & 1) != 0 )
        {
          v163 = v19 | 1;
        }
        else
        {
          v163 = v19 & 0xFFFFFFFE;
          v135 = v131;
        }
      }
      goto LABEL_117;
    }
    if ( (unsigned __int64)v157 > 4 )
    {
LABEL_175:
      if ( (v163 & 0xC) != 0 )
      {
        v128 = -1;
        goto LABEL_14;
      }
      if ( a2 == v7 )
        goto LABEL_67;
      v128 = -1;
    }
    else
    {
      if ( (v163 & 0xC) != 0 )
      {
        v14 = v159;
        v15 = v144;
        if ( !(_QWORD)v159 )
          goto LABEL_84;
        goto LABEL_16;
      }
LABEL_14:
      if ( a2 == v7 )
        goto LABEL_67;
    }
    goto LABEL_15;
  }
  v90 = v162.m128i_i32[1];
  v15 = v144;
  if ( v162.m128i_i32[1] <= 0 )
    v90 = 1;
  if ( v144 / v90 > 64 )
    goto LABEL_83;
  v21 = v163 & 0xC;
  if ( (v163 & 0xC) != 0 )
  {
LABEL_105:
    if ( a2 != v7 )
    {
      v22 = *((_QWORD *)&v156 + 1);
      v23 = v157 + 1;
      if ( *((_QWORD *)&v157 + 1) >= (unsigned __int64)(v157 + 1) )
      {
        *(_QWORD *)(*((_QWORD *)&v156 + 1) + 8 * v157) = v7;
        *(_QWORD *)&v157 = v157 + 1;
        v128 = v157;
        goto LABEL_34;
      }
LABEL_132:
      *((_QWORD *)&v156 + 1) = qvector_reserve((__int64)&v156 + 8, v22, v23, 8);
      v22 = *((_QWORD *)&v156 + 1);
      v52 = v157;
LABEL_133:
      *(_QWORD *)(v22 + 8 * v52) = v7;
      v24 = v157 + 1;
      *(_QWORD *)&v157 = v157 + 1;
      if ( v21 )
      {
        v128 = v24;
LABEL_34:
        if ( v13 != 1 )
          goto LABEL_35;
        v54 = v162.m128i_i32[2];
        v89 = v157;
        v55 = v162.m128i_i32[2];
LABEL_299:
        if ( !v89 )
        {
          v13 = HIDWORD(v151);
          if ( HIDWORD(v151) )
            goto LABEL_366;
          v135 = 0;
          v144 += v54 + 1;
          goto LABEL_119;
        }
        v135 = 0;
        v144 += v54 + 1;
LABEL_122:
        v50 = 0;
        if ( *(_BYTE *)(a2 + 64) == 5 )
          v50 = sub_1EF9B0(**(_QWORD **)(a2 + 72), *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL), *(_DWORD *)(a2 + 68));
        v51 = v163;
        if ( (v163 & 2) == 0 && v162.m128i_i32[1] <= 1 && *(_DWORD *)(v123 + 88) + 1 <= v144 )
        {
          if ( (v163 & 1) == 0 )
          {
            if ( v50 )
            {
              if ( v144 > 2 )
              {
                if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 || *(_BYTE *)(a2 + 64) != 6 )
                  goto LABEL_317;
                goto LABEL_305;
              }
            }
            else if ( v144 > 9 )
            {
              if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 || *(_BYTE *)(a2 + 64) != 6 )
              {
LABEL_317:
                if ( !v135 )
                  goto LABEL_187;
LABEL_309:
                if ( v128 == -1 )
                {
LABEL_310:
                  v128 = v157;
                  goto LABEL_276;
                }
                goto LABEL_276;
              }
              v50 = v131;
              goto LABEL_305;
            }
          }
          if ( v135 )
            goto LABEL_309;
          goto LABEL_179;
        }
        if ( (v163 & 1) != 0 )
        {
          if ( v135 )
          {
            if ( v162.m128i_i32[1] > 1 || v128 == -1 )
              goto LABEL_67;
            goto LABEL_276;
          }
          goto LABEL_179;
        }
        if ( v50 )
        {
          if ( v144 > 2 )
          {
            if ( (unsigned int)(*(_DWORD *)a2 - 56) > 1 )
            {
              if ( *(_BYTE *)(a2 + 64) != 6 )
                goto LABEL_271;
              v50 = 0;
              goto LABEL_305;
            }
LABEL_345:
            if ( !v135 )
              goto LABEL_187;
            v92 = v135;
LABEL_275:
            if ( v128 == -1 )
            {
              if ( !v92 )
                goto LABEL_67;
              goto LABEL_310;
            }
LABEL_276:
            if ( !v128 )
              goto LABEL_67;
            if ( v128 < (unsigned __int64)v157 )
            {
              v93 = v159;
              *(_QWORD *)&v157 = v128;
              if ( v128 >= (unsigned __int64)v159 )
              {
                if ( !under_debugger )
                  sub_383060(0xCA8Cu, *(double *)si128.m128i_i64);
                goto LABEL_424;
              }
              v94 = v128 + 1;
              if ( v94 != (_QWORD)v159 )
              {
                v59 = v158;
                *(_QWORD *)&v165 = 0;
                memset(v164, 0, sizeof(v164));
                DWORD2(v165) = -1;
                v95 = v158;
                if ( v94 < (unsigned __int64)v159 )
                {
                  v115 = v128 + 1;
                  do
                  {
                    v116 = (__int64 *)(v59 + 40 * v115);
                    v117 = *v116;
                    if ( *v116 )
                    {
                      v116[1] = 0;
                      qfree(v117);
                      v59 = v158;
                    }
                    ++v115;
                  }
                  while ( v115 < v93 );
                }
                else if ( (unsigned __int64)v164 < v158
                       || (unsigned __int64)v164 >= v158 + 40LL * *((_QWORD *)&v159 + 1) )
                {
                  if ( *((_QWORD *)&v159 + 1) < v94 )
                  {
                    v95 = qvector_reserve((__int64)&v158, v158, v128 + 1, 40);
                    v158 = v95;
                    v93 = v159;
                  }
                  v59 = v158;
                  if ( v93 < v94 )
                  {
                    v118 = 40 * v93;
                    do
                    {
                      v119 = v118 + v95;
                      ++v93;
                      v118 += 40;
                      *(_QWORD *)v119 = 0;
                      *(_QWORD *)(v119 + 24) = 0;
                      *(_DWORD *)(v119 + 32) = -1;
                      *(_OWORD *)(v119 + 8) = 0;
                      v95 = v158;
                      v59 = v158;
                    }
                    while ( v94 != v93 );
                  }
                }
                else
                {
                  v96 = v159;
                  if ( *((_QWORD *)&v159 + 1) >= v94
                    || (v122 = qvector_reserve((__int64)&v158, v158, v128 + 1, 40),
                        v96 = v159,
                        v158 = v122,
                        v59 = v122,
                        (unsigned __int64)v159 < v94) )
                  {
                    v97 = 40 * v96;
                    do
                    {
                      v98 = v59 + v97;
                      ++v96;
                      v97 += 40;
                      *(_QWORD *)v98 = 0;
                      *(_QWORD *)(v98 + 24) = 0;
                      *(_DWORD *)(v98 + 32) = -1;
                      *(_OWORD *)(v98 + 8) = 0;
                      v59 = v158;
                    }
                    while ( v94 != v96 );
                  }
                }
                *(_QWORD *)&v159 = v128 + 1;
                v60 = *(_DWORD *)(v59 + 32);
                v61 = v59;
                if ( v60 == -1 )
                  goto LABEL_291;
                goto LABEL_188;
              }
            }
LABEL_187:
            v59 = v158;
            v60 = *(_DWORD *)(v158 + 32);
            v61 = v158;
            if ( v60 == -1 )
            {
LABEL_204:
              if ( (unsigned __int64)v159 <= 1 )
              {
                v62 = v59;
LABEL_206:
                if ( *(_QWORD *)(v62 + 8) <= 1u )
                  goto LABEL_67;
                goto LABEL_207;
              }
              v59 = v158;
LABEL_291:
              v62 = v61;
              v61 = v59;
              goto LABEL_190;
            }
LABEL_188:
            if ( *(_QWORD *)(v59 + 8) > 1u )
            {
              v62 = v59;
              if ( (unsigned __int64)v159 > 1 )
              {
LABEL_190:
                v63 = 1;
                v64 = 1;
                while ( 1 )
                {
                  v70 = v61 + 40 * v64;
                  v71 = *(_DWORD *)(v70 + 32);
                  if ( v71 == -1 )
                    break;
                  v65 = *(_QWORD *)(v70 + 8);
                  v66 = v65 - 1;
                  if ( v65 <= 1 )
                  {
                    sub_183D60(v70, v71, *(_DWORD *)(v70 + 24));
                    v65 = *(_QWORD *)(v70 + 8);
                    if ( !v65 )
                      goto LABEL_197;
                    goto LABEL_201;
                  }
LABEL_192:
                  v67 = *(_QWORD *)(v62 + 8);
                  v68 = v66;
                  if ( v67 )
                  {
                    --v67;
                    v68 = v66 + v67;
                    v65 = v66 + v67 + 1;
                  }
                  v69 = *(char **)v62;
                  if ( *(_QWORD *)(v62 + 16) < v65 )
                  {
                    v140 = v67;
                    v130 = v68;
                    v127 = v65;
                    v91 = qvector_reserve(v62, (__int64)v69, v65, 1);
                    *(_QWORD *)v62 = v91;
                    v67 = v140;
                    v69 = (char *)v91;
                    v68 = v130;
                    v65 = v127;
                  }
                  *(_QWORD *)(v62 + 8) = v65;
                  v69[v68] = 0;
                  memcpy((void *)(v67 + *(_QWORD *)v62), *(const void **)v70, v66);
LABEL_197:
                  v64 = ++v63;
                  if ( v63 >= (unsigned __int64)v159 )
                    goto LABEL_206;
                  v61 = v158;
                }
                v65 = *(_QWORD *)(v70 + 8);
                if ( !v65 )
                  goto LABEL_197;
LABEL_201:
                v66 = v65 - 1;
                if ( v65 == 1 )
                  goto LABEL_197;
                goto LABEL_192;
              }
LABEL_207:
              tinfo_size = get_tinfo_size();
              v73 = 1;
              v74 = 0;
              v75 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
              if ( v162.m128i_i32[1] > 0 )
                v73 = v162.m128i_i32[1];
              v76 = v73;
              v129 = v73 != tinfo_size;
              v136 = v135 | (v129 && v162.m128i_i32[1] > 1);
              v77 = v173;
              do
              {
                *((_DWORD *)v77 + 1) = -1;
                v77 += 80;
                *((_WORD *)v77 - 40) = 0;
                *((_WORD *)v77 - 39) = 0;
                *((_QWORD *)v77 - 9) = 0;
                *((__m128i *)v77 - 4) = v75;
                *((_QWORD *)v77 - 6) = 0;
                *(_OWORD *)(v77 - 40) = 0;
                *((_DWORD *)v77 - 6) = 0;
                *((_QWORD *)v77 - 2) = 0;
                *((_DWORD *)v77 - 2) = 0;
              }
              while ( &v186 != v77 );
              if ( v136 )
              {
                v101 = 5;
                if ( v73 == tinfo_size )
                  v101 = 34;
                v139 = v101;
              }
              else
              {
                v78 = 6;
                if ( v73 == tinfo_size )
                  v78 = 36;
                v139 = v78;
              }
              if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
              {
                v104 = *(_QWORD *)(a2 + 72);
                if ( (_QWORD)v157 || *(_BYTE *)(a2 + 64) != 8 || v139 != *(_DWORD *)(v104 + 284) )
                {
                  v105 = *(_QWORD *)(v104 + 24);
                  sub_125180((unsigned __int8 *)v173, (unsigned __int8 *)v105);
                  v175 = *(_QWORD *)(v105 + 16);
                  copy_tinfo_t();
                  if ( &dest != (void **)(v105 + 32) )
                  {
                    v106 = *(_QWORD *)(v105 + 40);
                    if ( v106 && (v107 = v106 - 1, v106 != 1) )
                    {
                      srcb = *(void **)(v105 + 32);
                      if ( v178 < v106 )
                      {
                        v143 = v106 - 1;
                        v142 = *(_QWORD *)(v105 + 40);
                        dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v106, 1);
                        v107 = v143;
                        v106 = v142;
                      }
                      v177 = v106;
                      v141 = v106;
                      memmove(dest, srcb, v107);
                      *((char *)dest + v141 - 1) = 0;
                    }
                    else
                    {
                      v177 = 0;
                    }
                  }
                  copy_argloc();
                  v179 = *(_DWORD *)(v105 + 72);
LABEL_221:
                  if ( v76 == tinfo_size )
                  {
                    sub_32C540(v164, v123, (_QWORD *)(*(_QWORD *)(a1 + 480) + 376LL));
                  }
                  else
                  {
                    *(_QWORD *)v164 = 0;
                    copy_tinfo_t();
                  }
                  copy_tinfo_t();
                  clear_tinfo_t();
                  srca = sub_331FE0(*(char **)v62, nullptr);
                  if ( v76 == tinfo_size && (v163 & 0x10) != 0 )
                  {
                    v180[0] = 6;
                    v81 = *((_QWORD *)&v160 + 1);
                    v82 = (unsigned int)(8 * *(_DWORD *)(v123 + 84));
                    v83 = (int)v82;
                    if ( (unsigned __int64)(int)v82 <= 0x3F )
                    {
                      v83 = ~(-1LL << (8 * *(_BYTE *)(v123 + 84)));
                      v81 = v83 & *((_QWORD *)&v160 + 1);
                    }
                    v182 = (char *)v81;
                    sub_11C950(v180, v123, v83, v82, 0.0);
                    if ( (_BYTE)v184 )
                      v184 |= 0x40uLL;
                  }
                  else
                  {
                    v180[0] = 3;
                    v102 = *(_QWORD *)(v62 + 8);
                    v103 = *(char **)v62;
                    if ( v102 < *(_QWORD *)(v62 + 16) )
                    {
                      if ( v103 )
                      {
                        if ( v102 )
                        {
                          v103 = (char *)qrealloc();
                          if ( !v103 )
                            v103 = *(char **)v62;
                        }
                      }
                    }
                    v74 = 0;
                    *(_QWORD *)v62 = 0;
                    *(_OWORD *)(v62 + 8) = 0;
                    v182 = v103;
                  }
                  v181 = *(_DWORD *)(v123 + 84);
                  v183 = v160;
                  if ( v136 )
                  {
                    if ( (v163 & 2) != 0 )
                    {
                      if ( v162.m128i_i32[1] <= 1 )
                        goto LABEL_234;
                      goto LABEL_232;
                    }
                    if ( v162.m128i_i32[1] > 1 )
                    {
LABEL_232:
                      if ( v129 )
                        srca *= v162.m128i_i32[1];
LABEL_234:
                      *(_QWORD *)v164 = 7;
                      copy_tinfo_t();
                      clear_tinfo_t();
                      v84 = *(_QWORD *)(a2 + 24);
                      v85 = get_tinfo_size();
                      sub_120A10((__int64)v185, (unsigned __int64 *)v123, srca, v85, v84, 2);
                      if ( v76 != tinfo_size )
                        copy_tinfo_t();
                      v86 = 3;
                      if ( v139 == 2 )
                        goto LABEL_237;
                      goto LABEL_327;
                    }
                    *(_QWORD *)v164 = 7;
                    copy_tinfo_t();
                    clear_tinfo_t();
                    if ( *(_DWORD *)(v158 + 32) != -1 )
                    {
                      v113 = *(_QWORD *)(a2 + 24);
                      v114 = get_tinfo_size();
                      sub_120A10((__int64)v180, (unsigned __int64 *)v123, *(int *)(v158 + 32), v114, v113, 1);
                      v139 = 2;
                      goto LABEL_234;
                    }
                    if ( !under_debugger )
                      sub_383060(0xCD8Du, *(double *)v74.m128_u64);
LABEL_424:
                    BUG();
                  }
                  if ( v173[0] != 10 || *v174 != 5 )
                  {
LABEL_326:
                    v86 = 2;
LABEL_327:
                    copy_tinfo_t();
                    sub_32C700(v123, (unsigned int)&v184, 1);
LABEL_237:
                    sub_186120(a1, a2, (__int64)&v151, v86, v173, v139, v74, (__m128)v75);
                    goto LABEL_238;
                  }
                  sub_32F330((__int64)v174, &v145);
                  v108 = *(_QWORD **)(a1 + 64);
                  v109 = v145;
                  v74 = 0;
                  v146 = 0;
                  v110 = *(_DWORD *)(v108[188] + 80LL);
                  v166 = 0;
                  v169 = 1;
                  v170 = -1;
                  v171 = 0;
                  v172 = 0;
                  memset(v164, 0, sizeof(v164));
                  v165 = 0;
                  v167 = 0;
                  v168 = 0;
                  v137 = sub_1D0250(v108, (__m128i *)v164, v145, nullptr, &v146);
                  if ( sub_1CFD50(v108, v109) < 0 )
                  {
LABEL_361:
                    clear_tinfo_t();
                    clear_tinfo_t();
                    if ( v166 )
                    {
                      *(_QWORD *)&v167 = 0;
                      qfree(v166);
                    }
                    if ( *(_QWORD *)&v164[16] )
                    {
                      *(_QWORD *)&v165 = 0;
                      qfree(*(__int64 *)&v164[16]);
                    }
                    goto LABEL_326;
                  }
                  v111 = (srca + v110 - 1 + 1) & -v110;
                  if ( v137 != -1 )
                  {
                    if ( *(_QWORD *)&v164[8] >> 3 >= v111 || (get_tinfo_property() & 0x2F) == 0xD )
                      goto LABEL_361;
                    if ( (_QWORD)v165 )
                    {
                      v120 = *(const char **)&v164[16];
                      if ( !*(_QWORD *)&v164[16]
                        || !strncmp(*(const char **)&v164[16], "arg_", 4u)
                        || !strncmp(v120, "var_", 4u) )
                      {
                        goto LABEL_396;
                      }
                    }
                    else
                    {
                      v120 = s1;
                      if ( !s1 )
                        goto LABEL_396;
                    }
                    if ( strncmp(v120, "anonymous", 9u) )
                      goto LABEL_361;
                  }
LABEL_396:
                  get_tinfo_property4();
                  get_func();
                  if ( v137 != -1 )
                  {
                    v121 = _mm_load_si128((const __m128i *)v164);
                    v75 = _mm_srli_si128(v121, 8);
                    v74 = (__m128)_mm_add_epi64(v121, v75);
                  }
                  delete_frame_members();
                  sub_32C270(v147, v108[188], 1);
                  if ( v111 != 1 )
                  {
                    v149 = 0;
                    v150 = v111;
                    v148 = 0;
                    copy_tinfo_t();
                    create_tinfo();
                    clear_tinfo_t();
                  }
                  if ( v137 == -1 )
                    add_frame_member();
                  else
                    set_frame_member_type();
                  clear_tinfo_t();
                  goto LABEL_361;
                }
              }
              else if ( src || (unsigned __int8)sub_185AA0(a1, a2, 0.0, (__m128)v75) )
              {
                sub_11CA10(v173, (char *)(a2 + 64));
                if ( *(_DWORD *)a2 != 1 )
                  sub_11C950((unsigned __int8 *)v173, v123, v79, v80, 0.0);
                v175 = *(_QWORD *)(a2 + 24);
                goto LABEL_221;
              }
              v131 = 0;
LABEL_238:
              v87 = &v186;
              do
              {
                v87 -= 80;
                cleanup_argloc();
                v88 = *((_QWORD *)v87 + 4);
                if ( v88 )
                {
                  *((_QWORD *)v87 + 5) = 0;
                  qfree(v88);
                }
                clear_tinfo_t();
                sub_11CDA0((__int64)v87);
              }
              while ( v87 != v173 );
              goto LABEL_68;
            }
            sub_183D60(v59, v60, *(_DWORD *)(v59 + 24));
            goto LABEL_204;
          }
        }
        else if ( v144 > 9 )
        {
          if ( (unsigned int)(*(_DWORD *)a2 - 56) > 1 )
          {
            if ( *(_BYTE *)(a2 + 64) != 6 )
            {
LABEL_271:
              if ( !v135 )
                goto LABEL_187;
              v92 = v135;
LABEL_273:
              if ( (v51 & 1) != 0 && v162.m128i_i32[1] > 1 )
                goto LABEL_67;
              goto LABEL_275;
            }
LABEL_305:
            if ( (get_flags_ex() & 0x400) != 0 )
            {
              if ( !v135 )
                goto LABEL_187;
              v92 = v135;
              goto LABEL_308;
            }
            v92 = 0;
            if ( v135 )
            {
LABEL_308:
              if ( v50 )
                goto LABEL_309;
              v51 = v163;
              goto LABEL_273;
            }
LABEL_179:
            if ( v128 < 0 && (_QWORD)v157 )
            {
              if ( !(unsigned __int8)sub_183380(
                                       (unsigned int *)&v144,
                                       (int *)a2,
                                       *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL),
                                       *(double *)si128.m128i_i64) )
                goto LABEL_67;
              v57 = 0;
              v58 = 0;
              if ( (_QWORD)v157 != 1 )
              {
                do
                {
                  if ( v144 <= 0 )
                    break;
                  if ( !(unsigned __int8)sub_183380(
                                           (unsigned int *)&v144,
                                           *(int **)(*((_QWORD *)&v156 + 1) + 8 * v58),
                                           *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL),
                                           *(double *)si128.m128i_i64) )
                    goto LABEL_67;
                  v58 = ++v57;
                }
                while ( v57 < (unsigned __int64)(v157 - 1) );
              }
            }
            goto LABEL_187;
          }
          goto LABEL_345;
        }
        if ( v135 )
        {
          if ( v128 == -1 )
            goto LABEL_67;
          goto LABEL_276;
        }
        goto LABEL_179;
      }
LABEL_33:
      if ( (unsigned int)(*(_DWORD *)v7 - 56) > 1 )
        goto LABEL_34;
LABEL_98:
      v128 = v24;
      goto LABEL_34;
    }
LABEL_97:
    v24 = v157;
    goto LABEL_98;
  }
LABEL_28:
  if ( v11 != 1 )
  {
LABEL_29:
    if ( !v124 && (~(_BYTE)v163 & 0x21) == 0 )
      goto LABEL_14;
    v13 = 0;
    goto LABEL_31;
  }
LABEL_159:
  v54 = v162.m128i_i32[2];
  v55 = v162.m128i_i32[2];
  if ( v162.m128i_i32[2] < SHIDWORD(v151) / 2 )
    goto LABEL_14;
  if ( v124 )
  {
    if ( a2 == v7 )
    {
      v89 = v157;
      v100 = v128;
      if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
        v100 = v157;
      v128 = v100;
      goto LABEL_299;
    }
    goto LABEL_162;
  }
  if ( (~(_BYTE)v163 & 0x21) != 0 )
  {
    if ( a2 == v7 )
    {
      v89 = v157;
      if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
      {
        v128 = v157;
        v55 = v162.m128i_i32[2];
      }
      goto LABEL_299;
    }
LABEL_162:
    v13 = 1;
LABEL_31:
    v22 = *((_QWORD *)&v156 + 1);
    v23 = v157 + 1;
    if ( *((_QWORD *)&v157 + 1) < (unsigned __int64)(v157 + 1) )
    {
      v21 = 0;
      goto LABEL_132;
    }
    *(_QWORD *)(*((_QWORD *)&v156 + 1) + 8 * v157) = v7;
    v24 = v157 + 1;
    *(_QWORD *)&v157 = v157 + 1;
    goto LABEL_33;
  }
  v21 = 0;
LABEL_247:
  if ( v55 )
    goto LABEL_14;
  v13 = HIDWORD(v151);
  if ( HIDWORD(v151) != 1 )
    goto LABEL_14;
  v52 = v157;
  if ( a2 != v7 )
  {
    v22 = *((_QWORD *)&v156 + 1);
    v23 = v157 + 1;
    if ( *((_QWORD *)&v157 + 1) < (unsigned __int64)(v157 + 1) )
      goto LABEL_132;
    goto LABEL_133;
  }
  if ( v21 )
  {
    v128 = v157;
  }
  else
  {
    v99 = v128;
    if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
      v99 = v157;
    v128 = v99;
  }
  if ( (_QWORD)v157 )
  {
    ++v144;
    v135 = 0;
    goto LABEL_122;
  }
LABEL_366:
  v112 = v162.m128i_i32[1];
  if ( v162.m128i_i32[1] <= 0 )
    v112 = 1;
  if ( v55 == v13 - v112 )
  {
    v135 = 0;
    v144 += v55 + 1;
    goto LABEL_118;
  }
LABEL_67:
  v131 = 0;
LABEL_68:
  clear_tinfo_t();
  v41 = v158;
  if ( v158 )
  {
    v42 = v159;
    if ( (_QWORD)v159 )
    {
      v43 = 0;
      do
      {
        v44 = (__int64 *)(v41 + 40 * v43);
        v45 = *v44;
        if ( *v44 )
        {
          v44[1] = 0;
          qfree(v45);
          v41 = v158;
        }
        ++v43;
      }
      while ( v42 != v43 );
    }
    *(_QWORD *)&v159 = 0;
    qfree(v41);
  }
  if ( *((_QWORD *)&v156 + 1) )
  {
    *(_QWORD *)&v157 = 0;
    qfree(*((__int64 *)&v156 + 1));
  }
  sub_11CDA0((__int64)&v155);
  sub_11CDA0((__int64)&v151);
  return v131;
}

