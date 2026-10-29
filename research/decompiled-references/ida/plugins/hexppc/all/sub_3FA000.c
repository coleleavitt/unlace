__int64 __fastcall sub_3FA000(__int64 a1, __m128 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // rbx
  char v6; // r15
  int v8; // esi
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r13d
  __int64 v12; // rdx
  int v13; // eax
  signed int v14; // ebp
  __int64 v15; // rbx
  signed int v16; // eax
  unsigned __int16 v17; // r11
  __int64 v18; // rax
  char *v19; // rsi
  char *v20; // rdx
  _QWORD *v21; // r15
  unsigned __int64 v22; // r8
  _QWORD *v23; // r14
  __int16 v24; // bp
  _QWORD *v25; // rax
  __int64 v26; // rbx
  int dtype_size; // eax
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // rdi
  __int64 v35; // rdx
  int v36; // eax
  unsigned __int64 v37; // rdx
  char v38; // cl
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rbx
  unsigned int v43; // r14d
  int v44; // r8d
  unsigned __int8 v45; // r9
  __int64 v46; // r10
  unsigned __int16 v47; // r11
  int v48; // r14d
  _DWORD *v49; // rdi
  __int64 v50; // rsi
  __int64 (__fastcall *v51)(_DWORD *, unsigned int); // rax
  int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rbp
  __int16 v56; // bx
  _QWORD *v57; // rax
  unsigned __int8 v58; // al
  unsigned __int8 v59; // al
  unsigned __int8 v60; // al
  unsigned __int8 v61; // al
  unsigned __int8 v62; // al
  __int64 v63; // r8
  __int64 v64; // rax
  unsigned __int8 v65; // al
  unsigned int v66; // r15d
  int v67; // eax
  int v68; // eax
  unsigned int v69; // r13d
  unsigned __int8 v70; // al
  unsigned int v71; // ebx
  unsigned __int8 v72; // al
  unsigned int v73; // r8d
  char v74; // r8
  char v75; // r8
  unsigned __int16 v76; // ax
  char v77; // r9
  __int64 v78; // rcx
  unsigned __int16 v79; // ax
  char v80; // r8
  unsigned __int16 v81; // ax
  char v82; // r14
  __int64 v83; // rdx
  signed int v84; // r13d
  unsigned __int8 v85; // al
  char v86; // r9
  char v87; // r8
  signed int v88; // ebx
  char v89; // al
  unsigned __int8 v90; // al
  signed int v91; // ebx
  unsigned __int8 v92; // al
  char v93; // al
  signed int v94; // ebx
  char v95; // al
  unsigned __int8 v96; // al
  unsigned __int8 v97; // al
  unsigned __int8 v98; // al
  unsigned __int8 v99; // al
  unsigned __int8 v100; // al
  int v101; // r8d
  __int64 v102; // rdx
  int v103; // eax
  unsigned __int16 v104; // r13
  signed int v105; // r14d
  unsigned __int8 v106; // al
  unsigned __int16 v107; // r13
  signed int v108; // r14d
  unsigned __int8 v109; // al
  unsigned __int8 v110; // al
  unsigned __int8 v111; // al
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rdx
  unsigned __int8 v115; // al
  signed int v116; // [rsp+18h] [rbp-270h]
  __int64 v117; // [rsp+20h] [rbp-268h]
  __int64 v118; // [rsp+20h] [rbp-268h]
  __int64 v119; // [rsp+20h] [rbp-268h]
  unsigned __int64 v120; // [rsp+20h] [rbp-268h]
  unsigned __int64 v121; // [rsp+28h] [rbp-260h]
  char v122; // [rsp+37h] [rbp-251h] BYREF
  __int64 v123; // [rsp+38h] [rbp-250h] BYREF
  __m128 v124; // [rsp+40h] [rbp-248h] BYREF
  _BYTE v125[24]; // [rsp+50h] [rbp-238h] BYREF
  __int128 v126; // [rsp+68h] [rbp-220h]
  __int64 v127; // [rsp+78h] [rbp-210h]
  __int128 v128; // [rsp+80h] [rbp-208h]
  __int128 v129; // [rsp+90h] [rbp-1F8h]
  __int64 v130; // [rsp+C0h] [rbp-1C8h]
  int v131; // [rsp+C8h] [rbp-1C0h]
  __int64 v132; // [rsp+D0h] [rbp-1B8h]
  char v133; // [rsp+D8h] [rbp-1B0h]
  __int128 v134; // [rsp+E0h] [rbp-1A8h]
  __int64 v135; // [rsp+F0h] [rbp-198h]
  __int64 v136; // [rsp+F8h] [rbp-190h]
  __int64 v137; // [rsp+100h] [rbp-188h]
  _BYTE v138[6]; // [rsp+108h] [rbp-180h] BYREF
  __int16 v139; // [rsp+10Eh] [rbp-17Ah]
  __int64 v140; // [rsp+130h] [rbp-158h]
  __int64 v141; // [rsp+140h] [rbp-148h]
  _QWORD v142[8]; // [rsp+248h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 40);
  v142[0] = __readfsqword(0x28u);
  if ( *(_QWORD *)(v2 + 40) == v3 )
  {
    v26 = *(int *)(*(_QWORD *)(a1 + 832) + 480LL);
    dtype_size = get_dtype_size();
    v28 = sub_1D2710(a1, 3u, dtype_size, 0, 0x3BEA45E214ADDC55LL, v26, 0);
    *(_DWORD *)(v28 + 4) |= 0x80u;
    if ( (unsigned int)sub_CC530() == 9 )
      sub_3F4720(a1);
    sub_1CAFA0(*(_QWORD *)(a1 + 8));
    v123 = 0;
    get_func_frame();
    *(_QWORD *)&v125[16] = 0;
    v127 = 0;
    v29 = *(_QWORD *)(a1 + 832);
    v130 = 1;
    v131 = -1;
    v132 = 0;
    v133 = 0;
    *(_OWORD *)v125 = 0;
    v126 = 0;
    v128 = 0;
    v129 = 0;
    v30 = qvector_reserve();
    *(_QWORD *)&v125[16] = v30;
    *(_QWORD *)&v126 = 10;
    *(_QWORD *)v30 = 0x6F745F6465766173LL;
    *(_BYTE *)(v30 + 8) = 99;
    *(_BYTE *)(*(_QWORD *)&v125[16] + 9LL) = 0;
    if ( (unsigned int)find_tinfo_udt_member() == -1 )
      v117 = -1;
    else
      v117 = *(_QWORD *)v125 >> 3;
    clear_tinfo_t();
    if ( v127 )
    {
      *(_QWORD *)&v128 = 0;
      qfree();
    }
    if ( *(_QWORD *)&v125[16] )
    {
      *(_QWORD *)&v126 = 0;
      qfree();
    }
    *(_QWORD *)(v29 + 4440) = v117;
    v31 = *(_QWORD *)(a1 + 832);
    v127 = 0;
    v130 = 1;
    v131 = -1;
    v132 = 0;
    v133 = 0;
    *(_OWORD *)v125 = 0;
    v126 = 0;
    v128 = 0;
    v129 = 0;
    v32 = qvector_reserve();
    *(_QWORD *)&v125[16] = v32;
    *(_QWORD *)&v126 = 10;
    *(_QWORD *)v32 = 0x6C5F7265646E6573LL;
    *(_BYTE *)(v32 + 8) = 114;
    *(_BYTE *)(*(_QWORD *)&v125[16] + 9LL) = 0;
    if ( (unsigned int)find_tinfo_udt_member() == -1 )
      v118 = -1;
    else
      v118 = *(_QWORD *)v125 >> 3;
    clear_tinfo_t();
    if ( v127 )
    {
      *(_QWORD *)&v128 = 0;
      qfree();
    }
    if ( *(_QWORD *)&v125[16] )
    {
      *(_QWORD *)&v126 = 0;
      qfree();
    }
    *(_QWORD *)(v31 + 4448) = v118;
    v33 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 4448LL);
    if ( v33 == -1 && *(_BYTE *)(*(_QWORD *)(a1 + 800) + 148LL) )
    {
      v119 = *(_QWORD *)(a1 + 832);
      v127 = 0;
      v130 = 1;
      v131 = -1;
      v132 = 0;
      v133 = 0;
      *(_OWORD *)v125 = 0;
      v126 = 0;
      v128 = 0;
      v129 = 0;
      *(_QWORD *)&v125[16] = qvector_reserve();
      *(_QWORD *)&v126 = 11;
      strcpy(*(char **)&v125[16], "back_chain");
      if ( (unsigned int)find_tinfo_udt_member() != -1 )
        v33 = *(_QWORD *)v125 >> 3;
      clear_tinfo_t();
      v63 = v119;
      if ( *(_QWORD *)&v125[16] )
      {
        *(_QWORD *)&v126 = 0;
        qfree();
        v63 = v119;
      }
      *(_QWORD *)(v63 + 4448) = v33;
    }
    *(_QWORD *)v125 = 32;
    *(_QWORD *)&v126 = 0;
    *(_OWORD *)&v125[8] = 0;
    get_stkarg_area_info();
    v34 = *(_QWORD *)(a1 + 8);
    a2 = _mm_loadh_ps((const double *)&v125[8]);
    v124 = a2;
    sub_F4080(v34, &v124);
    if ( *(_WORD *)(a1 + 48) == 306 )
    {
      v53 = *(_QWORD *)(a1 + 8);
      v54 = *(_QWORD *)(a1 + 40);
      v55 = *(_QWORD *)(v53 + 920);
      if ( *(_QWORD *)(v53 + 40) != v54 && v54 != *(_QWORD *)(v55 + 128) )
      {
        if ( !under_debugger )
          sub_37EEE0(0xCBF7u, *(double *)a2.m128_u64);
        BUG();
      }
      *(_DWORD *)(v55 + 120) |= 2u;
      v56 = *(_WORD *)(a1 + 70);
      v57 = v138;
      v134 = -1;
      a2.m128_u64[0] = 0;
      v135 = -1;
      v136 = 0;
      v137 = 0;
      do
      {
        *(_WORD *)v57 = 0;
        v57 += 5;
        *((_WORD *)v57 - 19) = 0;
        *((_WORD *)v57 - 18) = 0;
        *((_DWORD *)v57 - 2) = 0;
        *((_WORD *)v57 - 17) = 0;
        *((_OWORD *)v57 - 2) = 0;
        *(v57 - 2) = 0;
      }
      while ( v142 != v57 );
      if ( (int)decode_insn() > 0
        && (_WORD)v136 == 186
        && v56 == v139
        && (v140 & 0xFFFF00000000FF00LL) == 0x1000000000400LL )
      {
        *(_QWORD *)(*(_QWORD *)(v55 + 56) + 4448LL) = v141;
      }
    }
    clear_tinfo_t();
    v2 = *(_QWORD *)(a1 + 8);
    v3 = *(_QWORD *)(a1 + 40);
  }
  v5 = *(_QWORD *)(v2 + 920);
  if ( *(_QWORD *)(v5 + 128) == v3 && *(_WORD *)(a1 + 48) == 306 )
  {
    *(_DWORD *)(v5 + 120) |= 2u;
    v24 = *(_WORD *)(a1 + 70);
    v25 = v138;
    v134 = -1;
    a2.m128_u64[0] = 0;
    v135 = -1;
    v136 = 0;
    v137 = 0;
    do
    {
      *(_WORD *)v25 = 0;
      v25 += 5;
      *((_WORD *)v25 - 19) = 0;
      *((_WORD *)v25 - 18) = 0;
      *((_DWORD *)v25 - 2) = 0;
      *((_WORD *)v25 - 17) = 0;
      *((_OWORD *)v25 - 2) = 0;
      *(v25 - 2) = 0;
    }
    while ( v25 != v142 );
    if ( (int)decode_insn() > 0
      && (_WORD)v136 == 186
      && v24 == v139
      && (v140 & 0xFFFF00000000FF00LL) == 0x1000000000400LL )
    {
      *(_QWORD *)(*(_QWORD *)(v5 + 56) + 4448LL) = v141;
    }
  }
  v6 = *(_BYTE *)(a1 + 384);
  if ( v6 )
  {
    if ( *(_WORD *)(a1 + 48) == 292 )
    {
      v35 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL);
      if ( v6 == 2 )
      {
        *(_DWORD *)(v35 + 120) = 2;
      }
      else
      {
        v36 = *(_DWORD *)(v35 + 120);
        if ( (v36 & 2) == 0 )
          *(_DWORD *)(v35 + 120) = v36 | 1;
      }
    }
    return 0;
  }
  sub_3E99E0(*(_QWORD *)(a1 + 832));
  v8 = *(unsigned __int16 *)(a1 + 48);
  if ( (_WORD)v8 == 209
    && *(_BYTE *)(a1 + 65) == 1
    && *(_WORD *)(a1 + 70) == 1
    && (*(_QWORD *)(a1 + 104) & 0xFFFF00000000FF00LL) == 0x1000000000400LL )
  {
    v42 = *(_QWORD *)(a1 + 8);
    if ( sub_1CC170(v42, *(_QWORD *)(a1 + 40)) == *(_QWORD *)(v42 + 136) )
      return 0;
    v8 = *(unsigned __int16 *)(a1 + 48);
  }
  v9 = *(_QWORD *)(a1 + 840);
  v10 = v9 + 16LL * *(_QWORD *)(a1 + 848);
  if ( v9 != v10 )
  {
    while ( *(_QWORD *)(a1 + 40) != *(_QWORD *)v9 || (_WORD)v8 != *(_WORD *)(v9 + 8) )
    {
      v9 += 16;
      if ( v10 == v9 )
        goto LABEL_13;
    }
    if ( v10 != v9 )
      return 0;
  }
LABEL_13:
  v11 = 0;
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v13 = *(_DWORD *)(v12 + 104);
  if ( v13 <= v8 && v8 < *(_DWORD *)(v12 + 108) )
    v11 = *(_DWORD *)(*(_QWORD *)(v12 + 112) + 16LL * (v8 - v13) + 8);
  v14 = sub_3F4140(a1, v11, 0, *(double *)a2.m128_u64);
  v15 = (int)sub_3F4140(a1, v11, 1, *(double *)a2.m128_u64);
  v16 = sub_3F4140(a1, v11, 2, *(double *)a2.m128_u64);
  *(_BYTE *)(a1 + 864) = 0;
  v116 = v16;
  if ( (*(_QWORD *)(a1 + 48) & 0x80000FFFFLL) != 0x80000000DLL )
    goto LABEL_17;
  v40 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
  v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
  if ( v40 != v41 )
  {
    v41 &= v40;
    if ( v40 == -1 )
      v41 = -1;
  }
  if ( !(unsigned __int8)sub_3F45C0(a1, v41) )
  {
LABEL_17:
    v17 = *(_WORD *)(a1 + 48);
    v18 = 969;
    v19 = (char *)&unk_421EE0;
    while ( v18 > 0 )
    {
      while ( 1 )
      {
        v20 = &v19[v18 & 0xFFFFFFFFFFFFFFFELL];
        if ( *(_WORD *)v20 >= v17 )
          break;
        v19 = v20 + 2;
        v18 = v18 - 1 - (v18 >> 1);
        if ( v18 <= 0 )
          goto LABEL_21;
      }
      v18 >>= 1;
    }
LABEL_21:
    if ( v19 != (char *)&unk_422672 && v17 >= *(_WORD *)v19 )
    {
      v43 = 2;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
        v43 = 7;
      LODWORD(v123) = 0;
      if ( !(unsigned __int8)sub_3E5AC0(&v123, &v122, v17) )
      {
        if ( v47 > 0x50Cu )
        {
          if ( v47 == 2497 )
          {
            v70 = 4;
LABEL_168:
            sub_3F2300(a1, 1, *(double *)a2.m128_u64, v70, v14, v15, v116);
          }
          else if ( v47 > 0x9C1u )
          {
            if ( v47 != 2498 )
              goto LABEL_23;
            v65 = 4;
LABEL_148:
            sub_3F2300(a1, 0, *(double *)a2.m128_u64, v65, v14, v15, v116);
          }
          else if ( v47 == 2082 )
          {
LABEL_97:
            if ( !(unsigned __int8)sub_3EA610(a1, *(double *)a2.m128_u64) )
              goto LABEL_23;
          }
          else if ( (unsigned __int16)(v47 - 2213) > 2u )
          {
            goto LABEL_23;
          }
        }
        else
        {
          if ( !v47 )
            goto LABEL_23;
          switch ( v47 )
          {
            case 1u:
            case 2u:
            case 5u:
            case 0xD4u:
            case 0xD5u:
            case 0xD7u:
            case 0x11Bu:
            case 0x483u:
            case 0x484u:
            case 0x49Du:
            case 0x49Eu:
            case 0x49Fu:
              goto LABEL_100;
            case 3u:
            case 7u:
            case 8u:
            case 0xD6u:
            case 0xD8u:
            case 0xD9u:
              if ( !(unsigned __int8)sub_3ED510(a1, v14, v15, v116, *(double *)a2.m128_u64) )
                goto LABEL_23;
              break;
            case 4u:
              goto LABEL_216;
            case 6u:
              sub_3E9FE0((_QWORD *)a1, a1 + 144, v116);
LABEL_216:
              v69 = 12;
              goto LABEL_161;
            case 9u:
            case 0xAu:
            case 0x2Du:
            case 0x97u:
            case 0x99u:
            case 0x9Au:
            case 0x9Bu:
            case 0xE2u:
              if ( !(unsigned __int8)sub_3EE490(a1, v14, v15, v116, *(double *)a2.m128_u64) )
                goto LABEL_23;
              break;
            case 0xBu:
            case 0x486u:
              goto LABEL_150;
            case 0xCu:
              sub_3E9F60(a1, (const __m128i *)(a1 + 144), v116);
              goto LABEL_150;
            case 0xDu:
              if ( (*(_QWORD *)(a1 + 48) & 0x80000FFFFLL) == 0x80000000DLL
                && (unsigned int)get_dword() == 1317011489
                && (v112 = *(_QWORD *)(a1 + 80), v113 = v112 + 4, v112 != -5) )
              {
                v114 = *(_QWORD *)(a1 + 832);
                v115 = 2;
                if ( *(_DWORD *)(v114 + 84) == 8 )
                  v115 = 7;
                sub_3E9B90(a1, 3u, v115, v113, 0x3BEA45E214ADDC55LL, *(int *)(v114 + 452), 0);
                *(_BYTE *)(a1 + 864) = 1;
              }
              else
              {
                sub_3EA0C0(a1);
                if ( !(unsigned __int8)sub_3EA440(a1, a1 + 64, 0xFFFFFFFF) )
                  sub_3EA260(a1, a1 + 64);
              }
              break;
            case 0xEu:
            case 0xFu:
            case 0x10u:
            case 0x140u:
            case 0x141u:
            case 0x142u:
            case 0x143u:
            case 0x144u:
            case 0x145u:
            case 0x146u:
            case 0x147u:
            case 0x148u:
            case 0x149u:
            case 0x14Au:
            case 0x14Bu:
            case 0x14Cu:
            case 0x14Du:
            case 0x14Eu:
            case 0x14Fu:
            case 0x150u:
              goto LABEL_97;
            case 0x11u:
            case 0x12u:
            case 0xE5u:
            case 0xE6u:
            case 0xE9u:
            case 0xEAu:
            case 0x488u:
              if ( (*(_BYTE *)(a1 + 52) & 0x10) == 0 )
                v45 = 2;
              sub_3ECA40(a1, v45, 1, 0, *(double *)a2.m128_u64);
              break;
            case 0x13u:
            case 0x14u:
            case 0xE7u:
            case 0xE8u:
            case 0xEBu:
            case 0xECu:
            case 0x48Du:
              if ( (*(_BYTE *)(a1 + 52) & 0x10) == 0 )
                v45 = 2;
              sub_3ECA40(a1, v45, 0, 0, *(double *)a2.m128_u64);
              break;
            case 0x17u:
            case 0x18u:
            case 0x19u:
            case 0x1Au:
            case 0x1Bu:
            case 0x1Cu:
            case 0x1Du:
            case 0x1Eu:
              if ( !(unsigned __int8)sub_3EAF90(a1, v44, v15, v116) )
                goto LABEL_23;
              break;
            case 0x26u:
              v86 = 7;
              v87 = 1;
              goto LABEL_238;
            case 0x27u:
              v86 = 7;
              v87 = 0;
              goto LABEL_238;
            case 0x28u:
              v86 = 2;
              v87 = 1;
              goto LABEL_238;
            case 0x29u:
              v86 = 2;
              v87 = 0;
LABEL_238:
              sub_3EE1E0(a1, v14, v15, v116, v87, v86 & 7);
              break;
            case 0x2Eu:
              v85 = 0;
              goto LABEL_234;
            case 0x2Fu:
              v85 = 1;
              goto LABEL_234;
            case 0x30u:
              v85 = 2;
LABEL_234:
              v122 = v85;
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                sub_1D2C40(a1, v85, v45, v14, v14, 1u);
              else
                sub_1D2C40(a1, v85, v45, v15, v14, 1u);
              goto LABEL_283;
            case 0x32u:
              sub_3F0EB0(a1, 0x45u, v14, v15, v116, 0);
              break;
            case 0x33u:
              sub_3F0EB0(a1, 0x45u, v14, v15, v116, 1);
              break;
            case 0x34u:
              sub_3F1790(a1, v14, v15, 0x41u, 0);
              break;
            case 0x35u:
            case 0x36u:
              sub_3ECA40(a1, 7, 0, 1u, *(double *)a2.m128_u64);
              break;
            case 0x37u:
            case 0x38u:
              sub_3F1660(a1, v14, v15, 0x3Fu, 0);
              break;
            case 0x39u:
            case 0x3Au:
              sub_3F1660(a1, v14, v15, 0x3Fu, 1);
              break;
            case 0x3Bu:
              sub_3F0EB0(a1, 0x48u, v14, v15, v116, 0);
              break;
            case 0x3Cu:
              sub_3F0EB0(a1, 0x48u, v14, v15, v116, 1);
              break;
            case 0x3Du:
            case 0x3Eu:
            case 0x40u:
            case 0x41u:
            case 0x46u:
            case 0x47u:
            case 0x48u:
            case 0x49u:
              sub_3E99E0(v46);
              if ( !(unsigned __int8)sub_3F1060(a1, *(double *)a2.m128_u64) )
                goto LABEL_23;
              break;
            case 0x3Fu:
              sub_3E9B90(a1, 4u, 4, (int)v15, 0x3BEA45E214ADDC55LL, v14, -1);
              sub_3EC840(a1, v14, 8);
              break;
            case 0x42u:
              sub_3F0EB0(a1, 0x47u, v14, v15, v116, 0);
              break;
            case 0x43u:
              sub_3F0EB0(a1, 0x47u, v14, v15, v116, 1);
              break;
            case 0x45u:
              sub_3E9B90(a1, 0x44u, 7, (int)v15, 0x3BEA45E214ADDC55LL, v14, 0);
              sub_3EC840(a1, v14, 8);
              break;
            case 0x4Bu:
              v78 = *(_QWORD *)(a1 + 40);
              v124 = (__m128)0xFFFFFFFF00000000LL;
              sub_3F0D20(a1, (__int64)&v124, v15, v78);
              *(_DWORD *)&v125[8] = v14;
              *(_QWORD *)v125 = 0x800000001LL;
              sub_1D2850(a1, 67, (unsigned __int8 *)&v124, nullptr, v125);
              sub_3EC840(a1, v14, 8);
              sub_119360((__int64)v125);
              sub_119360((__int64)&v124);
              break;
            case 0x50u:
              sub_3F0EB0(a1, 0x46u, v14, v15, v116, 0);
              break;
            case 0x51u:
              sub_3F0EB0(a1, 0x46u, v14, v15, v116, 1);
              break;
            case 0x7Au:
              sub_3EB1B0(a1, *(_WORD *)(a1 + 70), *(_WORD *)(a1 + 110));
              break;
            case 0x7Cu:
              sub_3F0B50(a1, *(double *)a2.m128_u64);
              break;
            case 0x7Du:
              sub_3F9F90(a1, v14);
              break;
            case 0x84u:
            case 0x192u:
              sub_3F2010(a1, *(_BYTE *)(a1 + 72), v15, *(double *)a2.m128_u64);
              break;
            case 0x90u:
              v75 = 3;
              goto LABEL_194;
            case 0x91u:
              v75 = 2;
              goto LABEL_194;
            case 0x92u:
              v73 = 3;
              goto LABEL_183;
            case 0x93u:
              v73 = 2;
              goto LABEL_183;
            case 0x94u:
              v75 = 1;
LABEL_194:
              sub_3EE050(a1, v14, v15, v116, v75, *(double *)a2.m128_u64);
              break;
            case 0x95u:
              sub_3E9B90(a1, 0xEu, (unsigned __int8)v43, (int)v15, v116, v14, 0);
              sub_3EC840(a1, v14, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              break;
            case 0x96u:
            case 0x48Eu:
              v73 = 1;
LABEL_183:
              LODWORD(v123) = v73;
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                sub_3EDD60(a1, v14, v14, v15, v73, *(double *)a2.m128_u64);
              else
                sub_3EDD60(a1, v14, v15, v116, v73, *(double *)a2.m128_u64);
              break;
            case 0x98u:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                sub_3E9B90(a1, 5u, (unsigned __int8)v43, v14, 0x3BEA45E214ADDC55LL, v14, 0);
              else
                sub_3E9B90(a1, 5u, (unsigned __int8)v43, (int)v15, 0x3BEA45E214ADDC55LL, v14, 0);
              v71 = sub_3E9B60(*(_QWORD *)(a1 + 832), *(double *)a2.m128_u64);
              v72 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v72 = 7;
              sub_3E9CF0(a1, 1, v72, v71);
              if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
                sub_3E8330(a1, v14, v71, 0);
              goto LABEL_283;
            case 0x9Cu:
            case 0x48Fu:
              goto LABEL_158;
            case 0x9Du:
              sub_3E9FE0((_QWORD *)a1, a1 + 144, v116);
              goto LABEL_158;
            case 0x9Eu:
            case 0x164u:
            case 0x19Eu:
            case 0x2EAu:
            case 0x2F4u:
              sub_3E9B90(a1, 0x3Au, 0, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
              break;
            case 0xA0u:
              sub_3F01A0(a1, v14, v15, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176), 63, *(double *)a2.m128_u64);
              break;
            case 0xA1u:
              sub_3F01A0(a1, v14, v15, *(_WORD *)(a1 + 150), 0, *(_BYTE *)(a1 + 177), *(double *)a2.m128_u64);
              break;
            case 0xA2u:
              v81 = *(_WORD *)(a1 + 150);
              v6 = *(_BYTE *)(a1 + 176);
              v82 = 63 - v81;
              goto LABEL_222;
            case 0xA3u:
              v81 = *(_WORD *)(a1 + 150);
              v82 = 63;
              v6 = *(_BYTE *)(a1 + 176);
              goto LABEL_222;
            case 0xA4u:
              v81 = *(_WORD *)(a1 + 150);
              v82 = *(_BYTE *)(a1 + 177);
              goto LABEL_222;
            case 0xA5u:
              v79 = *(_WORD *)(a1 + 150);
              v80 = *(_BYTE *)(a1 + 176);
              goto LABEL_220;
            case 0xA6u:
              sub_3EF5C0(
                a1,
                v14,
                v15,
                *(_WORD *)(a1 + 150),
                *(_BYTE *)(a1 + 176),
                *(_BYTE *)(a1 + 177),
                *(double *)a2.m128_u64);
              break;
            case 0xA7u:
              v76 = *(_WORD *)(a1 + 150);
              v6 = *(_BYTE *)(a1 + 176);
              v77 = *(_BYTE *)(a1 + 177);
              goto LABEL_199;
            case 0xA8u:
              v6 = *(_BYTE *)(a1 + 176);
              v74 = *(_BYTE *)(a1 + 177);
              goto LABEL_188;
            case 0xACu:
            case 0xADu:
            case 0xAEu:
            case 0xAFu:
            case 0xB0u:
            case 0xB1u:
            case 0xB2u:
            case 0xB3u:
            case 0x4A7u:
            case 0x4A8u:
              goto LABEL_325;
            case 0xE3u:
              goto LABEL_270;
            case 0xE4u:
              sub_3E9F60(a1, (const __m128i *)(a1 + 144), v116);
LABEL_270:
              v66 = 21;
              goto LABEL_151;
            case 0x117u:
            case 0x4ACu:
              break;
            case 0x118u:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                sub_3E9B90(a1, 7u, (unsigned __int8)v43, v14, 0x3BEA45E214ADDC55LL, v14, 0);
              else
                sub_3E9B90(a1, 7u, (unsigned __int8)v43, (int)v15, 0x3BEA45E214ADDC55LL, v14, 0);
              goto LABEL_283;
            case 0x119u:
            case 0x49Bu:
            case 0x49Cu:
              sub_3F0AD0(a1, v14, v15);
              break;
            case 0x11Au:
              goto LABEL_160;
            case 0x11Cu:
              sub_3E9FE0((_QWORD *)a1, a1 + 144, v116);
LABEL_160:
              v69 = 13;
LABEL_161:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
              {
                if ( *(_BYTE *)(a1 + 145) )
                  sub_3E9B90(a1, v69, v43, (int)v15, v116, v14, 0);
                else
                  sub_3E9B90(a1, v69, v43, v14, (int)v15, v14, 0);
              }
              else
              {
                sub_3EB290(a1, a1 + 104, v15);
                sub_3E9B90(a1, v69, v43, (int)v15, v116, v14, 0);
              }
              goto LABEL_283;
            case 0x11Du:
              goto LABEL_156;
            case 0x11Eu:
              sub_3E9FE0((_QWORD *)a1, a1 + 104, v15);
LABEL_156:
              sub_3E9B90(a1, 4u, (unsigned __int8)v43, (int)v15, 0x3BEA45E214ADDC55LL, v14, 0);
              break;
            case 0x11Fu:
              sub_3EAF90(a1, 25, v14, v14);
              break;
            case 0x120u:
              sub_3EAF90(a1, 27, v15, v15);
              break;
            case 0x121u:
              sub_3EAF90(a1, 28, v15, v15);
              break;
            case 0x122u:
              sub_3EAF90(a1, 30, v14, v14);
              break;
            case 0x124u:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                LODWORD(v15) = v14;
              sub_3E9B90(a1, 4u, (unsigned __int8)v43, (int)v15, 0x3BEA45E214ADDC55LL, *(int *)(v46 + 452), 0);
              v102 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL);
              if ( *(_BYTE *)(a1 + 384) == 2 )
              {
                *(_DWORD *)(v102 + 120) = 2;
              }
              else
              {
                v103 = *(_DWORD *)(v102 + 120);
                if ( (v103 & 2) == 0 )
                  *(_DWORD *)(v102 + 120) = v103 | 1;
              }
              break;
            case 0x125u:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                LODWORD(v15) = v14;
              sub_3E9B90(a1, 4u, (unsigned __int8)v43, (int)v15, 0x3BEA45E214ADDC55LL, *(int *)(v46 + 460), 0);
              break;
            case 0x132u:
              sub_3E9B90(a1, 4u, (unsigned __int8)v43, *(int *)(v46 + 452), 0x3BEA45E214ADDC55LL, v14, 0);
              break;
            case 0x133u:
              sub_3E9B90(a1, 4u, (unsigned __int8)v43, *(int *)(v46 + 460), 0x3BEA45E214ADDC55LL, v14, 0);
              break;
            case 0x151u:
              sub_3EEF90(a1, v14, v15, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176), *(double *)a2.m128_u64);
              break;
            case 0x152u:
              sub_3EEDE0(a1, v14, v15, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176), *(double *)a2.m128_u64);
              break;
            case 0x153u:
              sub_3EF7C0(a1, v14, v15, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176));
              break;
            case 0x154u:
              sub_3EF640(a1, v14, v15, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176));
              break;
            case 0x155u:
            case 0x156u:
              v76 = *(_WORD *)(a1 + 150);
              v77 = 31;
              if ( v47 != 341 )
                v76 = 32 - v76;
LABEL_199:
              sub_3EEB70(a1, v14, v15, v76, v6, v77, *(double *)a2.m128_u64);
              break;
            case 0x157u:
              v74 = 31;
LABEL_188:
              sub_3EF2D0(a1, v14, v15, v6, v74, *(double *)a2.m128_u64);
              break;
            case 0x158u:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                goto LABEL_325;
              v104 = *(_WORD *)(a1 + 150);
              v105 = sub_3E9B60(v46, *(double *)a2.m128_u64);
              sub_3E9CF0(a1, v104, 0, v105);
              sub_3E9B90(a1, 0x16u, 2, (int)v15, v105, v14, 0);
              sub_3EC840(a1, v14, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              break;
            case 0x159u:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
              {
LABEL_325:
                sub_3F0300(a1, v14, v15, v116, *(double *)a2.m128_u64);
              }
              else
              {
                v107 = *(_WORD *)(a1 + 150);
                v108 = sub_3E9B60(v46, *(double *)a2.m128_u64);
                sub_3E9CF0(a1, v107, 0, v108);
                sub_3E9B90(a1, 0x17u, 2, (int)v15, v108, v14, 0);
                sub_3EC840(a1, v14, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              }
              break;
            case 0x15Au:
              sub_3EE990(a1, v14, v15, *(_BYTE *)(a1 + 150), 31, *(double *)a2.m128_u64);
              sub_3EC840(a1, v14, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              break;
            case 0x15Bu:
              sub_3EE990(a1, v14, v15, 0, 31 - *(_BYTE *)(a1 + 150), *(double *)a2.m128_u64);
              sub_3EC840(a1, v14, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              break;
            case 0x15Cu:
              sub_3EF120(a1, v14, v15, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176), *(double *)a2.m128_u64);
              break;
            case 0x193u:
              sub_3F1D20(a1, *(_BYTE *)(a1 + 112), v14, *(double *)a2.m128_u64);
              break;
            case 0x194u:
              v101 = -1;
              goto LABEL_297;
            case 0x195u:
              v101 = 0;
              goto LABEL_297;
            case 0x196u:
              v101 = 1;
              goto LABEL_297;
            case 0x197u:
              v101 = 2;
LABEL_297:
              sub_3EE2D0(a1, v14, *(double *)a2.m128_u64, (unsigned int)v15, v116, v101);
              break;
            case 0x1CDu:
              sub_3E9B90(a1, 4u, 2, (int)v15 + 4, 0x3BEA45E214ADDC55LL, v14 + 4, 0);
              sub_3E9B90(a1, 4u, 2, v116 + 4, 0x3BEA45E214ADDC55LL, v14, 0);
              break;
            case 0x1CFu:
              sub_3E9B90(a1, 4u, 2, (int)v15, 0x3BEA45E214ADDC55LL, v14 + 4, 0);
              sub_3E9B90(a1, 4u, 2, v116, 0x3BEA45E214ADDC55LL, v14, 0);
              break;
            case 0x24Fu:
            case 0x26Cu:
              if ( (unsigned __int16)(v47 - 618) <= 0x17u )
                v106 = 3;
              else
                v106 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              sub_3E9B90(a1, 0x45u, v106, (int)v15, v116, v14, 0);
              break;
            case 0x250u:
            case 0x26Au:
              if ( (unsigned __int16)(v47 - 618) <= 0x17u )
                v110 = 3;
              else
                v110 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              sub_3F2560(a1, 67, v110, v14, v15);
              break;
            case 0x252u:
            case 0x26Eu:
              if ( (unsigned __int16)(v47 - 618) <= 0x17u )
                v109 = 3;
              else
                v109 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              sub_3F2560(a1, 65, v109, v14, v15);
              break;
            case 0x255u:
            case 0x270u:
              if ( (unsigned __int16)(v47 - 618) <= 0x17u )
                v111 = 3;
              else
                v111 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              sub_3F2560(a1, 66, v111, v14, v15);
              break;
            case 0x257u:
            case 0x267u:
            case 0x271u:
            case 0x27Fu:
              if ( (unsigned __int16)(v47 - 618) <= 0x17u )
                v62 = 3;
              else
                v62 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              sub_3E9B90(
                a1,
                0x21u,
                v62,
                (int)v15,
                v116,
                *(_DWORD *)(v46 + 472) + 4 * *(unsigned __int16 *)(a1 + 70) + 1,
                -1);
              break;
            case 0x258u:
            case 0x268u:
            case 0x272u:
            case 0x280u:
              if ( (unsigned __int16)(v47 - 618) <= 0x17u )
                v61 = 3;
              else
                v61 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              sub_3E9B90(
                a1,
                0x24u,
                v61,
                (int)v15,
                v116,
                *(_DWORD *)(v46 + 472) + 4 * *(unsigned __int16 *)(a1 + 70) + 1,
                -1);
              break;
            case 0x259u:
            case 0x269u:
            case 0x273u:
            case 0x281u:
              if ( (unsigned __int16)(v47 - 618) <= 0x17u )
                v60 = 3;
              else
                v60 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              sub_3E9B90(
                a1,
                0x23u,
                v60,
                (int)v15,
                v116,
                *(_DWORD *)(v46 + 472) + 4 * *(unsigned __int16 *)(a1 + 70) + 1,
                -1);
              break;
            case 0x25Bu:
            case 0x25Du:
            case 0x275u:
            case 0x276u:
              if ( (unsigned __int16)(v47 - 618) <= 0x17u )
                v59 = 3;
              else
                v59 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              sub_3F2560(a1, 63, v59, v14, v15);
              break;
            case 0x25Fu:
            case 0x261u:
            case 0x278u:
            case 0x279u:
              if ( (unsigned __int16)(v47 - 618) <= 0x17u )
                v58 = 3;
              else
                v58 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              sub_3F2560(a1, 64, v58, v14, v15);
              break;
            case 0x262u:
            case 0x27Au:
              if ( (unsigned __int16)(v47 - 618) <= 0x17u )
                v100 = 3;
              else
                v100 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              sub_3E9B90(a1, 0x48u, v100, (int)v15, v116, v14, 0);
              break;
            case 0x263u:
            case 0x27Bu:
              if ( (unsigned __int16)(v47 - 618) <= 0x17u )
                v99 = 3;
              else
                v99 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              sub_3E9B90(a1, 0x47u, v99, (int)v15, v116, v14, 0);
              break;
            case 0x265u:
            case 0x27Du:
              if ( (unsigned __int16)(v47 - 618) <= 0x17u )
                v98 = 3;
              else
                v98 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              sub_3E9B90(a1, 0x44u, v98, (int)v15, 0x3BEA45E214ADDC55LL, v14, 0);
              break;
            case 0x266u:
            case 0x27Eu:
              if ( (unsigned __int16)(v47 - 618) <= 0x17u )
                v97 = 3;
              else
                v97 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              sub_3E9B90(a1, 0x46u, v97, (int)v15, v116, v14, 0);
              break;
            case 0x312u:
              sub_3F1790(a1, v14, v15, 0x41u, 1);
              break;
            case 0x313u:
              sub_3F1790(a1, v14, v15, 0x42u, 0);
              break;
            case 0x314u:
              sub_3F1790(a1, v14, v15, 0x42u, 1);
              break;
            case 0x315u:
            case 0x316u:
              sub_3F1660(a1, v14, v15, 0x40u, 0);
              break;
            case 0x317u:
            case 0x318u:
              sub_3F1660(a1, v14, v15, 0x40u, 1);
              break;
            case 0x485u:
            case 0x4A0u:
              sub_3E9FE0((_QWORD *)a1, a1 + 104, v15);
LABEL_100:
              if ( !(unsigned __int8)sub_3ED060(a1, v14, v15, v116) )
                goto LABEL_23;
              break;
            case 0x487u:
              sub_3E9F60(a1, (const __m128i *)(a1 + 104), v15);
LABEL_150:
              v66 = 20;
              goto LABEL_151;
            case 0x489u:
            case 0x48Au:
              sub_3ECA40(a1, 1, 1, 0, *(double *)a2.m128_u64);
              break;
            case 0x48Bu:
            case 0x48Cu:
              sub_3ECA40(a1, 1, 0, 0, *(double *)a2.m128_u64);
              break;
            case 0x490u:
              sub_3E9F60(a1, (const __m128i *)(a1 + 104), v15);
LABEL_158:
              v66 = 19;
LABEL_151:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) == 0 || *(_BYTE *)(a1 + 145) )
              {
                v68 = get_dtype_size();
                sub_1D2710(a1, v66, v68, v15, v116, v14, 0);
              }
              else
              {
                v67 = get_dtype_size();
                sub_1D2710(a1, v66, v67, v14, v15, v14, 0);
              }
LABEL_283:
              sub_3EC840(a1, v14, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              break;
            case 0x491u:
            case 0x492u:
              sub_1D3050(a1, 0, 2, v15, v116, v14);
              break;
            case 0x493u:
              v94 = sub_3E9B60(v46, *(double *)a2.m128_u64);
              v95 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v95 = 7;
              sub_3F1970(a1, v95, 1u, v94);
              v96 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v96 = 7;
              sub_3E9B90(a1, 0x14u, v96, v14, v94, v14, 0);
              break;
            case 0x494u:
              v91 = sub_3E9B60(v46, *(double *)a2.m128_u64);
              v93 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v93 = 7;
              sub_3F1970(a1, v93, 0, v91);
              v92 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v92 = 7;
              goto LABEL_255;
            case 0x495u:
              v91 = sub_3E9B60(v46, *(double *)a2.m128_u64);
              sub_3F1990(a1, v91);
              v92 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v92 = 7;
LABEL_255:
              sub_3E9B90(a1, 4u, v92, v91, 0x3BEA45E214ADDC55LL, v14, 0);
              break;
            case 0x496u:
              v88 = sub_3E9B60(v46, *(double *)a2.m128_u64);
              v89 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v89 = 7;
              sub_3F1970(a1, v89, 0, v88);
              v90 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v90 = 7;
              sub_3E9B90(a1, 0x13u, v90, v14, v88, v14, 0);
              break;
            case 0x497u:
              sub_3F19D0(a1);
              break;
            case 0x498u:
              sub_1D2C40(a1, 0, (unsigned __int8)v43, v14, v14, 0);
              break;
            case 0x499u:
              sub_1D2C40(a1, 1, (unsigned __int8)v43, v14, v14, 0);
              break;
            case 0x4A1u:
              v81 = *(char *)(a1 + 177);
              v82 = *(_BYTE *)(a1 + 150) - 1;
              goto LABEL_222;
            case 0x4A2u:
              sub_3EFF60(a1, v14, v15, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176));
              sub_3EC840(a1, v14, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              break;
            case 0x4A3u:
              v80 = *(_BYTE *)(a1 + 176);
              v79 = 64 - (*(_WORD *)(a1 + 150) + v80);
LABEL_220:
              sub_3F0280(a1, v14, v15, v79, v80, 63 - v79, *(double *)a2.m128_u64);
              break;
            case 0x4A4u:
              v81 = *(_WORD *)(a1 + 150);
              v82 = 63;
              goto LABEL_222;
            case 0x4A5u:
              v82 = 63;
              v81 = 64 - *(_WORD *)(a1 + 150);
              goto LABEL_222;
            case 0x4A6u:
              sub_3F01A0(a1, v14, v15, *(_WORD *)(a1 + 150), 0, 63, *(double *)a2.m128_u64);
              break;
            case 0x4A9u:
              v6 = *(_BYTE *)(a1 + 150);
              v82 = 63;
              v81 = 0;
              goto LABEL_222;
            case 0x4AAu:
              v82 = 63 - *(_BYTE *)(a1 + 150);
              v81 = 0;
LABEL_222:
              v83 = *(_QWORD *)(v46 + 4464);
              if ( !v83 )
                sub_3E6800(*(double *)a2.m128_u64);
              v84 = *(_DWORD *)(*(_QWORD *)(v46 + 4456) + 4 * v83 - 4);
              *(_QWORD *)(v46 + 4464) = v83 - 1;
              sub_3EF940(a1, v15, v81, v84, *(double *)a2.m128_u64);
              sub_3EFAA0(a1, v14, v84, v6, v82, *(double *)a2.m128_u64);
              break;
            case 0x4ABu:
              sub_3EFCB0(a1, v14, v15, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176), *(double *)a2.m128_u64);
              break;
            case 0x4B8u:
              sub_3F2010(a1, 0xFFu, v14, *(double *)a2.m128_u64);
              break;
            case 0x509u:
              v70 = ((unsigned __int16)(v47 - 1289) > 8u) + 3;
              goto LABEL_168;
            case 0x50Au:
              v65 = 3;
              goto LABEL_148;
            case 0x50Bu:
              sub_3F24B0(a1, 0x45u, v14, v15, v116, *(double *)a2.m128_u64);
              break;
            case 0x50Cu:
              sub_3F24B0(a1, 0x46u, v14, v15, v116, *(double *)a2.m128_u64);
              break;
            default:
              goto LABEL_23;
          }
        }
        sub_3E99E0(*(_QWORD *)(a1 + 832));
        return *(unsigned __int8 *)(a1 + 864);
      }
      v48 = v123;
      if ( (_DWORD)v123 != -1 )
      {
        sub_3E99E0(v46);
        v49 = *(_DWORD **)(a1 + 832);
        v50 = *(unsigned __int16 *)(a1 + 70);
        v51 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v49 + 168LL);
        if ( v51 == sub_3E59C0 )
          v52 = sub_3E59C0(v49, v50);
        else
          v52 = v51(v49, v50);
        sub_3EC4B0(a1, v122, v48, v52, 0, *(double *)a2.m128_u64);
        sub_3E99E0(*(_QWORD *)(a1 + 832));
        return 0;
      }
    }
LABEL_23:
    if ( (unsigned __int8)sub_3F2660(a1, v14, v15) )
      return 0;
    v21 = *(_QWORD **)(a1 + 8);
    v22 = *(_QWORD *)(a1 + 40);
    v23 = (_QWORD *)v21[127];
    if ( !v23 )
    {
      if ( v21 + 126 != (_QWORD *)v21[128] )
      {
        v121 = *(_QWORD *)(a1 + 40);
        if ( *(_QWORD *)(std::_Rb_tree_decrement() + 32) >= v121 )
          goto LABEL_64;
      }
      goto LABEL_63;
    }
    while ( 1 )
    {
      v37 = v23[4];
      v38 = 0;
      v39 = (_QWORD *)v23[3];
      if ( v22 < v37 )
      {
        v39 = (_QWORD *)v23[2];
        v38 = 1;
      }
      if ( !v39 )
        break;
      v23 = v39;
    }
    if ( v38 )
    {
      if ( v23 == (_QWORD *)v21[128] )
        goto LABEL_63;
      v120 = *(_QWORD *)(a1 + 40);
      v64 = std::_Rb_tree_decrement();
      v22 = v120;
      v37 = *(_QWORD *)(v64 + 32);
    }
    if ( v37 >= v22 )
    {
LABEL_64:
      sub_3F4280(a1, v11, v14, v15, v116);
      return 0;
    }
LABEL_63:
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++v21[130];
    goto LABEL_64;
  }
  return *(unsigned __int8 *)(a1 + 864);
}

