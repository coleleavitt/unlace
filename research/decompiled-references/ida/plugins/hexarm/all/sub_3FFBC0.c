__int64 __fastcall sub_3FFBC0(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // eax
  __int64 v6; // rax
  unsigned __int16 v7; // dx
  __int64 v8; // rsi
  int v9; // eax
  __m128i *v10; // rax
  __m128i si128; // xmm6
  char v12; // si
  char v13; // cl
  char v14; // al
  int v15; // ecx
  bool v16; // zf
  int v17; // eax
  __int16 v18; // dx
  int v19; // r13d
  int v20; // r14d
  __int64 v21; // rax
  unsigned int v22; // r12d
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rsi
  bool v27; // al
  int v28; // ecx
  __int64 v29; // rdx
  int v30; // eax
  int v31; // ecx
  unsigned __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rax
  unsigned int v35; // eax
  __m128i *v36; // rbx
  unsigned int v37; // r12d
  __int64 v38; // r15
  unsigned int v39; // eax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 (__fastcall *v42)(__int64, int); // rax
  int v43; // eax
  int v44; // r15d
  int v45; // eax
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rdi
  __int64 v49; // rsi
  __int64 (__fastcall *v50)(__int64, int); // rax
  int v51; // r15d
  unsigned int v52; // eax
  int tinfo_size; // eax
  int v54; // eax
  __int64 v55; // rdi
  __int64 v56; // rsi
  __int64 (__fastcall *v57)(__int64, int); // rax
  int v58; // r15d
  int v59; // eax
  const char *v60; // r15
  size_t v61; // rax
  size_t v62; // r13
  size_t v63; // r12
  char v64; // r13
  __int64 v65; // r12
  char *v66; // rax
  char *v67; // r11
  __int64 v68; // rsi
  int v69; // r8d
  int v70; // r9d
  _BYTE *v71; // r10
  char *v72; // rax
  char *v73; // r11
  unsigned __int64 v74; // r8
  unsigned __int8 v75; // al
  int v76; // ecx
  _BYTE *v77; // rax
  unsigned __int64 v78; // r12
  size_t v79; // r8
  size_t v80; // r10
  __int64 v81; // r9
  char *v82; // rsi
  __int64 v83; // r12
  unsigned __int64 v84; // r13
  char *v85; // rsi
  int v86; // r15d
  double v87; // xmm0_8
  unsigned int v88; // eax
  char v89; // al
  char v90; // al
  __int16 v91; // ax
  char *v92; // rdx
  __int64 v93; // rax
  __int64 v94; // r14
  int v95; // eax
  int dtype_size; // eax
  char v97; // al
  char v98; // al
  __m128i v99; // xmm0
  __int16 v100; // ax
  __m128i v101; // xmm4
  __m128i v102; // xmm3
  __m128i v103; // xmm2
  __m128i v104; // xmm5
  __m128i v105; // xmm1
  __m128i v106; // xmm0
  __m128i v107; // xmm5
  __m128i v108; // xmm5
  __m128i v109; // xmm5
  __m128i v110; // xmm7
  __m128i v111; // xmm6
  __m128i v112; // xmm9
  __m128i v113; // xmm5
  __m128i v114; // xmm8
  unsigned __int64 v115; // r9
  unsigned __int64 v116; // r12
  __m128i *v117; // rax
  unsigned __int64 v118; // rax
  char *v119; // rsi
  __int64 v120; // rdx
  unsigned __int64 v121; // r12
  unsigned __int64 v122; // r8
  char *v123; // rdx
  __int64 v124; // rax
  __int64 v125; // rdx
  void *v126; // r14
  char *v127; // rdx
  __int64 v128; // rdi
  unsigned __int8 v129; // al
  const void *v130; // rsi
  void *v131; // r15
  void *v132; // rdi
  int v133; // [rsp+Ch] [rbp-454h]
  int v135; // [rsp+28h] [rbp-438h]
  char v136; // [rsp+2Fh] [rbp-431h]
  int v137; // [rsp+30h] [rbp-430h]
  char v138; // [rsp+34h] [rbp-42Ch]
  int v139; // [rsp+38h] [rbp-428h]
  __int64 v140; // [rsp+38h] [rbp-428h]
  int n; // [rsp+48h] [rbp-418h]
  size_t na; // [rsp+48h] [rbp-418h]
  size_t nb; // [rsp+48h] [rbp-418h]
  size_t ne; // [rsp+48h] [rbp-418h]
  size_t nd; // [rsp+48h] [rbp-418h]
  size_t nc; // [rsp+48h] [rbp-418h]
  unsigned int v147; // [rsp+50h] [rbp-410h]
  char v148; // [rsp+50h] [rbp-410h]
  signed int v149; // [rsp+50h] [rbp-410h]
  unsigned __int64 v150; // [rsp+50h] [rbp-410h]
  __int64 v151; // [rsp+50h] [rbp-410h]
  unsigned __int64 v152; // [rsp+50h] [rbp-410h]
  unsigned __int64 v153; // [rsp+50h] [rbp-410h]
  __int64 v154; // [rsp+50h] [rbp-410h]
  unsigned int v155; // [rsp+58h] [rbp-408h]
  int v156; // [rsp+5Ch] [rbp-404h]
  unsigned __int8 v157; // [rsp+5Ch] [rbp-404h]
  bool v158; // [rsp+5Ch] [rbp-404h]
  char v159; // [rsp+5Ch] [rbp-404h]
  unsigned __int8 v160; // [rsp+5Ch] [rbp-404h]
  __int64 v161; // [rsp+68h] [rbp-3F8h] BYREF
  unsigned __int8 v162[16]; // [rsp+70h] [rbp-3F0h] BYREF
  char *s; // [rsp+80h] [rbp-3E0h] BYREF
  __int128 v164; // [rsp+88h] [rbp-3D8h]
  void *src; // [rsp+A0h] [rbp-3C0h] BYREF
  _BYTE v166[24]; // [rsp+A8h] [rbp-3B8h]
  __int64 v167; // [rsp+C0h] [rbp-3A0h]
  __int128 v168; // [rsp+C8h] [rbp-398h]
  __int64 v169; // [rsp+D8h] [rbp-388h]
  __int64 v170; // [rsp+E0h] [rbp-380h]
  int v171; // [rsp+E8h] [rbp-378h]
  double v172; // [rsp+F8h] [rbp-368h] BYREF
  __m128i v173; // [rsp+100h] [rbp-360h] BYREF
  __m128i v174; // [rsp+110h] [rbp-350h] BYREF
  __m128i v175; // [rsp+120h] [rbp-340h] BYREF
  __m128i v176; // [rsp+130h] [rbp-330h] BYREF
  __m128i v177; // [rsp+140h] [rbp-320h] BYREF
  __m128i v178; // [rsp+150h] [rbp-310h] BYREF
  __m128i v179; // [rsp+160h] [rbp-300h] BYREF
  void *dest[2]; // [rsp+170h] [rbp-2F0h] BYREF
  __m128i v181; // [rsp+180h] [rbp-2E0h] BYREF
  __m128i v182; // [rsp+190h] [rbp-2D0h] BYREF
  __m128i v183; // [rsp+1A0h] [rbp-2C0h] BYREF
  __m128i v184; // [rsp+1B0h] [rbp-2B0h] BYREF
  __m128i v185; // [rsp+1C0h] [rbp-2A0h] BYREF
  __m128i v186; // [rsp+1D0h] [rbp-290h] BYREF
  __m128i v187; // [rsp+1E0h] [rbp-280h] BYREF
  unsigned __int8 v188[16]; // [rsp+1F0h] [rbp-270h] BYREF
  __int64 v189; // [rsp+200h] [rbp-260h]
  void *v190; // [rsp+210h] [rbp-250h]
  unsigned __int64 v191; // [rsp+218h] [rbp-248h]
  __int32 v192; // [rsp+238h] [rbp-228h]
  char v193; // [rsp+380h] [rbp-E0h] BYREF
  __m128i v194; // [rsp+3D0h] [rbp-90h] BYREF
  __m128i v195; // [rsp+3E0h] [rbp-80h]
  __m128i v196; // [rsp+3F0h] [rbp-70h]
  __m128i v197; // [rsp+400h] [rbp-60h]
  __m128i v198; // [rsp+410h] [rbp-50h]
  unsigned __int64 v199; // [rsp+428h] [rbp-38h]

  v3 = *(unsigned __int16 *)(a1 + 48);
  v199 = __readfsqword(0x28u);
  if ( (unsigned __int16)v3 <= 0x139u )
  {
    v54 = 575;
    if ( (unsigned __int16)v3 < 0x138u )
      v54 = v3;
    v156 = v54;
  }
  else
  {
    v4 = 575;
    if ( (unsigned __int16)(v3 - 573) >= 2u )
      v4 = v3;
    v156 = v4;
  }
  if ( *(unsigned __int16 *)(a2 + 10) != v156 && *(unsigned __int16 *)(a2 + 8) != v156 )
    return 0;
  v6 = *(_QWORD *)(a1 + 800);
  v7 = *(_WORD *)(a2 + 12);
  if ( (*(_BYTE *)(v6 + 604) & 8) == 0 && (v7 & 0x400) == 0 )
    return 0;
  v8 = *(_QWORD *)(v6 + 8);
  v9 = *(_DWORD *)(v8 + 104);
  if ( v3 < v9 || v3 >= *(_DWORD *)(v8 + 108) )
  {
    v138 = 0;
    v133 = 0;
    v135 = 0;
  }
  else
  {
    v33 = v3 - v9;
    v133 = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 16LL * v33 + 8) & 0x100;
    v135 = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 16LL * v33 + 8) & 4;
    v138 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v8 + 112) + 16LL * v33 + 8) & 0x100) >> 8;
  }
  v10 = &v173;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    v10->m128i_i32[1] = -1;
    v10->m128i_i16[0] = 0;
    v10 += 5;
    v10[-5].m128i_i16[1] = 0;
    v10[-5].m128i_i64[1] = 0;
    v10[-4] = si128;
    v10[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v10[-3] + 8) = 0;
    v10[-2].m128i_i32[2] = 0;
    v10[-1].m128i_i64[0] = 0;
    v10[-1].m128i_i32[2] = 0;
  }
  while ( &v194 != v10 );
  v155 = v7;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    goto LABEL_21;
  v12 = *(_BYTE *)(a1 + 57);
  v13 = *(_BYTE *)(a1 + 96);
  v14 = 0;
  if ( v12 < 0 )
  {
    v14 = v12 & 0x7F;
    if ( (unsigned __int8)((v12 & 0x7F) - 17) <= 1u )
    {
      v155 = v7 | 0x10;
    }
    else if ( (unsigned __int8)(v14 - 9) <= 3u )
    {
      v155 = v7 | 1;
      if ( (v7 & 0x42) != 0 || (unsigned __int8)(v13 - 19) > 2u )
        goto LABEL_21;
      goto LABEL_137;
    }
  }
  if ( (unsigned __int8)(v13 - 9) <= 3u )
  {
    v15 = v155 | 1;
    v16 = (v155 & 0x42) == 0;
    v155 |= 1u;
    if ( !v16 || (unsigned __int8)(v14 - 19) > 2u )
      goto LABEL_21;
    goto LABEL_19;
  }
  if ( (v155 & 0x42) == 0 )
  {
    v75 = v14 - 19;
    if ( (unsigned __int8)(v13 - 19) <= 2u )
    {
      v76 = 0x2000;
      if ( v75 <= 2u )
      {
LABEL_138:
        v155 |= v76;
        goto LABEL_21;
      }
LABEL_137:
      v155 &= 0xC7FFu;
      v76 = 2048;
      goto LABEL_138;
    }
    if ( v75 <= 2u )
    {
      v17 = 2;
      if ( !v13 )
        goto LABEL_20;
      v15 = v155;
LABEL_19:
      BYTE1(v15) &= 0xC7u;
      v17 = 4096;
      v155 = v15;
LABEL_20:
      v155 |= v17;
    }
  }
LABEL_21:
  v18 = v7 & 0x3800;
  if ( v18 && (v155 & 0x3800) != v18 )
    goto LABEL_48;
  if ( !*(_BYTE *)(a1 + 65) )
  {
    v139 = 0;
    v20 = 0;
    v136 = 0;
    goto LABEL_102;
  }
  v19 = 0;
  v20 = 0;
  v136 = 0;
  v137 = 17;
  v139 = 0;
  while ( 1 )
  {
    if ( v156 > 710 )
    {
      v38 = v19;
      if ( v156 > 775 )
      {
        while ( (unsigned int)(v156 - 922) <= 1 )
        {
          while ( 2 )
          {
            if ( v19 > 1 )
              goto LABEL_60;
            v48 = *(_QWORD *)(a1 + 832);
            v49 = *(unsigned __int16 *)(a1 + 40 * v38 + 70);
            v50 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v48 + 168LL);
            if ( v50 == sub_3EA010 )
              v51 = sub_3EA010(v48, v49);
            else
              v51 = ((__int64 (__fastcall *)(__int64, __int64, double))v50)(v48, v49, 0.0);
            v52 = sub_3EE210(a1, a1 + 144, 0.0);
            sub_3FE370((__int64 *)&src, *(_QWORD *)(a1 + 832), 0x10u, v52, v155, 0.0);
            tinfo_size = get_tinfo_size();
            sub_32F3F0((__int64)&v173.m128i_i64[10 * v20], v51, tinfo_size);
            ++v19;
            ++v20;
            clear_tinfo_t();
            v38 = v19;
            if ( !*(_BYTE *)(a1 + 40LL * v19 + 65) )
              goto LABEL_100;
            if ( v156 <= 710 )
            {
LABEL_92:
              v38 = v19;
              continue;
            }
            break;
          }
        }
        goto LABEL_60;
      }
      if ( v156 <= 712 )
        goto LABEL_59;
      if ( ((1LL << ((unsigned __int8)v156 + 55)) & 0x4000802040022A15LL) == 0 )
      {
        if ( ((1LL << ((unsigned __int8)v156 + 55)) & 0x18000060) != 0 )
          goto LABEL_73;
        goto LABEL_59;
      }
    }
    else
    {
      if ( v156 > 665 )
      {
        switch ( v156 )
        {
          case 666:
          case 703:
          case 705:
          case 707:
            goto LABEL_64;
          case 693:
            if ( v19 != 1 )
              goto LABEL_33;
            v23 = 1;
            v24 = 104;
            v19 = 2;
            v22 = v155 | 1;
            break;
          case 694:
            if ( v19 != 1 )
              goto LABEL_33;
            v23 = 1;
            v24 = 104;
            v19 = 2;
            v22 = v155 & 0xFFFFFFFE;
            break;
          case 710:
            goto LABEL_73;
          default:
            goto LABEL_59;
        }
        goto LABEL_34;
      }
      if ( v156 <= 460 )
      {
        while ( 1 )
        {
          if ( v156 > 458 )
            goto LABEL_92;
          if ( v156 > 455 )
            goto LABEL_59;
          if ( v156 <= 452 )
            break;
          if ( v19 )
            goto LABEL_33;
          v55 = *(_QWORD *)(a1 + 832);
          v56 = *(unsigned __int16 *)(a1 + 70);
          v57 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v55 + 168LL);
          if ( v57 == sub_3EA010 )
          {
            v58 = sub_3EA010(v55, v56);
          }
          else
          {
            v95 = ((__int64 (__fastcall *)(__int64, __int64, double))v57)(v55, v56, 0.0);
            v55 = *(_QWORD *)(a1 + 832);
            v58 = v95;
          }
          sub_3FE370((__int64 *)&src, v55, 0x10u, 4u, v155, 0.0);
          v59 = get_tinfo_size();
          sub_32F3F0((__int64)&v173.m128i_i64[10 * v20++], v58, v59);
          v19 = 1;
          clear_tinfo_t();
          if ( !*(_BYTE *)(a1 + 105) )
            goto LABEL_100;
        }
        if ( v156 > 397 )
        {
          if ( v156 == 404 )
            goto LABEL_73;
        }
        else if ( v156 > 381 )
        {
          v46 = 32777;
          if ( _bittest64(&v46, (unsigned int)(v156 - 382)) )
          {
LABEL_73:
            v23 = v19;
            v22 = v155;
            v24 = 40LL * v19 + 64;
            v19 = v19 + 1 - (*(_BYTE *)(a1 + 145) == 0 && v20 == 0);
            goto LABEL_34;
          }
        }
LABEL_59:
        v38 = v19;
LABEL_60:
        v23 = v19;
        v22 = v155;
        ++v19;
        v24 = 40 * v38 + 64;
        goto LABEL_34;
      }
      if ( v156 > 623 )
        goto LABEL_59;
      if ( v156 > 621 )
      {
        if ( v19 )
        {
          if ( v19 == 1 )
          {
            v24 = 184;
            v19 = 2;
            v23 = 3;
            v22 = v155;
          }
          else
          {
            v23 = v19 - 1;
            v22 = v155;
            ++v19;
            v24 = 40LL * v23 + 64;
          }
        }
        else
        {
          v22 = v155;
          v23 = 0;
          v24 = 64;
          v19 = 1;
        }
        goto LABEL_34;
      }
      if ( (v156 & 0xFFFFFFFB) != 0x262 && v156 != 564 )
        goto LABEL_59;
    }
LABEL_64:
    if ( v19 == 1 )
    {
      if ( !sub_3EE080(a1, a1 + 64) )
      {
        if ( !under_debugger )
          sub_3835A0(0xC872u, 0.0);
        goto LABEL_271;
      }
      sub_3EE110(a1, a1 + 64, 0.0);
      if ( (unsigned int)((unsigned __int64)get_dtype_size() >> 1) != 8 )
      {
        if ( !under_debugger )
          sub_3835A0(0xC873u, 0.0);
        goto LABEL_271;
      }
      v39 = sub_3EE210(a1, a1 + 64, 0.0);
      v40 = *(_QWORD *)(a1 + 832);
      v41 = *(unsigned __int16 *)(a1 + 70);
      v147 = v39;
      v42 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v40 + 168LL);
      if ( v42 == sub_3EA010 )
      {
        v43 = sub_3EA010(v40, v41);
      }
      else
      {
        v43 = v42(v40, v41);
        v40 = *(_QWORD *)(a1 + 832);
      }
      v44 = v43;
      sub_3FE370((__int64 *)&src, v40, 8u, v147, v155, 0.0);
      v45 = get_tinfo_size();
      sub_32F3F0((__int64)&v173.m128i_i64[10 * v20++], v44, v45);
      v19 = 2;
      clear_tinfo_t();
      v23 = 1;
      v24 = 104;
      v22 = v155;
    }
    else
    {
LABEL_33:
      v21 = v19;
      v22 = v155;
      v23 = v19++;
      v24 = 40 * v21 + 64;
    }
LABEL_34:
    v25 = a1 + v24;
    if ( !*(_BYTE *)(a1 + 40LL * v19 + 65) && (v22 & 0x20) != 0 )
      break;
    v26 = v25;
    n = v23;
    v27 = sub_3EDFE0(a1, v25);
    v28 = n;
    v29 = v26;
    if ( v27 && (n > 0 || v138) )
    {
      v47 = sub_3EFC90(a1, v26, 0.0);
      v28 = n;
      if ( v137 <= v47 )
        v47 = v137;
      v29 = v26;
      v137 = v47;
    }
    if ( ((v28 == 0 ? 12290 : 10306) & v22) != 0 )
      v22 |= 2u;
    v30 = sub_3FEA40(a1, (__int64)&v173.m128i_i64[10 * v20], v29, v22, 0.0);
    v31 = v30;
    if ( !v30 )
      goto LABEL_48;
    if ( v30 == 2 )
    {
      if ( (v22 & 4) != 0 )
      {
        v32 = get_tinfo_size();
        v31 = 2;
        v136 |= v32 > 8;
        goto LABEL_25;
      }
      if ( !under_debugger )
        sub_3835A0(0xC874u, 0.0);
LABEL_271:
      BUG();
    }
LABEL_25:
    ++v139;
    v20 += v31;
    if ( !*(_BYTE *)(a1 + 40LL * v19 + 65) )
      goto LABEL_100;
  }
  v34 = a1 + 40LL * v23;
  if ( *(_BYTE *)(v34 + 65) != 5 || *(_QWORD *)(v34 + 72) )
  {
LABEL_48:
    v35 = 0;
    goto LABEL_49;
  }
LABEL_100:
  if ( v137 > 16 || (v155 & 0x2000) != 0 )
LABEL_102:
    v137 = sub_3EFC90(a1, a1 + 64, 0.0);
  s = nullptr;
  v164 = 0;
  v60 = *(const char **)a2;
  if ( *(_QWORD *)a2 )
  {
    v61 = strlen(*(const char **)a2);
    v62 = v61 + 1;
    v63 = v61;
    s = (char *)qvector_reserve();
    *(_QWORD *)&v164 = v62;
    memmove(s, v60, v63);
    s[v63] = 0;
  }
  if ( (v155 & 0x400) != 0 )
  {
    sub_3EE110(a1, a1 + 40LL * (v139 - 1) + 64, 0.0);
    dtype_size = get_dtype_size();
    if ( (v155 & 0x2802) != 0 )
    {
      if ( dtype_size == 8 )
        goto LABEL_183;
      v16 = dtype_size == 4;
      v97 = 108;
      v148 = 0;
      if ( v16 )
        v97 = 102;
      v64 = v97;
    }
    else
    {
      v16 = dtype_size == 8;
      v98 = 0;
      v64 = 108;
      if ( v16 )
        v98 = 108;
      v148 = v98;
    }
  }
  else if ( (v155 & 0x608) != 0 && (unsigned __int8)sub_3EE340(a1, a1 + 24, 1) )
  {
    if ( (unsigned int)v137 > 8 || ((v137 - 1) & v137) != 0 )
      sub_3EAF00(0.0);
    v64 = 100;
    if ( (unsigned int)v137 <= 4 )
      v64 = aBhsd[(unsigned int)v137 >> 1];
    v148 = 0;
  }
  else
  {
    if ( sub_3EFD10(a1, a1 + 24, 0.0) )
    {
      v148 = 0;
      v64 = 113;
      goto LABEL_110;
    }
LABEL_183:
    v148 = 0;
    v64 = 0;
  }
LABEL_110:
  v65 = v164;
  if ( !(_QWORD)v164 )
    goto LABEL_122;
  v66 = strchr(s, 35);
  v67 = s;
  if ( !v66 || v66 - s == -1 )
  {
LABEL_118:
    na = (size_t)v67;
    v72 = strchr(v67, 36);
    if ( !v72 )
      goto LABEL_122;
    v73 = (char *)na;
    v74 = (unsigned __int64)&v72[-na];
    if ( &v72[-na] == (char *)-1LL )
      goto LABEL_122;
    if ( !v64 )
    {
      v115 = v65 - 1;
      if ( v74 < v65 - 1 )
      {
        v116 = v74 + 1;
        if ( v74 + 1 < v115 )
        {
          v130 = (const void *)(na + v116);
          nd = (size_t)&v72[-na];
          v153 = v115 - v116;
          memmove(v72, v130, v115 - v116);
          v73 = s;
          v74 = v153 + nd;
          v116 = v153 + nd + 1;
        }
        if ( *((_QWORD *)&v164 + 1) < v116 )
        {
          v152 = v74;
          s = (char *)qvector_reserve();
          v74 = v152;
          v73 = s;
        }
        *(_QWORD *)&v164 = v116;
        v73[v74] = 0;
      }
      goto LABEL_122;
    }
    *v72 = v64;
    if ( !v148 )
      goto LABEL_122;
    v118 = v164;
    v119 = s;
    if ( (_QWORD)v164 )
    {
      v120 = v164 + 1;
      v121 = v164 - 1;
      if ( *((_QWORD *)&v164 + 1) >= (unsigned __int64)(v164 + 1) )
        goto LABEL_232;
    }
    else
    {
      if ( *((_QWORD *)&v164 + 1) > 1u )
      {
        *(_QWORD *)&v164 = 2;
        v121 = 0;
        s[1] = 0;
LABEL_234:
        s[v121] = 108;
        goto LABEL_122;
      }
      v121 = 0;
      v120 = 2;
    }
    ne = v74;
    v151 = v120;
    s = (char *)qvector_reserve();
    v119 = s;
    v74 = ne;
    v118 = v121 + 1;
    v120 = v151;
LABEL_232:
    v122 = v74 + 1;
    *(_QWORD *)&v164 = v120;
    v119[v118] = 0;
    if ( v122 < v121 )
    {
      v150 = v122;
      memmove(&s[v122 + 1], &s[v122], v121 - v122);
      v121 = v150;
    }
    goto LABEL_234;
  }
  v68 = a1 + 64;
  while ( 1 )
  {
    if ( !*(_BYTE *)(v68 + 1) )
    {
      if ( !under_debugger )
        sub_3835A0(0xC905u, 0.0);
      goto LABEL_271;
    }
    if ( (unsigned __int8)sub_3EE030(a1, v68) )
      break;
    v68 += 40;
    if ( v69 == 7 )
    {
      v156 = v70;
      goto LABEL_118;
    }
  }
  v156 = v70;
  *v71 = *(_QWORD *)(a1 + 40LL * v69 + 72) + 48;
  v65 = v164;
  if ( (_QWORD)v164 )
  {
    v67 = s;
    goto LABEL_118;
  }
LABEL_122:
  if ( (v155 & 4) != 0 )
  {
    v35 = 0;
    if ( v139 + 1 != v20 )
      goto LABEL_124;
    *(_OWORD *)v166 = 0;
    src = nullptr;
    v77 = (_BYTE *)qvector_reserve();
    src = v77;
    *(_QWORD *)v166 = 6;
    *(_DWORD *)v77 = 1851878495;
    v77[4] = 101;
    *((_BYTE *)src + 5) = 0;
    v78 = *(_QWORD *)v166;
    if ( *(_QWORD *)v166 )
    {
      v79 = *(_QWORD *)v166 - 1LL;
      if ( *(_QWORD *)v166 != 1 )
      {
        v80 = v164;
        v81 = *(_QWORD *)v166 - 1LL;
        if ( (_QWORD)v164 )
        {
          v80 = v164 - 1;
          v81 = v79 + v164 - 1;
          v78 = *(_QWORD *)v166 + v164 - 1;
        }
        v82 = s;
        if ( *((_QWORD *)&v164 + 1) < v78 )
        {
          v140 = v81;
          nc = v80;
          v154 = *(_QWORD *)v166 - 1LL;
          s = (char *)qvector_reserve();
          v81 = v140;
          v82 = s;
          v80 = nc;
          v79 = v154;
        }
        *(_QWORD *)&v164 = v78;
        v82[v81] = 0;
        memcpy(&s[v80], src, v79);
      }
    }
    if ( src )
    {
      *(_QWORD *)v166 = 0;
      qfree();
    }
    if ( v136 && (!v64 || v64 == 113) )
    {
      v83 = v164;
      v84 = 2;
      if ( (_QWORD)v164 )
      {
        v84 = v164 + 1;
        v83 = v164 - 1;
      }
      v85 = s;
      if ( *((_QWORD *)&v164 + 1) < v84 )
      {
        s = (char *)qvector_reserve();
        v85 = s;
      }
      *(_QWORD *)&v164 = v84;
      v85[v83] = 113;
      s[v83 + 1] = 0;
    }
  }
  if ( (v155 & 0x400) == 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 && *(char *)(a1 + 57) < 0 && (*(_BYTE *)(a1 + 57) & 0x7F) != 0 )
      get_dtype_size();
    sub_FA510((__int64 *)&s);
    if ( (v155 & 0x3800) != 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
        sub_3EFC30(a1, a1 + 104, 0.0);
      else
        get_dtype_size();
      sub_FA510((__int64 *)&s);
    }
  }
  v161 = 1;
  if ( !v135 || (copy_tinfo_t(), v133) )
  {
    v86 = 0;
  }
  else
  {
    --v20;
    v86 = 1;
  }
  v149 = v173.m128i_i32[2];
  if ( v156 == 575 )
  {
    v100 = *(_WORD *)(a1 + 48);
    if ( v100 != 575 && v100 != 314 )
    {
      v101 = _mm_load_si128(&v173);
      v102 = _mm_load_si128(&v174);
      v103 = _mm_load_si128(&v175);
      v173 = _mm_load_si128(&v183);
      v104 = _mm_load_si128(&v184);
      v105 = _mm_load_si128(&v176);
      v106 = _mm_load_si128(&v177);
      v194 = v101;
      v174 = v104;
      v107 = _mm_load_si128(&v185);
      v195 = v102;
      v175 = v107;
      v108 = _mm_load_si128(&v186);
      v196 = v103;
      v176 = v108;
      v109 = _mm_load_si128(&v187);
      v197 = v105;
      v198 = v106;
      v177 = v109;
      v183 = v101;
      v184 = v102;
      v185 = v103;
      v186 = v105;
      v187 = v106;
      if ( v100 == 573 || v100 == 312 )
      {
        v110 = _mm_load_si128((const __m128i *)dest);
        v111 = _mm_load_si128(&v181);
        *(__m128i *)dest = v103;
        v112 = _mm_load_si128(&v178);
        v113 = _mm_load_si128(&v182);
        v178 = v101;
        v114 = _mm_load_si128(&v179);
        v196 = v110;
        v194 = v112;
        v195 = v114;
        v197 = v111;
        v198 = v113;
        v179 = v102;
        v181 = v105;
        v182 = v106;
        v183 = v112;
        v184 = v114;
        v185 = v110;
        v186 = v111;
        v187 = v113;
      }
    }
  }
  v87 = 0.0;
  src = (void *)0xFFFFFFFF00000000LL;
  *(_QWORD *)v166 = 0;
  v167 = 0;
  v169 = 0;
  *(__m128i *)&v166[8] = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v168 = 0;
  v170 = 0;
  v171 = 0;
  v158 = v156 == 425 || (unsigned int)(v156 - 427) <= 1;
  if ( !v158 )
  {
LABEL_172:
    v91 = *(_WORD *)(a1 + 48);
    if ( v91 == 11 || v91 == 331 )
    {
      if ( sub_1255A0(&v173.m128i_u8[-v86 & 0x50], (__int64)(&v173 + 5 * v86 + 5), 0) )
      {
        if ( v20 != 2 )
        {
          if ( !under_debugger )
            sub_3835A0(0xCE80u, v87);
          goto LABEL_271;
        }
        v129 = sub_3EE110(a1, a1 + 64, v87);
        v94 = sub_3F56D0(a1, 3u, v129, 0, 0x3BEA45E214ADDC55LL, v149, 0);
LABEL_179:
        if ( v158 )
        {
          v117 = *(__m128i **)(a1 + 8);
          *(_QWORD *)v162 = a1 + 40;
          sub_C79F0(v117 + 87, (unsigned __int64 *)(a1 + 40), (_QWORD **)v162);
          copy_tinfo_t();
          *(_BYTE *)(v94 + 65) |= 2u;
          sub_3EFE10(a1, v94, (unsigned __int8 *)&src);
        }
        else if ( *(_DWORD *)v94 == 56 )
        {
          if ( v135 )
          {
            v99 = _mm_cvtsi32_si128(*(_DWORD *)(v94 + 68));
            *(_DWORD *)v162 = 1;
            *(_QWORD *)&v162[4] = _mm_unpacklo_epi32(v99, _mm_cvtsi32_si128(v149)).m128i_u64[0];
            v94 = (__int64)sub_124CA0(v94, v162);
            sub_11C7E0((__int64)v162);
          }
          sub_B4CD0(*(_QWORD **)(a1 + 16), v94);
        }
        v89 = 1;
        goto LABEL_168;
      }
      v91 = *(_WORD *)(a1 + 48);
    }
    if ( v91 == 919 )
    {
      if ( v20 != 3 || !v86 )
      {
        if ( !under_debugger )
          sub_3835A0(0xCE60u, v87);
        goto LABEL_271;
      }
      v123 = (char *)s1;
      if ( (_QWORD)v164 )
        v123 = s;
      v124 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v123, &v161, 2, (__int64)&v178, 1);
      v125 = *(_QWORD *)(v124 + 72);
      v173.m128i_i8[0] = 4;
      *(_DWORD *)(v125 + 280) |= 0x14u;
      v173.m128i_i64[1] = v124;
      sub_124BC0((__int64)&v178, v188);
      v179.m128i_i64[0] = v189;
      copy_tinfo_t();
      v126 = (void *)v191;
      if ( v191 && (nb = v191 - 1, v191 != 1) )
      {
        v131 = v190;
        v132 = dest[0];
        if ( v181.m128i_i64[0] < v191 )
        {
          dest[0] = (void *)qvector_reserve();
          v132 = dest[0];
        }
        dest[1] = v126;
        memmove(v132, v131, nb);
        *((char *)dest[0] + (unsigned __int64)v126 - 1) = 0;
      }
      else
      {
        dest[1] = nullptr;
      }
      copy_argloc();
      v127 = (char *)s1;
      v128 = *(_QWORD *)(a1 + 8);
      v182.m128i_i32[2] = v192;
      if ( (_QWORD)v164 )
        v127 = s;
      v93 = sub_335C70(v128, *(_QWORD *)(a1 + 40), (__int64)v127, &v161, 2, (__int64)&v173, 1);
    }
    else
    {
      v92 = (char *)s1;
      if ( (_QWORD)v164 )
        v92 = s;
      v93 = sub_335C70(
              *(_QWORD *)(a1 + 8),
              *(_QWORD *)(a1 + 40),
              (__int64)v92,
              &v161,
              v20,
              (__int64)v173.m128i_i64 + (-v86 & 0x50),
              1);
    }
    v94 = v93;
    *(_DWORD *)(*(_QWORD *)(v93 + 72) + 280LL) |= 0x14u;
    goto LABEL_179;
  }
  if ( v20 != 2 || v86 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC906u, 0.0);
    goto LABEL_271;
  }
  *(_QWORD *)&v87 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v173.m128i_u32[2]), _mm_cvtsi32_si128(v178.m128i_u32[2])).m128i_u64[0];
  v172 = v87;
  v88 = sub_3EE210(a1, a1 + 64, v87);
  v89 = sub_3FE0C0(
          (__int64)&src,
          *(_QWORD *)(a1 + 832),
          *(_QWORD *)(a1 + 8),
          v155,
          v178.m128i_i16[2],
          v88,
          2,
          (int *)&v172);
  if ( v89 )
  {
    copy_tinfo_t();
    goto LABEL_172;
  }
LABEL_168:
  v159 = v89;
  cleanup_argloc();
  v90 = v159;
  if ( v167 )
  {
    *(_QWORD *)&v168 = 0;
    qfree();
    v90 = v159;
  }
  v160 = v90;
  clear_tinfo_t();
  sub_11C7E0((__int64)&src);
  clear_tinfo_t();
  v35 = v160;
LABEL_124:
  if ( s )
  {
    v157 = v35;
    *(_QWORD *)&v164 = 0;
    qfree();
    v35 = v157;
  }
LABEL_49:
  v36 = (__m128i *)&v193;
  v37 = v35;
  while ( 1 )
  {
    cleanup_argloc();
    if ( v36[2].m128i_i64[0] )
    {
      v36[2].m128i_i64[1] = 0;
      qfree();
    }
    clear_tinfo_t();
    sub_11C7E0((__int64)v36);
    if ( &v173 == v36 )
      break;
    v36 -= 5;
  }
  return v37;
}

