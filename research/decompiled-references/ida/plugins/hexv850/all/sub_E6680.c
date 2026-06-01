__int64 __fastcall sub_E6680(_QWORD *a1, __m128i *a2, __int64 a3, unsigned __int8 a4, _QWORD *a5)
{
  __int64 v6; // r13
  const char *v9; // rdx
  int v10; // r12d
  int v11; // eax
  const char *v13; // rdx
  int v14; // r14d
  __int64 v15; // rdi
  int v16; // ecx
  int v17; // r15d
  int v18; // eax
  unsigned __int64 v19; // rax
  int v20; // r14d
  int v21; // r15d
  int v22; // esi
  char v23; // al
  int v24; // edx
  __int64 v25; // rdi
  __int64 v26; // rcx
  unsigned int v27; // edx
  int v28; // r12d
  char v29; // al
  __int64 v30; // r12
  unsigned int v31; // r8d
  int v32; // edx
  int v33; // eax
  char v34; // al
  __int64 v35; // rdi
  __int64 v36; // r12
  __int64 v37; // r15
  _QWORD *v38; // rbx
  __int64 v39; // rbx
  __int64 v40; // r14
  int v41; // eax
  char v42; // al
  unsigned int v43; // eax
  unsigned int v44; // eax
  __int64 v45; // rax
  __int64 v46; // r15
  __m128i v47; // xmm5
  __m128i v48; // xmm4
  __m128i v49; // xmm6
  __m128i v50; // xmm3
  __m128i v51; // xmm2
  __m128i v52; // xmm1
  __m128i v53; // xmm6
  __m128i v54; // xmm0
  __m128i v55; // xmm6
  __m128i v56; // xmm6
  __m128i v57; // xmm6
  unsigned __int64 v58; // r14
  int v59; // r15d
  unsigned int *i; // r14
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  int v64; // r9d
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // r9d
  unsigned int v69; // edx
  const char *v70; // rdx
  char v71; // r14
  __int64 v72; // r13
  __int64 v73; // r12
  unsigned __int64 v74; // r14
  __int64 v75; // r12
  char *v76; // rax
  int v77; // [rsp+Ch] [rbp-314h]
  unsigned int v78; // [rsp+Ch] [rbp-314h]
  unsigned int v79; // [rsp+10h] [rbp-310h]
  int v80; // [rsp+10h] [rbp-310h]
  unsigned int v81; // [rsp+10h] [rbp-310h]
  unsigned int v82; // [rsp+10h] [rbp-310h]
  unsigned __int8 v83; // [rsp+33h] [rbp-2EDh]
  int v84; // [rsp+34h] [rbp-2ECh]
  char v85; // [rsp+38h] [rbp-2E8h]
  __int64 v87; // [rsp+48h] [rbp-2D8h]
  int tinfo_size; // [rsp+48h] [rbp-2D8h]
  __int64 v89; // [rsp+48h] [rbp-2D8h]
  __int64 v90; // [rsp+48h] [rbp-2D8h]
  __int64 v91; // [rsp+48h] [rbp-2D8h]
  __int64 v93; // [rsp+58h] [rbp-2C8h]
  int v94; // [rsp+60h] [rbp-2C0h]
  unsigned __int8 v95; // [rsp+67h] [rbp-2B9h]
  int v96; // [rsp+68h] [rbp-2B8h]
  unsigned __int64 v97; // [rsp+68h] [rbp-2B8h]
  int v98; // [rsp+68h] [rbp-2B8h]
  unsigned int *v99; // [rsp+68h] [rbp-2B8h]
  int v100; // [rsp+68h] [rbp-2B8h]
  int v101; // [rsp+78h] [rbp-2A8h] BYREF
  int v102; // [rsp+7Ch] [rbp-2A4h] BYREF
  char *v103; // [rsp+80h] [rbp-2A0h] BYREF
  __int128 v104; // [rsp+88h] [rbp-298h]
  const char *v105; // [rsp+A0h] [rbp-280h] BYREF
  __int128 v106; // [rsp+A8h] [rbp-278h]
  unsigned __int64 v107; // [rsp+C0h] [rbp-260h] BYREF
  __int128 v108; // [rsp+C8h] [rbp-258h]
  __int64 v109[2]; // [rsp+E0h] [rbp-240h] BYREF
  __int64 v110; // [rsp+F0h] [rbp-230h] BYREF
  __int128 v111; // [rsp+F8h] [rbp-228h]
  __int64 v112[2]; // [rsp+110h] [rbp-210h] BYREF
  __int64 v113; // [rsp+120h] [rbp-200h] BYREF
  __int128 v114; // [rsp+128h] [rbp-1F8h]
  _QWORD v115[2]; // [rsp+140h] [rbp-1E0h] BYREF
  __m128i si128; // [rsp+150h] [rbp-1D0h]
  __int64 v117; // [rsp+160h] [rbp-1C0h]
  __int128 v118; // [rsp+168h] [rbp-1B8h]
  __int64 v119; // [rsp+178h] [rbp-1A8h]
  __int64 v120; // [rsp+180h] [rbp-1A0h]
  int v121; // [rsp+188h] [rbp-198h]
  __m128i v122; // [rsp+190h] [rbp-190h] BYREF
  __m128i v123; // [rsp+1A0h] [rbp-180h] BYREF
  __m128i v124; // [rsp+1B0h] [rbp-170h] BYREF
  __m128i v125; // [rsp+1C0h] [rbp-160h] BYREF
  __m128i v126; // [rsp+1D0h] [rbp-150h] BYREF
  __m128i v127; // [rsp+1E0h] [rbp-140h] BYREF
  __int64 v128; // [rsp+1F0h] [rbp-130h] BYREF
  __int128 v129; // [rsp+1F8h] [rbp-128h] BYREF
  __int128 v130; // [rsp+208h] [rbp-118h]
  __int64 v131; // [rsp+218h] [rbp-108h]
  __int64 v132; // [rsp+248h] [rbp-D8h]
  __int64 v133; // [rsp+250h] [rbp-D0h]
  __int64 v134; // [rsp+260h] [rbp-C0h]
  __int64 v135; // [rsp+268h] [rbp-B8h]
  __m128i v136; // [rsp+280h] [rbp-A0h]
  __m128i v137; // [rsp+290h] [rbp-90h]
  __m128i v138; // [rsp+2A0h] [rbp-80h]
  __m128i v139; // [rsp+2B0h] [rbp-70h]
  __m128i v140; // [rsp+2C0h] [rbp-60h]
  __m128i v141; // [rsp+2D0h] [rbp-50h]
  unsigned __int64 v142; // [rsp+2E8h] [rbp-38h]

  v142 = __readfsqword(0x28u);
  v95 = *((_BYTE *)a1 + 365);
  if ( v95 )
    return 0;
  if ( *(_BYTE *)(a1[2] + 712LL) )
  {
    v6 = a1[39];
    if ( v6 == -1 )
      v6 = a1[40];
    v104 = 0;
    v103 = nullptr;
    sub_1CDDD0(&v103, v6, 0, 0);
    v9 = s1;
    if ( (_QWORD)v104 )
      v9 = v103;
    v10 = sub_E29D0((unsigned int *)&v102, &v101, v9, a1 + 6, *((_DWORD *)a1 + 87));
    if ( v10 )
    {
      v85 = 1;
    }
    else
    {
      if ( *(_BYTE *)(a1[2] + 712LL) == 1 )
      {
LABEL_20:
        if ( v103 )
        {
          *(_QWORD *)&v104 = 0;
          qfree();
        }
        return v95;
      }
      v11 = *((_DWORD *)a1 + 87);
      v85 = 0;
      v102 = 0;
      v101 = v11 - 1;
    }
    v115[1] = 0;
    v115[0] = 0xFFFFFFFF00000000LL;
    si128 = _mm_load_si128((const __m128i *)&xmmword_400170);
    v117 = 0;
    v119 = 0;
    v120 = 0;
    v121 = 0;
    v118 = 0;
    if ( !a5 )
    {
      a5 = v115;
      if ( !(unsigned __int8)sub_E0460(
                               (__int64)v115,
                               *a1,
                               a2->m128i_i64[0] + 80LL * v101,
                               a1[41],
                               *((_DWORD *)a1 + 90),
                               0) )
      {
        v95 = 0;
LABEL_17:
        cleanup_argloc();
        if ( v117 )
        {
          *(_QWORD *)&v118 = 0;
          qfree();
        }
        clear_tinfo_t();
        sub_1181E0(v115);
        goto LABEL_20;
      }
    }
    v105 = nullptr;
    v106 = 0;
    if ( (unsigned int)sub_E3460(a1, (__int64)&v105, a3, (__int64)a5, v85 & 1) != 1 )
    {
LABEL_15:
      if ( v105 )
      {
        *(_QWORD *)&v106 = 0;
        qfree();
      }
      goto LABEL_17;
    }
    v107 = 0;
    v13 = s1;
    v14 = v102;
    v108 = 0;
    if ( (_QWORD)v106 )
      v13 = v105;
    v83 = sub_DF5A0(a1[2], &v107, v13, v102);
    if ( !v83 )
      goto LABEL_91;
    v15 = a1[2];
    v94 = *(_DWORD *)(*(_QWORD *)(v15 + 112) + 80LL);
    if ( a4 | ((_QWORD)v108 != 0) )
    {
      if ( !(v10 | v14) && v6 == -1 )
      {
        v70 = s1;
        if ( (_QWORD)v106 )
          v70 = v105;
        v128 = 0;
        v129 = 0;
        v71 = sub_DF5A0(v15, (unsigned __int64 *)&v128, v70, 1);
        if ( v128 )
        {
          v72 = v129;
          if ( (_QWORD)v129 )
          {
            v73 = 0;
            do
            {
              ++v73;
              clear_tinfo_t();
            }
            while ( v72 != v73 );
          }
          *(_QWORD *)&v129 = 0;
          qfree();
        }
        if ( v71 )
        {
          v74 = v107;
          v75 = v107 + 8 * v108;
          if ( v107 != v75 )
          {
            while ( (get_tinfo_property() & 0xF) != 9 && v94 >= (unsigned __int64)get_tinfo_size() )
            {
              v74 += 8LL;
              if ( v75 == v74 )
                goto LABEL_28;
            }
            goto LABEL_91;
          }
        }
      }
LABEL_28:
      sub_E3940((__int64)&v122, (__int64)a2);
      if ( a4 )
        copy_tinfo_t();
    }
    else
    {
      if ( (v10 & 0xFFFFFEFF) == 0 )
        goto LABEL_197;
      if ( v10 == 512 )
      {
        if ( v14 )
          goto LABEL_197;
        v76 = &byte_4C1B90;
        if ( (_QWORD)v104 )
          v76 = v103;
        if ( *v76 == 115 )
        {
LABEL_197:
          v95 = 0;
          if ( !v107 )
            goto LABEL_15;
LABEL_95:
          *(_QWORD *)&v108 = 0;
          qfree();
          goto LABEL_15;
        }
      }
      sub_E3940((__int64)&v122, (__int64)a2);
    }
    sub_E5FF0(v122.m128i_i64, v108 + *((int *)a1 + 87));
    v16 = 0;
    if ( (_QWORD)v108 )
    {
      do
      {
        v17 = v16;
        copy_tinfo_t();
        v16 = v17 + 1;
      }
      while ( v17 + 1 < (unsigned __int64)v108 );
    }
    v18 = v127.m128i_i8[8] & 0xF0;
    if ( (v127.m128i_i8[8] & 0xF0) == 0xC0 )
      v18 = v123.m128i_i32[3];
    if ( (unsigned int)(v18 - 208) <= 0x2F || !(unsigned __int8)calc_varglocs() )
    {
      if ( !(unsigned __int8)getinf_flag() )
      {
        v69 = v127.m128i_i8[8] & 0xF0;
        if ( (v127.m128i_i8[8] & 0xF0) == 0xC0 )
          v69 = v123.m128i_u32[3];
        sub_CC4F0((__int64)&v128, a1[2], v69);
        if ( (_DWORD)v128 )
        {
          if ( v134 )
          {
            v135 = 0;
            qfree();
          }
          if ( v132 )
          {
            v133 = 0;
            qfree();
          }
          if ( *((_QWORD *)&v130 + 1) )
          {
            v131 = 0;
            qfree();
          }
          if ( (_QWORD)v129 )
          {
            *((_QWORD *)&v129 + 1) = 0;
            qfree();
          }
LABEL_80:
          if ( v126.m128i_i64[0] )
          {
            v126.m128i_i64[1] = 0;
            qfree();
          }
          cleanup_argloc();
          clear_tinfo_t();
          v35 = v122.m128i_i64[0];
          if ( v122.m128i_i64[0] )
          {
            v36 = v122.m128i_i64[1];
            if ( v122.m128i_i64[1] )
            {
              v37 = 0;
              do
              {
                v38 = (_QWORD *)(v35 + 80 * v37);
                clear_tinfo_t();
                if ( v38[5] )
                {
                  v38[6] = 0;
                  qfree();
                }
                if ( v38[2] )
                {
                  v38[3] = 0;
                  qfree();
                }
                cleanup_argloc();
                v35 = v122.m128i_i64[0];
                ++v37;
              }
              while ( v36 != v37 );
            }
            v122.m128i_i64[1] = 0;
            qfree();
          }
LABEL_91:
          if ( !v107 )
            goto LABEL_15;
          if ( (_QWORD)v108 )
          {
            v39 = 0;
            v40 = v108;
            do
            {
              ++v39;
              clear_tinfo_t();
            }
            while ( v40 != v39 );
          }
          goto LABEL_95;
        }
        if ( v134 )
        {
          v135 = 0;
          qfree();
        }
        if ( v132 )
        {
          v133 = 0;
          qfree();
        }
        if ( *((_QWORD *)&v130 + 1) )
        {
          v131 = 0;
          qfree();
        }
        if ( (_QWORD)v129 )
        {
          *((_QWORD *)&v129 + 1) = 0;
          qfree();
        }
      }
      v93 = v125.m128i_i64[1];
      v19 = *((int *)a1 + 87);
      v20 = *((_DWORD *)a1 + 87);
      if ( v19 < v122.m128i_i64[1] )
      {
        v21 = 2 * v94;
        v22 = v94;
        if ( v94 > 2 * v94 )
          v22 = 2 * v94;
        while ( 1 )
        {
          v30 = v122.m128i_i64[0] + 80 * v19;
          tinfo_size = get_tinfo_size();
          v31 = *((_DWORD *)a1 + 90);
          v32 = v128 - 1;
          v96 = v128;
          if ( (((_DWORD)v128 - 1) & (unsigned int)v128) != 0 )
            sub_DEE40(&v128);
          if ( (int)v128 <= v21 )
            break;
          if ( v31 <= 0x10 )
          {
            v77 = v128 - 1;
            v79 = *((_DWORD *)a1 + 90);
            v33 = getinf();
            if ( v33 == 176 || v33 == 256 )
            {
              if ( v94 > v21 )
              {
LABEL_123:
                v96 = 2 * v94;
LABEL_124:
                v31 = getinf();
LABEL_43:
                if ( v31 == 176 || v31 == 256 )
                {
                  v24 = v96 - 1;
                  goto LABEL_47;
                }
                goto LABEL_45;
              }
              goto LABEL_126;
            }
            v31 = v79;
            v32 = v77;
          }
          else if ( v31 == 176 || v31 == 256 )
          {
            v96 = v22;
            v24 = v22 - 1;
            goto LABEL_47;
          }
          v80 = v32;
          v78 = v31;
          v34 = getinf_flag();
          v24 = v80;
          if ( v34 )
            goto LABEL_47;
          if ( v94 <= v21 )
          {
            if ( v78 > 0x10 )
            {
              v96 = 2 * v94;
              goto LABEL_45;
            }
LABEL_126:
            v96 = 2 * v94;
LABEL_127:
            v31 = getinf();
LABEL_108:
            if ( v31 == 176 || v31 == 256 )
            {
              v24 = v94 - 1;
              v96 = v94;
              goto LABEL_47;
            }
            goto LABEL_45;
          }
          if ( v78 <= 0x10 )
            goto LABEL_123;
          v96 = 2 * v94;
LABEL_45:
          v23 = getinf_flag();
          v24 = v96 - 1;
          if ( !v23 )
          {
            v96 = v94;
            v24 = v94 - 1;
          }
LABEL_47:
          v25 = v30;
          v97 = -v96 & (unsigned __int64)(v93 + v24);
          cleanup_argloc();
          *(_DWORD *)v30 = 1;
          v26 = tinfo_size;
          *(_QWORD *)(v30 + 8) = v97;
          v27 = *((_DWORD *)a1 + 90);
          v28 = v128 - 1;
          v98 = v128;
          if ( (((_DWORD)v128 - 1) & (unsigned int)v128) != 0 )
            sub_DEE40(v25);
          if ( (int)v128 > v21 )
          {
            if ( v27 <= 0x10 )
            {
              v81 = *((_DWORD *)a1 + 90);
              v41 = getinf();
              v26 = tinfo_size;
              if ( v41 != 176 && v41 != 256 )
              {
                v27 = v81;
                goto LABEL_103;
              }
              if ( v94 > v21 )
                goto LABEL_121;
            }
            else
            {
              if ( v27 == 256 || v27 == 176 )
              {
                v98 = v22;
                v28 = v22 - 1;
                goto LABEL_55;
              }
LABEL_103:
              v89 = v26;
              v82 = v27;
              v42 = getinf_flag();
              v26 = v89;
              if ( v42 )
                goto LABEL_55;
              if ( v94 > v21 )
              {
                if ( v82 > 0x10 )
                {
                  v98 = 2 * v94;
                  goto LABEL_53;
                }
LABEL_121:
                v98 = 2 * v94;
LABEL_122:
                v90 = v26;
                v43 = getinf();
                v26 = v90;
                v27 = v43;
LABEL_51:
                if ( v27 != 176 && v27 != 256 )
                  goto LABEL_53;
                v28 = v98 - 1;
                goto LABEL_55;
              }
              if ( v82 > 0x10 )
              {
                v98 = 2 * v94;
LABEL_53:
                v87 = v26;
                v29 = getinf_flag();
                v28 = v98 - 1;
                v26 = v87;
                if ( !v29 )
                {
                  v98 = v94;
                  v28 = v94 - 1;
                }
                goto LABEL_55;
              }
            }
            v98 = 2 * v94;
LABEL_130:
            v91 = v26;
            v44 = getinf();
            v26 = v91;
            v27 = v44;
            goto LABEL_112;
          }
          if ( (int)v128 < v94 )
          {
            if ( v27 <= 0x10 )
              goto LABEL_122;
            goto LABEL_51;
          }
          if ( v27 <= 0x10 )
            goto LABEL_130;
LABEL_112:
          if ( v27 != 176 && v27 != 256 )
            goto LABEL_53;
          v28 = v94 - 1;
          v98 = v94;
LABEL_55:
          ++v20;
          v93 += -v98 & (unsigned __int64)(v26 + v28);
          v19 = v20;
          if ( (unsigned __int64)v20 >= v122.m128i_i64[1] )
            goto LABEL_131;
        }
        if ( (int)v128 < v94 )
        {
          if ( v31 <= 0x10 )
            goto LABEL_124;
          goto LABEL_43;
        }
        if ( v31 <= 0x10 )
          goto LABEL_127;
        goto LABEL_108;
      }
LABEL_131:
      v125.m128i_i64[1] = v93;
    }
    if ( v85 || (v84 = *((_DWORD *)a1 + 87), v45 = v84, (unsigned __int64)v84 >= v122.m128i_i64[1]) )
    {
LABEL_136:
      v47 = _mm_loadu_si128(a2);
      *a2 = _mm_load_si128(&v122);
      v48 = _mm_loadu_si128(a2 + 1);
      v49 = _mm_load_si128(&v123);
      v50 = _mm_loadu_si128(a2 + 2);
      v51 = _mm_loadu_si128(a2 + 3);
      v52 = _mm_loadu_si128(a2 + 4);
      v136 = v47;
      a2[1] = v49;
      v53 = _mm_load_si128(&v124);
      v54 = _mm_loadu_si128(a2 + 5);
      v137 = v48;
      a2[2] = v53;
      v55 = _mm_load_si128(&v125);
      v138 = v50;
      a2[3] = v55;
      v56 = _mm_load_si128(&v126);
      v139 = v51;
      a2[4] = v56;
      v57 = _mm_load_si128(&v127);
      v140 = v52;
      a2[5] = v57;
      v141 = v54;
      v122 = v47;
      v123 = v48;
      v124 = v50;
      v125 = v51;
      v126 = v52;
      v127 = v54;
      *((_DWORD *)a1 + 88) |= 0x100u;
      v95 = v83;
    }
    else
    {
      while ( 1 )
      {
        v46 = v122.m128i_i64[0] + 80 * v45;
        if ( (unsigned int)(*(_DWORD *)v46 - 3) <= 1 )
          break;
LABEL_135:
        v45 = ++v84;
        if ( (unsigned __int64)v84 >= v122.m128i_i64[1] )
          goto LABEL_136;
      }
      v58 = get_tinfo_size();
      v109[0] = 0;
      v109[1] = 0;
      v110 = 0;
      v112[0] = 0;
      v112[1] = 0;
      v113 = 0;
      v111 = 0;
      v114 = 0;
      if ( *(_DWORD *)v46 == 4 )
      {
        v58 >>= 1;
        v100 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 112LL) + 168LL))(
                 *(_QWORD *)(a1[2] + 112LL),
                 *(unsigned __int16 *)(v46 + 10));
        v128 = 0;
        *(_QWORD *)&v129 = 0;
        sub_5F400(&v128, v100, v58);
        *((_QWORD *)&v129 + 1) = 0;
        v130 = 0;
        sub_5F800(v109, &v128);
        sub_3113F0(&v110, (char *)&v129 + 8);
        if ( *((_QWORD *)&v129 + 1) )
        {
          *(_QWORD *)&v130 = 0;
          qfree();
        }
        qfree();
        v128 = 0;
        *(_QWORD *)&v129 = 0;
        sub_5F400(&v128, v100, v94);
        *((_QWORD *)&v129 + 1) = 0;
        v130 = 0;
        sub_5F800(v112, &v128);
        sub_3113F0(&v113, (char *)&v129 + 8);
        if ( *((_QWORD *)&v129 + 1) )
        {
          *(_QWORD *)&v130 = 0;
          qfree();
        }
        qfree();
      }
      v59 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1[2] + 112LL) + 168LL))(
              *(_QWORD *)(a1[2] + 112LL),
              *(unsigned __int16 *)(v46 + 8));
      v128 = 0;
      *(_QWORD *)&v129 = 0;
      sub_5F400(&v128, v59, v58);
      *((_QWORD *)&v129 + 1) = 0;
      v130 = 0;
      sub_5F800(v109, &v128);
      sub_3113F0(&v110, (char *)&v129 + 8);
      if ( *((_QWORD *)&v129 + 1) )
      {
        *(_QWORD *)&v130 = 0;
        qfree();
      }
      qfree();
      v128 = 0;
      *(_QWORD *)&v129 = 0;
      sub_5F400(&v128, v59, (v94 - 1 + v58) & -v94);
      *((_QWORD *)&v129 + 1) = 0;
      v130 = 0;
      sub_5F800(v112, &v128);
      sub_3113F0(&v113, (char *)&v129 + 8);
      if ( *((_QWORD *)&v129 + 1) )
      {
        *(_QWORD *)&v130 = 0;
        qfree();
      }
      qfree();
      for ( i = (unsigned int *)a3; ; i = v99 )
      {
        if ( (unsigned __int8)sub_5FE00(v109) && !(_QWORD)v111 )
          goto LABEL_145;
        v99 = (unsigned int *)sub_124590(*a1, (unsigned int)v109, *((_QWORD *)i + 2), 0, 0, 0, 257);
        if ( !v99 )
          break;
        if ( !(unsigned __int8)sub_119CE0(*v99) )
          goto LABEL_75;
        sub_122E60(&v128, *a1, v99, 1);
        if ( !(unsigned __int8)sub_5FDA0(&v128, v112) || !(unsigned __int8)sub_312680(&v113, (char *)&v129 + 8) )
        {
          if ( *((_QWORD *)&v129 + 1) )
          {
            *(_QWORD *)&v130 = 0;
            qfree();
          }
          qfree();
          goto LABEL_75;
        }
        sub_5FBC0(v109, &v128, v61, v62, v63, v64);
        sub_3123A0(&v110, (char *)&v129 + 8);
        sub_5FBC0(v112, &v128, v65, v66, v67, v68);
        sub_3123A0(&v113, (char *)&v129 + 8);
        if ( *((_QWORD *)&v129 + 1) )
        {
          *(_QWORD *)&v130 = 0;
          qfree();
        }
        qfree();
      }
      if ( i == (unsigned int *)a3 )
      {
LABEL_145:
        if ( v113 )
        {
          *(_QWORD *)&v114 = 0;
          qfree();
        }
        qfree();
        if ( v110 )
        {
          *(_QWORD *)&v111 = 0;
          qfree();
        }
        qfree();
        goto LABEL_135;
      }
LABEL_75:
      if ( v113 )
      {
        *(_QWORD *)&v114 = 0;
        qfree();
      }
      qfree();
      if ( v110 )
      {
        *(_QWORD *)&v111 = 0;
        qfree();
      }
      qfree();
    }
    goto LABEL_80;
  }
  return v95;
}

