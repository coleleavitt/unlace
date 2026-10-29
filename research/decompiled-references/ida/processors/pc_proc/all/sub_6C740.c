__int64 __fastcall sub_6C740(
        __int64 a1,
        _QWORD *a2,
        __m128i *a3,
        __m128i *a4,
        unsigned __int64 *a5,
        __m128i *a6,
        int a7)
{
  __int16 v7; // ax
  _QWORD *v8; // r14
  __int64 *v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  unsigned __int16 v14; // r12
  __int64 result; // rax
  unsigned __int64 v16; // r15
  __int16 v17; // ax
  char v18; // r12
  __int64 func; // rax
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // r8
  unsigned __int64 v23; // r13
  _QWORD *v24; // rax
  unsigned __int64 v25; // r15
  __int64 v26; // r13
  int v27; // ebx
  int v28; // r15d
  unsigned __int64 item_end; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // r8
  _QWORD *v32; // rdx
  unsigned __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // r12
  _QWORD *v36; // rsi
  __int64 v37; // rax
  bool v38; // zf
  __int64 v39; // rcx
  int v40; // r12d
  __int64 insn; // r15
  bool v42; // al
  unsigned __int64 *v43; // rax
  __int64 v44; // r15
  bool v45; // al
  unsigned __int64 v46; // rdx
  int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // eax
  __int8 *v51; // rdx
  int v52; // edi
  void *v53; // rbp
  __m128i v54; // xmm0
  unsigned __int64 v55; // rbx
  __m128i v56; // xmm0
  unsigned __int64 v57; // rbx
  void *v58; // rbp
  __m128i v59; // xmm0
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int64 *v63; // rcx
  unsigned __int64 *v64; // rax
  int v65; // ecx
  char *v66; // rax
  char *v67; // rdx
  __int64 v68; // rax
  unsigned __int64 v69; // r9
  __int64 v70; // rsi
  unsigned __int16 v71; // ax
  int v72; // edx
  char *v73; // rdi
  char *v74; // rax
  int v75; // r9d
  int *v76; // rdx
  int *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 *v80; // r9
  char *v81; // rdx
  char *v82; // rax
  __int16 v83; // ax
  __int64 v84; // r12
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rdx
  char *v88; // rdi
  char *v89; // rax
  __int16 v90; // cx
  bool v91; // al
  int v92; // edi
  int v93; // ecx
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // ecx
  __int64 v97; // rax
  char v98; // al
  int v99; // ebx
  __int64 v100; // rax
  __int64 v101; // rsi
  __int64 v102; // rcx
  __int64 v103; // r12
  __int64 *v104; // rdx
  __int64 *v105; // rax
  __int64 v106; // rax
  __int16 v107; // ax
  __int64 v108; // rax
  __int64 v109; // rbx
  __int64 v111; // rsi
  __int64 v112; // rdx
  unsigned __int64 v113; // rbx
  __int64 v114; // rcx
  _QWORD *v115; // rax
  __int64 *v116; // rcx
  int v117; // eax
  __int64 *v118; // rdx
  __int16 v119; // ax
  int v120; // edx
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rax
  __m128i v126; // [rsp+10h] [rbp-348h] BYREF
  _QWORD *v127; // [rsp+20h] [rbp-338h]
  __m128i *v128; // [rsp+28h] [rbp-330h]
  __int64 *v129; // [rsp+30h] [rbp-328h]
  __int64 v130; // [rsp+38h] [rbp-320h]
  int v131; // [rsp+40h] [rbp-318h]
  __int32 v132; // [rsp+44h] [rbp-314h]
  __int64 *v133; // [rsp+48h] [rbp-310h]
  unsigned __int64 v134; // [rsp+58h] [rbp-300h] BYREF
  __int64 v135; // [rsp+60h] [rbp-2F8h] BYREF
  __int128 v136; // [rsp+68h] [rbp-2F0h]
  char *v137; // [rsp+78h] [rbp-2E0h]
  __int128 v138; // [rsp+80h] [rbp-2D8h]
  int v139; // [rsp+90h] [rbp-2C8h]
  unsigned __int64 v140; // [rsp+A0h] [rbp-2B8h] BYREF
  __int64 v141; // [rsp+A8h] [rbp-2B0h]
  __int64 v142; // [rsp+B0h] [rbp-2A8h]
  __int64 v143; // [rsp+B8h] [rbp-2A0h]
  __m128i v144; // [rsp+C0h] [rbp-298h] BYREF
  __m128i v145; // [rsp+D0h] [rbp-288h] BYREF
  __m128i v146; // [rsp+E0h] [rbp-278h] BYREF
  __m128i v147; // [rsp+F0h] [rbp-268h] BYREF
  __m128i v148; // [rsp+100h] [rbp-258h] BYREF
  __m128i v149; // [rsp+110h] [rbp-248h] BYREF
  __m128i v150; // [rsp+120h] [rbp-238h] BYREF
  __m128i v151; // [rsp+130h] [rbp-228h] BYREF
  __m128i v152; // [rsp+140h] [rbp-218h] BYREF
  __int64 v153; // [rsp+150h] [rbp-208h] BYREF
  void *v154; // [rsp+158h] [rbp-200h]
  __int128 v155; // [rsp+160h] [rbp-1F8h]
  void *src; // [rsp+170h] [rbp-1E8h]
  __int128 v157; // [rsp+178h] [rbp-1E0h]
  _DWORD *v158; // [rsp+188h] [rbp-1D0h]
  unsigned __int64 v159; // [rsp+190h] [rbp-1C8h]
  __int64 v160; // [rsp+198h] [rbp-1C0h]
  __int32 v161; // [rsp+1A0h] [rbp-1B8h]
  char v162; // [rsp+1A4h] [rbp-1B4h]
  __int128 v163; // [rsp+1B0h] [rbp-1A8h] BYREF
  unsigned __int64 v164; // [rsp+1C0h] [rbp-198h]
  __int64 v165; // [rsp+1C8h] [rbp-190h]
  __int64 v166; // [rsp+1D0h] [rbp-188h]
  _QWORD v167[2]; // [rsp+1D8h] [rbp-180h] BYREF
  __int64 v168; // [rsp+1E8h] [rbp-170h]
  char v169; // [rsp+1F8h] [rbp-160h]
  char v170; // [rsp+1F9h] [rbp-15Fh]
  char v171; // [rsp+201h] [rbp-157h]
  char v172; // [rsp+205h] [rbp-153h]
  unsigned __int16 v173; // [rsp+206h] [rbp-152h]
  __int64 *v174; // [rsp+210h] [rbp-148h]
  char v175; // [rsp+220h] [rbp-138h]
  char v176; // [rsp+221h] [rbp-137h]
  char v177; // [rsp+2C1h] [rbp-97h]
  _QWORD v178[8]; // [rsp+318h] [rbp-40h] BYREF

  v178[0] = __readfsqword(0x28u);
  if ( (*((_BYTE *)a2 + 28) & 0x10) == 0 )
    return 0;
  v7 = *((_WORD *)a2 + 12);
  v8 = a2;
  v10 = (__int64 *)a4;
  v134 = -1;
  if ( v7 == 88 )
  {
    if ( *((_BYTE *)a2 + 41) != 1 )
      return 0;
    v16 = a2[2];
    v17 = *((_WORD *)a2 + 13);
    v141 = -1;
    v126.m128i_i16[0] = v17;
    v140 = v16;
    v142 = -1;
    v143 = -1;
    v18 = sub_4F6C0(a1, (__int64)&v140, (__int64 *)&v134, a2);
    func = get_func();
    if ( func )
    {
      v20 = v134;
      if ( v134 >= *(_QWORD *)(func + 8) || !v18 )
        return 0;
    }
    else
    {
      if ( !v18 )
        return 0;
      v20 = v134;
    }
    v21 = v126.m128i_u16[0];
    v126.m128i_i8[0] = 1;
    v22 = v167;
    v23 = v20 - ((v20 - (v21 + v16)) & 0xFFFFFFFFFFFFFFFCLL);
  }
  else
  {
    if ( v7 != 85 )
      return 0;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    v12 = a2[7] + 16LL * *a2;
    if ( v12 != v11 && (v11 &= v12, v12 == -1) )
    {
      v13 = a2[2];
      v141 = -1;
      v11 = -1;
      v142 = -1;
      v14 = *((_WORD *)a2 + 13);
      v140 = v13;
      v143 = -1;
    }
    else
    {
      v13 = a2[2];
      v134 = v11;
      v141 = -1;
      v14 = *((_WORD *)a2 + 13);
      v140 = v13;
      v142 = -1;
      v143 = -1;
      if ( v11 < v13 )
      {
LABEL_7:
        get_func();
        return 0;
      }
    }
    v164 = -1;
    v165 = 0;
    v30 = v167;
    v166 = 0;
    v163 = -1;
    do
    {
      *(_WORD *)v30 = 0;
      v30 += 5;
      *((_WORD *)v30 - 19) = 0;
      *((_WORD *)v30 - 18) = 0;
      *((_DWORD *)v30 - 2) = 0;
      *((_WORD *)v30 - 17) = 0;
      *((_OWORD *)v30 - 2) = 0;
      *(v30 - 2) = 0;
    }
    while ( v178 != v30 );
    v127 = (_QWORD *)v11;
    v126.m128i_i64[0] = (__int64)&v163;
    v128 = a4;
    do
    {
      if ( (unsigned __int64)a3 >= v164 || decode_prev_insn() == -1 )
      {
        v31 = v167;
        v32 = v127;
        v8 = a2;
        v10 = (__int64 *)v128;
        goto LABEL_36;
      }
    }
    while ( (_WORD)v165 == 122 || (_WORD)v165 == 450 );
    v31 = v167;
    v32 = v127;
    v8 = a2;
    v10 = (__int64 *)v128;
    if ( (_WORD)v165 == 210 && BYTE1(v167[0]) == 1 && HIWORD(v167[0]) == 16 && v171 == 1 && v173 == 16 )
      v141 = v164;
LABEL_36:
    if ( v141 == -1 )
      goto LABEL_7;
    v23 = v14 + v13;
    if ( v23 < (unsigned __int64)v32 )
    {
      v126.m128i_i64[0] = v23;
      v33 = (unsigned __int64)v32;
      v127 = v167;
      do
      {
        if ( !(unsigned int)decode_insn()
          || (_WORD)v165 != 451 && (_WORD)v165 != 444 && (unsigned __int16)(v165 - 554) > 1u )
        {
          goto LABEL_7;
        }
      }
      while ( v164 + WORD1(v165) < v33 );
      v23 = v126.m128i_i64[0];
      v31 = v127;
    }
    v126.m128i_i64[0] = (__int64)v31;
    v79 = get_func();
    v22 = (_QWORD *)v126.m128i_i64[0];
    if ( v79 && v134 >= *(_QWORD *)(v79 + 8) )
      return 0;
    v126.m128i_i8[0] = 0;
  }
  v164 = -1;
  v24 = v22;
  v165 = 0;
  v166 = 0;
  v163 = -1;
  do
  {
    *(_WORD *)v24 = 0;
    v24 += 5;
    *((_WORD *)v24 - 19) = 0;
    *((_WORD *)v24 - 18) = 0;
    *((_DWORD *)v24 - 2) = 0;
    *((_WORD *)v24 - 17) = 0;
    *((_OWORD *)v24 - 2) = 0;
    *(v24 - 2) = 0;
  }
  while ( v178 != v24 );
  v25 = v23;
  if ( v23 >= v134 )
  {
    v131 = -1;
    v132 = 0;
LABEL_163:
    v130 = 0;
    goto LABEL_46;
  }
  v127 = (_QWORD *)v23;
  v128 = a3;
  v26 = 0x7FFFFFFFFFFFFFFFLL;
  v27 = -1;
  v129 = v10;
  v28 = 0;
  while ( 1 )
  {
    if ( !(unsigned int)decode_insn() )
      return 0;
    if ( (_WORD)v165 != 451 && (_WORD)v165 != 444 && (unsigned __int16)(v165 - 554) > 1u )
      break;
    if ( BYTE1(v167[0]) == 4 )
    {
      v27 = HIWORD(v167[0]);
      if ( v26 > v168 )
        v26 = v168;
      ++v28;
    }
    item_end = get_item_end();
    if ( item_end >= v134 )
    {
      v131 = v27;
      v10 = v129;
      v130 = v26;
      a3 = v128;
      v23 = (unsigned __int64)v127;
      v132 = v28;
      v25 = item_end;
      goto LABEL_45;
    }
  }
  v131 = v27;
  v10 = v129;
  v130 = v26;
  a3 = v128;
  v132 = v28;
  v23 = (unsigned __int64)v127;
  v25 = v164;
LABEL_45:
  if ( v130 == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_163;
LABEL_46:
  v134 = v25;
  if ( v10 )
  {
    v34 = v10[1];
    v35 = v8[2];
    v36 = (_QWORD *)*v10;
    if ( v10[2] < (unsigned __int64)(v34 + 1) )
    {
      v95 = qvector_reserve();
      *v10 = v95;
      v36 = (_QWORD *)v95;
      v34 = v10[1];
    }
    v36[v34] = v35;
    v37 = v10[1];
    v38 = v126.m128i_i8[0] == 0;
    v39 = v37 + 1;
    v10[1] = v37 + 1;
    if ( !v38 )
    {
      v135 = 0;
      v40 = *((unsigned __int16 *)v8 + 23);
      v137 = nullptr;
      v133 = &v135;
      v136 = 0;
      v138 = 0;
      v135 = qvector_reserve();
      *(_DWORD *)(v135 + 4 * v136) = v40;
      *(_QWORD *)&v136 = v136 + 1;
      v139 = a7;
      v127 = (_QWORD *)get_func();
      v128 = &v144;
      while ( 1 )
      {
        insn = decode_prev_insn();
        if ( insn == -1 || (!v127 ? (v42 = get_func() == 0) : (v42 = (int)get_func_chunknum() >= 0), !v42) )
        {
LABEL_61:
          if ( v137 )
          {
            *(_QWORD *)&v138 = 0;
            qfree();
          }
          if ( v135 )
          {
            *(_QWORD *)&v136 = 0;
            qfree();
          }
          goto LABEL_65;
        }
        v43 = &v140;
        while ( *v43 != insn )
        {
          if ( v128 == (__m128i *)++v43 )
          {
            if ( (_WORD)v165 != 122 && (_WORD)v165 != 209 )
              goto LABEL_60;
            switch ( BYTE1(v167[0]) )
            {
              case 2:
                if ( !v169 )
                {
                  v120 = WORD2(v165) & 0x1018;
                  if ( v120 == 4096 || v120 == 8 )
                  {
                    switch ( HIWORD(v167[0]) )
                    {
                      case 0:
                      case 2:
                        v65 = 6;
                        goto LABEL_120;
                      case 1:
                      case 3:
                        v65 = 7;
                        goto LABEL_120;
                      case 4:
                      case 5:
                      case 6:
                      case 7:
                        goto LABEL_60;
                      default:
                        sub_6A2A0();
LABEL_362:
                        sub_6A2A0();
LABEL_363:
                        sub_6A2A0();
                        return result;
                    }
                  }
                  goto LABEL_60;
                }
                v98 = (v170 >> 3) & 7;
                if ( (v165 & 0x1000000000LL) != 0 && (v166 & 0x200) != 0 )
                {
                  v65 = v98 | 8;
                }
                else
                {
                  v65 = v98;
                  if ( v98 == 4 )
                    goto LABEL_60;
                }
LABEL_120:
                v66 = (char *)v135;
                v67 = (char *)(v135 + 4 * v136);
                if ( (char *)v135 == v67 )
                  goto LABEL_60;
                while ( *(_DWORD *)v66 != v65 )
                {
                  v66 += 4;
                  if ( v67 == v66 )
                    goto LABEL_60;
                }
                break;
              case 4:
                if ( HIWORD(v167[0]) != 4 && (v139 == 1 || v139 != HIWORD(v167[0])) )
                  goto LABEL_60;
                if ( !v168 )
                  goto LABEL_60;
                v66 = v137;
                v67 = &v137[8 * v138];
                if ( v137 == v67 )
                  goto LABEL_60;
                while ( v168 != *(_QWORD *)v66 )
                {
                  v66 += 8;
                  if ( v67 == v66 )
                    goto LABEL_60;
                }
                break;
              case 1:
                v65 = HIWORD(v167[0]);
                goto LABEL_120;
              default:
                goto LABEL_60;
            }
            if ( v67 == v66 )
              goto LABEL_60;
            break;
          }
        }
        v68 = v10[1];
        v69 = v164;
        v70 = *v10;
        if ( v10[2] < (unsigned __int64)(v68 + 1) )
        {
          v129 = (__int64 *)v164;
          v78 = qvector_reserve();
          *v10 = v78;
          v70 = v78;
          v69 = (unsigned __int64)v129;
          v68 = v10[1];
        }
        *(_QWORD *)(v70 + 8 * v68) = v69;
        v71 = v165;
        ++v10[1];
        if ( v71 != 209 )
        {
          if ( BYTE1(v167[0]) == 2 )
          {
            if ( !v169 )
            {
              v96 = WORD2(v165) & 0x1018;
              if ( v96 == 4096 || v96 == 8 )
              {
                switch ( HIWORD(v167[0]) )
                {
                  case 0:
                  case 2:
                    v72 = 6;
                    goto LABEL_132;
                  case 1:
                  case 3:
                    v72 = 7;
                    goto LABEL_132;
                  case 4:
                  case 5:
                  case 6:
                  case 7:
                    goto LABEL_138;
                  default:
                    goto LABEL_362;
                }
              }
              goto LABEL_138;
            }
            LOBYTE(v72) = (v170 >> 3) & 7;
            if ( (v165 & 0x1000000000LL) != 0 && (v166 & 0x200) != 0 )
            {
              LOBYTE(v72) = v72 | 8;
              v90 = (char)v72;
              if ( v71 > 0x5C0u )
              {
                if ( v71 > 0x5F1u )
                {
                  if ( (unsigned __int16)(v71 - 1532) > 0xFu )
                    goto LABEL_210;
                }
                else if ( v71 <= 0x5EDu )
                {
                  goto LABEL_210;
                }
              }
              else if ( v71 <= 0x5BCu )
              {
                if ( v71 > 0x378u )
                {
                  if ( (unsigned __int16)(v71 - 993) > 3u )
                    goto LABEL_210;
                }
                else if ( v71 <= 0x374u )
                {
LABEL_210:
                  v72 = (char)v72;
LABEL_132:
                  v73 = (char *)v135;
                  v74 = (char *)(v135 + 4 * v136);
                  if ( (char *)v135 != v74 )
                  {
                    while ( *(_DWORD *)v73 != v72 )
                    {
                      v73 += 4;
                      if ( v74 == v73 )
                        goto LABEL_138;
                    }
                    if ( v74 != v73 )
                    {
                      memmove(v73, v73 + 4, v74 - v73 - 4);
                      *(_QWORD *)&v136 = v136 - 1;
                    }
                  }
                  goto LABEL_138;
                }
              }
LABEL_324:
              if ( (v177 & 0x10) != 0 )
                v90 |= 0x10u;
              v119 = sub_23710((__int64)&v163, v90);
              v72 = v119;
              if ( v119 == 4 || v119 == -1 )
                goto LABEL_138;
              goto LABEL_132;
            }
            v90 = (char)v72;
            if ( v71 > 0x5C0u )
            {
              if ( v71 > 0x5F1u )
              {
                if ( (unsigned __int16)(v71 - 1532) <= 0xFu )
                  goto LABEL_324;
              }
              else if ( v71 > 0x5EDu )
              {
                goto LABEL_324;
              }
            }
            else
            {
              if ( v71 > 0x5BCu )
                goto LABEL_324;
              if ( v71 > 0x378u )
              {
                if ( (unsigned __int16)(v71 - 993) <= 3u )
                  goto LABEL_324;
              }
              else if ( v71 > 0x374u )
              {
                goto LABEL_324;
              }
            }
            v72 = (char)v72;
            if ( (char)v72 == 4 )
              goto LABEL_138;
            goto LABEL_132;
          }
          if ( BYTE1(v167[0]) != 4 )
          {
            if ( BYTE1(v167[0]) != 1 )
              goto LABEL_138;
            v72 = HIWORD(v167[0]);
            goto LABEL_132;
          }
          if ( HIWORD(v167[0]) == 4 || v139 != 1 && v139 == HIWORD(v167[0]) )
          {
            if ( v168 )
            {
              v88 = v137;
              v89 = &v137[8 * v138];
              if ( v137 != v89 )
              {
                while ( v168 != *(_QWORD *)v88 )
                {
                  v88 += 8;
                  if ( v89 == v88 )
                    goto LABEL_138;
                }
                if ( v89 != v88 )
                {
                  memmove(v88, v88 + 8, v89 - v88 - 8);
                  *(_QWORD *)&v138 = v138 - 1;
                }
              }
            }
          }
        }
LABEL_138:
        switch ( v171 )
        {
          case 2:
            if ( !v175 )
            {
              if ( (WORD2(v165) & 0x1018) == 0x1000 || (WORD2(v165) & 0x1018) == 8 )
              {
                switch ( v173 )
                {
                  case 0u:
                  case 2u:
                    v75 = 6;
                    goto LABEL_142;
                  case 1u:
                  case 3u:
                    v75 = 7;
                    goto LABEL_142;
                  case 4u:
                  case 5u:
                  case 6u:
                  case 7u:
                    goto LABEL_60;
                  default:
                    goto LABEL_363;
                }
              }
              goto LABEL_60;
            }
            LOBYTE(v75) = (v176 >> 3) & 7;
            if ( (v165 & 0x1000000000LL) != 0 && (v166 & 0x200) != 0 )
            {
              LOBYTE(v75) = v75 | 8;
              v83 = (char)v75;
              if ( (unsigned __int16)v165 > 0x5C0u )
              {
                if ( (unsigned __int16)v165 > 0x5F1u )
                {
                  if ( (unsigned __int16)(v165 - 1532) <= 0xFu )
                  {
LABEL_283:
                    if ( (v177 & 0x10) != 0 )
                      v83 |= 0x10u;
                    v107 = sub_23710((__int64)&v163, v83);
                    v75 = v107;
                    if ( v107 == 4 || v107 == -1 )
                      goto LABEL_60;
                    break;
                  }
                }
                else if ( (unsigned __int16)v165 > 0x5EDu )
                {
                  goto LABEL_283;
                }
              }
              else
              {
                if ( (unsigned __int16)v165 > 0x5BCu )
                  goto LABEL_283;
                if ( (unsigned __int16)v165 > 0x378u )
                {
                  if ( (unsigned __int16)(v165 - 993) <= 3u )
                    goto LABEL_283;
                }
                else if ( (unsigned __int16)v165 > 0x374u )
                {
                  goto LABEL_283;
                }
              }
              v75 = (char)v75;
            }
            else
            {
              v83 = (char)v75;
              if ( (unsigned __int16)v165 > 0x5C0u )
              {
                if ( (unsigned __int16)v165 > 0x5F1u )
                {
                  if ( (unsigned __int16)(v165 - 1532) <= 0xFu )
                    goto LABEL_283;
                }
                else if ( (unsigned __int16)v165 > 0x5EDu )
                {
                  goto LABEL_283;
                }
              }
              else
              {
                if ( (unsigned __int16)v165 > 0x5BCu )
                  goto LABEL_283;
                if ( (unsigned __int16)v165 > 0x378u )
                {
                  if ( (unsigned __int16)(v165 - 993) <= 3u )
                    goto LABEL_283;
                }
                else if ( (unsigned __int16)v165 > 0x374u )
                {
                  goto LABEL_283;
                }
              }
              v75 = (char)v75;
              if ( (char)v75 == 4 )
                goto LABEL_60;
            }
            break;
          case 4:
            if ( v173 == 4 || v139 != 1 && v139 == v173 )
            {
              v80 = v174;
              if ( v174 )
              {
                v81 = &v137[8 * v138];
                if ( v137 == v81 )
                  goto LABEL_178;
                v82 = v137;
                while ( v174 != *(__int64 **)v82 )
                {
                  v82 += 8;
                  if ( v81 == v82 )
                    goto LABEL_178;
                }
                if ( v81 == v82 )
                {
LABEL_178:
                  if ( *((_QWORD *)&v138 + 1) < (unsigned __int64)(v138 + 1) )
                  {
                    v129 = v174;
                    v108 = qvector_reserve();
                    v80 = v129;
                    v137 = (char *)v108;
                    v81 = (char *)(v108 + 8 * v138);
                  }
                  *(_QWORD *)v81 = v80;
                  *(_QWORD *)&v138 = v138 + 1;
                }
              }
            }
            goto LABEL_60;
          case 1:
            v75 = v173;
            break;
          default:
            goto LABEL_60;
        }
LABEL_142:
        v76 = (int *)(v135 + 4 * v136);
        if ( (int *)v135 == v76 )
          goto LABEL_147;
        v77 = (int *)v135;
        while ( v75 != *v77 )
        {
          if ( v76 == ++v77 )
            goto LABEL_147;
        }
        if ( v76 == v77 )
        {
LABEL_147:
          if ( *((_QWORD *)&v136 + 1) < (unsigned __int64)(v136 + 1) )
          {
            LODWORD(v129) = v75;
            v97 = qvector_reserve();
            v75 = (int)v129;
            v135 = v97;
            v76 = (int *)(v97 + 4 * v136);
          }
          *v76 = v75;
          *(_QWORD *)&v136 = v136 + 1;
        }
LABEL_60:
        if ( v143 == insn )
          goto LABEL_61;
      }
    }
    v84 = v141;
    v85 = *v10;
    if ( v10[2] < (unsigned __int64)(v37 + 2) )
    {
      v106 = qvector_reserve();
      v39 = v10[1];
      *v10 = v106;
      v85 = v106;
    }
    *(_QWORD *)(v85 + 8 * v39) = v84;
    ++v10[1];
LABEL_65:
    v153 = 0;
    v154 = nullptr;
    src = nullptr;
    v155 = 0;
    v157 = 0;
    v144 = 0;
    sub_5A6A0((unsigned int *)&v153);
    v161 = 0;
    v162 = 0;
    v158 = v154;
    v160 = 0xFFFFFFFFLL;
    v159 = v155;
    if ( (unsigned __int64)v155 > 8 )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v145 = (__m128i)-1LL;
    v146 = (__m128i)-1LL;
    v147 = (__m128i)-1LL;
    v148 = (__m128i)-1LL;
    v149 = 0;
    v150 = 0;
    v151 = 0;
    v152 = 0;
    LOBYTE(v127) = 0;
    v44 = get_func();
    if ( (unsigned __int64)a3 < v140 )
    {
      while ( (unsigned int)decode_insn() )
      {
        v45 = v44 ? (int)get_func_chunknum() >= 0 : get_func() == 0;
        if ( !v45 )
          break;
        v46 = v164;
        if ( (_WORD)v165 == 122 && v171 == 1 && (v167[0] & 0xFF000000FF00LL) == 0x70000000400LL && v172 == 7 && v159 )
        {
          v47 = 0;
          v48 = 0;
          do
          {
            if ( v158[v48] == v173 )
              break;
            v48 = ++v47;
          }
          while ( v47 < v159 );
          if ( v48 == v159 )
          {
            v46 = v164;
          }
          else
          {
            v49 = v47;
            v46 = v164;
            if ( v145.m128i_i64[v49] == -1 )
            {
              *((_QWORD *)&v144 + v49 + 2) = v164;
              LOBYTE(v127) = v45;
              v149.m128i_i64[v49] = v168;
              LODWORD(v160) = HIWORD(v167[0]);
            }
          }
        }
        if ( v46 + WORD1(v165) >= v140 )
          goto LABEL_109;
      }
      if ( src )
      {
        *(_QWORD *)&v157 = 0;
        qfree();
      }
      if ( v154 )
      {
        *(_QWORD *)&v155 = 0;
        qfree();
      }
      return 0;
    }
LABEL_109:
    while ( v23 < v134 )
    {
      v62 = v10[1];
      v63 = (unsigned __int64 *)(*v10 + 8 * v62);
      if ( (unsigned __int64 *)*v10 == v63 )
        goto LABEL_150;
      v64 = (unsigned __int64 *)*v10;
      while ( *v64 != v23 )
      {
        if ( v63 == ++v64 )
          goto LABEL_150;
      }
      if ( v63 == v64 )
      {
LABEL_150:
        if ( v10[2] < (unsigned __int64)(v62 + 1) )
        {
          v86 = qvector_reserve();
          v87 = v10[1];
          *v10 = v86;
          v63 = (unsigned __int64 *)(v86 + 8 * v87);
        }
        *v63 = v23;
        ++v10[1];
      }
      v23 = get_item_end();
    }
    if ( !(_BYTE)v127 )
    {
      while ( (unsigned int)decode_insn() )
      {
        v91 = v44 ? (int)get_func_chunknum() >= 0 : get_func() == 0;
        if ( !v91
          || (_WORD)v165 != 122
          || v171 != 1
          || (v167[0] & 0xFF000000FF00LL) != 0x70000000400LL
          || v172 != 7
          || !v159 )
        {
          break;
        }
        v93 = 0;
        v94 = 0;
        do
        {
          if ( v158[v94] == v173 )
            break;
          v94 = ++v93;
        }
        while ( v93 < v159 );
        if ( v159 == v94 || v145.m128i_i64[v93] != -1 )
          break;
        *((_QWORD *)&v144 + v93 + 2) = v164;
        v149.m128i_i64[v93] = v168;
        LODWORD(v160) = HIWORD(v167[0]);
        get_item_end();
      }
    }
    if ( v126.m128i_i8[0] )
    {
      v109 = get_func();
      while ( decode_prev_insn() != -1 )
      {
        if ( !(v109 ? (int)get_func_chunknum() >= 0 : get_func() == 0) )
          break;
        if ( (_WORD)v165 == 92 && HIWORD(v167[0]) == v131 )
        {
          v111 = *v10;
          v112 = v10[1];
          v113 = v164;
          v114 = *v10 + 8 * v112;
          if ( *v10 == v114 )
            goto LABEL_357;
          v115 = (_QWORD *)*v10;
          while ( v164 != *v115 )
          {
            if ( (_QWORD *)v114 == ++v115 )
              goto LABEL_357;
          }
          if ( (_QWORD *)v114 == v115 )
          {
LABEL_357:
            if ( v10[2] < (unsigned __int64)(v112 + 1) )
            {
              v123 = qvector_reserve();
              *v10 = v123;
              v111 = v123;
            }
            *(_QWORD *)(v111 + 8 * v10[1]++) = v113;
          }
          if ( v171 == 4 )
          {
            if ( a7 != -1 && v173 == a7 )
            {
              v162 = 1;
            }
            else if ( v173 != 4 )
            {
              goto LABEL_222;
            }
            v116 = v174;
            v144.m128i_i64[0] = (__int64)v174 + v130;
            if ( (_DWORD)v160 == v131 )
            {
              v117 = v159 - 1;
              v118 = &v144.m128i_i64[(int)v159 - 1];
              while ( 1 )
              {
                --v118;
                if ( v117 < 0 )
                  break;
                v118[11] += (__int64)v116;
                --v117;
              }
              LODWORD(v160) = -1;
            }
          }
          goto LABEL_222;
        }
      }
      goto LABEL_222;
    }
    if ( a7 != -1 && a7 == v131 )
      goto LABEL_220;
    if ( v131 != 4 )
      goto LABEL_222;
    if ( a7 == 4 )
LABEL_220:
      v162 = 1;
    v144.m128i_i64[0] = v130;
LABEL_222:
    v92 = v159 - 1;
    v161 = v132;
    v50 = v159 - 1;
    if ( (int)v159 - 1 >= 0 )
    {
      v51 = &v144.m128i_i8[8 * v92];
      while ( *((_QWORD *)v51 + 2) != -1 )
      {
        if ( v144.m128i_i64[1] )
        {
          do
          {
            if ( v144.m128i_i64[1] != *((_QWORD *)v51 + 10) + 8LL )
              break;
            --v50;
            v51 -= 8;
            if ( v50 == -1 )
              goto LABEL_269;
          }
          while ( *((_QWORD *)v51 + 2) != -1 );
          break;
        }
        --v50;
        v51 -= 8;
        if ( v50 == -1 )
        {
LABEL_269:
          v52 = v159;
          v50 = -1;
          goto LABEL_270;
        }
      }
    }
    v52 = v92 - v50;
    if ( v52 )
    {
LABEL_270:
      v99 = v50 + 1;
      v100 = v99;
      v101 = v149.m128i_i64[v99];
      if ( v101 + 8 * v52 == v144.m128i_i64[0] - 16 * (8 - v132) )
      {
        HIDWORD(v160) = v52;
        for ( v144.m128i_i64[1] = v101; v99 < v159; v100 = v99 )
        {
          v102 = v10[1];
          v103 = v145.m128i_i64[v100];
          v104 = (__int64 *)(*v10 + 8 * v102);
          if ( (__int64 *)*v10 == v104 )
            goto LABEL_279;
          v105 = (__int64 *)*v10;
          while ( v103 != *v105 )
          {
            if ( v104 == ++v105 )
              goto LABEL_279;
          }
          if ( v104 == v105 )
          {
LABEL_279:
            if ( v10[2] < (unsigned __int64)(v102 + 1) )
            {
              v121 = qvector_reserve();
              v122 = v10[1];
              *v10 = v121;
              v104 = (__int64 *)(v121 + 8 * v122);
            }
            *v104 = v103;
            ++v10[1];
          }
          ++v99;
        }
      }
    }
    if ( a6 )
    {
      v53 = nullptr;
      v54 = _mm_load_si128(&v144);
      a6[9].m128i_i64[0] = v153;
      *a6 = v54;
      a6[1] = _mm_load_si128(&v145);
      a6[2] = _mm_load_si128(&v146);
      a6[3] = _mm_load_si128(&v147);
      a6[4] = _mm_load_si128(&v148);
      a6[5] = _mm_load_si128(&v149);
      a6[6] = _mm_load_si128(&v150);
      a6[7] = _mm_load_si128(&v151);
      a6[8] = _mm_load_si128(&v152);
      v55 = v155;
      if ( (_QWORD)v155 )
      {
        v53 = (void *)qalloc_or_throw();
        memcpy(v53, v154, 4 * v55);
      }
      v56 = _mm_unpacklo_epi64((__m128i)v55, (__m128i)v55);
      if ( a6[9].m128i_i64[1] )
      {
        a6[10].m128i_i64[0] = 0;
        v126 = v56;
        qfree();
        v56 = _mm_load_si128(&v126);
      }
      v57 = v157;
      a6[9].m128i_i64[1] = (__int64)v53;
      v58 = nullptr;
      a6[10] = v56;
      if ( v57 )
      {
        v58 = (void *)qalloc_or_throw();
        memcpy(v58, src, 4 * v57);
      }
      v59 = _mm_unpacklo_epi64((__m128i)v57, (__m128i)v57);
      if ( a6[11].m128i_i64[0] )
      {
        a6[11].m128i_i64[1] = 0;
        v126 = v59;
        qfree();
        v59 = _mm_load_si128(&v126);
      }
      a6[12].m128i_i64[1] = (__int64)v158;
      v60 = v159;
      a6[11].m128i_i64[0] = (__int64)v58;
      a6[13].m128i_i64[0] = v60;
      v61 = v160;
      *(__m128i *)((char *)a6 + 184) = v59;
      a6[13].m128i_i64[1] = v61;
      a6[14].m128i_i32[0] = v161;
      a6[14].m128i_i8[4] = v162;
    }
    if ( src )
    {
      *(_QWORD *)&v157 = 0;
      qfree();
    }
    if ( v154 )
    {
      *(_QWORD *)&v155 = 0;
      qfree();
    }
  }
  if ( a5 )
    *a5 = v134;
  return 1;
}

