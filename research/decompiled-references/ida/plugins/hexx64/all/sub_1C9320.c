__int64 __fastcall sub_1C9320(__int64 a1, __int64 a2, _DWORD *a3, double a4, __m128 a5)
{
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 *v9; // rax
  __int64 v10; // r14
  int v11; // esi
  int v12; // edx
  int v13; // ebx
  int v14; // r12d
  int v15; // r13d
  int tinfo_size; // ecx
  int v17; // ecx
  unsigned __int64 v18; // r14
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // ecx
  int v23; // ebx
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 *v26; // rsi
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31; // xmm0
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  __m128i v34; // xmm0
  int v35; // r8d
  int v36; // r9d
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  __m128i v39; // xmm0
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // r13
  __int64 v43; // r12
  unsigned __int64 v44; // rsi
  __int64 v45; // rax
  unsigned __int64 v46; // r14
  __int64 v47; // rdx
  signed int v48; // ecx
  int v49; // esi
  __int64 v50; // rbx
  unsigned int v51; // ebx
  __int64 v53; // rax
  unsigned __int64 v54; // r13
  __int64 v55; // rdi
  char v56; // r15
  __int64 v57; // rdi
  __int64 v58; // rbx
  int v59; // edx
  int v60; // r13d
  __int64 v61; // rbx
  __int64 v62; // r12
  __int64 v63; // r14
  int v64; // r15d
  __int64 *v65; // rax
  __int64 *v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rdx
  _QWORD *v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rsi
  __m128i v76; // xmm0
  __int64 v77; // rdx
  _QWORD *v78; // rax
  __int64 v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // r13
  __int64 v85; // rbx
  __int64 *v86; // r12
  __int64 v87; // rdi
  __int64 v88; // r12
  __int64 *v89; // r13
  __int64 v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rbx
  __int64 v94; // r15
  __int64 v95; // rbx
  int v96; // eax
  int v97; // [rsp+10h] [rbp-200h]
  int v99; // [rsp+24h] [rbp-1ECh]
  __int64 v100; // [rsp+28h] [rbp-1E8h]
  unsigned __int64 *v101; // [rsp+30h] [rbp-1E0h]
  __int64 v102; // [rsp+38h] [rbp-1D8h]
  __int64 v104; // [rsp+48h] [rbp-1C8h]
  int v106; // [rsp+58h] [rbp-1B8h]
  __int64 i; // [rsp+58h] [rbp-1B8h]
  int v108; // [rsp+60h] [rbp-1B0h]
  unsigned __int64 v109; // [rsp+60h] [rbp-1B0h]
  int v110; // [rsp+68h] [rbp-1A8h]
  __int64 v111; // [rsp+68h] [rbp-1A8h]
  int v112; // [rsp+70h] [rbp-1A0h]
  int v113; // [rsp+70h] [rbp-1A0h]
  int v114; // [rsp+70h] [rbp-1A0h]
  __int64 v115; // [rsp+70h] [rbp-1A0h]
  int v116; // [rsp+78h] [rbp-198h]
  __int64 v117[2]; // [rsp+80h] [rbp-190h] BYREF
  __int64 v118; // [rsp+90h] [rbp-180h] BYREF
  __int128 v119; // [rsp+98h] [rbp-178h]
  __int64 *v120; // [rsp+B0h] [rbp-160h] BYREF
  __int128 v121; // [rsp+B8h] [rbp-158h]
  unsigned __int64 v122; // [rsp+D0h] [rbp-140h] BYREF
  __int128 v123; // [rsp+D8h] [rbp-138h]
  unsigned __int64 v124; // [rsp+F0h] [rbp-120h] BYREF
  __int128 v125; // [rsp+F8h] [rbp-118h]
  _QWORD *tinfo_property; // [rsp+110h] [rbp-100h] BYREF
  __int128 v127; // [rsp+118h] [rbp-F8h]
  __m128i v128; // [rsp+128h] [rbp-E8h] BYREF
  __int128 v129; // [rsp+140h] [rbp-D0h] BYREF
  __int64 v130; // [rsp+150h] [rbp-C0h]
  __m128i v131; // [rsp+158h] [rbp-B8h] BYREF
  __int64 v132; // [rsp+168h] [rbp-A8h]
  __int128 v133; // [rsp+170h] [rbp-A0h]
  __int128 v134; // [rsp+180h] [rbp-90h]
  __int64 v135; // [rsp+1B0h] [rbp-60h]
  int v136; // [rsp+1B8h] [rbp-58h]
  __int64 v137; // [rsp+1C0h] [rbp-50h]
  char v138; // [rsp+1C8h] [rbp-48h]
  unsigned __int64 v139; // [rsp+1D8h] [rbp-38h]

  v6 = (_BYTE *)(a2 + 32);
  v7 = *((_QWORD *)v6 - 1);
  v139 = __readfsqword(0x28u);
  v119 = 0;
  v118 = 0;
  sub_1C8670(&v118, v6, v7);
  sub_1C8670(&v118, (_BYTE *)(a2 + 48), *(_QWORD *)(a2 + 24));
  if ( (unsigned __int64)v119 <= 1 )
  {
    v51 = 0;
    goto LABEL_74;
  }
  v8 = *(_QWORD *)(a1 + 64);
  v120 = nullptr;
  v117[0] = 0;
  v9 = *(unsigned __int64 **)(v8 + 1504);
  v117[1] = 0;
  v99 = 0;
  v101 = v9;
  v100 = 0;
  v121 = 0;
  do
  {
    v10 = v118 + 24 * v100;
    v11 = *(_DWORD *)(v10 + 16);
    v102 = v10;
    v12 = *(_DWORD *)(*(_QWORD *)(v10 + 8) + 4LL);
    if ( *(_DWORD *)(a2 + 68) - v11 <= v12 )
      v12 = *(_DWORD *)(a2 + 68) - v11;
    v108 = v12;
    v13 = v12;
    if ( (unsigned __int8)sub_64A60(v117, v11, v12) )
    {
LABEL_107:
      v27 = v119;
      break;
    }
    sub_63E80(v117, *(_DWORD *)(v10 + 16), v13, 0.0);
    if ( *(_QWORD *)(*(_QWORD *)a3 + 440LL) < (unsigned __int64)(int)a3[4] )
    {
      if ( !under_debugger )
        sub_383060(0xC83Au, 0.0);
LABEL_140:
      BUG();
    }
    v106 = 0;
    v97 = v121;
    if ( !v108 )
      goto LABEL_46;
    while ( 1 )
    {
      v138 = 0;
      v130 = 0;
      v14 = a3[2] + v106;
      v132 = 0;
      v136 = -1;
      v135 = 1;
      v137 = 0;
      v124 = 0;
      v129 = 0;
      v131 = 0;
      v133 = 0;
      v134 = 0;
      copy_tinfo_t();
      v15 = v108;
      while ( v14 || v15 < (unsigned __int64)get_tinfo_size() )
      {
        if ( (get_tinfo_property() & 0xF) == 0xB )
        {
          tinfo_property = nullptr;
          tinfo_property = (_QWORD *)get_tinfo_property();
          copy_tinfo_t();
          clear_tinfo_t();
          tinfo_size = get_tinfo_size();
          v14 %= tinfo_size;
          if ( tinfo_size <= 0 )
            goto LABEL_29;
        }
        else
        {
          if ( (get_tinfo_property() & 0x2F) != 0xD )
            break;
          if ( (get_tinfo_property() & 0x3F) == 0xD )
          {
            *(_QWORD *)&v129 = 8LL * v14;
            if ( (unsigned int)find_tinfo_udt_member() == -1 )
              break;
          }
          else if ( (unsigned int)find_tinfo_udt_member() == -1
                 || (unsigned __int64)(8LL * v14) >= *((_QWORD *)&v129 + 1) )
          {
            break;
          }
          v18 = (unsigned __int64)v129 >> 3;
          v14 -= (unsigned __int64)v129 >> 3;
          if ( (get_tinfo_property() & 0xF) == 0xE )
          {
            a5 = 0;
            v127 = 0;
            tinfo_property = nullptr;
            if ( !get_tinfo_pdata() )
            {
              if ( !under_debugger )
                sub_383060(0xCDDAu, 0.0);
              goto LABEL_140;
            }
            v19 = &tinfo_property[2 * v127];
            if ( tinfo_property == v19 )
              goto LABEL_32;
            v20 = tinfo_property;
            while ( 1 )
            {
              if ( (unsigned __int64)v129 >= *v20 )
              {
                v21 = v20[1];
                if ( (unsigned __int64)v129 < v21 )
                  break;
              }
              v20 += 2;
              if ( v19 == v20 )
                goto LABEL_32;
            }
            if ( !v20 )
            {
LABEL_32:
              if ( !under_debugger )
                sub_383060(0xCDDBu, 0.0);
              goto LABEL_140;
            }
            v22 = (v21 >> 3) - v18;
            if ( tinfo_property )
            {
              v112 = v22;
              *(_QWORD *)&v127 = 0;
              qfree((__int64)tinfo_property);
              v22 = v112;
            }
          }
          else
          {
            v22 = get_tinfo_size();
          }
          v113 = v22;
          copy_tinfo_t();
          tinfo_size = v113;
          if ( v113 <= 0 )
          {
LABEL_29:
            if ( !under_debugger )
              sub_383060(0xC9B6u, 0.0);
            goto LABEL_140;
          }
        }
        v17 = tinfo_size - v14;
        if ( v15 > v17 )
          v15 = v17;
        if ( v15 <= 0 )
        {
          if ( !under_debugger )
            sub_383060(0xC9A9u, 0.0);
          goto LABEL_140;
        }
      }
      v23 = round_down_power2();
      clear_tinfo_t();
      clear_tinfo_t();
      if ( v132 )
      {
        *(_QWORD *)&v133 = 0;
        qfree(v132);
      }
      if ( v130 )
      {
        v131.m128i_i64[0] = 0;
        qfree(v130);
      }
      if ( v23 <= 0 || v23 > v108 )
      {
        if ( !under_debugger )
          sub_383060(0xC9B7u, 0.0);
        goto LABEL_140;
      }
      v24 = sub_1C8510(
              v101,
              *(_QWORD *)v102,
              *(unsigned __int8 **)(v102 + 8),
              (unsigned __int8 *)(a2 + 64),
              v23,
              v106,
              (__m128i)0LL,
              v106 + *(_DWORD *)(v102 + 16));
      if ( !v24 )
        break;
      v25 = v121;
      v26 = v120;
      if ( *((_QWORD *)&v121 + 1) < (unsigned __int64)(v121 + 1) )
      {
        v120 = (__int64 *)qvector_reserve((__int64)&v120, (__int64)v120, v121 + 1, 8);
        v26 = v120;
        v25 = v121;
      }
      v106 += v23;
      v26[v25] = v24;
      *(_QWORD *)&v121 = v121 + 1;
      v108 -= v23;
      if ( !v108 )
        goto LABEL_46;
    }
    v47 = *(_QWORD *)(v102 + 8);
    v48 = *(_DWORD *)(v102 + 16);
    v49 = *(_DWORD *)(v47 + 4);
    if ( *(_DWORD *)(a2 + 68) - v48 <= v49 )
      v49 = *(_DWORD *)(a2 + 68) - v48;
    v50 = sub_1C8510(
            v101,
            *(_QWORD *)v102,
            (unsigned __int8 *)v47,
            (unsigned __int8 *)(a2 + 64),
            v49,
            0,
            (__m128i)0LL,
            v48);
    if ( !v50 )
      goto LABEL_107;
    sub_1C8310((__int64 *)&v120, v97);
    if ( *((_QWORD *)&v121 + 1) < (unsigned __int64)(v121 + 1) )
      v120 = (__int64 *)qvector_reserve((__int64)&v120, (__int64)v120, v121 + 1, 8);
    v120[(_QWORD)v121] = v50;
    *(_QWORD *)&v121 = v121 + 1;
LABEL_46:
    v100 = ++v99;
    v27 = v119;
  }
  while ( v99 < (unsigned __int64)v119 );
  if ( v100 != v27 )
    goto LABEL_87;
  v28 = 0;
  v122 = 0;
  v124 = 0;
  v110 = v121;
  v116 = v121;
  v123 = 0;
  v125 = 0;
  if ( !(_QWORD)v121 )
    goto LABEL_133;
  v29 = 0;
  v114 = 0;
  do
  {
    v43 = v29;
    sub_124680((__int64)&tinfo_property, a1, v120[v29], 0, *(double *)v28.m128i_i64, a5);
    v44 = v122;
    if ( (unsigned __int64)&tinfo_property < v122
      || (unsigned __int64)&tinfo_property >= v122 + 40LL * *((_QWORD *)&v123 + 1) )
    {
      v45 = v123;
      if ( *((_QWORD *)&v123 + 1) < (unsigned __int64)(v123 + 1) )
      {
        v122 = qvector_reserve((__int64)&v122, v122, v123 + 1, 40);
        v44 = v122;
        v45 = v123;
      }
      v46 = v44 + 40 * v45;
      sub_64000((__int64 *)v46, (__int64)&tinfo_property, *(double *)v28.m128i_i64);
      v34 = _mm_loadu_si128(&v128);
      *(_QWORD *)&v123 = v123 + 1;
      *(_QWORD *)(v46 + 16) = *((_QWORD *)&v127 + 1);
      *(__m128i *)(v46 + 24) = v34;
    }
    else
    {
      sub_64000((__int64 *)&v129, (__int64)&tinfo_property, *(double *)v28.m128i_i64);
      v30 = *((_QWORD *)&v127 + 1);
      v31 = _mm_loadu_si128(&v128);
      *((_QWORD *)&v127 + 1) = 0;
      v32 = v122;
      v130 = v30;
      v33 = v123;
      v131 = v31;
      v128 = 0;
      if ( *((_QWORD *)&v123 + 1) < (unsigned __int64)(v123 + 1) )
      {
        v122 = qvector_reserve((__int64)&v122, v122, v123 + 1, 40);
        v32 = v122;
        v33 = v123;
      }
      v109 = v32 + 40 * v33;
      sub_64000((__int64 *)v109, (__int64)&v129, 0.0);
      v34 = _mm_loadu_si128(&v131);
      *(_QWORD *)(v109 + 16) = v130;
      *(__m128i *)(v109 + 24) = v34;
      qfree(v129);
      *(_QWORD *)&v123 = v123 + 1;
      if ( *((_QWORD *)&v127 + 1) )
      {
        v128.m128i_i64[0] = 0;
        qfree(*((__int64 *)&v127 + 1));
      }
    }
    qfree((__int64)tinfo_property);
    sub_127A20((__int64)&tinfo_property, a1, v120[v43], 0, v35, v36, *(double *)v34.m128i_i64, a5);
    v37 = v124;
    if ( (unsigned __int64)&tinfo_property < v124
      || (unsigned __int64)&tinfo_property >= v124 + 40LL * *((_QWORD *)&v125 + 1) )
    {
      v53 = v125;
      if ( *((_QWORD *)&v125 + 1) < (unsigned __int64)(v125 + 1) )
      {
        v124 = qvector_reserve((__int64)&v124, v124, v125 + 1, 40);
        v37 = v124;
        v53 = v125;
      }
      v54 = v37 + 40 * v53;
      sub_64000((__int64 *)v54, (__int64)&tinfo_property, *(double *)v34.m128i_i64);
      v28 = _mm_loadu_si128(&v128);
      *(_QWORD *)(v54 + 16) = *((_QWORD *)&v127 + 1);
      *(__m128i *)(v54 + 24) = v28;
      *(_QWORD *)&v125 = v125 + 1;
    }
    else
    {
      sub_64000((__int64 *)&v129, (__int64)&tinfo_property, *(double *)v34.m128i_i64);
      v38 = *((_QWORD *)&v127 + 1);
      v39 = _mm_loadu_si128(&v128);
      *((_QWORD *)&v127 + 1) = 0;
      v40 = v124;
      v130 = v38;
      v41 = v125;
      v131 = v39;
      v128 = 0;
      if ( *((_QWORD *)&v125 + 1) < (unsigned __int64)(v125 + 1) )
      {
        v124 = qvector_reserve((__int64)&v124, v124, v125 + 1, 40);
        v40 = v124;
        v41 = v125;
      }
      v42 = v40 + 40 * v41;
      sub_64000((__int64 *)v42, (__int64)&v129, 0.0);
      v28 = _mm_loadu_si128(&v131);
      *(_QWORD *)(v42 + 16) = v130;
      *(__m128i *)(v42 + 24) = v28;
      qfree(v129);
      *(_QWORD *)&v125 = v125 + 1;
      if ( *((_QWORD *)&v127 + 1) )
      {
        v128.m128i_i64[0] = 0;
        qfree(*((__int64 *)&v127 + 1));
      }
    }
    qfree((__int64)tinfo_property);
    v29 = ++v114;
  }
  while ( v114 < (unsigned __int64)v121 );
  v59 = v110;
  if ( v110 - 1 <= 0 )
  {
    v55 = v124;
    v56 = 1;
    if ( v124 )
      goto LABEL_112;
LABEL_133:
    v57 = v122;
    if ( v122 )
    {
      v58 = v123;
      v56 = 1;
      if ( (_QWORD)v123 )
        goto LABEL_119;
      qfree(v122);
    }
LABEL_125:
    v91 = (unsigned int)(v121 - 1);
    if ( (int)v121 - 1 > 0 )
    {
      v92 = 8 * v91;
      v93 = 8 * (v91 - (unsigned int)(v121 - 2));
      while ( 1 )
      {
        v94 = v92;
        sub_A3160(a1, *(_QWORD **)((char *)v120 + v92), a2, *(double *)v28.m128i_i64);
        if ( v93 == v94 )
          break;
        v92 = v94 - 8;
      }
    }
    sub_11D890(a2, *v120);
    sub_12AB50((unsigned int **)(a2 + 64), v101, *(_DWORD *)(a2 + 68), 2, v28);
    v95 = *v120;
    if ( *v120 )
    {
      sub_11CDA0(v95 + 64);
      sub_11CDA0(v95 + 48);
      sub_11CDA0(v95 + 32);
      j__qfree(v95);
    }
    v51 = v121;
    v96 = *(_DWORD *)(a1 + 24);
    BYTE1(v96) &= ~2u;
    LOBYTE(v96) = v96 | 0x80;
    *(_DWORD *)(a1 + 24) = v96;
    goto LABEL_88;
  }
  v111 = 0;
  v104 = (unsigned int)(v59 - 2);
  for ( i = 0; ; ++i )
  {
    v60 = i;
    v115 = v111;
    if ( v116 > (int)i )
    {
      while ( 1 )
      {
        v63 = v111;
        v64 = i;
        while ( 1 )
        {
          if ( v64 != v60 )
          {
            v61 = v124 + v115;
            v62 = v63 + v122;
            if ( (unsigned __int8)sub_64780((_QWORD *)(v124 + v115), (_QWORD *)(v63 + v122))
              || (unsigned __int8)sub_318470((unsigned __int64 **)(v61 + 16), v62 + 16) )
            {
              break;
            }
          }
          ++v64;
          v63 += 40;
          if ( v116 == v64 )
            goto LABEL_100;
        }
        if ( v116 == v64 )
          break;
        ++v60;
        v115 += 40;
        if ( v116 == v60 )
          goto LABEL_83;
      }
LABEL_100:
      if ( v116 == v60 )
      {
LABEL_83:
        v55 = v124;
        v56 = 0;
        if ( v124 )
          goto LABEL_112;
        v57 = v122;
        if ( v122 )
        {
          v58 = v123;
          if ( (_QWORD)v123 )
            goto LABEL_119;
          qfree(v122);
        }
        goto LABEL_87;
      }
      if ( v60 != (_DWORD)i )
      {
        v65 = &v120[v60];
        v66 = &v120[i];
        v67 = *v66;
        *v66 = *v65;
        *v65 = v67;
        v68 = 40LL * v60;
        v69 = v122 + v111;
        v70 = (_QWORD *)(v68 + v122);
        v71 = *(_QWORD *)(v122 + v111);
        *(_QWORD *)v69 = *(_QWORD *)(v68 + v122);
        v72 = v70[1];
        *v70 = v71;
        v73 = *(_QWORD *)(v69 + 8);
        *(_QWORD *)(v69 + 8) = v72;
        v74 = v70[2];
        v70[1] = v73;
        v75 = *(_QWORD *)(v69 + 16);
        *(_QWORD *)(v69 + 16) = v74;
        v76 = _mm_loadu_si128((const __m128i *)(v69 + 24));
        *(_QWORD *)(v69 + 24) = v70[3];
        *(_QWORD *)(v69 + 32) = v70[4];
        v70[2] = v75;
        *(__m128i *)(v70 + 3) = v76;
        v77 = v124 + v111;
        v78 = (_QWORD *)(v68 + v124);
        v79 = *(_QWORD *)(v68 + v124);
        v80 = *(_QWORD *)(v124 + v111);
        *(_QWORD *)v77 = v79;
        *v78 = v80;
        v81 = *(_QWORD *)(v77 + 8);
        *(_QWORD *)(v77 + 8) = v78[1];
        v82 = v78[2];
        v78[1] = v81;
        v83 = *(_QWORD *)(v77 + 16);
        *(_QWORD *)(v77 + 16) = v82;
        v28 = _mm_loadu_si128((const __m128i *)(v77 + 24));
        *(_QWORD *)(v77 + 24) = v78[3];
        *(_QWORD *)(v77 + 32) = v78[4];
        v78[2] = v83;
        *(__m128i *)(v78 + 3) = v28;
      }
    }
    else if ( v116 == (_DWORD)i )
    {
      goto LABEL_83;
    }
    v111 += 40;
    if ( v104 == i )
      break;
  }
  v55 = v124;
  if ( !v124 )
    goto LABEL_133;
  v56 = 1;
LABEL_112:
  v84 = v125;
  if ( (_QWORD)v125 )
  {
    v85 = 0;
    do
    {
      v86 = (__int64 *)(v55 + 40 * v85);
      v87 = v86[2];
      if ( v87 )
      {
        v86[3] = 0;
        qfree(v87);
      }
      ++v85;
      qfree(*v86);
      v55 = v124;
    }
    while ( v84 != v85 );
  }
  *(_QWORD *)&v125 = 0;
  qfree(v55);
  v57 = v122;
  if ( v122 )
  {
    v58 = v123;
    if ( (_QWORD)v123 )
    {
LABEL_119:
      v88 = 0;
      do
      {
        v89 = (__int64 *)(v57 + 40 * v88);
        v90 = v89[2];
        if ( v90 )
        {
          v89[3] = 0;
          qfree(v90);
        }
        ++v88;
        qfree(*v89);
        v57 = v122;
      }
      while ( v58 != v88 );
    }
    *(_QWORD *)&v123 = 0;
    qfree(v57);
  }
  if ( v56 )
    goto LABEL_125;
LABEL_87:
  sub_1C8310((__int64 *)&v120, 0);
  v51 = 0;
LABEL_88:
  qfree(v117[0]);
  if ( v120 )
  {
    *(_QWORD *)&v121 = 0;
    qfree((__int64)v120);
  }
LABEL_74:
  if ( v118 )
  {
    *(_QWORD *)&v119 = 0;
    qfree(v118);
  }
  return v51;
}

