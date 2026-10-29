__int64 __fastcall sub_29EB80(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // r13d
  __int64 v6; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // r15
  __int64 (__fastcall ***v11)(); // rsi
  unsigned __int64 v12; // rax
  int v13; // r8d
  int v14; // r9d
  unsigned __int64 v15; // rdx
  int v16; // ecx
  __int64 *v17; // r15
  unsigned __int64 v18; // rdx
  __int64 v19; // r15
  __int64 (__fastcall **v20)(); // rbx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  char v25; // r14
  __int32 v26; // edi
  int v27; // edx
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm1
  int v35; // eax
  int v36; // edx
  __int64 v37; // rax
  unsigned __int64 v38; // r12
  __int64 v39; // r14
  __m128i *v40; // r14
  __m128i v41; // xmm0
  __int64 v42; // rdi
  __int64 v43; // r14
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rcx
  int v50; // edx
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // eax
  char tinfo_property; // al
  char v56; // al
  char v57; // r15
  __int64 tinfo_size; // r15
  __int64 (__fastcall *v59)(); // rdi
  unsigned int v60; // eax
  unsigned int v61; // edx
  __int64 v62; // rdx
  char v63; // r15
  bool v64; // zf
  __int64 v65; // rbx
  const __m128i *v66; // r15
  __m128i *v67; // r12
  const __m128i *v68; // rbx
  __int64 v69; // rbp
  __int64 v70; // rcx
  __m128i v71; // xmm0
  __int64 v72; // rcx
  __int64 v73; // rdi
  __int64 v74; // rbp
  __int64 v75; // r15
  __int64 v76; // rdx
  __int64 v77; // r13
  __int64 v79; // rax
  __int64 v80; // rbx
  __int64 v81; // r14
  __int64 v82; // rbx
  unsigned int *v83; // rdx
  unsigned int *v84; // r12
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // r14
  __int64 v90; // rbx
  __int64 v91; // r15
  char v92; // al
  unsigned int v93; // eax
  __int64 v95; // [rsp+8h] [rbp-140h]
  __int64 v96; // [rsp+8h] [rbp-140h]
  __int64 v97; // [rsp+8h] [rbp-140h]
  __int64 v98; // [rsp+8h] [rbp-140h]
  int v99; // [rsp+1Ch] [rbp-12Ch]
  int v100; // [rsp+1Ch] [rbp-12Ch]
  __int64 v101; // [rsp+20h] [rbp-128h]
  __int64 v102; // [rsp+20h] [rbp-128h]
  int v103; // [rsp+20h] [rbp-128h]
  __int64 v104; // [rsp+20h] [rbp-128h]
  unsigned int v105; // [rsp+30h] [rbp-118h]
  int v106; // [rsp+34h] [rbp-114h]
  char v107; // [rsp+38h] [rbp-110h]
  __int64 v108; // [rsp+38h] [rbp-110h]
  __int64 v109; // [rsp+40h] [rbp-108h]
  char v110; // [rsp+40h] [rbp-108h]
  char v111; // [rsp+40h] [rbp-108h]
  unsigned int v112; // [rsp+40h] [rbp-108h]
  unsigned __int8 v113; // [rsp+48h] [rbp-100h]
  char v114; // [rsp+48h] [rbp-100h]
  unsigned __int8 v115; // [rsp+50h] [rbp-F8h]
  char v116; // [rsp+50h] [rbp-F8h]
  char v117; // [rsp+50h] [rbp-F8h]
  char v118; // [rsp+50h] [rbp-F8h]
  int v119; // [rsp+58h] [rbp-F0h]
  char v120; // [rsp+5Ch] [rbp-ECh]
  char v121; // [rsp+5Dh] [rbp-EBh]
  char v122; // [rsp+5Dh] [rbp-EBh]
  unsigned __int8 v123; // [rsp+5Eh] [rbp-EAh]
  unsigned __int8 v124; // [rsp+5Fh] [rbp-E9h]
  unsigned __int8 v125; // [rsp+5Fh] [rbp-E9h]
  int v126; // [rsp+64h] [rbp-E4h] BYREF
  __int64 (__fastcall ***v127)(); // [rsp+68h] [rbp-E0h] BYREF
  __int64 v128; // [rsp+70h] [rbp-D8h]
  __int64 v129; // [rsp+78h] [rbp-D0h]
  __int64 v130; // [rsp+80h] [rbp-C8h]
  __int128 v131; // [rsp+88h] [rbp-C0h]
  __int64 (__fastcall **v132)(); // [rsp+A0h] [rbp-A8h] BYREF
  __int64 i; // [rsp+A8h] [rbp-A0h]
  __int128 v134; // [rsp+B0h] [rbp-98h]
  __int64 v135; // [rsp+C0h] [rbp-88h]
  int v136; // [rsp+C8h] [rbp-80h]
  __int64 (__fastcall **v137)(); // [rsp+D0h] [rbp-78h] BYREF
  __int64 j; // [rsp+D8h] [rbp-70h]
  __m128i v139; // [rsp+E0h] [rbp-68h] BYREF
  unsigned __int64 v140; // [rsp+F0h] [rbp-58h]
  __int32 v141; // [rsp+F8h] [rbp-50h]
  int v142; // [rsp+FCh] [rbp-4Ch]
  int v143; // [rsp+100h] [rbp-48h]
  unsigned __int64 v144; // [rsp+108h] [rbp-40h]

  v2 = a1;
  v144 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v131 = 0;
  v130 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 440LL);
  if ( v4 )
  {
    v130 = qvector_reserve();
    memset((void *)(v130 + v131), 0, v4 - v131);
    *(_QWORD *)&v131 = v4;
  }
  v106 = a2[1];
  if ( !a2[1] )
  {
    v105 = 0;
    goto LABEL_52;
  }
  v120 = 0;
  v5 = 0;
  v6 = 0;
  v105 = 0;
  do
  {
    while ( 1 )
    {
      v19 = *a2 + 48 * v6;
      v20 = *(__int64 (__fastcall ***)())v19;
      if ( !*(_DWORD *)(v2 + 72) && v106 > v5 )
      {
        v26 = *(_DWORD *)(v19 + 40);
        v27 = v26 & 8;
        if ( (v26 & 8) == 0 )
        {
          v28 = *(_QWORD *)(v19 + 16);
          if ( v28 )
            break;
        }
      }
LABEL_26:
      v21 = *((_DWORD *)v20 + 6);
      v22 = *(_QWORD *)(v2 + 8);
      if ( (v21 & 0x80u) != 0 && *(_BYTE *)(*(_QWORD *)(v22 + 8) + 320LL) )
      {
        v18 = a2[1];
        goto LABEL_23;
      }
      v127 = nullptr;
      v23 = *(_QWORD *)(*(_QWORD *)v2 + 112LL);
      i = v2;
      *(_QWORD *)&v134 = v20;
      v95 = v23;
      v132 = &off_4B38E0;
      v24 = *(_QWORD *)(v22 + 8);
      v102 = *(_QWORD *)(v24 + 432);
      if ( (v21 & 0x40000) != 0 )
      {
        *(_DWORD *)(v19 + 40) |= 8u;
        v24 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL);
      }
      v25 = sub_29E610((__int64)&v127, &v126, v24, v19, (unsigned __int8 (__fastcall ***)(_QWORD, __int64))&v132);
      if ( !v25 )
      {
LABEL_31:
        v17 = (__int64 *)(v20 + 10);
        goto LABEL_18;
      }
      v99 = sub_329080(&v127, &v126);
      if ( (v126 & 4) != 0
        || (v126 & 0x80u) != 0
        && (v126 & 3) == 0
        && (tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) != 0)
        && (tinfo_property & 0xFu) <= 8
        && (get_tinfo_property() & 0xF) != 8
        && (v56 = get_tinfo_property(), (v56 & 0x3E) != 0)
        && (v56 & 0xFu) <= 8
        && (get_tinfo_property() & 0xF) != 8
        && (_BYTE)v127
        && (((unsigned __int8)v127 & 0xE) != 0 || ((unsigned __int8)v127 & 0x30) == 0)
        && (v137 = nullptr,
            v137 = (__int64 (__fastcall **)())get_tinfo_property(),
            v57 = get_tinfo_property() & 0x3F,
            clear_tinfo_t(),
            v57 != 48)
        && sub_2955B0((__int64 *)v20 + 10)
        && (tinfo_size = get_tinfo_size(), tinfo_size == get_tinfo_size()) )
      {
        ++v99;
      }
      set_tinfo_property();
      sub_294D00(v23, (__int64 *)&v127, &v126, v7, v8, v9);
      if ( (unsigned __int8)sub_298080(&v127) )
      {
        v10 = *((int *)v20 + 22);
        if ( v10 != get_tinfo_size() )
          sub_297E60(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 216LL), (unsigned int)&v127, *((_DWORD *)v20 + 22));
      }
      v11 = v127;
      v107 = v126;
      v109 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL);
      v12 = get_tinfo_size();
      v15 = *((int *)v20 + 22);
      if ( v12 != v15 )
      {
        v16 = *((_DWORD *)v20 + 6);
        if ( ((v16 & 0x10) == 0 || (BYTE1(v16) &= 1u) != 0) && v15 != -1 )
          goto LABEL_31;
        if ( v12 < v15 )
        {
          v62 = (__int64)v20 - *(_QWORD *)(v109 + 432);
          v143 = v12;
          v11 = &v137;
          j = 0;
          v139 = 0u;
          v140 = 0;
          LOBYTE(v141) = 0;
          v137 = off_4B38B8;
          v142 = -991146299 * (v62 >> 3);
          if ( (unsigned int)sub_11B6F0(v109, (__int64)&v137) )
          {
            v17 = (__int64 *)(v20 + 10);
            goto LABEL_18;
          }
        }
      }
      v17 = (__int64 *)(v20 + 10);
      v119 = sub_329080(v20 + 10, v11) - ((((_DWORD)v20[3] & 0x4000) == 0) - 1);
      v13 = compare_tinfo();
      v16 = -991146299;
      v101 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v20 - v102) >> 3);
      if ( (_BYTE)v13 )
      {
        if ( v99 < v119 )
        {
          v137 = nullptr;
          v137 = (__int64 (__fastcall **)())get_tinfo_property();
          v110 = get_tinfo_property();
          clear_tinfo_t();
          if ( (v110 & 0x3F) != 1 )
            goto LABEL_81;
        }
        else if ( v99 == v119 && ((unsigned __int8)v127 & 0x3F) == 0x3D && ((_BYTE)v20[10] & 0x3F) != 0x3D )
        {
LABEL_81:
          *(_BYTE *)(v130 + (int)v101) = 1;
          v103 = (_DWORD)v20[3] & 0x800;
          if ( v99 > 0 )
          {
LABEL_82:
            sub_1EAD50((__int64)v20, v95, &v127, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL) + 72LL), 0);
            v60 = *((_DWORD *)v20 + 6);
            if ( !v25 )
              v60 = (_DWORD)v20[3] & 0xFFFBFFFD | 2;
            v61 = v60;
            BYTE1(v60) &= ~0x40u;
            BYTE1(v61) |= 0x40u;
            if ( (v107 & 4) != 0 )
              v60 = v61;
            if ( !v103 )
              v120 |= (v60 & 0x800) != 0;
            *((_DWORD *)v20 + 6) = v60 & 0xFFFFFFEF;
            goto LABEL_21;
          }
LABEL_96:
          v137 = nullptr;
          v137 = (__int64 (__fastcall **)())get_tinfo_property();
          v63 = get_tinfo_property() & 0x3F;
          clear_tinfo_t();
          if ( v63 != 1 && ((v107 & 0x20) == 0 || (get_tinfo_property() & 0xF) == 0xA) )
          {
            v25 = 0;
            if ( *(_DWORD *)(v2 + 72) <= 1u && (v107 & 8) != 0 )
              v25 = (get_tinfo_property() & 0xF) == 10;
          }
          goto LABEL_82;
        }
        goto LABEL_18;
      }
      v14 = sub_3690A0(v109, v20, &v127);
      if ( !(_BYTE)v14 )
        goto LABEL_18;
      v59 = v20[10];
      v13 = 0;
      if ( ((unsigned __int8)v59 & 0xE) != 0 )
      {
        v121 = (unsigned __int8)v127 & 0xF;
        if ( ((unsigned __int8)v59 & 0xF) != 0xA )
        {
          v64 = v121 == 10;
          v122 = 0;
          if ( v64 )
            goto LABEL_118;
          goto LABEL_106;
        }
        v125 = v14;
        v137 = nullptr;
        v137 = (__int64 (__fastcall **)())get_tinfo_property();
        v117 = get_tinfo_property();
        clear_tinfo_t();
        v13 = 0;
        LOBYTE(v14) = v125;
        if ( (v117 & 0x3F) == 1 )
        {
          if ( v121 == 10 )
            goto LABEL_159;
          goto LABEL_125;
        }
        v128 = 0;
        v128 = get_tinfo_property();
        v118 = v128;
        clear_tinfo_t();
        v14 = v125;
        LOBYTE(v13) = (v118 & 0x3F) != 48;
        if ( v121 != 10 )
        {
          LOBYTE(v13) = ((v107 & 8) == 0) & v13;
          if ( (_BYTE)v13 )
            goto LABEL_18;
LABEL_125:
          v122 = v14;
          goto LABEL_106;
        }
LABEL_159:
        v122 = v14;
LABEL_118:
        v124 = v14;
        v123 = v13;
        v137 = nullptr;
        v137 = (__int64 (__fastcall **)())get_tinfo_property();
        v116 = get_tinfo_property();
        clear_tinfo_t();
        v13 = v123;
        v14 = v124;
        if ( (v116 & 0x3F) == 1
          || (v129 = 0,
              v129 = get_tinfo_property(),
              v114 = v129,
              clear_tinfo_t(),
              v13 = v123,
              v14 = v124,
              (v114 & 0x3F) == 0x30) )
        {
          LOBYTE(v13) = ((v107 & 8) == 0) & v13;
          if ( (_BYTE)v13 )
            goto LABEL_18;
          goto LABEL_107;
        }
        if ( (v107 & 8) != 0 )
        {
          if ( v123 )
            goto LABEL_152;
        }
        else
        {
          if ( !v123 )
            goto LABEL_81;
LABEL_152:
          if ( (unsigned __int8)sub_2986B0(*(_QWORD *)(v109 + 1496), v109, 0) )
            goto LABEL_18;
          v92 = sub_2986B0(*(_QWORD *)(v109 + 1496), v109, 0);
          v14 = v124;
          if ( v92 )
            goto LABEL_81;
        }
        v13 = v14;
        goto LABEL_107;
      }
      if ( ((unsigned __int8)v59 & 0x30) != 0 )
        goto LABEL_81;
      v122 = 0;
      if ( ((unsigned __int8)v127 & 0xF) == 0xA )
        goto LABEL_118;
LABEL_106:
      v14 = 0;
LABEL_107:
      v115 = v14;
      v16 = v119;
      v113 = v13;
      if ( v99 < v119 )
        goto LABEL_81;
      if ( v99 <= v119 )
      {
        if ( (unsigned __int8)sub_2957A0(*(_QWORD *)(v109 + 1496), (__int64)(v20 + 10), (__int64)&v127, 1) )
          goto LABEL_81;
        v13 = v113;
        v14 = v115;
        if ( ((unsigned __int8)v127 & 0xFu) <= 9
          || (v112 = score_tinfo(), v93 = score_tinfo(), v13 = v113, v14 = v115, v93 >= v112) )
        {
          if ( v122 && (_BYTE)v14 && (!(_BYTE)v13 || (unsigned __int8)compare_tinfo()) )
          {
            v137 = nullptr;
            v137 = (__int64 (__fastcall **)())get_tinfo_property();
            v111 = (char)v137;
            clear_tinfo_t();
            if ( (v111 & 0x40) != 0 )
              goto LABEL_81;
          }
          else if ( !v99 && !(unsigned __int8)compare_tinfo() )
          {
            *(_BYTE *)(v130 + (int)v101) = 1;
            v103 = (_DWORD)v20[3] & 0x800;
            goto LABEL_96;
          }
        }
      }
LABEL_18:
      if ( (unsigned __int8)sub_294D00(v95, v17, &v126, v16, v13, v14) )
      {
        if ( (v126 & 4) != 0 )
          *((_DWORD *)v20 + 6) |= 0x4000u;
LABEL_21:
        ++v105;
      }
      clear_tinfo_t();
      v18 = a2[1];
LABEL_23:
      v6 = ++v5;
      if ( v5 >= v18 )
        goto LABEL_50;
    }
    v29 = 0;
    while ( 1 )
    {
      v30 = *(_QWORD *)(v19 + 8) + 32 * v29;
      if ( *(_DWORD *)v30 == 6 )
      {
        v31 = *(_QWORD *)(v30 + 8);
        if ( *(_DWORD *)(v31 + 8) == 52 )
        {
          v32 = *(_QWORD *)(v31 + 24);
          if ( *(_DWORD *)(v32 + 8) == 65 )
          {
            v33 = *(_QWORD *)(*(_QWORD *)(v32 + 24) + 432LL) + 104LL * *(int *)(v32 + 32);
            if ( v20 != (__int64 (__fastcall **)())v33 && (*(_BYTE *)(v33 + 24) & 2) == 0 )
              break;
          }
        }
      }
      v29 = ++v27;
      if ( v27 >= v28 )
        goto LABEL_26;
    }
    v132 = *(__int64 (__fastcall ***)())v19;
    i = 0;
    v134 = 0;
    v96 = *(_QWORD *)(v19 + 16);
    if ( v96 )
    {
      v79 = qalloc_or_throw();
      *((_QWORD *)&v134 + 1) = v96;
      v80 = v79;
      v81 = 0;
      for ( i = v79; ; v80 = i )
      {
        v82 = 32 * v81 + v80;
        v83 = (unsigned int *)(*(_QWORD *)(v19 + 8) + 32 * v81);
        *(_DWORD *)v82 = 0;
        v84 = v83;
        sub_29AB70(v82, v83);
        *(_QWORD *)(v82 + 16) = 0;
        copy_tinfo_t();
        ++v81;
        *(_QWORD *)(v82 + 24) = *((_QWORD *)v84 + 3);
        if ( v96 == v81 )
          break;
      }
      *(_QWORD *)&v134 = v96;
      v85 = *(_DWORD *)(v19 + 40);
      v86 = *(_QWORD *)(v19 + 32);
      v139 = 0;
      v136 = v85;
      v135 = v86;
      v137 = v132;
      j = 0;
      v87 = qalloc_or_throw();
      v139.m128i_i64[1] = v96;
      v88 = v87;
      v89 = 0;
      for ( j = v87; ; v88 = j )
      {
        v90 = 32 * v89 + v88;
        v91 = i + 32 * v89;
        *(_DWORD *)v90 = 0;
        sub_29AB70(v90, (unsigned int *)v91);
        *(_QWORD *)(v90 + 16) = 0;
        copy_tinfo_t();
        ++v89;
        *(_QWORD *)(v90 + 24) = *(_QWORD *)(v91 + 24);
        if ( v96 == v89 )
          break;
      }
      v36 = HIDWORD(v135);
      v26 = v136;
      v139.m128i_i64[0] = v96;
      v35 = v135;
    }
    else
    {
      v34 = _mm_loadl_epi64((const __m128i *)(v19 + 32));
      v136 = v26;
      v137 = v20;
      j = 0;
      v35 = _mm_cvtsi128_si32(v34);
      v36 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v34, 229));
      v135 = v34.m128i_i64[0];
      v139 = 0;
    }
    v140 = __PAIR64__(v36, v35);
    v37 = a2[1];
    v38 = a2[2];
    v141 = v26;
    if ( v38 < v37 + 1 )
    {
      v39 = qvector_reserve();
      v65 = a2[2];
      v66 = (const __m128i *)*a2;
      a2[2] = v38;
      v97 = a2[1];
      if ( v97 - 1 >= 0 )
      {
        v100 = v5;
        v67 = (__m128i *)v39;
        v104 = v65;
        v68 = v66;
        v108 = v2;
        v69 = v97 - 1;
        do
        {
          v67->m128i_i64[0] = v68->m128i_i64[0];
          v70 = v68->m128i_i64[1];
          v71 = _mm_loadu_si128(v68 + 1);
          v68->m128i_i64[1] = 0;
          v67->m128i_i64[1] = v70;
          v67[1] = v71;
          v72 = v68[2].m128i_i64[0];
          v68[1] = 0;
          v67[2].m128i_i64[0] = v72;
          v67[2].m128i_i32[2] = v68[2].m128i_i32[2];
          v73 = v68->m128i_i64[1];
          if ( v73 )
          {
            if ( v68[1].m128i_i64[0] )
            {
              v98 = v69;
              v74 = 0;
              v75 = v68[1].m128i_i64[0];
              do
              {
                v76 = v74++;
                v77 = v73 + 32 * v76;
                clear_tinfo_t();
                sub_29A030(v77);
                v73 = v68->m128i_i64[1];
              }
              while ( v75 != v74 );
              v69 = v98;
            }
            v68[1].m128i_i64[0] = 0;
            qfree();
          }
          v68 += 3;
          v67 += 3;
        }
        while ( v69-- != 0 );
        v5 = v100;
        v65 = v104;
        v2 = v108;
      }
      qfree();
      *a2 = v39;
      a2[2] = v65;
      v37 = a2[1];
    }
    else
    {
      v39 = *a2;
    }
    v40 = (__m128i *)(48 * v37 + v39);
    v40->m128i_i64[0] = (__int64)v137;
    v41 = _mm_load_si128(&v139);
    v40->m128i_i64[1] = j;
    v40[1] = v41;
    v40[2].m128i_i64[0] = v140;
    v40[2].m128i_i32[2] = v141;
    v42 = i;
    v18 = a2[1] + 1;
    a2[1] = v18;
    if ( !v42 )
      goto LABEL_23;
    v43 = v134;
    if ( (_QWORD)v134 )
    {
      v44 = 0;
      do
      {
        v45 = v44++;
        v46 = v42 + 32 * v45;
        clear_tinfo_t();
        sub_29A030(v46);
        v42 = i;
      }
      while ( v43 != v44 );
    }
    *(_QWORD *)&v134 = 0;
    ++v5;
    qfree();
    v6 = v5;
  }
  while ( v5 < (unsigned __int64)a2[1] );
LABEL_50:
  if ( v120 )
    sub_1EC640(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 8LL));
LABEL_52:
  v47 = v130;
  if ( *(int *)(v2 + 72) > 1 )
  {
    v48 = *(_QWORD *)(v2 + 8);
    v49 = *(_QWORD *)(v48 + 8);
    if ( *(_QWORD *)(v49 + 440) )
    {
      v50 = 0;
      v51 = 0;
      do
      {
        if ( !*(_BYTE *)(v47 + v51) )
        {
          v52 = *(_QWORD *)(v49 + 432) + 104 * v51;
          v53 = *(_DWORD *)(v52 + 24);
          if ( (v53 & 0x4000) != 0 )
          {
            BYTE1(v53) &= ~0x40u;
            *(_DWORD *)(v52 + 24) = v53;
            v48 = *(_QWORD *)(v2 + 8);
          }
        }
        v49 = *(_QWORD *)(v48 + 8);
        v51 = ++v50;
      }
      while ( (unsigned __int64)v50 < *(_QWORD *)(v49 + 440) );
    }
  }
  if ( v47 )
  {
    *(_QWORD *)&v131 = 0;
    qfree();
  }
  return v105;
}

