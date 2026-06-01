unsigned __int64 __fastcall sub_FE40(
        __int64 a1,
        __int16 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __m128i si128; // xmm0
  int v12; // r13d
  int v13; // r14d
  unsigned __int16 v14; // r12
  __int64 ph; // rax
  __int64 v16; // rbp
  char *v17; // r15
  __int64 v18; // rax
  char v19; // al
  const char *v20; // rdx
  _BOOL8 v21; // rdx
  int v22; // eax
  __m128i *v23; // rdi
  int v24; // eax
  double v25; // xmm4_8
  double v26; // xmm5_8
  int v27; // ecx
  char v28; // al
  int v29; // edx
  unsigned __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // r12
  void *i; // rbp
  __int64 *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdi
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rsi
  char v44; // al
  unsigned __int64 v45; // rdx
  __int64 v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdi
  _QWORD *v52; // rbp
  __int64 v53; // rdi
  __int16 v55; // cx
  __int64 v56; // rax
  char v57; // dl
  unsigned __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rbp
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r12
  unsigned __int64 v65; // rax
  void *v66; // rdx
  __int64 plugin; // rax
  void *v68; // rdx
  unsigned int v69; // eax
  __int64 v70; // r8
  int v71; // eax
  __int64 v72; // r14
  __int64 v73; // r15
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // r15
  unsigned __int64 v77; // rax
  int v78; // edx
  __int64 *v79; // r14
  unsigned __int64 v80; // r15
  unsigned __int64 v81; // rax
  __int64 v82; // rsi
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rdx
  _QWORD *v85; // rdx
  __int64 v86; // r14
  unsigned __int64 v87; // r15
  __int64 v88; // rdx
  __int64 v89; // rcx
  unsigned int v90; // esi
  __int64 v91; // rcx
  __int64 v92; // r8
  void *v93; // rcx
  __int64 v94; // rsi
  size_t v95; // r15
  void *v96; // rdi
  __int64 v97; // rcx
  __int64 v98; // rcx
  unsigned __int64 v99; // rdx
  __m128i *v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rax
  __int16 v103; // ax
  __int64 v104; // rax
  __int64 *v105; // [rsp+0h] [rbp-120h]
  __int64 v106; // [rsp+0h] [rbp-120h]
  unsigned int v107; // [rsp+0h] [rbp-120h]
  unsigned __int64 v108; // [rsp+10h] [rbp-110h]
  int v109; // [rsp+10h] [rbp-110h]
  __int64 v110; // [rsp+20h] [rbp-100h] BYREF
  __int128 v111; // [rsp+28h] [rbp-F8h] BYREF
  int v112; // [rsp+38h] [rbp-E8h]
  __int64 v113; // [rsp+48h] [rbp-D8h] BYREF
  __int128 v114; // [rsp+50h] [rbp-D0h]
  _QWORD v115[4]; // [rsp+68h] [rbp-B8h] BYREF
  int v116; // [rsp+88h] [rbp-98h]
  __m256i v117; // [rsp+98h] [rbp-88h] BYREF
  int v118; // [rsp+B8h] [rbp-68h]
  char v119[24]; // [rsp+C8h] [rbp-58h] BYREF
  unsigned __int64 v120; // [rsp+E0h] [rbp-40h]

  si128.m128i_i64[0] = 0;
  v120 = __readfsqword(0x28u);
  *(_WORD *)(a1 + 165) = a2;
  v112 = 0;
  v111 = 0;
  v12 = sub_F260(a1, nullptr, nullptr);
  if ( v12 == 1 )
  {
    v13 = 0;
    qlseek(*(_QWORD *)(a1 + 8), 0, 0);
    lread(*(_QWORD *)(a1 + 8), &v111, 20);
    v14 = WORD3(v111);
  }
  else
  {
    v13 = sub_7120(a1, *(_DWORD *)(a1 + 16), (unsigned __int8 *)(a1 + 382));
    if ( (*(_BYTE *)(a1 + 60) & 1) != 0 )
      sub_6000((__int64)"File large as 4GB are not supported");
    v14 = *(_WORD *)(a1 + 57);
  }
  setinf(12);
  ph = get_ph(12, 0);
  *(_DWORD *)(ph + 8) &= ~0x20u;
  v16 = ph;
  v17 = sub_B130(a1, v14);
  if ( !v17 )
    goto LABEL_23;
  setinf_flag(3, 4, 0);
  setinf_flag(3, 2, 1);
  set_processor_type(v17, 1);
  if ( v14 == 498 )
  {
    v13 = 1;
    setinf_flag(3, 4, 0);
    v20 = "xbox";
    goto LABEL_33;
  }
  if ( v14 > 0x1F2u )
  {
    if ( v14 == 0x8180 )
      goto LABEL_13;
    if ( v14 <= 0x8180u )
    {
      if ( v14 == 21020 )
      {
        setinf_flag(3, 64, 1);
        setinf_flag(3, 4, 0);
        v21 = 1;
        goto LABEL_35;
      }
      if ( v14 <= 0x521Cu )
      {
        if ( v14 == 503 )
        {
          v13 = 1;
          setinf_flag(3, 4, 1);
          v55 = 51;
          goto LABEL_150;
        }
        if ( v14 != 512 )
          goto LABEL_23;
        goto LABEL_86;
      }
      if ( v14 == 0x8000 )
        goto LABEL_13;
    }
    else
    {
      if ( v14 == 0x8664 )
      {
        setinf_flag(3, 4, 1);
        goto LABEL_36;
      }
      if ( v14 <= 0x8664u )
      {
        if ( v14 == 0x8380 )
          goto LABEL_13;
      }
      else
      {
        if ( v14 == 0xA641 )
          goto LABEL_86;
        if ( v14 > 0xA641u )
        {
          if ( v14 != 0xAA64 )
            goto LABEL_23;
          goto LABEL_86;
        }
        if ( v14 == 0x8C25 || v14 == 0x8C50 )
          goto LABEL_13;
      }
    }
LABEL_23:
    if ( (int)sub_5E60(1u, (__int64)"HIDECANCEL\nAUTOHIDE REGISTRY\nThe input file is for untested platform. Continue?") <= 0 )
      goto LABEL_223;
    if ( *(_DWORD *)(v16 + 4) == -1 )
    {
      if ( !getinf_buf(1, v119, 16) )
        v119[0] = 0;
      si128.m128i_i64[0] = 0;
      memset(&v117, 0, 24);
      v95 = strlen(v119);
      v117.m256i_i64[0] = qvector_reserve(&v117, 0, v95 + 1, 1);
      v117.m256i_i64[1] = v95 + 1;
      memmove((void *)v117.m256i_i64[0], v119, v95);
      v96 = &unk_1E0EC;
      *(_BYTE *)(v117.m256i_i64[0] + v95) = 0;
      if ( v117.m256i_i64[1] )
        v96 = (void *)v117.m256i_i64[0];
      set_processor_type(v96, 1);
      if ( v117.m256i_i64[0] )
      {
        v117.m256i_i64[1] = 0;
        qfree(v117.m256i_i64[0]);
      }
      setinf_flag(3, 4, 0);
      setinf_flag(3, 2, 1);
    }
    setinf_flag(3, 4, 0);
    if ( v14 == 450 )
      goto LABEL_84;
    if ( v14 <= 0x1C2u )
    {
      if ( v14 <= 0x166u )
      {
        if ( v14 <= 0x13Fu )
          goto LABEL_34;
        v18 = 1LL << ((unsigned __int8)v14 - 64);
        if ( (v18 & 0x4D00000000LL) == 0 )
        {
          if ( (v18 & 5) != 0 )
          {
            v19 = getinf_flag(3, 4);
            v20 = "n32";
            if ( v19 )
              v20 = "n64";
            goto LABEL_33;
          }
LABEL_34:
          v21 = v13 != 0;
LABEL_35:
          setinf_flag(3, 32, v21);
          goto LABEL_36;
        }
        goto LABEL_174;
      }
      if ( v14 != 448 )
        goto LABEL_34;
LABEL_84:
      v20 = "wince";
LABEL_33:
      si128.m128i_i64[0] = 0;
      *(_OWORD *)v117.m256i_i8 = 0;
      set_compiler(&v117, 4, v20);
      goto LABEL_34;
    }
    v55 = v14 - 452;
    if ( (unsigned __int16)(v14 - 452) > 0x33u )
      goto LABEL_34;
LABEL_150:
    if ( ((1LL << v55) & 0x838080A100000LL) != 0 )
    {
      v20 = "aix";
    }
    else if ( v55 == 46 )
    {
      v20 = "xbox";
    }
    else
    {
      if ( ((1LL << v55) & 1) == 0 )
        goto LABEL_34;
      v20 = "win8";
    }
    goto LABEL_33;
  }
  if ( v14 == 333 )
    goto LABEL_13;
  if ( v14 > 0x14Du )
  {
    if ( v14 == 352 )
    {
      if ( !*(_BYTE *)(a1 + 382) )
      {
        setinf_flag(3, 4, 0);
LABEL_174:
        v20 = "o32";
        goto LABEL_33;
      }
      goto LABEL_23;
    }
    if ( v14 > 0x160u )
    {
      if ( v14 > 0x185u )
      {
        if ( v14 == 495 )
        {
          v13 = 1;
          setinf_flag(3, 4, 1);
          v55 = 43;
          goto LABEL_150;
        }
        goto LABEL_23;
      }
      if ( v14 <= 0x182u )
        goto LABEL_23;
LABEL_86:
      setinf_flag(3, 4, 1);
      goto LABEL_34;
    }
    if ( v14 == 336 )
      goto LABEL_13;
    goto LABEL_23;
  }
  if ( v14 <= 0xC2u )
  {
    if ( v14 > 0xC0u || v14 == 147 )
    {
      setinf_flag(3, 64, 0);
      if ( *(_DWORD *)(a1 + 24) != 54 )
        goto LABEL_13;
      sub_5F40(0xBBAu, 0x80000000LL);
      setinf_flag(3, 4, 0);
LABEL_36:
      if ( v12 == 1 )
        goto LABEL_14;
      goto LABEL_37;
    }
    goto LABEL_23;
  }
  if ( v14 != 332 )
    goto LABEL_23;
  if ( !*(_DWORD *)(a1 + 69) )
  {
    si128.m128i_i64[0] = 0;
    *(_OWORD *)v117.m256i_i8 = 0;
    v117.m256i_i8[0] = 6;
    set_compiler(&v117, 2, 0);
    setinf_flag(3, 4, 0);
    goto LABEL_36;
  }
LABEL_13:
  setinf_flag(3, 4, 0);
  if ( v12 == 1 )
  {
LABEL_14:
    sub_CB70(a1, (__int64)&v111);
    return v120 - __readfsqword(0x28u);
  }
LABEL_37:
  v22 = sub_69D0((unsigned __int16 *)(a1 + 57));
  qlseek(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16) + v22 - *(unsigned __int16 *)(a1 + 81), 0);
  *(_BYTE *)(a1 + 381) = sub_7AD0(*(_QWORD *)(a1 + 8), (unsigned __int16 *)(a1 + 57), a1 + 275, *(_BYTE *)(a1 + 382));
  netnode_check(a1 + 125, 0, 0, 1);
  if ( !*(_DWORD *)(a1 + 61) )
  {
    v105 = (__int64 *)(a1 + 85);
    goto LABEL_39;
  }
  v69 = sub_69D0((unsigned __int16 *)(a1 + 57));
  qlseek(v70, *(_QWORD *)(a1 + 16) + v69, 0);
  v71 = sub_7FA0((unsigned __int16 *)(a1 + 57), *(_BYTE *)(a1 + 382));
  v72 = *(_QWORD *)(a1 + 8);
  v109 = v71;
  v107 = *(_DWORD *)(a1 + 61);
  v73 = qlseek(v72, 0, 1);
  v74 = qlsize(v72) - v73;
  if ( ((v74 | v73) & 0x8000000000000000LL) != 0LL )
  {
    LODWORD(v75) = 0;
LABEL_114:
    sub_6000((__int64)"%s is incorrect, maximum possible value is %u%s", "Section count", v75, "");
  }
  if ( v107 && v74 < v109 * (unsigned __int64)v107 )
  {
    v75 = v74 / v109;
    goto LABEL_114;
  }
  v76 = *(unsigned int *)(a1 + 61);
  v77 = *(_QWORD *)(a1 + 93);
  v78 = *(_DWORD *)(a1 + 61);
  if ( v77 < v76 )
  {
    v94 = *(_QWORD *)(a1 + 85);
    v105 = (__int64 *)(a1 + 85);
    if ( *(_QWORD *)(a1 + 101) < v76 )
    {
      v101 = qvector_reserve(v105, v94, v76, 76);
      *(_QWORD *)(a1 + 85) = v101;
      v94 = v101;
      v77 = *(_QWORD *)(a1 + 93);
    }
    memset((void *)(v94 + 76 * v77), 0, 76 * (v76 - v77));
    *(_QWORD *)(a1 + 93) = v76;
    v78 = *(_DWORD *)(a1 + 61);
  }
  else
  {
    if ( v76 != v77 )
      *(_QWORD *)(a1 + 93) = v76;
    v105 = (__int64 *)(a1 + 85);
  }
  v79 = *(__int64 **)(a1 + 141);
  v80 = (unsigned int)(v78 + 1);
  if ( v80 != v79[1] )
  {
    v117.m256i_i64[0] = 0;
    *(_OWORD *)&v117.m256i_u64[2] = 0u;
    v117.m256i_i64[1] = -1;
    v81 = v79[1];
    if ( v80 >= v81 )
    {
      if ( v81 >= v80 )
        goto LABEL_129;
      v82 = *v79;
      v83 = v79[2];
      if ( (unsigned __int64)&v117 < *v79 || (unsigned __int64)&v117 >= v82 + 32 * v83 )
      {
        if ( v83 >= v80 || (v102 = qvector_reserve(v79, v82, v80, 32), *v79 = v102, v82 = v102, v81 = v79[1], v81 < v80) )
        {
          while ( 1 )
          {
            v99 = v81++;
            v100 = (__m128i *)(v82 + 32 * v99);
            *v100 = _mm_load_si128((const __m128i *)&v117);
            si128 = _mm_load_si128((const __m128i *)&v117.m256i_u64[2]);
            v100[1] = si128;
            if ( v80 == v81 )
              break;
            v82 = *v79;
          }
        }
      }
      else if ( v83 >= v80
             || (v104 = qvector_reserve(v79, v82, v80, 32), *v79 = v104, v82 = v104, v81 = v79[1], v81 < v80) )
      {
        while ( 1 )
        {
          v84 = v81++;
          v85 = (_QWORD *)(v82 + 32 * v84);
          *v85 = 0;
          v85[1] = -1;
          v85[2] = 0;
          v85[3] = 0;
          if ( v80 == v81 )
            break;
          v82 = *v79;
        }
      }
    }
    v79[1] = v80;
    v78 = *(_DWORD *)(a1 + 61);
  }
LABEL_129:
  if ( v78 )
  {
    v86 = 0;
    v87 = 0;
    do
    {
      ++v87;
      v88 = v86 + *(_QWORD *)(a1 + 85);
      v86 += 76;
      sub_8010(*(_QWORD *)(a1 + 8), (unsigned __int16 *)(a1 + 57), v88, *(_BYTE *)(a1 + 382));
    }
    while ( v87 < *(unsigned int *)(a1 + 61) );
  }
LABEL_39:
  sub_8E70(*(_QWORD **)(a1 + 40), *(_QWORD *)(a1 + 8), v105);
  v23 = *(__m128i **)(a1 + 40);
  if ( !v23[4].m128i_i64[0] )
    sub_E8E0(v23, *(_QWORD *)(a1 + 8), (unsigned __int16 *)(a1 + 57), *(_BYTE *)(a1 + 382));
  *(_QWORD *)(a1 + 175) = -1;
  netnode_check(a1 + 117, "$ COFF secaddr", 0, 1);
  v24 = *(_DWORD *)(a1 + 61);
  v115[1] = a1;
  v116 = v24;
  v115[2] = v16;
  v115[3] = a1 + 57;
  v115[0] = &off_22388;
  sub_C860((__int64)v115, 1);
  netnode_check(a1 + 109, 0, 0, 1);
  netnode_check(a1 + 32, 0, 0, 1);
  if ( ((*(_WORD *)(a1 + 57) - 387) & 0xFFFD) == 0 )
    sub_9B60(a1, *(double *)si128.m128i_i64, a4, a5, a6, v25, v26, a9, a10);
  v113 = 0;
  v27 = *(_DWORD *)(a1 + 65);
  v114 = 0;
  if ( v27 )
  {
    sub_5CC0((__int64)"Applying symbol table...\n");
    v28 = getinf_flag(3, 32);
    v29 = *(unsigned __int16 *)(a1 + 57);
    if ( (((_WORD)v29 - 387) & 0xFFFD) == 0 )
    {
LABEL_45:
      sub_EC20(a1);
LABEL_46:
      sub_F6E0(a1, v16, v30, v31, v32, v33);
      if ( *(_QWORD *)(a1 + 175) != -1 )
        set_default_dataseg();
      v117.m256i_i64[1] = a1;
      v117.m256i_i64[2] = v16;
      v118 = v116;
      v117.m256i_i64[3] = a1 + 57;
      v117.m256i_i64[0] = (__int64)&off_223A0;
      sub_C860((__int64)&v117, 0);
      goto LABEL_49;
    }
    if ( v28 )
    {
      if ( (unsigned __int16)(v29 - 320) <= 0x23u )
      {
        v89 = 0x900000001LL;
        if ( _bittest64(&v89, (unsigned int)(v29 - 320)) )
          goto LABEL_45;
        if ( (*(_BYTE *)(a1 + 59) & 1) == 0 )
        {
          v90 = *(unsigned __int8 *)(a1 + 382);
LABEL_138:
          if ( (unsigned __int16)v29 > 0x14Bu )
          {
            v91 = 335544321;
            v92 = 1;
            if ( _bittest64(&v91, (unsigned int)(v29 - 332)) )
              goto LABEL_141;
          }
          goto LABEL_140;
        }
LABEL_161:
        sub_C990(a1, *(_BYTE *)(a1 + 382), 0.0);
        v29 = *(unsigned __int16 *)(a1 + 57);
LABEL_144:
        v90 = *(unsigned __int8 *)(a1 + 382);
        if ( (unsigned __int16)(v29 - 487) > 0x10u )
        {
          if ( (unsigned __int16)v29 > 0x1F2u )
          {
            if ( (_WORD)v29 == 0x8664 )
              goto LABEL_217;
            if ( (unsigned __int16)v29 > 0x8664u )
            {
              v92 = 1;
              if ( (_WORD)v29 == 0xA641 || (_WORD)v29 == 0xAA64 )
                goto LABEL_141;
              goto LABEL_140;
            }
            LOBYTE(v103) = v29;
            HIBYTE(v103) = BYTE1(v29) & 0xFE;
            if ( v103 == 614 || (_WORD)v29 == 1126 )
            {
LABEL_217:
              v92 = 1;
              goto LABEL_141;
            }
          }
          else
          {
            if ( (unsigned __int16)v29 > 0x1BFu )
              goto LABEL_183;
            if ( (unsigned __int16)v29 <= 0x168u )
              goto LABEL_138;
            if ( (unsigned __int16)(v29 - 418) <= 6u )
            {
              v98 = 81;
              v92 = 1;
              if ( _bittest64(&v98, (unsigned int)(v29 - 418)) )
                goto LABEL_141;
            }
          }
        }
        else
        {
          v93 = &loc_10101;
          if ( _bittest64((const __int64 *)&v93, (unsigned int)(v29 - 487)) )
          {
            sub_13890(a1, v16, *(unsigned __int8 *)(a1 + 382), 1, &v113);
            goto LABEL_46;
          }
          if ( (unsigned __int16)v29 <= 0x1F2u )
          {
LABEL_183:
            v92 = 1;
            v97 = 0x7000000000015LL;
            if ( _bittest64(&v97, (unsigned int)(v29 - 448)) )
              goto LABEL_141;
          }
        }
LABEL_140:
        v92 = ((_WORD)v29 == 512) | (unsigned __int8)((_WORD)v29 == 388);
LABEL_141:
        sub_12350(a1, v16, v90, 1, v92, &v113);
        goto LABEL_46;
      }
    }
    else if ( (v29 & 0xFFDF) == 0x142 )
    {
      goto LABEL_45;
    }
    if ( (*(_BYTE *)(a1 + 59) & 1) == 0 )
      goto LABEL_144;
    goto LABEL_161;
  }
  sub_5CC0((__int64)"Symbol table is stripped...\n");
  v61 = *(unsigned __int16 *)(a1 + 57);
  v30 = (unsigned int)(v61 - 472);
  if ( (unsigned __int16)(v61 - 472) > 7u )
  {
    LOWORD(v61) = v61 - 487;
    if ( (unsigned __int16)v61 > 0x10u )
      goto LABEL_46;
    v30 = (unsigned __int64)&loc_10101;
    if ( !_bittest64((const __int64 *)&v30, v61) )
      goto LABEL_46;
  }
  else
  {
    v62 = 161;
    if ( !_bittest64(&v62, v30) )
      goto LABEL_46;
  }
  v31 = *(_QWORD *)(a1 + 93);
  if ( !v31 )
    goto LABEL_46;
  v30 = *(_QWORD *)(a1 + 85);
  v63 = 0;
  while ( (*(_BYTE *)(v30 + 73) & 0x10) == 0 )
  {
    ++v63;
    v30 += 76LL;
    if ( v63 == v31 )
      goto LABEL_46;
  }
  v108 = v30;
  v106 = *(_QWORD *)(v30 + 32);
  v64 = qalloc(v106);
  if ( !v64 )
    sub_5B40((__int64)".loader section (%zu bytes)", v106);
  qlseek(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16) + *(int *)(v108 + 40), 0);
  lread(*(_QWORD *)(a1 + 8), v64, v106);
  v65 = *(unsigned __int16 *)(a1 + 57);
  LOWORD(v65) = v65 - 487;
  if ( (unsigned __int16)v65 <= 0x10u && (v66 = &loc_10101, _bittest64((const __int64 *)&v66, v65)) )
    sub_18E20(a1, v16, v64, v106);
  else
    sub_18650(a1, v16, v64, v106);
  qfree(v64);
LABEL_49:
  v34 = 0;
  for ( i = &loc_10101; v34 < (unsigned __int64)v114; ++v34 )
  {
    while ( 1 )
    {
      v36 = (__int64 *)(v113 + 12 * v34);
      v37 = *((unsigned int *)v36 + 2);
      v38 = *v36;
      v39 = *(unsigned __int16 *)(a1 + 57);
      LOWORD(v39) = v39 - 487;
      if ( (unsigned __int16)v39 > 0x10u || !_bittest64((const __int64 *)&i, v39) )
        break;
      sub_133E0();
      if ( ++v34 >= (unsigned __int64)v114 )
        goto LABEL_55;
    }
    sub_11A80(v38, v37);
  }
LABEL_55:
  v40 = *(unsigned __int16 *)(a1 + 57);
  if ( (((_WORD)v40 - 387) & 0xFFFD) != 0 )
  {
    v41 = (unsigned int)(v40 - 472);
    if ( (unsigned __int16)(v40 - 472) <= 7u )
      goto LABEL_57;
  }
  else
  {
    sub_AB00(a1);
    v40 = *(unsigned __int16 *)(a1 + 57);
    v41 = (unsigned int)(v40 - 472);
    if ( (unsigned __int16)(v40 - 472) <= 7u )
    {
LABEL_57:
      v42 = 161;
      if ( !_bittest64(&v42, v41) )
        goto LABEL_59;
      goto LABEL_58;
    }
  }
  LOWORD(v40) = v40 - 487;
  if ( (unsigned __int16)v40 <= 0x10u )
  {
    v68 = &loc_10101;
    if ( _bittest64((const __int64 *)&v68, v40) )
LABEL_58:
      sub_17D20(a1, *(unsigned __int8 *)(a1 + 381), a1 + 275);
  }
LABEL_59:
  v43 = 32;
  v44 = getinf_flag(3, 32);
  v45 = *(unsigned __int16 *)(a1 + 57);
  if ( (((_WORD)v45 - 387) & 0xFFFD) != 0 )
  {
    if ( v44 )
    {
      LOWORD(v45) = v45 - 320;
      if ( (unsigned __int16)v45 > 0x23u )
        goto LABEL_62;
      v56 = 0x900000001LL;
      if ( !_bittest64(&v56, v45) )
        goto LABEL_62;
    }
    else if ( (v45 & 0xFFDF) != 0x142 )
    {
      goto LABEL_62;
    }
    v57 = getinf_flag(3, 32);
    v58 = *(unsigned __int16 *)(a1 + 57);
    if ( v57 )
    {
      LOWORD(v58) = v58 - 320;
      if ( (unsigned __int16)v58 > 0x23u )
        goto LABEL_61;
      v59 = 0x900000001LL;
      if ( !_bittest64(&v59, v58) )
        goto LABEL_61;
    }
    else if ( (v58 & 0xFFDF) != 0x142 )
    {
      goto LABEL_61;
    }
    v60 = *(_QWORD *)(a1 + 343);
    if ( *(_DWORD *)(get_ph(3, 32) + 4) == 12 )
    {
      sub_5F40(0xBBAu, v60);
      goto LABEL_61;
    }
    if ( under_debugger )
      BUG();
    interr(10235);
LABEL_223:
    sub_6000(0);
  }
  v46 = *(_QWORD *)(a1 + 343) + *(_QWORD *)(a1 + 167);
  v110 = -1;
  netnode_check(&v110, "$ got", 0, 1);
  v117.m256i_i64[0] = ea2node(v46 - 0x8000) + 1;
  netnode_supset(v110, 0, &v117, 8, 65);
LABEL_61:
  sub_9A40(a1, (__int64)".lita");
  v43 = (__int64)".got";
  sub_9A40(a1, (__int64)".got");
LABEL_62:
  netnode_kill(a1 + 109);
  netnode_kill(a1 + 32);
  netnode_kill(a1 + 125);
  create_filename_cmt();
  v51 = *(_QWORD *)(a1 + 441);
  if ( v51 )
  {
    v43 = *(unsigned int *)(a1 + 449);
    sub_19060(v51, v43, *(unsigned __int8 *)(a1 + 453));
    qfree(*(_QWORD *)(a1 + 441));
    *(_QWORD *)(a1 + 441) = 0;
  }
  v52 = *(_QWORD **)(a1 + 393);
  if ( v52 )
  {
    v53 = v52[7];
    if ( v53 )
    {
      v52[8] = 0;
      qfree(v53);
    }
    v43 = 88;
    operator delete(v52, 0x58u);
  }
  *(_QWORD *)(a1 + 393) = 0;
  if ( (getinf(11, v43, v47, v48, v49, v50) & 1) != 0 )
  {
    plugin = find_plugin("eh_parse", 1);
    run_plugin(plugin, 0);
  }
  if ( v113 )
  {
    *(_QWORD *)&v114 = 0;
    qfree(v113);
  }
  return v120 - __readfsqword(0x28u);
}
