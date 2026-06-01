__int64 __fastcall sub_4069C0(__int64 a1, char a2, double a3, __m128 a4)
{
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  unsigned int v11; // r14d
  int v12; // eax
  __int16 v13; // ax
  unsigned int v14; // r15d
  int v16; // ecx
  __int16 v17; // ax
  char v18; // al
  __int64 first_fcref_from; // rbp
  __int64 v20; // rax
  __int64 v21; // rax
  __int16 v22; // ax
  __int16 v23; // ax
  __int64 v24; // rcx
  _DWORD *v25; // rax
  unsigned __int8 v26; // bp
  __int64 v27; // rdx
  int v28; // eax
  int v29; // ecx
  int v30; // r15d
  int v31; // r12d
  __int64 v32; // r14
  __int64 v33; // r12
  int v34; // r11d
  __int16 v35; // ax
  char v36; // al
  signed __int32 v37; // r11d
  char v38; // al
  __int16 v39; // ax
  __int64 v40; // rdx
  _QWORD *v41; // rbx
  unsigned __int64 v42; // rsi
  _QWORD *v43; // rbp
  unsigned __int64 v44; // rdx
  char v45; // cl
  _QWORD *v46; // rax
  int v47; // eax
  int v48; // eax
  _QWORD *v49; // rbp
  _DWORD *v50; // rax
  __int64 v51; // r15
  __int64 v52; // rax
  int v53; // edx
  unsigned int v54; // ebx
  __int64 v55; // rax
  __int64 v56; // rbp
  __int64 v57; // rdx
  __int64 v58; // rcx
  char v59; // al
  unsigned int v60; // r11d
  unsigned int v61; // esi
  __int16 v62; // ax
  unsigned int v63; // r15d
  __int64 v64; // rbx
  unsigned __int8 v65; // al
  __int64 v66; // rcx
  unsigned int v67; // esi
  bool v68; // bl
  unsigned __int8 v69; // al
  __int64 v70; // rax
  unsigned int v71; // ebx
  double v72; // xmm0_8
  int v73; // eax
  double v74; // xmm0_8
  int v75; // eax
  __int64 v76; // rax
  char v77; // al
  _QWORD *v78; // rbx
  unsigned __int64 v79; // rcx
  unsigned __int8 v80; // si
  _QWORD *v81; // rax
  _QWORD *v82; // rbp
  _QWORD *v83; // rdi
  __int64 v84; // rax
  char v85; // al
  __int64 v86; // rcx
  unsigned __int8 v87; // bl
  __int64 v88; // rcx
  unsigned __int8 v89; // bl
  char v90; // al
  __int64 v91; // rcx
  int v92; // eax
  __int64 v93; // r12
  __int64 v94; // r15
  int dtype_size; // eax
  int v96; // ebx
  int v97; // edx
  __int16 v98; // dx
  unsigned __int8 v99; // bl
  unsigned __int8 v100; // bl
  __int64 v101; // rcx
  __int64 v102; // rbx
  int v103; // eax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  double v107; // xmm0_8
  int v108; // eax
  unsigned int v109; // esi
  __int64 v110; // rdx
  unsigned __int8 v111; // al
  __int64 v112; // rax
  __int64 v113; // rcx
  unsigned __int8 v114; // al
  __int64 v115; // rax
  __int64 v116; // rsi
  int v117; // ebx
  __int64 v118; // r15
  __int64 v119; // r12
  unsigned __int8 v120; // al
  __int64 v121; // rax
  __int16 v122; // ax
  __int64 v123; // rcx
  __int64 v124; // r12
  int v125; // eax
  int v126; // ebx
  unsigned __int8 v127; // cl
  __int64 v128; // r12
  __int64 v129; // rbx
  int v130; // eax
  int v131; // ebx
  int v132; // r9d
  __int16 v133; // ax
  __int64 v134; // rcx
  __int64 v135; // rbx
  unsigned int v136; // edx
  int v137; // eax
  int v138; // eax
  unsigned int v139; // ebx
  unsigned __int8 v140; // al
  unsigned int v141; // esi
  char v142; // al
  unsigned __int8 v143; // al
  unsigned int v144; // edx
  __int16 v145; // ax
  __int64 v146; // r15
  int v147; // eax
  double v148; // xmm0_8
  int v149; // eax
  char v150; // al
  __int64 v151; // rdx
  unsigned __int8 v152; // al
  unsigned __int8 v153; // al
  int v154; // esi
  signed int v155; // r11d
  char v156; // r8
  _BOOL4 v157; // ebx
  char v158; // al
  unsigned int v159; // r11d
  __int64 v160; // rbx
  __int64 v161; // rbp
  __int64 v162; // rcx
  unsigned __int8 v163; // al
  unsigned __int8 v164; // al
  int v165; // eax
  int v166; // eax
  unsigned int v167; // ebx
  unsigned __int8 v168; // al
  int v169; // eax
  __int64 v170; // rax
  __int64 v171; // rax
  int v172; // ebx
  __int64 v173; // [rsp+0h] [rbp-88h]
  int v174; // [rsp+8h] [rbp-80h]
  int v175; // [rsp+8h] [rbp-80h]
  int v176; // [rsp+8h] [rbp-80h]
  int v177; // [rsp+8h] [rbp-80h]
  __int64 v178; // [rsp+10h] [rbp-78h]
  signed __int32 v179; // [rsp+10h] [rbp-78h]
  signed __int32 v180; // [rsp+10h] [rbp-78h]
  __int64 v181; // [rsp+10h] [rbp-78h]
  int v182; // [rsp+10h] [rbp-78h]
  int v183; // [rsp+10h] [rbp-78h]
  signed int v184; // [rsp+18h] [rbp-70h]
  signed __int32 v185; // [rsp+18h] [rbp-70h]
  int v186; // [rsp+20h] [rbp-68h]
  signed __int32 v187; // [rsp+20h] [rbp-68h]
  signed int v188; // [rsp+28h] [rbp-60h]
  unsigned __int64 v189; // [rsp+28h] [rbp-60h]
  int v190; // [rsp+34h] [rbp-54h]
  signed int v191; // [rsp+38h] [rbp-50h]
  unsigned __int8 v192; // [rsp+3Fh] [rbp-49h]
  int v193; // [rsp+44h] [rbp-44h] BYREF
  unsigned __int64 v194; // [rsp+48h] [rbp-40h]

  v194 = __readfsqword(0x28u);
  v178 = a1 + 64;
  v6 = a1 + 64;
  do
  {
    if ( sub_3EDFE0(a1, v6) )
    {
      v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 80LL);
      if ( !a2 )
        goto LABEL_27;
LABEL_12:
      if ( a2 == 1 )
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1184LL) = *(_DWORD *)(a1 + 872);
      v193 = 0;
      if ( *(_QWORD *)(a1 + 864) != *(_QWORD *)(a1 + 40) )
      {
        v13 = *(_WORD *)(a1 + 48);
        if ( v13 != 475 )
        {
          if ( v13 != 32 )
          {
LABEL_17:
            if ( v13 == 34 && (*(_BYTE *)(a1 + 128) & 8) != 0 )
              goto LABEL_24;
LABEL_18:
            if ( sub_CF9B0() != 1 )
            {
              if ( a2 == 1 )
                sub_3FA600(a1);
              return 0;
            }
            goto LABEL_24;
          }
          v48 = *(unsigned __int16 *)(a1 + 70);
          if ( (unsigned int)(v48 - 45) > 7 && (unsigned int)(v48 - 129) > 7 )
            goto LABEL_18;
          v49 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 920LL);
          if ( (getinf() & 0xF) == 6 )
          {
            if ( !v49 )
              sub_3EAEE0(a3);
            if ( (v49[20] || v49[21]) && v49[14] )
            {
              v13 = *(_WORD *)(a1 + 48);
              goto LABEL_17;
            }
          }
        }
      }
LABEL_24:
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 176LL))(
              *(_QWORD *)(a1 + 832),
              *(unsigned int *)(a1 + 872),
              v11);
      if ( v193 != 1 << v16 )
      {
        v17 = *(_WORD *)(a1 + 48);
        if ( v17 == 32 )
        {
          if ( *(_WORD *)(a1 + 70) != 14 )
            goto LABEL_27;
        }
        else if ( v17 != 12 || *(unsigned __int16 *)(a1 + 70) != v16 || *(_QWORD *)(a1 + 864) != *(_QWORD *)(a1 + 40) )
        {
          goto LABEL_27;
        }
      }
      return 0;
    }
    v6 += 40;
  }
  while ( v6 != v7 );
  v8 = a1 + 69;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL);
  v10 = *(int *)(v9 + 80);
  v11 = *(_DWORD *)(v9 + 80);
  do
  {
    if ( v10 >= get_dtype_size() )
      goto LABEL_10;
    v12 = *(unsigned __int16 *)(a1 + 48);
    if ( (unsigned __int16)v12 > 0x4Fu )
    {
      if ( (unsigned __int16)v12 > 0x11Bu )
      {
        if ( (unsigned __int16)(v12 - 871) <= 1u )
          goto LABEL_10;
      }
      else if ( (unsigned __int16)v12 > 0x119u || (unsigned __int16)(v12 - 158) <= 1u )
      {
        goto LABEL_10;
      }
    }
    else if ( (unsigned __int16)v12 > 0x28u )
    {
      v24 = 0x7FC0000161LL;
      if ( _bittest64(&v24, (unsigned int)(v12 - 41)) )
        goto LABEL_10;
    }
    else if ( (unsigned __int16)(v12 - 3) <= 1u )
    {
      goto LABEL_10;
    }
    if ( *(char *)(a1 + 54) >= 0 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC6E6u, a3);
LABEL_426:
      BUG();
    }
LABEL_10:
    v8 += 40;
  }
  while ( v8 != a1 + 389 );
  if ( a2 )
    goto LABEL_12;
LABEL_27:
  v18 = *(_BYTE *)(a1 + 56) & 0xF;
  if ( v18 == 15 )
    return 0;
  if ( v18 != 14 && (unsigned __int8)sub_3FAFB0(a1, a3) )
    return 1;
  if ( (*(_WORD *)(a1 + 52) & 0x6004) != 0 )
    goto LABEL_52;
  first_fcref_from = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
  if ( v20 != first_fcref_from )
  {
    v21 = first_fcref_from & v20;
    if ( first_fcref_from != -1 )
      first_fcref_from = v21;
  }
  v22 = *(_WORD *)(a1 + 48);
  if ( v22 == 3 || v22 == 41 )
  {
    if ( !(unsigned __int8)sub_3F0A30((_QWORD *)a1, &v193, first_fcref_from) )
      goto LABEL_52;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 16) + 25LL) & 0x20) == 0 )
      sub_3F56D0(a1, 0x3Au, 0, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
    return 1;
  }
  if ( !(unsigned __int8)is_call_insn() )
    goto LABEL_52;
  v23 = *(_WORD *)(a1 + 48);
  if ( v23 == 4 || v23 == 46 )
  {
    if ( first_fcref_from == -1 )
    {
      v50 = *(_DWORD **)(a1 + 832);
      v184 = v50[155];
      v186 = v50[156];
      v188 = v50[157];
      v190 = v50[158];
      goto LABEL_54;
    }
LABEL_39:
    v14 = 0;
    if ( !(unsigned int)sub_CF9B0() )
    {
      if ( !(unsigned __int8)sub_3F0A30((_QWORD *)a1, &v193, first_fcref_from) )
        goto LABEL_52;
      return (unsigned __int8)v193;
    }
    return v14;
  }
  first_fcref_from = get_first_fcref_from();
  if ( first_fcref_from != -1 )
    goto LABEL_39;
LABEL_52:
  v25 = *(_DWORD **)(a1 + 832);
  v184 = v25[155];
  v186 = v25[156];
  v188 = v25[157];
  v190 = v25[158];
  if ( *(_WORD *)(a1 + 48) == 354 && *(_WORD *)(a1 + 70) == 31 && *(_WORD *)(a1 + 110) == 25 )
  {
LABEL_92:
    sub_3F6660(a1);
    return 0;
  }
LABEL_54:
  v26 = sub_3EE110(a1, v178, a3);
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v28 = *(unsigned __int16 *)(a1 + 48);
  v29 = *(_DWORD *)(v27 + 104);
  if ( v29 > v28 || *(_DWORD *)(v27 + 108) <= v28 )
  {
    v31 = 0;
    LOWORD(v30) = 0;
    if ( *(_BYTE *)(a1 + 65) != 1 )
      goto LABEL_73;
    v32 = (int)sub_3FCA60(a1, 0, 0, a3);
  }
  else
  {
    v30 = *(_DWORD *)(*(_QWORD *)(v27 + 112) + 16LL * (v28 - v29) + 8);
    v31 = v30 & 0x200;
    if ( (v30 & 0x100) != 0 || *(_BYTE *)(a1 + 65) == 1 )
      goto LABEL_58;
LABEL_73:
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 && !*(_QWORD *)(a1 + 72) && *(char *)(a1 + 98) > 0
      || (v32 = v184, *(char *)(a1 + 54) < 0) )
    {
LABEL_58:
      v32 = (int)sub_3FCA60(a1, 0, 0, a3);
    }
    if ( v31 )
    {
LABEL_60:
      v33 = (int)sub_3FCA60(a1, 1, 0, a3);
      goto LABEL_61;
    }
  }
  if ( *(_BYTE *)(a1 + 105) == 1
    || *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 && !*(_QWORD *)(a1 + 112) && *(char *)(a1 + 138) > 0 )
  {
    goto LABEL_60;
  }
  v33 = v186;
  if ( *(char *)(a1 + 54) < 0 )
    goto LABEL_60;
LABEL_61:
  v34 = v32;
  if ( *(_BYTE *)(a1 + 145) )
  {
    v47 = sub_3FCA60(a1, 2, 0, a3);
    v34 = v33;
    v33 = v47;
  }
  v35 = *(_WORD *)(a1 + 48);
  if ( (unsigned __int16)(v35 - 515) <= 1u )
    return (unsigned int)sub_3FAC40((__int64 *)a1, a1 + 24, *(_DWORD *)(a1 + 112), v26, v32, -1, a3, -1);
  if ( (unsigned __int16)(v35 - 517) <= 2u )
    return (unsigned int)sub_3FAC40((__int64 *)a1, a1 + 24, *(_DWORD *)(a1 + 152), v26, v32, v34, a3, v34);
  v191 = v34;
  v36 = sub_3F0CB0(a1, a3);
  v37 = v191;
  v192 = v36;
  if ( !v36 )
    goto LABEL_101;
  v38 = sub_3EE5A0(a1);
  v37 = v191;
  if ( v38 )
    goto LABEL_101;
  v39 = *(_WORD *)(a1 + 48);
  v40 = v192;
  if ( (unsigned __int16)v39 > 0x8Du )
  {
    if ( v39 == 343 )
      goto LABEL_139;
    if ( v39 == 416 )
    {
LABEL_138:
      v53 = *(_DWORD *)(a1 + 52) & 0xD0;
      goto LABEL_137;
    }
    if ( (unsigned __int16)v39 > 0xE2u )
    {
      v40 = (unsigned __int16)(v39 - 236);
      switch ( *(_WORD *)(a1 + 48) )
      {
        case 0xEC:
          v102 = v184;
          sub_3F8F20(a1, 2u, 7u, v33, v184, 1u);
          v103 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                   *(_QWORD *)(a1 + 832),
                   *(unsigned __int16 *)(a1 + 190));
          sub_3F8F20(a1, 2u, 7u, v103, v186, 1u);
          sub_3F6E70(a1, 0xEu, 7u, v102, v186, v102, a3, 0, 1);
          sub_3F8F20(a1, 2u, 7u, v32, v186, 1u);
          sub_3F6E70(a1, 0xCu, 7u, v102, v186, v102, a3, 0, 1);
          sub_3F8F20(a1, 2u, 7u, v191, v186, 1u);
          sub_3F6E70(a1, 0xCu, 7u, v102, v186, v102, a3, 0, 1);
          sub_3F6E70(a1, 4u, 2u, v184, 0x3BEA45E214ADDC55LL, (int)v32, a3, 0, 1);
          v107 = (*(double (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))(**(_QWORD **)(a1 + 832)
                                                                                              + 168LL))(
                   *(_QWORD *)(a1 + 832),
                   *(unsigned __int16 *)(a1 + 110),
                   v104,
                   v105,
                   v106,
                   v173);
          sub_3F6E70(a1, 4u, 2u, v184 + 4, 0x3BEA45E214ADDC55LL, v108, v107, 0, 1);
          return 0;
        case 0xFA:
        case 0xFE:
          sub_3F8F20(a1, v39 != 250, 2u, v33, v184, 0);
          sub_3F6E70(a1, 0xCu, v26, v191, v184, (int)v32, a3, 0, 1);
          return 0;
        case 0xFB:
        case 0xFF:
          sub_3F8F20(a1, v39 != 251, v26, v33, v191, 0);
          return 0;
        case 0x10C:
          v101 = (int)v33;
          v89 = v26;
          LODWORD(v33) = v188;
          sub_3F6E70(a1, 7u, v26, v101, 0x3BEA45E214ADDC55LL, v188, a3, 0, 1);
          v37 = v191;
LABEL_225:
          sub_3F6E70(a1, 0x13u, v89, v37, (int)v33, (int)v32, a3, 0, 1);
          goto LABEL_158;
        case 0x10D:
          sub_3F6E70(a1, 4u, 1u, (int)v33, 0x3BEA45E214ADDC55LL, (int)v32 + 2, a3, 0, 1);
          goto LABEL_158;
        case 0x10E:
        case 0x10F:
          v98 = 500;
          if ( v39 == 270 )
            v98 = 499;
          sub_3F7310(
            a1,
            v98,
            v32,
            v191,
            *(_BYTE *)(a1 + 69),
            *(_QWORD *)(a1 + 152),
            a3,
            *(_QWORD *)(a1 + 152) + *(_DWORD *)(a1 + 192) - 1);
          return 0;
        case 0x110:
        case 0x1F5:
          v93 = *(_QWORD *)(a1 + 152);
          v94 = *(_QWORD *)(a1 + 192);
          dtype_size = get_dtype_size();
          v96 = v93;
          v97 = v94 + v93 - 1;
          if ( *(_WORD *)(a1 + 48) == 272 )
          {
            v97 = v94 - 1;
            v96 = (8 * dtype_size - 1) & (8 * dtype_size - v93);
          }
          sub_3F7310(a1, 498, v32, v191, *(_BYTE *)(a1 + 69), v96, a3, v97);
          return 0;
        case 0x111:
          v91 = *(_QWORD *)(a1 + 152);
          v92 = 0;
          if ( (unsigned __int64)(int)v91 <= 0x1F )
            v92 = 1 << v91;
          sub_3F56D0(a1, 3u, v26, (unsigned int)~((v92 - 1) << *(_QWORD *)(a1 + 112)), 0x3BEA45E214ADDC55LL, v188, 0);
          sub_3F6E70(a1, 0x14u, v26, (int)v32, v188, (int)v32, a3, 0, 1);
          return 0;
        case 0x116:
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL) = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL)
                                                   + *(unsigned __int16 *)(a1 + 50);
          return 0;
        case 0x117:
LABEL_195:
          v71 = 13;
LABEL_196:
          v72 = (*(double (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 832) + 168LL))(
                  *(_QWORD *)(a1 + 832),
                  *(unsigned __int16 *)(a1 + 150),
                  v40);
          sub_3F6E70(a1, 0xEu, v26, v191, v73, v184, v72, 0, 1);
          v74 = (*(double (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                  *(_QWORD *)(a1 + 832),
                  *(unsigned __int16 *)(a1 + 190));
          sub_3F6E70(a1, v71, v26, v75, v184, (int)v32, v74, 0, 1);
          goto LABEL_158;
        case 0x118:
          sub_3F6E70(a1, 0x10u, *(_BYTE *)(a1 + 69), v191, (int)v33, (int)v32, a3, 0, 1);
          return 0;
        case 0x119:
          sub_3F6E70(a1, 0xFu, *(_BYTE *)(a1 + 69), v191, (int)v33, (int)v32, a3, 0, 1);
          return 0;
        case 0x11A:
        case 0x11B:
          v144 = 32;
          if ( v39 == 282 )
            v144 = 33;
          sub_3FA4B0(a1, a1 + 24, v144, v191, 1);
          return 0;
        case 0x132:
        case 0x232:
LABEL_346:
          v63 = v26;
          v64 = (int)v32;
          v153 = sub_3ED380(v26);
          v66 = v191;
          v67 = 12;
          if ( v153 )
            v67 = 69;
          goto LABEL_176;
        case 0x136:
        case 0x137:
        case 0x14B:
        case 0x15F:
        case 0x166:
        case 0x16B:
        case 0x16C:
LABEL_132:
          sub_3F7A10(a1, v26, v32, v191, v33, a3);
          return 0;
        case 0x142:
        case 0x143:
        case 0x24E:
        case 0x24F:
LABEL_141:
          v14 = 0;
          v54 = v26;
          goto LABEL_142;
        case 0x145:
          v143 = sub_3F0810(a1, a1 + 24, a1 + 104, 0, a3);
          sub_3F8D80(a1, v143, v33, v26, v191);
          return 0;
        case 0x149:
        case 0x272:
          v139 = v26;
          if ( v39 == 329 )
          {
            v140 = sub_3ED380(v26);
            v37 = v191;
            v141 = 72;
            if ( !v140 )
            {
              v142 = *(_BYTE *)(a1 + 57);
              v141 = 16;
              if ( v142 < 0 )
                v141 = 16 - ((unsigned __int8)((v142 & 0x7F) - 9) < 4u);
            }
          }
          else
          {
            v141 = 72;
          }
LABEL_314:
          sub_3F56D0(a1, v141, v139, v37, (int)v33, (int)v32, 0);
          goto LABEL_158;
        case 0x14D:
        case 0x14E:
        case 0x15B:
        case 0x15D:
LABEL_177:
          v68 = (unsigned __int16)(v39 - 118) <= 1u || v39 == 333 || v39 == 347;
          sub_3F6E70(a1, 0x47u, v26, v191, (int)v33, v184, a3, 0, 1);
          sub_3F6E70(a1, 70 - v68, v26, (int)v32, v184, (int)v32, a3, 0, 1);
          goto LABEL_158;
        case 0x14F:
        case 0x150:
        case 0x168:
        case 0x169:
LABEL_168:
          sub_3F6E70(a1, 0x47u, v26, v191, (int)v33, v184, a3, 0, 1);
          v62 = *(_WORD *)(a1 + 48);
          if ( v62 == 335 || v62 == 360 || (unsigned __int16)(v62 - 127) <= 1u )
            sub_3F6E70(a1, 0x44u, v26, v184, 0x3BEA45E214ADDC55LL, v184, a3, 0, 1);
          sub_3F6E70(a1, 0x46u, v26, v184, (int)v32, (int)v32, a3, 0, 1);
          goto LABEL_158;
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
          v138 = sub_3FB520(a1, 1, v184, a3);
          sub_3F6B30(a1, 2u, *(unsigned __int16 *)(a1 + 48) - 338, v138, v178, a3);
          sub_3F9F40(a1, a1 + 104, v184, a3);
          return 0;
        case 0x158:
LABEL_344:
          sub_3F6E70(a1, 4u, v26, (int)v33, 0x3BEA45E214ADDC55LL, (int)v32, a3, 0, 1);
          return 0;
        case 0x164:
        case 0x29B:
LABEL_174:
          v63 = v26;
          v64 = (int)v32;
          v65 = sub_3ED380(v26);
          v66 = v191;
          v67 = 14;
          if ( v65 )
            v67 = 71;
          goto LABEL_176;
        case 0x167:
        case 0x2A3:
          goto LABEL_164;
        case 0x16A:
LABEL_165:
          if ( sub_3ED380(v26) )
          {
            sub_3F56D0(a1, 0x47u, v26, v191, v33, v184, 0);
            v61 = 68;
          }
          else
          {
            sub_3F56D0(a1, 0xEu, v26, v191, v33, v184, 0);
            v61 = 5;
          }
          sub_3F56D0(a1, v61, v26, v184, 0x3BEA45E214ADDC55LL, (int)v32, 0);
          goto LABEL_158;
        case 0x172:
LABEL_407:
          sub_3F5D80((_QWORD *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL), v178, a2, 193);
          return 0;
        case 0x173:
LABEL_406:
          sub_3F5D80((_QWORD *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL), v178, a2, 80);
          return 0;
        case 0x19C:
        case 0x19D:
        case 0x19E:
        case 0x19F:
          v137 = sub_3FB520(a1, 1, v184, a3);
          sub_3F6B30(a1, 1u, *(unsigned __int16 *)(a1 + 48) - 411, v137, v178, a3);
          sub_3F9F40(a1, a1 + 104, v184, a3);
          return 0;
        case 0x1A1:
        case 0x1D9:
LABEL_162:
          sub_3FD520(a1, 1, a3);
          return 0;
        case 0x1A2:
        case 0x305:
LABEL_189:
          v63 = v26;
          v64 = (int)v32;
          v69 = sub_3ED380(v26);
          v66 = v191;
          v67 = 13;
          if ( v69 )
            v67 = 70;
LABEL_176:
          sub_3F56D0(a1, v67, v63, v66, v33, v64, 0);
          goto LABEL_158;
        case 0x1A6:
          sub_3F6E70(a1, 4u, v26, v32, 0x3BEA45E214ADDC55LL, v190, a3, 0, 1);
          sub_3F6E70(a1, 4u, v26, v33, 0x3BEA45E214ADDC55LL, v32, a3, 0, 1);
          sub_3F6E70(a1, 4u, v26, v190, 0x3BEA45E214ADDC55LL, v33, a3, 0, 1);
          return 0;
        case 0x1B3:
          return (unsigned int)sub_3FAC40((__int64 *)a1, a1 + 24, *(_BYTE *)(a1 + 56) & 0xF, v26, v32, v191, a3, v33);
        case 0x1D4:
        case 0x1D5:
          v135 = v184;
          sub_3F56D0(a1, 3u, v26, 1, 0x3BEA45E214ADDC55LL, v184, 0);
          sub_3F6E70(a1, 0x16u, v26, v135, v191, v135, a3, 0, 1);
          sub_3F6E70(a1, 0x14u, v26, (int)v32, v135, v135, a3, 0, 1);
          v136 = 32;
          if ( *(_WORD *)(a1 + 48) == 468 )
            v136 = 33;
          sub_3FA4B0(a1, a1 + 24, v136, v184, 2);
          return 0;
        case 0x1D6:
          goto LABEL_330;
        case 0x1D7:
LABEL_329:
          v150 = sub_3F4EC0(a1, a1 + 24, v191, a3);
          v37 = v191;
          if ( v150 )
            return 0;
LABEL_330:
          v151 = *(_QWORD *)(a1 + 832);
          v152 = 2;
          if ( *(_DWORD *)(v151 + 84) == 8 )
            v152 = 7;
          sub_3F56D0(
            a1,
            0x36u,
            v152,
            0x3BEA45E214ADDC55LL,
            *(int *)(v151 + 64),
            v37,
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 112LL) + 84LL));
          return 0;
        case 0x1D8:
        case 0x1E4:
        case 0x1F1:
LABEL_126:
          v51 = a1 + 24;
          goto LABEL_127;
        case 0x1DA:
        case 0x1DC:
          sub_3FD1A0(a1, v32, v191, a3);
          return 0;
        case 0x1DB:
        case 0x1DD:
          goto LABEL_350;
        case 0x1EC:
        case 0x1ED:
        case 0x273:
          if ( sub_3EE080(a1, v178) )
          {
            if ( *(_WORD *)(a1 + 48) == 493 )
            {
              v88 = (int)v33;
              LODWORD(v33) = v188;
              sub_3F6E70(a1, 7u, v26, v88, 0x3BEA45E214ADDC55LL, v188, a3, 0, 1);
            }
LABEL_222:
            sub_3F8030(a1, v32, v33, a3);
          }
          else
          {
            sub_3F6E70(a1, 4u, v26, (int)v33, 0x3BEA45E214ADDC55LL, (int)v32, a3, 0, 1);
          }
          goto LABEL_158;
        case 0x1EE:
          goto LABEL_149;
        case 0x1EF:
          v58 = (int)v33;
          LODWORD(v33) = v188;
          sub_3F6E70(a1, 7u, v26, v58, 0x3BEA45E214ADDC55LL, v188, a3, 0, 1);
          v37 = v191;
LABEL_149:
          sub_3F56D0(a1, 4u, v26, (int)v33, 0x3BEA45E214ADDC55LL, v37, 0);
          return 0;
        case 0x1F0:
          sub_3F56D0(a1, 3u, v26, ~(0xFFFFLL << *(_QWORD *)(a1 + 128)), 0x3BEA45E214ADDC55LL, v188, 0);
          sub_3F6E70(a1, 0x14u, v26, (int)v32, v188, v188, a3, 0, 1);
          sub_3F6E70(a1, 0x13u, v26, (int)v33, v188, (int)v32, a3, 0, 1);
          goto LABEL_158;
        case 0x1F2:
        case 0x1F3:
        case 0x1F4:
          sub_3F7310(a1, v39, v32, v191, *(_BYTE *)(a1 + 69), *(_DWORD *)(a1 + 152), a3, *(_QWORD *)(a1 + 192));
          return 0;
        case 0x1F6:
        case 0x1F7:
          v128 = *(_QWORD *)(a1 + 152);
          v129 = *(_QWORD *)(a1 + 192);
          v130 = get_dtype_size();
          v131 = v129 - 1;
          v132 = (8 * v130 - 1) & (8 * v130 - v128);
          v133 = 500;
          if ( *(_WORD *)(a1 + 48) == 502 )
            v133 = 499;
          sub_3F7310(a1, v133, v32, v191, *(_BYTE *)(a1 + 69), v132, a3, v131);
          return 0;
        case 0x1F8:
          v126 = get_dtype_size();
          v181 = *(_QWORD *)(a1 + 192);
          sub_3F6E70(a1, 4u, v26, v191, 0x3BEA45E214ADDC55LL, v188 + v126, a3, 0, 1);
          sub_3F6E70(a1, 4u, v26, (int)v33, 0x3BEA45E214ADDC55LL, v188, a3, 0, 1);
          v127 = 8;
          if ( v126 == 4 )
            v127 = 7;
          sub_3F7220(a1, 0x17u, v188, v127, v181, v188, a3);
          sub_3F6E70(a1, 4u, v26, v188, 0x3BEA45E214ADDC55LL, (int)v32, a3, 0, 1);
          return 0;
        case 0x1F9:
        case 0x1FA:
          sub_3F8F20(a1, 2u, v26, v33, v32, v39 == 505);
          return 0;
        case 0x1FB:
          v123 = (int)v33;
          v100 = v26;
          LODWORD(v33) = v188;
          sub_3F6E70(a1, 7u, v26, v123, 0x3BEA45E214ADDC55LL, v188, a3, 0, 1);
          v184 = v32;
          v37 = v191;
LABEL_246:
          LODWORD(v32) = v184;
          v14 = 0;
          sub_3F6E70(a1, 0x15u, v100, v37, (int)v33, v184, a3, 0, 1);
          goto LABEL_129;
        case 0x1FF:
        case 0x200:
        case 0x201:
        case 0x202:
        case 0x252:
          return (unsigned int)sub_3FAC40((__int64 *)a1, a1 + 24, *(_DWORD *)(a1 + 192), v26, v32, v191, a3, v33);
        case 0x208:
          sub_3F85C0((_QWORD *)a1, v26, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL), v191, v32, a3);
          goto LABEL_158;
        case 0x209:
        case 0x20A:
        case 0x250:
        case 0x251:
          v115 = *(_QWORD *)(a1 + 192);
          if ( (unsigned int)(v115 - 14) > 1 )
          {
            v116 = 16;
            if ( (int)v115 <= 15 )
              v116 = (unsigned int)v115 ^ 1;
            v117 = sub_3FAA90(a1, v116, a3);
            v118 = sub_679D0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
            v119 = sub_679D0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
            sub_1D7370(a1, *(_DWORD *)(v119 + 72), v117);
            *(_QWORD *)(a1 + 16) = v118;
            sub_3F64E0(a1, *(_DWORD *)(a1 + 152));
            v120 = 2;
            if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
              v120 = 7;
            sub_3F56D0(
              a1,
              0x37u,
              v120,
              *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50),
              0x3BEA45E214ADDC55LL,
              0x3BEA45E214ADDC55LL,
              0);
            v121 = *(_QWORD *)(a1 + 832);
            *(_QWORD *)(a1 + 16) = v119;
            if ( *(_DWORD *)(v121 + 80) == 8 && *(_BYTE *)(a1 + 65) == 1 && *(_WORD *)(a1 + 70) == 160 )
            {
              v124 = *(int *)(v121 + 480);
              v125 = get_dtype_size();
              sub_1D5D50(a1, 3u, v125, 0, 0x3BEA45E214ADDC55LL, v124, 0);
            }
          }
          v33 = (int)sub_3FCA60(a1, 1, 0, a3);
          v122 = *(_WORD *)(a1 + 48);
          if ( (unsigned __int16)(v122 - 592) <= 1u )
          {
            v37 = v32;
            v14 = 1;
            v54 = v26;
LABEL_142:
            v55 = *(_QWORD *)(a1 + 832);
            v56 = v37;
            if ( *(_DWORD *)(v55 + 80) == 8 )
            {
              sub_3F56D0(a1, 0x1Fu, v54, v37, v33, 3, -1);
              sub_3F56D0(a1, 0x21u, v54, v56, v33, 1, -1);
              sub_3F56D0(a1, 0x22u, v54, v56, v33, 0, -1);
              sub_3F56D0(a1, 0x23u, v54, v56, v33, 2, -1);
            }
            else
            {
              sub_3F56D0(a1, 0x1Fu, v54, v37, v33, *(int *)(v55 + 636), -1);
              sub_3F56D0(a1, 0x21u, v54, v56, v33, *(int *)(*(_QWORD *)(a1 + 832) + 644LL), -1);
              sub_3F56D0(a1, 0x22u, v54, v56, v33, *(int *)(*(_QWORD *)(a1 + 832) + 640LL), -1);
              sub_3F56D0(a1, 0x23u, v54, v56, v33, *(int *)(*(_QWORD *)(a1 + 832) + 648LL), -1);
            }
          }
          else
          {
            if ( v122 == 521 )
            {
              v134 = (int)v33;
              v99 = v26;
              v33 = v188;
              v14 = 1;
              sub_3F6E70(a1, 5u, v26, v134, 0x3BEA45E214ADDC55LL, v188, a3, 0, 1);
            }
            else
            {
              v14 = 1;
              v99 = v26;
            }
LABEL_241:
            if ( (unsigned __int8)sub_3EAA70(a1 + 24) )
            {
              sub_3F56D0(a1, 0x1Eu, v26, v32, v33, 3, 0);
              sub_3F56D0(a1, 0x22u, v26, v32, v33, 0, 0);
            }
            sub_3F6E70(a1, 0xDu, v99, v32, v33, v184, a3, 0, 1);
            LODWORD(v32) = v184;
LABEL_129:
            v52 = *(_QWORD *)(a1 + 832);
            if ( *(_DWORD *)(v52 + 660) == (_DWORD)v32 )
            {
              sub_3F56D0(a1, 0x36u, 2, 0x3BEA45E214ADDC55LL, *(int *)(v52 + 64), (int)v32, 4);
            }
            else if ( (unsigned __int8)sub_3EAA70(a1 + 24) )
            {
              sub_3FA3B0(a1, 0x21u, v32, (unsigned int)(char)v26, 1);
              sub_3F56D0(a1, 0x1Du, v26, (int)v32, 0x3BEA45E214ADDC55LL, 2, 0);
            }
          }
          return v14;
        case 0x20B:
        case 0x212:
          v177 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                   *(_QWORD *)(a1 + 832),
                   *(unsigned __int16 *)(a1 + 190));
          sub_3F92E0(a1, v32, v191, v33, v177, 0xCu, a3, 0);
          goto LABEL_158;
        case 0x20C:
        case 0x213:
          v176 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                   *(_QWORD *)(a1 + 832),
                   *(unsigned __int16 *)(a1 + 190));
          sub_3F92E0(a1, v32, v191, v33, v176, 0xDu, a3, 0);
          goto LABEL_158;
        case 0x20D:
        case 0x214:
          sub_3F92E0(a1, v32, v191, v33, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL), 0xDu, a3, 0);
          goto LABEL_158;
        case 0x20E:
          v175 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                   *(_QWORD *)(a1 + 832),
                   *(unsigned __int16 *)(a1 + 190));
          sub_3F92E0(a1, v32, v191, v33, v175, 0xCu, a3, 32);
          goto LABEL_158;
        case 0x20F:
          v174 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                   *(_QWORD *)(a1 + 832),
                   *(unsigned __int16 *)(a1 + 190));
          sub_3F92E0(a1, v32, v191, v33, v174, 0xDu, a3, 32);
          goto LABEL_158;
        case 0x210:
          sub_3F92E0(a1, v32, v191, v33, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL), 0xDu, a3, 32);
          goto LABEL_158;
        case 0x211:
          sub_3F92E0(a1, v32, v191, v33, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL), 0xCu, a3, 96);
          goto LABEL_158;
        case 0x215:
          sub_3F92E0(a1, v32, v191, v33, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 480LL), 0xCu, a3, 64);
          goto LABEL_158;
        case 0x254:
          v114 = sub_3F0810(a1, a1 + 24, a1 + 104, 0, a3);
          sub_3F8CC0(a1, v114, v26, v33, v191, 0x43u);
          return 0;
        case 0x255:
        case 0x25A:
          v167 = 64;
          if ( v39 == 597 )
            v167 = 63;
          goto LABEL_395;
        case 0x25F:
        case 0x260:
          v167 = 66;
          if ( v39 == 608 )
            v167 = 65;
LABEL_395:
          v168 = sub_3F0810(a1, a1 + 24, a1 + 104, 0, a3);
          sub_3F8CC0(a1, v168, v26, v33, v191, v167);
          return 0;
        case 0x26E:
        case 0x26F:
        case 0x270:
        case 0x271:
          sub_3F63B0(a1, v26, v32, v191, v33);
          goto LABEL_158;
        case 0x274:
          v51 = a1 + 24;
          v26 = sub_3F0810(a1, a1 + 24, v178, 0, a3);
LABEL_127:
          if ( (unsigned __int8)sub_3F4EC0(a1, v51, v33, a3) )
            return 0;
          v14 = 0;
          sub_3F6E70(a1, 4u, v26, (int)v33, 0x3BEA45E214ADDC55LL, (int)v32, a3, 0, 1);
          goto LABEL_129;
        case 0x27A:
        case 0x27B:
        case 0x27C:
        case 0x27D:
          v166 = sub_3FB520(a1, 1, v184, a3);
          sub_3F6B30(a1, 2u, *(unsigned __int16 *)(a1 + 48) - 633, v166, v178, a3);
          sub_3F9F40(a1, a1 + 104, v184, a3);
          return 0;
        case 0x27E:
        case 0x27F:
        case 0x280:
        case 0x281:
          v165 = sub_3FB520(a1, 1, v184, a3);
          sub_3F6940(a1, *(unsigned __int16 *)(a1 + 48) - 637, v165, v178, a3);
          sub_3F9F40(a1, a1 + 104, v184, a3);
          return 0;
        case 0x292:
          v164 = sub_3F0810(a1, a1 + 24, a1 + 104, 0, a3);
          sub_3F8F20(a1, v164, v26, v33, v191, 0);
          return 0;
        case 0x293:
          v163 = sub_3F0810(a1, a1 + 24, a1 + 104, 0, a3);
          sub_3F8F20(a1, v163, v26, v33, v191, 1u);
          return 0;
        case 0x294:
          sub_3F7190(a1, v178, v32, a1 + 104, v33, a3);
          goto LABEL_158;
        case 0x29E:
          sub_3F56D0(a1, 0x47u, v26, v191, (int)v33, v188, 0);
          LODWORD(v33) = v188;
LABEL_164:
          sub_3F6E70(a1, 0x44u, v26, (int)v33, 0x3BEA45E214ADDC55LL, (int)v32, a3, 0, 1);
LABEL_158:
          v14 = 0;
          goto LABEL_129;
        case 0x2F1:
        case 0x2F2:
        case 0x2F3:
        case 0x2F4:
          sub_3F9580(a1, v32, v191, a3);
          return 0;
        case 0x301:
        case 0x302:
        case 0x303:
        case 0x304:
          v169 = sub_3FB520(a1, 1, v184, a3);
          sub_3F6B30(a1, 1u, *(unsigned __int16 *)(a1 + 48) - 768, v169, v178, a3);
          sub_3F9F40(a1, a1 + 104, v184, a3);
          return 0;
        case 0x367:
          v162 = (int)v33;
          if ( v39 == 871 )
            goto LABEL_420;
LABEL_384:
          if ( *(unsigned __int16 *)(a1 + 110) == *(unsigned __int16 *)(a1 + 70) + 1 )
          {
LABEL_420:
            v171 = 1;
            v172 = v32 + (-*(unsigned __int8 *)(*(_QWORD *)(a1 + 800) + 145LL) & 0xFFFFFFFC);
            if ( *(_BYTE *)(a1 + 145) )
              v171 = 2;
            if ( *(_WORD *)(a1 + 40 * v171 + 70) == 13 || (*(_BYTE *)(a1 + 70) & 1) != 0 )
            {
              sub_3F6E70(a1, 4u, 2u, v162, 0x3BEA45E214ADDC55LL, v172, a3, 0, 3);
              sub_3F6E70(a1, 4u, 2u, (int)v33 + 4, 0x3BEA45E214ADDC55LL, v172 + 4, a3, 0, 3);
            }
            else
            {
              sub_3F6E70(a1, 4u, 7u, v162, 0x3BEA45E214ADDC55LL, v172, a3, 0, 1);
            }
          }
          else
          {
            sub_3F6E70(a1, 4u, 2u, v162, 0x3BEA45E214ADDC55LL, (int)v32, a3, 0, 3);
            sub_3F6E70(a1, 4u, 2u, (int)v33 + 4, 0x3BEA45E214ADDC55LL, v191, a3, 0, 3);
          }
          return 0;
        case 0x368:
          if ( v39 == 872 )
            goto LABEL_352;
LABEL_349:
          if ( *(unsigned __int16 *)(a1 + 110) == *(unsigned __int16 *)(a1 + 70) + 1 )
          {
LABEL_352:
            v154 = 1;
            if ( *(_BYTE *)(a1 + 145) )
              v154 = 2;
            sub_3FD520(a1, v154, a3);
          }
          else
          {
LABEL_350:
            sub_3FD520(a1, 2, a3);
          }
          return 0;
        case 0x379:
          sub_3F6E70(a1, 0x21u, 0, 0, *(int *)(*(_QWORD *)(a1 + 832) + 480LL), 0, a3, 0, 1);
          return 0;
        case 0x37A:
          v160 = *(_QWORD *)(a1 + 112);
          v161 = *(_QWORD *)(a1 + 152);
          if ( (v161 & 8) != 0 )
            sub_3F75C0(a1, v32, v160 + 3, 2, a3);
          if ( (v161 & 4) != 0 )
            sub_3F75C0(a1, v32, v160 + 2, 1, a3);
          if ( (v161 & 2) != 0 )
            sub_3F75C0(a1, v32, v160 + 1, 0, a3);
          if ( (v161 & 1) != 0 )
            sub_3F75C0(a1, v32, v160, 3, a3);
          return 0;
        case 0x37B:
        case 0x37C:
          v157 = v39 != 891;
          sub_3F56D0(a1, 3u, v39 != 891, 0, 0x3BEA45E214ADDC55LL, v184, 0);
          sub_3F56D0(a1, 0x28u, v157, v191, v184, 2, 0);
          sub_3F56D0(a1, 0x21u, v157, v191, v184, 1, 0);
          sub_3F56D0(a1, 3u, 0, 1, 0x3BEA45E214ADDC55LL, v186, 0);
          sub_3F56D0(a1, 0x17u, 2, v191, v186, v186, 0);
          sub_3F56D0(a1, 0x28u, v157, v186, v184, 3, 0);
          sub_3F56D0(a1, 0x15u, 0, 3, 2, 3, 0);
          return 0;
        case 0x37D:
          sub_3F56D0(a1, 3u, 0, 0, 0x3BEA45E214ADDC55LL, v184, 0);
          sub_3F56D0(a1, 0x21u, 0, 1, v184, 2, 0);
          sub_3F56D0(a1, 0x21u, 0, 0, v184, 3, 0);
          sub_3F56D0(a1, 0x14u, 0, 2, 3, 2, 0);
          sub_3F56D0(a1, 0x14u, 0, 3, 1, 3, 0);
          sub_3F56D0(a1, 4u, 0, 1, 0x3BEA45E214ADDC55LL, v184, 0);
          sub_3F56D0(a1, 0x14u, 0, 1, 0, 1, 0);
          sub_3F56D0(a1, 0x13u, 0, 0, v184, 0, 0);
          return 0;
        case 0x37E:
          sub_3F56D0(a1, 3u, 0, 0, 0x3BEA45E214ADDC55LL, v184, 0);
          sub_3F56D0(a1, 0x13u, 0, 1, 3, 1, 0);
          sub_3F56D0(a1, 0x21u, 0, 3, v184, 3, 0);
          sub_3F56D0(a1, 0x14u, 0, 0, 3, 0, 0);
          sub_3F56D0(a1, 4u, 0, v184, 0x3BEA45E214ADDC55LL, 3, 0);
          sub_3F56D0(a1, 4u, 0, v184, 0x3BEA45E214ADDC55LL, 2, 0);
          return 0;
        default:
          goto LABEL_101;
      }
    }
    if ( (unsigned __int16)v39 <= 0xCFu )
    {
LABEL_100:
      if ( (unsigned __int16)(v39 - 1) <= 0xC8u )
        goto LABEL_71;
      goto LABEL_101;
    }
    v57 = 1LL << ((unsigned __int8)v39 + 48);
    if ( (v57 & 0x15) != 0 )
    {
      sub_3F8F20(a1, 2u, 7u, v191, v184, 1u);
      sub_3F8F20(a1, 2u, 7u, v33, v186, 1u);
      sub_3F6E70(a1, 0xEu, 7u, v184, v186, v184, a3, 0, 1);
      v145 = *(_WORD *)(a1 + 48);
      v146 = v184 + 4;
      if ( v145 == 208 )
      {
        v148 = (*(double (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                 *(_QWORD *)(a1 + 832),
                 *(unsigned __int16 *)(a1 + 190));
        sub_3F6E70(a1, 0xCu, 2u, v146, v149, (int)v32, v148, 0, 1);
      }
      else
      {
        if ( v145 == 212 )
        {
          v147 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 832) + 168LL))(
                   *(_QWORD *)(a1 + 832),
                   *(unsigned __int16 *)(a1 + 190));
          sub_3F8F20(a1, 2u, 7u, v147, v186, 1u);
          sub_3F56D0(a1, 3u, 0, 32, 0x3BEA45E214ADDC55LL, v190, 0);
          sub_3F6E70(a1, 0x16u, 7u, v186, v190, v186, a3, 0, 1);
          sub_3F6E70(a1, 0xDu, 7u, v184, v186, v184, a3, 0, 1);
        }
        sub_3F6E70(a1, 4u, 2u, v146, 0x3BEA45E214ADDC55LL, (int)v32, a3, 0, 1);
      }
      return 0;
    }
    if ( (v57 & 0x22000) != 0 )
    {
      sub_3F8F20(a1, v39 != 221, 2u, v33, v184, 1u);
      sub_3F6E70(a1, 0xCu, v26, v191, v184, (int)v32, a3, 0, 1);
      return 0;
    }
    if ( (v57 & 0x44000) != 0 )
    {
      sub_3F8F20(a1, v39 != 222, v26, v33, v191, 1u);
      return 0;
    }
LABEL_101:
    v41 = *(_QWORD **)(a1 + 8);
    v42 = *(_QWORD *)(a1 + 40);
    v43 = (_QWORD *)v41[127];
    if ( v43 )
    {
      while ( 1 )
      {
        v44 = v43[4];
        v45 = 0;
        v46 = (_QWORD *)v43[3];
        if ( v42 < v44 )
        {
          v46 = (_QWORD *)v43[2];
          v45 = 1;
        }
        if ( !v46 )
          break;
        v43 = v46;
      }
      if ( !v45 )
        goto LABEL_108;
    }
    else
    {
      v43 = v41 + 126;
    }
    if ( v43 == (_QWORD *)v41[128] )
    {
LABEL_109:
      v185 = v37;
      *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
      std::_Rb_tree_insert_and_rebalance();
      ++v41[130];
      v37 = v185;
      goto LABEL_110;
    }
    v179 = v37;
    v44 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    v37 = v179;
LABEL_108:
    if ( v44 >= v42 )
      goto LABEL_110;
    goto LABEL_109;
  }
  if ( (unsigned __int16)v39 > 0x8Au )
    goto LABEL_138;
  if ( (unsigned __int16)v39 <= 0x22u )
  {
    if ( (unsigned __int16)v39 > 0x20u )
    {
      v53 = *(_DWORD *)(a1 + 52) & 0xD0;
      if ( v39 != 33 )
      {
LABEL_137:
        sub_3F5D80((_QWORD *)a1, v191, a1 + 104, a2, v53);
        return 0;
      }
LABEL_136:
      v53 |= 1u;
      goto LABEL_137;
    }
    goto LABEL_100;
  }
  if ( (unsigned __int16)(v39 - 115) <= 2u )
  {
LABEL_139:
    v53 = *(_DWORD *)(a1 + 52) & 0xD0;
    goto LABEL_136;
  }
LABEL_71:
  switch ( v39 )
  {
    case 1:
      sub_3F56D0(a1, 0x3Au, 0, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
      return 0;
    case 2:
      return 0;
    case 3:
      goto LABEL_263;
    case 4:
      if ( (unsigned __int8)sub_3F4EC0(a1, a1 + 24, v191, a3) )
        return 0;
      v110 = *(_QWORD *)(a1 + 832);
      v111 = 2;
      if ( *(_DWORD *)(v110 + 84) == 8 )
        v111 = 7;
      sub_3F56D0(
        a1,
        3u,
        v111,
        *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 50),
        0x3BEA45E214ADDC55LL,
        *(int *)(v110 + 656),
        0);
LABEL_263:
      if ( !(unsigned __int8)sub_1D5C00(a1) )
      {
        v112 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
        v113 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
        if ( v112 != v113 )
        {
          if ( v112 == -1 )
            v113 = -1;
          else
            v113 &= v112;
        }
        sub_3F56D0(a1, 0x37u, v26, v113, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 4);
      }
      return 0;
    case 5:
    case 7:
      if ( (unsigned __int8)sub_3EAA70(a1 + 24) )
        sub_3F6E70(a1, 0x1Cu, v26, v191, v33, 0, a3, 0, 1);
      v109 = 23;
      if ( *(_WORD *)(a1 + 48) == 5 )
        v109 = 24;
      sub_3F6E70(a1, v109, v26, v191, v33, (int)v32, a3, 0, 1);
      goto LABEL_158;
    case 6:
      if ( (unsigned __int8)sub_3EAA70(a1 + 24) )
        sub_3F6E70(a1, 0x1Bu, v26, v191, v33, 0, a3, 0, 1);
      v14 = 0;
      sub_3F6E70(a1, 0x16u, v26, v191, v33, (int)v32, a3, 0, 1);
      goto LABEL_129;
    case 8:
      v158 = sub_3EAA70(a1 + 24);
      v159 = v191;
      if ( v158 )
      {
        sub_3F6E70(a1, 0x1Cu, v26, v191, (int)v33, 0, a3, 0, 1);
        v159 = v191;
      }
      sub_3F67C0(a1, v26, v159, v33, v32, a3);
      goto LABEL_158;
    case 9:
      sub_3F56D0(a1, 3u, v26, 0, 0x3BEA45E214ADDC55LL, v188, 0);
      v14 = 0;
      v184 = v32;
      v32 = v188;
      v99 = v26;
      goto LABEL_241;
    case 10:
      v184 = v32;
      goto LABEL_249;
    case 11:
      v184 = v32;
      goto LABEL_245;
    case 12:
      v184 = v32;
      v14 = 0;
      v32 = v191;
      v99 = v26;
      goto LABEL_241;
    case 13:
      v184 = v32;
      v14 = 0;
      v32 = (int)v33;
      v99 = v26;
      v33 = v191;
      goto LABEL_241;
    case 14:
      v184 = v32;
      goto LABEL_153;
    case 15:
      sub_3F8480(a1, v26, v191, v33, v32, a3);
      goto LABEL_158;
    case 16:
      v37 = v33;
      LODWORD(v33) = v191;
      goto LABEL_157;
    case 17:
LABEL_157:
      sub_3F85C0((_QWORD *)a1, v26, v33, v37, v32, a3);
      goto LABEL_158;
    case 18:
LABEL_249:
      v87 = v26;
      goto LABEL_218;
    case 19:
LABEL_245:
      v100 = v26;
      goto LABEL_246;
    case 20:
      v32 = v191;
      v14 = 0;
      v99 = v26;
      goto LABEL_241;
    case 21:
LABEL_153:
      v59 = sub_3EAA70(a1 + 24);
      v60 = v191;
      if ( v59 )
      {
        sub_3F6E70(a1, 0x19u, v26, v191, (int)v33, 0, a3, 0, 1);
        sub_3F6E70(a1, 0x1Au, v26, v191, (int)v33, 3, a3, 0, 1);
        v60 = v191;
      }
      LODWORD(v32) = v184;
      v14 = 0;
      sub_3F8370(a1, v26, v60, v33, v184, a3);
      goto LABEL_129;
    case 22:
      v89 = v26;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
      {
        v90 = sub_3EE080(a1, v178);
        v37 = v191;
        if ( v90 )
          goto LABEL_222;
      }
      goto LABEL_225;
    case 23:
    case 30:
    case 31:
    case 44:
    case 80:
    case 81:
      goto LABEL_126;
    case 24:
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
      {
        v85 = sub_3EE080(a1, v178);
        v37 = v191;
        if ( v85 )
          goto LABEL_222;
      }
      v180 = v37;
      v86 = (int)v33;
      v87 = v26;
      LODWORD(v33) = v188;
      sub_3F6E70(a1, 7u, v26, v86, 0x3BEA45E214ADDC55LL, v188, a3, 0, 1);
      v184 = v32;
      v37 = v180;
LABEL_218:
      LODWORD(v32) = v184;
      v14 = 0;
      sub_3F6E70(a1, 0x14u, v87, v37, (int)v33, v184, a3, 0, 1);
      goto LABEL_129;
    case 25:
      sub_3F70E0(a1, 7u, v26, (int)v33, 0x3BEA45E214ADDC55LL, (int)v32, a3);
      goto LABEL_158;
    case 26:
    case 27:
      v77 = sub_3F57F0(a1);
      v37 = v191;
      if ( v77 )
        return 0;
      v78 = *(_QWORD **)(a1 + 8);
      v79 = *(_QWORD *)(a1 + 40);
      v80 = v192;
      v81 = (_QWORD *)v78[127];
      v82 = v78 + 126;
      while ( v81 )
      {
        v83 = (_QWORD *)v81[3];
        v80 = 0;
        if ( v79 < v81[4] )
        {
          v83 = (_QWORD *)v81[2];
          v80 = v192;
        }
        v82 = v81;
        v81 = v83;
      }
      if ( v80 )
      {
        if ( (_QWORD *)v78[128] == v82 )
          goto LABEL_212;
        v189 = v79;
        v84 = std::_Rb_tree_decrement();
        v37 = v191;
        v79 = v189;
      }
      else
      {
        v84 = (__int64)v82;
      }
      if ( *(_QWORD *)(v84 + 32) >= v79 )
        break;
LABEL_212:
      v187 = v37;
      *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
      std::_Rb_tree_insert_and_rebalance();
      ++v78[130];
      v37 = v187;
      break;
    case 28:
      v76 = *(_QWORD *)(a1 + 832);
      if ( *(_DWORD *)(v76 + 80) == 8 )
        sub_3F92E0(a1, v32, v191, v33, *(_DWORD *)(v76 + 480), 0xCu, a3, 0);
      else
        sub_3F6E70(a1, 0xEu, v26, v191, (int)v33, (int)v32, a3, 0, 1);
      goto LABEL_158;
    case 29:
      v71 = 12;
      if ( v39 != 29 )
        goto LABEL_195;
      goto LABEL_196;
    case 32:
      if ( !a2 || *(_DWORD *)(*(_QWORD *)(a1 + 832) + 372LL) > v191 || sub_CF9B0() != 1 )
        goto LABEL_162;
      return 0;
    case 37:
      v70 = *(_QWORD *)(a1 + 832);
      if ( *(_DWORD *)(v70 + 80) == 8 )
        sub_3F92E0(a1, v32, v191, v33, *(_DWORD *)(v70 + 480), 0xCu, a3, 32);
      else
        sub_3F9020(a1, v32, v191, v33, 0x20u);
      return 0;
    case 38:
      sub_3F9020(a1, v32, v191, v33, 0x30u);
      return 0;
    case 39:
      v170 = *(_QWORD *)(a1 + 832);
      if ( *(_DWORD *)(v170 + 80) == 8 )
        sub_3F92E0(a1, v32, v191, v33, *(_DWORD *)(v170 + 480), 0xCu, a3, 0);
      else
        sub_3F9020(a1, v32, v191, v33, 0);
      return 0;
    case 40:
      sub_3F9020(a1, v32, v191, v33, 0x10u);
      return 0;
    case 41:
      goto LABEL_329;
    case 42:
      goto LABEL_407;
    case 43:
      goto LABEL_406;
    case 46:
    case 47:
      if ( (unsigned __int8)sub_3F4EC0(a1, a1 + 24, v191, a3) )
        return 0;
      if ( !under_debugger )
        sub_3835A0(0xC35Cu, a3);
      goto LABEL_426;
    case 49:
      v162 = (int)v33;
      goto LABEL_384;
    case 55:
      sub_3F9150(a1, v32, v191, (unsigned int)v33, 21);
      return 0;
    case 56:
      sub_3F9150(a1, v32, v191, (unsigned int)v33, 22);
      return 0;
    case 57:
      sub_3F9150(a1, v32, v191, (unsigned int)v33, 25);
      return 0;
    case 58:
      sub_3F9150(a1, v32, v191, (unsigned int)v33, 26);
      return 0;
    case 59:
      sub_3F9020(a1, v32, v191, v33, 0x35u);
      return 0;
    case 60:
      sub_3F9020(a1, v32, v191, v33, 0x36u);
      return 0;
    case 61:
      sub_3F9020(a1, v32, v191, v33, 0x39u);
      return 0;
    case 62:
      sub_3F9020(a1, v32, v191, v33, 0x3Au);
      return 0;
    case 63:
      sub_3F9150(a1, v32, v191, (unsigned int)v33, 20);
      return 0;
    case 64:
      sub_3F9150(a1, v32, v191, (unsigned int)v33, 4);
      return 0;
    case 65:
      sub_3F9150(a1, v32, v191, (unsigned int)v33, 24);
      return 0;
    case 66:
      sub_3F9150(a1, v32, v191, (unsigned int)v33, 8);
      return 0;
    case 67:
      sub_3F9150(a1, v32, v191, (unsigned int)v33, 5);
      return 0;
    case 68:
      sub_3F9150(a1, v32, v191, (unsigned int)v33, 6);
      return 0;
    case 69:
      sub_3F9150(a1, v32, v191, (unsigned int)v33, 9);
      return 0;
    case 70:
      sub_3F9150(a1, v32, v191, (unsigned int)v33, 10);
      return 0;
    case 71:
      goto LABEL_349;
    case 97:
    case 98:
      goto LABEL_346;
    case 99:
    case 100:
    case 101:
    case 102:
      goto LABEL_141;
    case 103:
    case 104:
    case 105:
    case 106:
      v54 = v26;
      v14 = 0;
      v33 = v184;
      sub_3F56D0(a1, 3u, 2, 0, 0x3BEA45E214ADDC55LL, v184, 0);
      sub_3F8CC0(a1, 2, v26, v33, v33, 0x43u);
      v37 = v191;
      goto LABEL_142;
    case 107:
    case 108:
    case 160:
    case 161:
    case 162:
    case 163:
    case 164:
    case 165:
      goto LABEL_132;
    case 109:
    case 110:
      sub_3F8CC0(a1, *(unsigned __int8 *)(a1 + 109), v26, v33, v191, 0x43u);
      return 0;
    case 111:
    case 112:
      v139 = v26;
      v141 = 72;
      goto LABEL_314;
    case 113:
    case 114:
      goto LABEL_344;
    case 118:
    case 119:
    case 120:
    case 121:
      goto LABEL_177;
    case 122:
      goto LABEL_92;
    case 123:
    case 124:
      goto LABEL_174;
    case 125:
    case 126:
      goto LABEL_164;
    case 127:
    case 128:
    case 129:
    case 130:
      goto LABEL_168;
    case 131:
    case 132:
      goto LABEL_165;
    case 133:
    case 134:
      sub_3F8CC0(a1, *(unsigned __int8 *)(a1 + 109), v26, v33, v191, 0x41u);
      return 0;
    case 137:
    case 138:
      goto LABEL_162;
    case 142:
    case 143:
      goto LABEL_189;
    case 146:
    case 147:
      sub_3F8CC0(a1, *(unsigned __int8 *)(a1 + 109), v26, v33, v191, 0x3Fu);
      return 0;
    case 148:
    case 149:
    case 150:
    case 151:
      sub_3F8CC0(a1, *(unsigned __int8 *)(a1 + 109), v26, v33, v191, 0x40u);
      return 0;
    case 152:
    case 153:
      sub_3F8CC0(a1, *(unsigned __int8 *)(a1 + 109), v26, v33, v191, 0x42u);
      return 0;
    case 154:
    case 156:
      if ( v39 != 156 )
        LODWORD(v32) = v32 + 4;
      goto LABEL_182;
    case 155:
    case 157:
      if ( v39 == 155 )
        LODWORD(v33) = v33 + 4;
LABEL_182:
      sub_3F56D0(a1, 4u, 2, (int)v33, 0x3BEA45E214ADDC55LL, (int)v32, 0);
      return 0;
    case 173:
      sub_3F65A0(a1, v32, v191, v33);
      return 0;
    case 174:
      sub_3F65A0(a1, v32, v33, v191 + 2);
      return 0;
    case 196:
      v183 = v191;
      sub_3F9150(a1, v190, v191, (unsigned int)v33, 5);
      v156 = 10;
      goto LABEL_359;
    case 197:
      v183 = v191;
      sub_3F9150(a1, v190, v191, (unsigned int)v33, 9);
      v156 = 6;
LABEL_359:
      sub_3F9150(a1, v184, v183, (unsigned int)v33, v156);
      sub_3F6E70(a1, 0xCu, 2u, v190, v184, v184, a3, 0, 1);
      sub_3F6E70(a1, 0xCu, 2u, (int)v32, v184, (int)v32, a3, 0, 1);
      return 0;
    case 200:
      sub_3F9020(a1, v190, v190 + 4, v33, 0x25u);
      sub_3F9020(a1, v184, v184 + 4, v33, 0x2Au);
      v155 = v191;
      goto LABEL_356;
    case 201:
      sub_3F9020(a1, v190, v190 + 4, v33, 0x29u);
      sub_3F9020(a1, v184, v184 + 4, v33, 0x26u);
      v155 = v191;
LABEL_356:
      v182 = v155;
      sub_3F56D0(a1, 0xCu, 7, v190, v184, v184, 0);
      sub_3F8830(a1, v184, v32, v182, 16);
      return 0;
    default:
      goto LABEL_101;
  }
LABEL_110:
  sub_4066C0(a1, v30, v32, v37, v33, a3, a4);
  return 0;
}

