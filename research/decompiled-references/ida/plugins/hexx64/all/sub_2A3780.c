__int64 __fastcall sub_2A3780(__int64 a1, __int64 *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // ecx
  __int64 *v13; // r15
  unsigned __int64 v14; // rdx
  __int64 v15; // r15
  __int64 (__fastcall **v16)(); // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  char v21; // r14
  __int32 v22; // edi
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31; // xmm1
  int v32; // eax
  int v33; // edx
  __int64 v34; // rax
  unsigned __int64 v35; // r12
  __int64 v36; // r14
  __m128i *v37; // r14
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rcx
  int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  char tinfo_property; // al
  char v52; // al
  char v53; // r15
  __int64 tinfo_size; // r15
  char v55; // r9
  __int64 (__fastcall *v56)(); // rdi
  char v57; // r8
  unsigned int v58; // eax
  unsigned int v59; // edx
  __int64 v60; // rdx
  char v61; // r15
  bool v62; // zf
  char v63; // r9
  char v64; // r8
  char v65; // r9
  char v66; // r8
  __int64 v67; // rbx
  __int64 v68; // r15
  __m128i *v69; // r12
  const __m128i *v70; // rbx
  __int64 v71; // rbp
  __int64 v72; // rcx
  __m128i v73; // xmm0
  __int64 v74; // rcx
  __int64 v75; // rdi
  __int64 v76; // rbp
  __int64 v77; // r15
  __int64 v78; // rdx
  __int64 v79; // r13
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // r14
  __int64 v84; // rbx
  unsigned int *v85; // rdx
  unsigned int *v86; // r12
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rbx
  __int64 v92; // r14
  __int64 v93; // rbx
  __int64 v94; // r15
  bool v95; // al
  unsigned int v96; // eax
  __int64 v98; // [rsp+8h] [rbp-140h]
  __int64 v99; // [rsp+8h] [rbp-140h]
  __int64 v100; // [rsp+8h] [rbp-140h]
  int v101; // [rsp+1Ch] [rbp-12Ch]
  int v102; // [rsp+1Ch] [rbp-12Ch]
  __int64 v103; // [rsp+20h] [rbp-128h]
  __int64 v104; // [rsp+20h] [rbp-128h]
  int v105; // [rsp+20h] [rbp-128h]
  __int64 v106; // [rsp+20h] [rbp-128h]
  unsigned int v107; // [rsp+30h] [rbp-118h]
  int v108; // [rsp+34h] [rbp-114h]
  char v109; // [rsp+38h] [rbp-110h]
  __int64 v110; // [rsp+38h] [rbp-110h]
  __int64 v111; // [rsp+40h] [rbp-108h]
  char v112; // [rsp+40h] [rbp-108h]
  char v113; // [rsp+40h] [rbp-108h]
  unsigned int v114; // [rsp+40h] [rbp-108h]
  char v115; // [rsp+48h] [rbp-100h]
  char v116; // [rsp+48h] [rbp-100h]
  char v117; // [rsp+50h] [rbp-F8h]
  char v118; // [rsp+50h] [rbp-F8h]
  char v119; // [rsp+50h] [rbp-F8h]
  char v120; // [rsp+50h] [rbp-F8h]
  int v121; // [rsp+58h] [rbp-F0h]
  char v122; // [rsp+5Ch] [rbp-ECh]
  char v123; // [rsp+5Dh] [rbp-EBh]
  char v124; // [rsp+5Dh] [rbp-EBh]
  char v125; // [rsp+5Eh] [rbp-EAh]
  char v126; // [rsp+5Fh] [rbp-E9h]
  char v127; // [rsp+5Fh] [rbp-E9h]
  int v128; // [rsp+64h] [rbp-E4h] BYREF
  __int64 v129; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v130; // [rsp+70h] [rbp-D8h]
  __int64 v131; // [rsp+78h] [rbp-D0h]
  __int64 v132; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v133; // [rsp+88h] [rbp-C0h]
  __int64 (__fastcall **v134)(); // [rsp+A0h] [rbp-A8h] BYREF
  __int64 i; // [rsp+A8h] [rbp-A0h]
  __int128 v136; // [rsp+B0h] [rbp-98h]
  __int64 v137; // [rsp+C0h] [rbp-88h]
  int v138; // [rsp+C8h] [rbp-80h]
  __int64 (__fastcall **v139)(); // [rsp+D0h] [rbp-78h] BYREF
  __int64 j; // [rsp+D8h] [rbp-70h]
  __m128i v141; // [rsp+E0h] [rbp-68h] BYREF
  unsigned __int64 v142; // [rsp+F0h] [rbp-58h]
  __int32 v143; // [rsp+F8h] [rbp-50h]
  int v144; // [rsp+FCh] [rbp-4Ch]
  int v145; // [rsp+100h] [rbp-48h]
  unsigned __int64 v146; // [rsp+108h] [rbp-40h]

  v2.m128i_i64[0] = 0;
  v3 = a1;
  v146 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  v133 = 0;
  v132 = 0;
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v5 + 440);
  if ( v6 )
  {
    v132 = qvector_reserve((__int64)&v132, 0, *(_QWORD *)(v5 + 440), 1);
    memset((void *)(v132 + v133), 0, v6 - v133);
    *(_QWORD *)&v133 = v6;
  }
  v108 = a2[1];
  if ( !a2[1] )
  {
    v107 = 0;
    goto LABEL_52;
  }
  v122 = 0;
  v7 = 0;
  v8 = 0;
  v107 = 0;
  do
  {
    while ( 1 )
    {
      v15 = *a2 + 48 * v8;
      v16 = *(__int64 (__fastcall ***)())v15;
      if ( !*(_DWORD *)(v3 + 72) && v108 > v7 )
      {
        v22 = *(_DWORD *)(v15 + 40);
        v23 = v22 & 8;
        if ( (v22 & 8) == 0 )
        {
          v24 = *(_QWORD *)(v15 + 16);
          if ( v24 )
            break;
        }
      }
LABEL_26:
      v17 = *((_DWORD *)v16 + 6);
      v18 = *(_QWORD *)(v3 + 8);
      if ( (v17 & 0x80u) != 0 && *(_BYTE *)(*(_QWORD *)(v18 + 8) + 320LL) )
      {
        v14 = a2[1];
        goto LABEL_23;
      }
      v129 = 0;
      v19 = *(_QWORD *)(*(_QWORD *)v3 + 112LL);
      i = v3;
      *(_QWORD *)&v136 = v16;
      v134 = &off_4E0EA0;
      v20 = *(_QWORD *)(v18 + 8);
      v104 = *(_QWORD *)(v20 + 432);
      if ( (v17 & 0x40000) != 0 )
      {
        *(_DWORD *)(v15 + 40) |= 8u;
        v20 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL);
      }
      v21 = sub_2A3210(
              (__int64)&v129,
              &v128,
              v20,
              v15,
              (unsigned __int8 (__fastcall ***)(_QWORD, __int64))&v134,
              *(double *)v2.m128i_i64);
      if ( !v21 )
      {
LABEL_31:
        v13 = (__int64 *)(v16 + 10);
        goto LABEL_18;
      }
      v101 = sub_32E340(&v129);
      if ( (v128 & 4) != 0
        || (v128 & 0x80u) != 0
        && (v128 & 3) == 0
        && (tinfo_property = get_tinfo_property(), (tinfo_property & 0x3E) != 0)
        && (tinfo_property & 0xFu) <= 8
        && (get_tinfo_property() & 0xF) != 8
        && (v52 = get_tinfo_property(), (v52 & 0x3E) != 0)
        && (v52 & 0xFu) <= 8
        && (get_tinfo_property() & 0xF) != 8
        && (_BYTE)v129
        && ((v129 & 0xE) != 0 || (v129 & 0x30) == 0)
        && (v139 = nullptr,
            v139 = (__int64 (__fastcall **)())get_tinfo_property(),
            v53 = get_tinfo_property() & 0x3F,
            clear_tinfo_t(),
            v53 != 48)
        && sub_29A1B0((__int64 *)v16 + 10)
        && (tinfo_size = get_tinfo_size(), tinfo_size == get_tinfo_size()) )
      {
        ++v101;
      }
      set_tinfo_property();
      sub_299900(v19, &v129, &v128);
      if ( (unsigned __int8)sub_29CC80(&v129) )
      {
        v9 = *((int *)v16 + 22);
        if ( v9 != get_tinfo_size() )
          sub_29CA60(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 216LL), (unsigned int)&v129, *((_DWORD *)v16 + 22));
      }
      v109 = v128;
      v111 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL);
      v10 = get_tinfo_size();
      v11 = *((int *)v16 + 22);
      if ( v10 != v11 )
      {
        v12 = *((_DWORD *)v16 + 6);
        if ( ((v12 & 0x10) == 0 || (v12 & 0x100) != 0) && v11 != -1 )
          goto LABEL_31;
        if ( v10 < v11 )
        {
          v60 = (__int64)v16 - *(_QWORD *)(v111 + 432);
          v145 = v10;
          j = 0;
          v141 = 0u;
          v142 = 0;
          LOBYTE(v143) = 0;
          v139 = &off_4E0E78;
          v144 = -991146299 * (v60 >> 3);
          if ( (unsigned int)sub_11FBB0(v111, (__int64)&v139) )
          {
            v13 = (__int64 *)(v16 + 10);
            goto LABEL_18;
          }
        }
      }
      v13 = (__int64 *)(v16 + 10);
      v121 = sub_32E340((__int64 *)v16 + 10) - ((((_DWORD)v16[3] & 0x4000) == 0) - 1);
      v103 = 0x4EC4EC4EC4EC4EC5LL * (((__int64)v16 - v104) >> 3);
      if ( (unsigned __int8)compare_tinfo() )
      {
        if ( v101 < v121 )
        {
          v139 = nullptr;
          v139 = (__int64 (__fastcall **)())get_tinfo_property();
          v112 = get_tinfo_property();
          clear_tinfo_t();
          if ( (v112 & 0x3F) != 1 )
            goto LABEL_81;
        }
        else if ( v101 == v121 && (v129 & 0x3F) == 0x3D && ((_BYTE)v16[10] & 0x3F) != 0x3D )
        {
LABEL_81:
          *(_BYTE *)(v132 + (int)v103) = 1;
          v105 = (_DWORD)v16[3] & 0x800;
          if ( v101 > 0 )
          {
LABEL_82:
            sub_1EF950(
              (__int64)v16,
              v19,
              &v129,
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL) + 72LL),
              0,
              *(double *)v2.m128i_i64);
            v58 = *((_DWORD *)v16 + 6);
            if ( !v21 )
              v58 = (_DWORD)v16[3] & 0xFFFBFFFD | 2;
            v59 = v58;
            BYTE1(v58) &= ~0x40u;
            BYTE1(v59) |= 0x40u;
            if ( (v109 & 4) != 0 )
              v58 = v59;
            if ( !v105 )
              v122 |= (v58 & 0x800) != 0;
            *((_DWORD *)v16 + 6) = v58 & 0xFFFFFFEF;
            goto LABEL_21;
          }
LABEL_96:
          v139 = nullptr;
          v139 = (__int64 (__fastcall **)())get_tinfo_property();
          v61 = get_tinfo_property() & 0x3F;
          clear_tinfo_t();
          if ( v61 != 1 && ((v109 & 0x20) == 0 || (get_tinfo_property() & 0xF) == 0xA) )
          {
            v21 = 0;
            if ( *(_DWORD *)(v3 + 72) <= 1u && (v109 & 8) != 0 )
              v21 = (get_tinfo_property() & 0xF) == 10;
          }
          goto LABEL_82;
        }
        goto LABEL_18;
      }
      v55 = sub_36E320(v111, (__int64)v16, (__int64)&v129);
      if ( !v55 )
        goto LABEL_18;
      v56 = v16[10];
      v57 = 0;
      if ( ((unsigned __int8)v56 & 0xE) != 0 )
      {
        v123 = v129 & 0xF;
        if ( ((unsigned __int8)v56 & 0xF) != 0xA )
        {
          v62 = v123 == 10;
          v124 = 0;
          if ( v62 )
            goto LABEL_118;
          goto LABEL_106;
        }
        v127 = v55;
        v139 = nullptr;
        v139 = (__int64 (__fastcall **)())get_tinfo_property();
        v119 = get_tinfo_property();
        clear_tinfo_t();
        v57 = 0;
        v55 = v127;
        if ( (v119 & 0x3F) == 1 )
        {
          if ( v123 == 10 )
            goto LABEL_159;
          goto LABEL_125;
        }
        v130 = 0;
        v130 = get_tinfo_property();
        v120 = v130;
        clear_tinfo_t();
        v55 = v127;
        v57 = (v120 & 0x3F) != 48;
        if ( v123 != 10 )
        {
          v57 &= (v109 & 8) == 0;
          if ( v57 )
            goto LABEL_18;
LABEL_125:
          v124 = v55;
          goto LABEL_106;
        }
LABEL_159:
        v124 = v55;
LABEL_118:
        v126 = v55;
        v125 = v57;
        v139 = nullptr;
        v139 = (__int64 (__fastcall **)())get_tinfo_property();
        v118 = get_tinfo_property();
        clear_tinfo_t();
        v66 = v125;
        v63 = v126;
        if ( (v118 & 0x3F) == 1
          || (v131 = 0,
              v131 = get_tinfo_property(),
              v116 = v131,
              clear_tinfo_t(),
              v66 = v125,
              v63 = v126,
              (v116 & 0x3F) == 0x30) )
        {
          v57 = ((v109 & 8) == 0) & v66;
          if ( v57 )
            goto LABEL_18;
          goto LABEL_107;
        }
        if ( (v109 & 8) != 0 )
        {
          if ( v125 )
            goto LABEL_152;
        }
        else
        {
          if ( !v125 )
            goto LABEL_81;
LABEL_152:
          if ( sub_29D2B0(*(_QWORD *)(v111 + 1496), v111, 0, *(double *)v2.m128i_i64) )
            goto LABEL_18;
          v95 = sub_29D2B0(*(_QWORD *)(v111 + 1496), v111, 0, *(double *)v2.m128i_i64);
          v63 = v126;
          if ( v95 )
            goto LABEL_81;
        }
        v57 = v63;
        goto LABEL_107;
      }
      if ( ((unsigned __int8)v56 & 0x30) != 0 )
        goto LABEL_81;
      v124 = 0;
      if ( (v129 & 0xF) == 0xA )
        goto LABEL_118;
LABEL_106:
      v63 = 0;
LABEL_107:
      v117 = v63;
      v115 = v57;
      if ( v101 < v121 )
        goto LABEL_81;
      if ( v101 <= v121 )
      {
        if ( (unsigned __int8)sub_29A3A0(
                                *(_QWORD *)(v111 + 1496),
                                (__int64 *)v16 + 10,
                                &v129,
                                1,
                                *(double *)v2.m128i_i64) )
          goto LABEL_81;
        v64 = v115;
        v65 = v117;
        if ( ((unsigned __int8)v129 & 0xFu) <= 9
          || (v114 = score_tinfo(), v96 = score_tinfo(), v64 = v115, v65 = v117, v96 >= v114) )
        {
          if ( v124 && v65 && (!v64 || (unsigned __int8)compare_tinfo()) )
          {
            v139 = nullptr;
            v139 = (__int64 (__fastcall **)())get_tinfo_property();
            v113 = (char)v139;
            clear_tinfo_t();
            if ( (v113 & 0x40) != 0 )
              goto LABEL_81;
          }
          else if ( !v101 && !(unsigned __int8)compare_tinfo() )
          {
            *(_BYTE *)(v132 + (int)v103) = 1;
            v105 = (_DWORD)v16[3] & 0x800;
            goto LABEL_96;
          }
        }
      }
LABEL_18:
      if ( (unsigned __int8)sub_299900(v19, v13, &v128) )
      {
        if ( (v128 & 4) != 0 )
          *((_DWORD *)v16 + 6) |= 0x4000u;
LABEL_21:
        ++v107;
      }
      clear_tinfo_t();
      v14 = a2[1];
LABEL_23:
      v8 = ++v7;
      if ( v7 >= v14 )
        goto LABEL_50;
    }
    v25 = *(_QWORD *)(v15 + 8);
    v26 = 0;
    while ( 1 )
    {
      v27 = v25 + 32 * v26;
      if ( *(_DWORD *)v27 == 6 )
      {
        v28 = *(_QWORD *)(v27 + 8);
        if ( *(_DWORD *)(v28 + 8) == 52 )
        {
          v29 = *(_QWORD *)(v28 + 24);
          if ( *(_DWORD *)(v29 + 8) == 65 )
          {
            v30 = *(_QWORD *)(*(_QWORD *)(v29 + 24) + 432LL) + 104LL * *(int *)(v29 + 32);
            if ( v16 != (__int64 (__fastcall **)())v30 && (*(_BYTE *)(v30 + 24) & 2) == 0 )
              break;
          }
        }
      }
      v23 = (unsigned int)(v23 + 1);
      v26 = (int)v23;
      if ( (int)v23 >= v24 )
        goto LABEL_26;
    }
    v134 = *(__int64 (__fastcall ***)())v15;
    i = 0;
    v136 = 0;
    v98 = *(_QWORD *)(v15 + 16);
    if ( v98 )
    {
      v81 = qalloc_or_throw(32 * v98, v25, v23, v24);
      *((_QWORD *)&v136 + 1) = v98;
      v82 = v81;
      v83 = 0;
      for ( i = v81; ; v82 = i )
      {
        v84 = 32 * v83 + v82;
        v85 = (unsigned int *)(*(_QWORD *)(v15 + 8) + 32 * v83);
        *(_DWORD *)v84 = 0;
        v86 = v85;
        sub_29F770(v84, v85, 0.0);
        *(_QWORD *)(v84 + 16) = 0;
        copy_tinfo_t();
        ++v83;
        *(_QWORD *)(v84 + 24) = *((_QWORD *)v86 + 3);
        if ( v98 == v83 )
          break;
      }
      *(_QWORD *)&v136 = v98;
      v88 = *(_DWORD *)(v15 + 40);
      v89 = *(_QWORD *)(v15 + 32);
      v141 = 0;
      v138 = v88;
      v137 = v89;
      v139 = v134;
      j = 0;
      v90 = qalloc_or_throw(32 * v98, (__int64)(v86 + 4), v89, v87);
      v141.m128i_i64[1] = v98;
      v91 = v90;
      v92 = 0;
      for ( j = v90; ; v91 = j )
      {
        v93 = 32 * v92 + v91;
        v94 = i + 32 * v92;
        *(_DWORD *)v93 = 0;
        sub_29F770(v93, (unsigned int *)v94, 0.0);
        *(_QWORD *)(v93 + 16) = 0;
        copy_tinfo_t();
        ++v92;
        *(_QWORD *)(v93 + 24) = *(_QWORD *)(v94 + 24);
        if ( v98 == v92 )
          break;
      }
      v33 = HIDWORD(v137);
      v22 = v138;
      v141.m128i_i64[0] = v98;
      v32 = v137;
    }
    else
    {
      v31 = _mm_loadl_epi64((const __m128i *)(v15 + 32));
      v138 = v22;
      v139 = v16;
      j = 0;
      v32 = _mm_cvtsi128_si32(v31);
      v33 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v31, 229));
      v137 = v31.m128i_i64[0];
      v141 = 0;
    }
    v142 = __PAIR64__(v33, v32);
    v34 = a2[1];
    v35 = a2[2];
    v143 = v22;
    if ( v35 < v34 + 1 )
    {
      v36 = qvector_reserve((__int64)a2, 0, v34 + 1, 48);
      v67 = a2[2];
      v68 = *a2;
      a2[2] = v35;
      v99 = a2[1];
      if ( v99 - 1 >= 0 )
      {
        v102 = v7;
        v69 = (__m128i *)v36;
        v106 = v67;
        v70 = (const __m128i *)v68;
        v110 = v3;
        v71 = v99 - 1;
        do
        {
          v69->m128i_i64[0] = v70->m128i_i64[0];
          v72 = v70->m128i_i64[1];
          v73 = _mm_loadu_si128(v70 + 1);
          v70->m128i_i64[1] = 0;
          v69->m128i_i64[1] = v72;
          v69[1] = v73;
          v74 = v70[2].m128i_i64[0];
          v70[1] = 0;
          v69[2].m128i_i64[0] = v74;
          v69[2].m128i_i32[2] = v70[2].m128i_i32[2];
          v75 = v70->m128i_i64[1];
          if ( v75 )
          {
            if ( v70[1].m128i_i64[0] )
            {
              v100 = v71;
              v76 = 0;
              v77 = v70[1].m128i_i64[0];
              do
              {
                v78 = v76++;
                v79 = v75 + 32 * v78;
                clear_tinfo_t();
                sub_29EC30(v79, *(double *)v73.m128i_i64);
                v75 = v70->m128i_i64[1];
              }
              while ( v77 != v76 );
              v71 = v100;
            }
            v70[1].m128i_i64[0] = 0;
            qfree(v75);
          }
          v70 += 3;
          v69 += 3;
        }
        while ( v71-- != 0 );
        v7 = v102;
        v67 = v106;
        v3 = v110;
        v68 = *a2;
      }
      qfree(v68);
      *a2 = v36;
      a2[2] = v67;
      v34 = a2[1];
    }
    else
    {
      v36 = *a2;
    }
    v37 = (__m128i *)(48 * v34 + v36);
    v37->m128i_i64[0] = (__int64)v139;
    v2 = _mm_load_si128(&v141);
    v37->m128i_i64[1] = j;
    v37[1] = v2;
    v37[2].m128i_i64[0] = v142;
    v37[2].m128i_i32[2] = v143;
    v38 = i;
    v14 = a2[1] + 1;
    a2[1] = v14;
    if ( !v38 )
      goto LABEL_23;
    v39 = v136;
    if ( (_QWORD)v136 )
    {
      v40 = 0;
      do
      {
        v41 = v40++;
        v42 = v38 + 32 * v41;
        clear_tinfo_t();
        sub_29EC30(v42, *(double *)v2.m128i_i64);
        v38 = i;
      }
      while ( v39 != v40 );
    }
    *(_QWORD *)&v136 = 0;
    ++v7;
    qfree(v38);
    v8 = v7;
  }
  while ( v7 < (unsigned __int64)a2[1] );
LABEL_50:
  if ( v122 )
    sub_1F1240(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL));
LABEL_52:
  v43 = v132;
  if ( *(int *)(v3 + 72) > 1 )
  {
    v44 = *(_QWORD *)(v3 + 8);
    v45 = *(_QWORD *)(v44 + 8);
    if ( *(_QWORD *)(v45 + 440) )
    {
      v46 = 0;
      v47 = 0;
      do
      {
        if ( !*(_BYTE *)(v43 + v47) )
        {
          v48 = *(_QWORD *)(v45 + 432) + 104 * v47;
          v49 = *(_DWORD *)(v48 + 24);
          if ( (v49 & 0x4000) != 0 )
          {
            BYTE1(v49) &= ~0x40u;
            *(_DWORD *)(v48 + 24) = v49;
            v44 = *(_QWORD *)(v3 + 8);
          }
        }
        v45 = *(_QWORD *)(v44 + 8);
        v47 = ++v46;
      }
      while ( (unsigned __int64)v46 < *(_QWORD *)(v45 + 440) );
    }
  }
  if ( v43 )
  {
    *(_QWORD *)&v133 = 0;
    qfree(v43);
  }
  return v107;
}

