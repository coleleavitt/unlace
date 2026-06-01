__int64 __fastcall sub_1C4CA0(__int64 a1, __int64 a2, _DWORD *a3)
{
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r14
  int v9; // esi
  int v10; // edx
  int v11; // ebx
  int v12; // r12d
  int v13; // r13d
  int tinfo_size; // ecx
  int v15; // ecx
  unsigned __int64 v16; // r14
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  unsigned __int64 v19; // rcx
  int v20; // ecx
  int v21; // ebx
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __m128i v28; // xmm0
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  __m128i v31; // xmm0
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  __m128i v34; // xmm0
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  unsigned __int64 v37; // r13
  __m128i v38; // xmm0
  __int64 v39; // r12
  unsigned __int64 v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // r14
  __m128i v43; // xmm0
  __int64 v44; // rdx
  signed int v45; // ecx
  int v46; // esi
  __int64 v47; // rbx
  unsigned int v48; // ebx
  __int64 v50; // rax
  unsigned __int64 v51; // r13
  __m128i v52; // xmm0
  unsigned __int64 v53; // rdi
  char v54; // r15
  unsigned __int64 v55; // rdi
  __int64 v56; // rbx
  int v57; // edx
  int v58; // r13d
  __int64 v59; // rbx
  __int64 v60; // r12
  __int64 v61; // r14
  int v62; // r15d
  __int64 *v63; // rax
  __int64 *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rdx
  _QWORD *v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // rdi
  __int64 v73; // rsi
  __m128i v74; // xmm0
  __int64 v75; // rdx
  _QWORD *v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rsi
  __int64 v81; // rcx
  __m128i v82; // xmm0
  __int64 v83; // r13
  __int64 v84; // rbx
  unsigned __int64 v85; // r12
  __int64 v86; // r12
  unsigned __int64 v87; // r13
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // r15
  __int64 v92; // rbx
  int v93; // eax
  int v94; // [rsp+10h] [rbp-200h]
  int v96; // [rsp+24h] [rbp-1ECh]
  __int64 v97; // [rsp+28h] [rbp-1E8h]
  __int64 v98; // [rsp+30h] [rbp-1E0h]
  __int64 v99; // [rsp+38h] [rbp-1D8h]
  __int64 v101; // [rsp+48h] [rbp-1C8h]
  signed int v103; // [rsp+58h] [rbp-1B8h]
  __int64 i; // [rsp+58h] [rbp-1B8h]
  int v105; // [rsp+60h] [rbp-1B0h]
  unsigned __int64 v106; // [rsp+60h] [rbp-1B0h]
  int v107; // [rsp+68h] [rbp-1A8h]
  __int64 v108; // [rsp+68h] [rbp-1A8h]
  int v109; // [rsp+70h] [rbp-1A0h]
  int v110; // [rsp+70h] [rbp-1A0h]
  int v111; // [rsp+70h] [rbp-1A0h]
  __int64 v112; // [rsp+70h] [rbp-1A0h]
  int v113; // [rsp+78h] [rbp-198h]
  __int64 v114[2]; // [rsp+80h] [rbp-190h] BYREF
  __int64 v115; // [rsp+90h] [rbp-180h] BYREF
  __int128 v116; // [rsp+98h] [rbp-178h]
  __int64 *v117; // [rsp+B0h] [rbp-160h] BYREF
  __int128 v118; // [rsp+B8h] [rbp-158h]
  unsigned __int64 v119; // [rsp+D0h] [rbp-140h]
  __int128 v120; // [rsp+D8h] [rbp-138h]
  unsigned __int64 v121; // [rsp+F0h] [rbp-120h]
  __int128 v122; // [rsp+F8h] [rbp-118h]
  __int64 tinfo_property; // [rsp+110h] [rbp-100h] BYREF
  __int128 v124; // [rsp+118h] [rbp-F8h]
  __m128i v125; // [rsp+128h] [rbp-E8h] BYREF
  __int128 v126; // [rsp+140h] [rbp-D0h] BYREF
  __int64 v127; // [rsp+150h] [rbp-C0h]
  __m128i v128; // [rsp+158h] [rbp-B8h] BYREF
  __int64 v129; // [rsp+168h] [rbp-A8h]
  __int128 v130; // [rsp+170h] [rbp-A0h]
  __int128 v131; // [rsp+180h] [rbp-90h]
  __int64 v132; // [rsp+1B0h] [rbp-60h]
  int v133; // [rsp+1B8h] [rbp-58h]
  __int64 v134; // [rsp+1C0h] [rbp-50h]
  char v135; // [rsp+1C8h] [rbp-48h]
  unsigned __int64 v136; // [rsp+1D8h] [rbp-38h]

  v4 = (_BYTE *)(a2 + 32);
  v5 = *((_QWORD *)v4 - 1);
  v136 = __readfsqword(0x28u);
  v116 = 0;
  v115 = 0;
  sub_1C3FF0(&v115, v4, v5);
  sub_1C3FF0(&v115, (_BYTE *)(a2 + 48), *(_QWORD *)(a2 + 24));
  if ( (unsigned __int64)v116 <= 1 )
  {
    v48 = 0;
    goto LABEL_74;
  }
  v6 = *(_QWORD *)(a1 + 64);
  v117 = nullptr;
  v114[0] = 0;
  v7 = *(_QWORD *)(v6 + 1504);
  v114[1] = 0;
  v96 = 0;
  v98 = v7;
  v97 = 0;
  v118 = 0;
  do
  {
    v8 = v115 + 24 * v97;
    v9 = *(_DWORD *)(v8 + 16);
    v99 = v8;
    v10 = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 4LL);
    if ( *(_DWORD *)(a2 + 68) - v9 <= v10 )
      v10 = *(_DWORD *)(a2 + 68) - v9;
    v105 = v10;
    v11 = v10;
    if ( (unsigned __int8)sub_606E0(v114, v9, v10) )
    {
LABEL_107:
      v25 = v116;
      break;
    }
    sub_5FB00(v114, *(_DWORD *)(v8 + 16), v11);
    if ( *(_QWORD *)(*(_QWORD *)a3 + 440LL) < (unsigned __int64)(int)a3[4] )
    {
      if ( !under_debugger )
        sub_37DDE0(51258);
LABEL_140:
      BUG();
    }
    v103 = 0;
    v94 = v118;
    if ( !v105 )
      goto LABEL_46;
    while ( 1 )
    {
      v135 = 0;
      v127 = 0;
      v12 = a3[2] + v103;
      v129 = 0;
      v133 = -1;
      v132 = 1;
      v134 = 0;
      v121 = 0;
      v126 = 0;
      v128 = 0;
      v130 = 0;
      v131 = 0;
      copy_tinfo_t();
      v13 = v105;
      while ( v12 || v13 < (unsigned __int64)get_tinfo_size() )
      {
        if ( (get_tinfo_property() & 0xF) == 0xB )
        {
          tinfo_property = 0;
          tinfo_property = get_tinfo_property();
          copy_tinfo_t();
          clear_tinfo_t();
          tinfo_size = get_tinfo_size();
          v12 %= tinfo_size;
          if ( tinfo_size <= 0 )
            goto LABEL_29;
        }
        else
        {
          if ( (get_tinfo_property() & 0x2F) != 0xD )
            break;
          if ( (get_tinfo_property() & 0x3F) == 0xD )
          {
            *(_QWORD *)&v126 = 8LL * v12;
            if ( (unsigned int)find_tinfo_udt_member() == -1 )
              break;
          }
          else if ( (unsigned int)find_tinfo_udt_member() == -1
                 || (unsigned __int64)(8LL * v12) >= *((_QWORD *)&v126 + 1) )
          {
            break;
          }
          v16 = (unsigned __int64)v126 >> 3;
          v12 -= (unsigned __int64)v126 >> 3;
          if ( (get_tinfo_property() & 0xF) == 0xE )
          {
            v124 = 0;
            tinfo_property = 0;
            if ( !get_tinfo_pdata() )
            {
              if ( !under_debugger )
                sub_37DDE0(52698);
              goto LABEL_140;
            }
            v17 = (_QWORD *)(tinfo_property + 16 * v124);
            if ( (_QWORD *)tinfo_property == v17 )
              goto LABEL_32;
            v18 = (_QWORD *)tinfo_property;
            while ( 1 )
            {
              if ( (unsigned __int64)v126 >= *v18 )
              {
                v19 = v18[1];
                if ( (unsigned __int64)v126 < v19 )
                  break;
              }
              v18 += 2;
              if ( v17 == v18 )
                goto LABEL_32;
            }
            if ( !v18 )
            {
LABEL_32:
              if ( !under_debugger )
                sub_37DDE0(52699);
              goto LABEL_140;
            }
            v20 = (v19 >> 3) - v16;
            if ( tinfo_property )
            {
              v109 = v20;
              *(_QWORD *)&v124 = 0;
              qfree();
              v20 = v109;
            }
          }
          else
          {
            v20 = get_tinfo_size();
          }
          v110 = v20;
          copy_tinfo_t();
          tinfo_size = v110;
          if ( v110 <= 0 )
          {
LABEL_29:
            if ( !under_debugger )
              sub_37DDE0(51638);
            goto LABEL_140;
          }
        }
        v15 = tinfo_size - v12;
        if ( v13 > v15 )
          v13 = v15;
        if ( v13 <= 0 )
        {
          if ( !under_debugger )
            sub_37DDE0(51625);
          goto LABEL_140;
        }
      }
      v21 = round_down_power2();
      clear_tinfo_t();
      clear_tinfo_t();
      if ( v129 )
      {
        *(_QWORD *)&v130 = 0;
        qfree();
      }
      if ( v127 )
      {
        v128.m128i_i64[0] = 0;
        qfree();
      }
      if ( v21 <= 0 || v21 > v105 )
      {
        if ( !under_debugger )
          sub_37DDE0(51639);
        goto LABEL_140;
      }
      v22 = sub_1C3E90(
              v98,
              *(_QWORD *)v99,
              *(unsigned __int8 **)(v99 + 8),
              (unsigned __int8 *)(a2 + 64),
              v21,
              v103,
              v103 + *(_DWORD *)(v99 + 16));
      if ( !v22 )
        break;
      v23 = v118;
      v24 = v117;
      if ( *((_QWORD *)&v118 + 1) < (unsigned __int64)(v118 + 1) )
      {
        v117 = (__int64 *)qvector_reserve();
        v24 = v117;
        v23 = v118;
      }
      v103 += v21;
      v24[v23] = v22;
      *(_QWORD *)&v118 = v118 + 1;
      v105 -= v21;
      if ( !v105 )
        goto LABEL_46;
    }
    v44 = *(_QWORD *)(v99 + 8);
    v45 = *(_DWORD *)(v99 + 16);
    v46 = *(_DWORD *)(v44 + 4);
    if ( *(_DWORD *)(a2 + 68) - v45 <= v46 )
      v46 = *(_DWORD *)(a2 + 68) - v45;
    v47 = sub_1C3E90(v98, *(_QWORD *)v99, (unsigned __int8 *)v44, (unsigned __int8 *)(a2 + 64), v46, 0, v45);
    if ( !v47 )
      goto LABEL_107;
    sub_1C3C90((__int64 *)&v117, v94);
    if ( *((_QWORD *)&v118 + 1) < (unsigned __int64)(v118 + 1) )
      v117 = (__int64 *)qvector_reserve();
    v117[(_QWORD)v118] = v47;
    *(_QWORD *)&v118 = v118 + 1;
LABEL_46:
    v97 = ++v96;
    v25 = v116;
  }
  while ( v96 < (unsigned __int64)v116 );
  if ( v97 != v25 )
    goto LABEL_87;
  v119 = 0;
  v121 = 0;
  v107 = v118;
  v113 = v118;
  v120 = 0;
  v122 = 0;
  if ( !(_QWORD)v118 )
    goto LABEL_133;
  v26 = 0;
  v111 = 0;
  do
  {
    v39 = v26;
    sub_1201C0((__int64)&tinfo_property, a1, v117[v26], 0);
    v40 = v119;
    if ( (unsigned __int64)&tinfo_property < v119
      || (unsigned __int64)&tinfo_property >= v119 + 40LL * *((_QWORD *)&v120 + 1) )
    {
      v41 = v120;
      if ( *((_QWORD *)&v120 + 1) < (unsigned __int64)(v120 + 1) )
      {
        v119 = qvector_reserve();
        v40 = v119;
        v41 = v120;
      }
      v42 = v40 + 40 * v41;
      sub_5FC80((__int64 *)v42, (__int64)&tinfo_property);
      v43 = _mm_loadu_si128(&v125);
      *(_QWORD *)&v120 = v120 + 1;
      *(_QWORD *)(v42 + 16) = *((_QWORD *)&v124 + 1);
      *(__m128i *)(v42 + 24) = v43;
    }
    else
    {
      sub_5FC80((__int64 *)&v126, (__int64)&tinfo_property);
      v27 = *((_QWORD *)&v124 + 1);
      v28 = _mm_loadu_si128(&v125);
      *((_QWORD *)&v124 + 1) = 0;
      v29 = v119;
      v127 = v27;
      v30 = v120;
      v128 = v28;
      v125 = 0;
      if ( *((_QWORD *)&v120 + 1) < (unsigned __int64)(v120 + 1) )
      {
        v119 = qvector_reserve();
        v29 = v119;
        v30 = v120;
      }
      v106 = v29 + 40 * v30;
      sub_5FC80((__int64 *)v106, (__int64)&v126);
      v31 = _mm_loadu_si128(&v128);
      *(_QWORD *)(v106 + 16) = v127;
      *(__m128i *)(v106 + 24) = v31;
      qfree();
      *(_QWORD *)&v120 = v120 + 1;
      if ( *((_QWORD *)&v124 + 1) )
      {
        v125.m128i_i64[0] = 0;
        qfree();
      }
    }
    qfree();
    sub_123560((__int64)&tinfo_property, a1, v117[v39], 0);
    v32 = v121;
    if ( (unsigned __int64)&tinfo_property < v121
      || (unsigned __int64)&tinfo_property >= v121 + 40LL * *((_QWORD *)&v122 + 1) )
    {
      v50 = v122;
      if ( *((_QWORD *)&v122 + 1) < (unsigned __int64)(v122 + 1) )
      {
        v121 = qvector_reserve();
        v32 = v121;
        v50 = v122;
      }
      v51 = v32 + 40 * v50;
      sub_5FC80((__int64 *)v51, (__int64)&tinfo_property);
      v52 = _mm_loadu_si128(&v125);
      *(_QWORD *)(v51 + 16) = *((_QWORD *)&v124 + 1);
      *(__m128i *)(v51 + 24) = v52;
      *(_QWORD *)&v122 = v122 + 1;
    }
    else
    {
      sub_5FC80((__int64 *)&v126, (__int64)&tinfo_property);
      v33 = *((_QWORD *)&v124 + 1);
      v34 = _mm_loadu_si128(&v125);
      *((_QWORD *)&v124 + 1) = 0;
      v35 = v121;
      v127 = v33;
      v36 = v122;
      v128 = v34;
      v125 = 0;
      if ( *((_QWORD *)&v122 + 1) < (unsigned __int64)(v122 + 1) )
      {
        v121 = qvector_reserve();
        v35 = v121;
        v36 = v122;
      }
      v37 = v35 + 40 * v36;
      sub_5FC80((__int64 *)v37, (__int64)&v126);
      v38 = _mm_loadu_si128(&v128);
      *(_QWORD *)(v37 + 16) = v127;
      *(__m128i *)(v37 + 24) = v38;
      qfree();
      *(_QWORD *)&v122 = v122 + 1;
      if ( *((_QWORD *)&v124 + 1) )
      {
        v125.m128i_i64[0] = 0;
        qfree();
      }
    }
    qfree();
    v26 = ++v111;
  }
  while ( v111 < (unsigned __int64)v118 );
  v57 = v107;
  if ( v107 - 1 <= 0 )
  {
    v53 = v121;
    v54 = 1;
    if ( v121 )
      goto LABEL_112;
LABEL_133:
    v55 = v119;
    if ( v119 )
    {
      v56 = v120;
      v54 = 1;
      if ( (_QWORD)v120 )
        goto LABEL_119;
      qfree();
    }
LABEL_125:
    v88 = (unsigned int)(v118 - 1);
    if ( (int)v118 - 1 > 0 )
    {
      v89 = 8 * v88;
      v90 = 8 * (v88 - (unsigned int)(v118 - 2));
      while ( 1 )
      {
        v91 = v89;
        sub_9ECA0(a1, *(_QWORD **)((char *)v117 + v89), a2);
        if ( v90 == v91 )
          break;
        v89 = v91 - 8;
      }
    }
    sub_1193D0(a2, *v117);
    sub_126690(a2 + 64, v98, *(_DWORD *)(a2 + 68), 2);
    v92 = *v117;
    if ( *v117 )
    {
      sub_1188E0(v92 + 64);
      sub_1188E0(v92 + 48);
      sub_1188E0(v92 + 32);
      j__qfree();
    }
    v48 = v118;
    v93 = *(_DWORD *)(a1 + 24);
    BYTE1(v93) &= ~2u;
    LOBYTE(v93) = v93 | 0x80;
    *(_DWORD *)(a1 + 24) = v93;
    goto LABEL_88;
  }
  v108 = 0;
  v101 = (unsigned int)(v57 - 2);
  for ( i = 0; ; ++i )
  {
    v58 = i;
    v112 = v108;
    if ( v113 > (int)i )
    {
      while ( 1 )
      {
        v61 = v108;
        v62 = i;
        while ( 1 )
        {
          if ( v62 != v58 )
          {
            v59 = v121 + v112;
            v60 = v61 + v119;
            if ( (unsigned __int8)sub_60400((_QWORD *)(v121 + v112), (_QWORD *)(v61 + v119))
              || (unsigned __int8)sub_313370(v59 + 16, v60 + 16) )
            {
              break;
            }
          }
          ++v62;
          v61 += 40;
          if ( v113 == v62 )
            goto LABEL_100;
        }
        if ( v113 == v62 )
          break;
        ++v58;
        v112 += 40;
        if ( v113 == v58 )
          goto LABEL_83;
      }
LABEL_100:
      if ( v113 == v58 )
      {
LABEL_83:
        v53 = v121;
        v54 = 0;
        if ( v121 )
          goto LABEL_112;
        v55 = v119;
        if ( v119 )
        {
          v56 = v120;
          if ( (_QWORD)v120 )
            goto LABEL_119;
          qfree();
        }
        goto LABEL_87;
      }
      if ( v58 != (_DWORD)i )
      {
        v63 = &v117[v58];
        v64 = &v117[i];
        v65 = *v64;
        *v64 = *v63;
        *v63 = v65;
        v66 = 40LL * v58;
        v67 = v119 + v108;
        v68 = (_QWORD *)(v66 + v119);
        v69 = *(_QWORD *)(v119 + v108);
        *(_QWORD *)v67 = *(_QWORD *)(v66 + v119);
        v70 = v68[1];
        *v68 = v69;
        v71 = *(_QWORD *)(v67 + 8);
        *(_QWORD *)(v67 + 8) = v70;
        v72 = v68[2];
        v68[1] = v71;
        v73 = *(_QWORD *)(v67 + 16);
        *(_QWORD *)(v67 + 16) = v72;
        v74 = _mm_loadu_si128((const __m128i *)(v67 + 24));
        *(_QWORD *)(v67 + 24) = v68[3];
        *(_QWORD *)(v67 + 32) = v68[4];
        v68[2] = v73;
        *(__m128i *)(v68 + 3) = v74;
        v75 = v121 + v108;
        v76 = (_QWORD *)(v66 + v121);
        v77 = *(_QWORD *)(v66 + v121);
        v78 = *(_QWORD *)(v121 + v108);
        *(_QWORD *)v75 = v77;
        *v76 = v78;
        v79 = *(_QWORD *)(v75 + 8);
        *(_QWORD *)(v75 + 8) = v76[1];
        v80 = v76[2];
        v76[1] = v79;
        v81 = *(_QWORD *)(v75 + 16);
        *(_QWORD *)(v75 + 16) = v80;
        v82 = _mm_loadu_si128((const __m128i *)(v75 + 24));
        *(_QWORD *)(v75 + 24) = v76[3];
        *(_QWORD *)(v75 + 32) = v76[4];
        v76[2] = v81;
        *(__m128i *)(v76 + 3) = v82;
      }
    }
    else if ( v113 == (_DWORD)i )
    {
      goto LABEL_83;
    }
    v108 += 40;
    if ( v101 == i )
      break;
  }
  v53 = v121;
  if ( !v121 )
    goto LABEL_133;
  v54 = 1;
LABEL_112:
  v83 = v122;
  if ( (_QWORD)v122 )
  {
    v84 = 0;
    do
    {
      v85 = v53 + 40 * v84;
      if ( *(_QWORD *)(v85 + 16) )
      {
        *(_QWORD *)(v85 + 24) = 0;
        qfree();
      }
      ++v84;
      qfree();
      v53 = v121;
    }
    while ( v83 != v84 );
  }
  *(_QWORD *)&v122 = 0;
  qfree();
  v55 = v119;
  if ( v119 )
  {
    v56 = v120;
    if ( (_QWORD)v120 )
    {
LABEL_119:
      v86 = 0;
      do
      {
        v87 = v55 + 40 * v86;
        if ( *(_QWORD *)(v87 + 16) )
        {
          *(_QWORD *)(v87 + 24) = 0;
          qfree();
        }
        ++v86;
        qfree();
        v55 = v119;
      }
      while ( v56 != v86 );
    }
    *(_QWORD *)&v120 = 0;
    qfree();
  }
  if ( v54 )
    goto LABEL_125;
LABEL_87:
  sub_1C3C90((__int64 *)&v117, 0);
  v48 = 0;
LABEL_88:
  qfree();
  if ( v117 )
  {
    *(_QWORD *)&v118 = 0;
    qfree();
  }
LABEL_74:
  if ( v115 )
  {
    *(_QWORD *)&v116 = 0;
    qfree();
  }
  return v48;
}

