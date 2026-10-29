__int64 __fastcall sub_1FFA60(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v6; // rsi
  unsigned int v7; // r15d
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r12
  char v11; // al
  int v12; // eax
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // eax
  __m128i v20; // xmm2
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  char v23; // al
  __int64 v24; // rdx
  int v25; // r13d
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int8 v28; // r13
  __int64 v29; // rax
  __int32 v30; // eax
  __int64 v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  unsigned __int8 *v37; // rdi
  unsigned int v38; // esi
  __int64 v39; // rcx
  signed int v40; // r8d
  signed int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // edx
  __int32 v45; // eax
  int v46; // r8d
  int v47; // ecx
  int v48; // ecx
  int v49; // r8d
  __int32 v50; // eax
  int v51; // edx
  __int64 v52; // rax
  char v53; // al
  unsigned __int64 v54; // rdx
  __int32 v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdi
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  int v61; // r13d
  _QWORD *v62; // rdx
  __m128i *v63; // r14
  _QWORD *v64; // rax
  int v65; // eax
  int v66; // eax
  __int64 v67; // rdx
  __int64 *v68; // rax
  __int64 v69; // r13
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __m128i v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  int v76; // r8d
  int v77; // r9d
  __int64 v78; // rdi
  __int64 v79; // [rsp-10h] [rbp-170h]
  char v80; // [rsp+Fh] [rbp-151h]
  int v81; // [rsp+10h] [rbp-150h]
  char v82; // [rsp+10h] [rbp-150h]
  __int64 v83; // [rsp+18h] [rbp-148h]
  unsigned __int64 v84; // [rsp+18h] [rbp-148h]
  int v85; // [rsp+20h] [rbp-140h]
  unsigned int v86; // [rsp+20h] [rbp-140h]
  unsigned int v87; // [rsp+28h] [rbp-138h]
  int v88; // [rsp+28h] [rbp-138h]
  __int32 v89; // [rsp+28h] [rbp-138h]
  char v90; // [rsp+30h] [rbp-130h]
  signed int v91; // [rsp+30h] [rbp-130h]
  int v92; // [rsp+30h] [rbp-130h]
  int v93; // [rsp+30h] [rbp-130h]
  __int64 v94; // [rsp+30h] [rbp-130h]
  __int64 *v95; // [rsp+38h] [rbp-128h]
  signed int v96; // [rsp+38h] [rbp-128h]
  int v97; // [rsp+38h] [rbp-128h]
  unsigned int v98; // [rsp+38h] [rbp-128h]
  int v99; // [rsp+38h] [rbp-128h]
  int v100; // [rsp+38h] [rbp-128h]
  int v101; // [rsp+38h] [rbp-128h]
  int v102; // [rsp+40h] [rbp-120h]
  bool v103; // [rsp+48h] [rbp-118h]
  __int64 v104; // [rsp+48h] [rbp-118h]
  signed int v105; // [rsp+48h] [rbp-118h]
  int v106; // [rsp+48h] [rbp-118h]
  int v107; // [rsp+48h] [rbp-118h]
  __int64 v108; // [rsp+48h] [rbp-118h]
  __int64 v109; // [rsp+50h] [rbp-110h]
  __int64 v110; // [rsp+58h] [rbp-108h]
  __int64 v111; // [rsp+60h] [rbp-100h]
  __int64 v112; // [rsp+68h] [rbp-F8h]
  __m128i v113; // [rsp+70h] [rbp-F0h] BYREF
  __int64 v114; // [rsp+80h] [rbp-E0h] BYREF
  __int64 v115; // [rsp+88h] [rbp-D8h]
  __int64 v116; // [rsp+90h] [rbp-D0h] BYREF
  __int64 v117; // [rsp+98h] [rbp-C8h]
  __m128i v118; // [rsp+A0h] [rbp-C0h] BYREF
  __m128i v119; // [rsp+B0h] [rbp-B0h] BYREF
  __int64 v120; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v121; // [rsp+D8h] [rbp-88h]
  __int64 v122; // [rsp+E0h] [rbp-80h] BYREF
  __int128 v123; // [rsp+E8h] [rbp-78h]
  unsigned __int64 v124; // [rsp+100h] [rbp-60h] BYREF
  __m128i v125; // [rsp+108h] [rbp-58h] BYREF
  __int128 v126; // [rsp+118h] [rbp-48h]
  unsigned __int64 v127; // [rsp+128h] [rbp-38h]

  v112 = a1;
  v127 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 56);
  if ( a2 >= *(_DWORD *)(v3 + 64) )
    sub_1FD700(a1);
  v111 = *(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * a2);
  if ( *(_BYTE *)(a3 + 32) == 5 )
  {
    if ( (unsigned __int8)sub_1ECF90(
                            *(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * a2),
                            *(_QWORD *)(a3 + 24),
                            *(int *)(a3 + 40)) )
      return 0;
    v3 = *(_QWORD *)(a1 + 56);
  }
  v6 = (_QWORD *)v111;
  v110 = *(_QWORD *)(v3 + 1504);
  v109 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  v7 = sub_1FF0C0(a1, v111, a3);
  if ( v7 )
    return (unsigned int)-36;
  v113 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v8 = *(_QWORD **)(a1 + 64);
  v9 = 13LL * *(int *)(a1 + 44);
  v10 = *v8 + 104LL * *(int *)(a1 + 44);
  if ( (*(_BYTE *)(a3 + 48) & 1) == 0 )
    goto LABEL_5;
  v28 = *(_BYTE *)(a3 + 32);
  if ( *(_DWORD *)v10 != 4 )
  {
    if ( (*(_BYTE *)(v10 + 27) & 2) != 0 )
    {
      v124 = (unsigned __int64)off_4CBF78;
      if ( v28 == 1 )
      {
        v29 = *(int *)(a3 + 24);
LABEL_42:
        v125.m128i_i64[0] = v29;
        v30 = *(_DWORD *)(a3 + 40);
        v125.m128i_i8[8] = v28;
        v125.m128i_i32[3] = v30;
        for_all_arglocs();
        if ( v125.m128i_i32[3] > *(_DWORD *)(a3 + 40) )
        {
          v113 = _mm_loadu_si128(&v125);
          goto LABEL_29;
        }
        goto LABEL_5;
      }
      if ( v28 == 5 )
      {
        v29 = *(_QWORD *)(a3 + 24);
        goto LABEL_42;
      }
LABEL_196:
      sub_1FD6C0(a1, v6, v9, v8);
    }
    v119 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v104 = *(_QWORD *)(a1 + 56);
    if ( v28 == 1 )
    {
      v84 = *(int *)(a3 + 24);
    }
    else
    {
      if ( v28 != 5 )
        goto LABEL_196;
      v84 = *(_QWORD *)(a3 + 24);
    }
    v97 = *(_DWORD *)(a3 + 40);
    sub_1BF6D0(v10, (__int64)&v119, *(_DWORD *)(v10 + 88));
    if ( *(_DWORD *)v10 == 2 )
    {
      v66 = *(_DWORD *)(v10 + 88);
      v120 = 0;
      v102 = v66;
      v122 = 0;
      v121 = 0;
      v123 = 0;
      sub_100320(a3, v104, (__int64)&v120);
      v124 = 0;
      v125 = 0u;
      v126 = 0;
      sub_1BF770(v10, (__int64)&v124, v102, *(_QWORD *)(v104 + 1440), 0);
      v82 = sub_60DE0(&v124, &v120);
      if ( v82 )
        v82 = sub_313DC0(&v122, &v125.m128i_u64[1]);
      if ( v125.m128i_i64[1] )
      {
        *(_QWORD *)&v126 = 0;
        qfree();
      }
      qfree();
      if ( v122 )
      {
        *(_QWORD *)&v123 = 0;
        qfree();
      }
      qfree();
      if ( v82 )
        goto LABEL_5;
      if ( !*(_DWORD *)(v10 + 92) && *(_DWORD *)v10 != 2 )
      {
        if ( v28 != v119.m128i_i8[8] )
          goto LABEL_118;
        v59 = v119.m128i_i64[0];
        goto LABEL_115;
      }
    }
    else
    {
      if ( v28 != v119.m128i_i8[8] )
      {
        if ( *(_DWORD *)(v10 + 92) )
          goto LABEL_28;
LABEL_118:
        v124 = 0;
        v125.m128i_i64[0] = 0;
        sub_1FD8E0(*(_QWORD *)(v104 + 1504), v119.m128i_i64, a3);
        sub_32B320(&v119, &v124);
        sub_1C3EE0((__int64)&v124, *(_QWORD *)(v104 + 1504), nullptr, v119.m128i_u32[3], *(_DWORD *)(v104 + 72));
        v60 = v125.m128i_i64[0];
        if ( v119.m128i_i8[8] == 1 )
        {
          if ( (_DWORD)v124 == 4 )
            v60 = v125.m128i_u16[0];
          else
            v60 = v125.m128i_i32[0];
        }
        v119.m128i_i64[0] = v60;
        cleanup_argloc();
        goto LABEL_28;
      }
      v59 = v119.m128i_i64[0];
      if ( v97 && v119.m128i_i64[0] >= v84 && v84 + v97 - 1 >= v119.m128i_i32[3] + v119.m128i_i64[0] - 1 )
        goto LABEL_5;
      if ( !*(_DWORD *)(v10 + 92) )
      {
LABEL_115:
        if ( v119.m128i_i32[3] && v84 >= v59 && v119.m128i_i32[3] + v59 - 1 >= v84 + v97 - 1 )
          goto LABEL_28;
        goto LABEL_118;
      }
    }
LABEL_28:
    v113 = _mm_load_si128(&v119);
    goto LABEL_29;
  }
  v31 = *(unsigned int *)(v10 + 8);
  v32 = *(int *)(a3 + 40);
  v33 = (unsigned int)(*(_DWORD *)(v10 + 88) / 2);
  v34 = HIWORD(*(_DWORD *)(v10 + 8));
  if ( v28 != 1 )
    sub_1FD6A0(v31, v111, v33, v32);
  v35 = *(int *)(a3 + 24);
  if ( !*(_DWORD *)(a3 + 40)
    || v34 < v35
    || (v36 = v32 + v35 - 1, v36 < (int)v33 + v34 - 1)
    || (v34 = (unsigned __int16)v31, (unsigned __int16)v31 < v35)
    || v36 < (int)v33 + (unsigned __int64)(unsigned __int16)v31 - 1 )
  {
    v113.m128i_i8[8] = 1;
    v113.m128i_i64[0] = v34;
    v113.m128i_i32[3] = v33;
    goto LABEL_51;
  }
  while ( 1 )
  {
LABEL_5:
    v113.m128i_i32[3] = sub_1FEBC0(v112, a2, a3, 1, 0);
    if ( v113.m128i_i32[3] < 0 )
      return 0;
    v114 = 0;
    v11 = *(_BYTE *)(a3 + 48);
    v115 = 0;
    v12 = v11 & 1;
    v103 = v12;
    if ( !v12 )
      goto LABEL_7;
    v14 = *(_DWORD *)(v10 + 88);
    v116 = -1;
    v117 = 0;
    v95 = *(__int64 **)(v112 + 56);
    v83 = v95[188];
    v90 = sub_1BF6D0(v10, (__int64)&v116, v14);
    if ( v90 )
    {
      v120 = 0;
      v121 = 0;
      v122 = 0;
      v123 = 0;
      sub_1BF940(v10, (__int64)v95, (__int64)&v120, 0);
      v124 = 0;
      v125 = 0u;
      v126 = 0;
      sub_100320(a3, (__int64)v95, (__int64)&v124);
      if ( (unsigned __int8)sub_60DE0(&v124, &v120) && (unsigned __int8)sub_313DC0(&v122, &v125.m128i_u64[1]) )
      {
        v90 = 0;
      }
      else
      {
        cleanup_argloc();
        sub_1FD8E0(v83, &v116, a3);
        sub_32B320(&v116, &v114);
        v85 = HIDWORD(v117);
      }
      if ( v125.m128i_i64[1] )
      {
        *(_QWORD *)&v126 = 0;
        qfree();
      }
      qfree();
      if ( v122 )
      {
        *(_QWORD *)&v123 = 0;
        qfree();
      }
      qfree();
      if ( !v90 )
        goto LABEL_7;
      goto LABEL_20;
    }
    v81 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 == 2 )
      break;
    if ( v81 != 4 )
    {
      if ( !under_debugger )
        sub_37EEE0(51992);
      goto LABEL_215;
    }
    v18 = *(unsigned int *)(v10 + 88);
    v86 = *(_DWORD *)(v10 + 88) / 2;
    v19 = *(_DWORD *)(v10 + 8);
    v87 = (unsigned __int16)v19;
    v96 = HIWORD(v19);
    if ( *(_BYTE *)(a3 + 32) != 1 )
    {
      if ( !under_debugger )
        sub_37EEE0(50998);
      goto LABEL_215;
    }
    v20 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 40));
    v21 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 24));
    memset(&v119, 0, 24);
    v22 = _mm_unpacklo_epi32(v21, v20);
    v118 = _mm_unpacklo_epi32(v22, _mm_cmpgt_epi32((__m128i)0LL, v22));
    sub_312A30(&v119, &v118, v18, v15, v16, v17);
    v120 = v87;
    v121 = v86;
    v80 = sub_313A50(&v119, &v120);
    v124 = (unsigned int)v96;
    v125.m128i_i64[0] = v86;
    v23 = sub_313A50(&v119, &v124);
    if ( !v119.m128i_i64[1] )
    {
      if ( !v80 || !v23 )
      {
        if ( !v119.m128i_i64[0] )
          goto LABEL_7;
        goto LABEL_121;
      }
      if ( v96 == v87 + v86 )
      {
        if ( !v119.m128i_i64[0] )
          goto LABEL_7;
LABEL_121:
        qfree();
        goto LABEL_7;
      }
      v25 = *(_DWORD *)(v83 + 88);
      if ( v119.m128i_i64[0] )
        qfree();
      v85 = v25 + 1;
      goto LABEL_20;
    }
    v38 = v96;
    v39 = v87;
    v40 = v96;
    if ( (int)v87 <= v96 )
    {
      v40 = v87;
      v96 = v87;
      v39 = v38;
      v87 = v38;
      v103 = 0;
    }
    if ( v87 < v86 + v96 )
    {
      if ( !under_debugger )
        sub_37EEE0(51756);
      goto LABEL_215;
    }
    v41 = (v87 + v86 + v96) >> 1;
    if ( *(_BYTE *)(a3 + 32) != 1 )
      sub_1FD6A0(&v119, v87, v24, v39);
    v42 = *(_QWORD *)(a3 + 24);
    if ( v41 >= (int)v42 + *(_DWORD *)(a3 + 40) )
    {
      v125.m128i_i8[0] = 1;
      v124 = v40;
      v98 = v39;
      v125.m128i_i32[1] = v86;
      sub_1FD8E0(v83, (__int64 *)&v124, a3);
      v45 = v125.m128i_i32[1];
      v47 = v98;
      if ( v125.m128i_i8[0] != 1 )
        sub_1FD6A0(v83, &v124, v124, v98);
      v96 = v124;
      v46 = v124;
      if ( v87 >= v125.m128i_i32[1] + (int)v124 )
      {
        v89 = v125.m128i_i32[1];
        v93 = v124;
        v99 = v47;
        cleanup_argloc();
        v48 = v99;
        v49 = v93;
        v50 = v89;
LABEL_77:
        if ( !v103 )
        {
          v51 = v48;
          v48 = v49;
          v49 = v51;
        }
        v85 = 2 * v50;
        v96 = v48 | (v49 << 16);
        goto LABEL_80;
      }
LABEL_131:
      if ( v103 )
      {
        v85 = *(_DWORD *)(v83 + 88) + 1;
        cleanup_argloc();
      }
      else
      {
        v107 = v47 - v46 + v45;
        cleanup_argloc();
        v85 = v107;
      }
      goto LABEL_133;
    }
    if ( v41 >= (int)v42 )
    {
      v125.m128i_i8[0] = 1;
      v124 = v40;
      v125.m128i_i32[1] = v87 + v86 - v96;
      sub_1FD8E0(v83, (__int64 *)&v124, a3);
      v47 = v124;
      v45 = v125.m128i_i32[1];
      if ( v125.m128i_i8[0] != 1 )
        sub_1FD6A0(v83, &v124, v67, v124);
      v96 = v124;
      v46 = v124;
      v44 = v124;
    }
    else
    {
      v91 = v40;
      v125.m128i_i8[0] = 1;
      v124 = (int)v87;
      v125.m128i_i32[1] = v86;
      sub_1FD8E0(v83, (__int64 *)&v124, a3);
      v44 = v124;
      v45 = v125.m128i_i32[1];
      v46 = v91;
      if ( v125.m128i_i8[0] != 1 )
        sub_1FD6A0(v83, &v124, v124, v43);
      v47 = v124;
    }
    if ( v44 < v45 + v96 )
      goto LABEL_131;
    v85 = v45;
    v88 = v46;
    v92 = v47;
    cleanup_argloc();
    v48 = v92;
    v49 = v88;
    v50 = v85;
    if ( v92 != -1 )
      goto LABEL_77;
LABEL_133:
    v81 = 3;
LABEL_80:
    LODWORD(v114) = v81;
    LODWORD(v115) = v96;
    if ( v119.m128i_i64[0] )
    {
      v119.m128i_i64[1] = 0;
      qfree();
    }
LABEL_20:
    if ( *(_DWORD *)(v110 + 88) < v85 )
    {
      *(_DWORD *)(v112 + 40) = 20;
      goto LABEL_7;
    }
    v105 = sub_119050(v85);
    if ( (*(_BYTE *)(v10 + 25) & 1) != 0 )
    {
      v52 = *(_QWORD *)(v112 + 56);
      if ( *(_BYTE *)(v52 + 320)
        || (_DWORD)v114 == 1
        && (v56 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v52 + 936) + 40LL))(*(_QWORD *)(v52 + 936)),
            v56 != -1)
        && v56 > v115
        && v105 + v115 > v56 )
      {
        if ( (unsigned int)sub_1BF090((int *)&v114, (int *)v10)
          || *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v112 + 56) + 1496LL) + 130LL) != v105
          || !(unsigned __int8)sub_1ED0F0((int *)v10, (_QWORD *)v110) )
        {
          v7 = sub_1FF880(v112, a3, v10);
        }
        goto LABEL_7;
      }
    }
    LODWORD(v124) = 0;
    copy_argloc();
    v100 = *(_DWORD *)(v10 + 24);
    v85 = sub_1FF760(v112, (int *)v10, (__int64)&v114, v105);
    if ( v85 == -1 )
      goto LABEL_110;
    v57 = *(int *)(v112 + 44);
    if ( (_DWORD)v57 == (_DWORD)v109 && (*(_BYTE *)(v10 + 25) & 4) != 0 )
      goto LABEL_142;
    v106 = v100 & 0x2000000;
    if ( !*(_DWORD *)(v10 + 92) )
    {
      v58 = *(_QWORD *)(v112 + 56);
      if ( (*(_BYTE *)(v58 + 2) & 4) != 0 )
      {
        v10 = **(_QWORD **)(v112 + 64) + 104 * v57;
        goto LABEL_108;
      }
      if ( !sub_1EB4C0(v58, v10, v85) )
      {
        v10 = **(_QWORD **)(v112 + 64) + 104LL * *(int *)(v112 + 44);
        goto LABEL_108;
      }
      v101 = sub_1F1900(*(_QWORD *)(v112 + 56), (int *)(v112 + 44), v85);
      v10 = **(_QWORD **)(v112 + 64) + 104LL * *(int *)(v112 + 44);
      if ( v101 < 0 )
      {
        if ( v101 != -20
          && (unsigned __int8)sub_1EB920(
                                (_DWORD *)v10,
                                *(_QWORD **)(*(_QWORD *)(v112 + 56) + 1504LL),
                                v85,
                                *(_DWORD *)(*(_QWORD *)(v112 + 56) + 72LL),
                                2) )
        {
          v7 = v101;
          goto LABEL_142;
        }
LABEL_108:
        copy_argloc();
        if ( v106 )
          *(_DWORD *)(v10 + 24) |= 0x2000000u;
LABEL_110:
        *(_DWORD *)(v112 + 40) = 20;
LABEL_142:
        cleanup_argloc();
        goto LABEL_7;
      }
    }
    if ( !a2 && !sub_1EB4C0(*(_QWORD *)(v112 + 56), v10, v85)
      || !(unsigned __int8)sub_1EB920(
                             (_DWORD *)v10,
                             *(_QWORD **)(*(_QWORD *)(v112 + 56) + 1504LL),
                             v85,
                             *(_DWORD *)(*(_QWORD *)(v112 + 56) + 72LL),
                             2) )
    {
      goto LABEL_108;
    }
    sub_1BF6D0(v10, (__int64)&v113, *(_DWORD *)(v10 + 88));
    v62 = *(_QWORD **)(v112 + 72);
    if ( *(_DWORD *)(v10 + 88) <= *(_DWORD *)(a3 + 40) )
    {
      v63 = (__m128i *)(*v62 + 24LL * *(int *)(v10 + 92));
      v64 = sub_1013B0((unsigned __int64 *)v63, a3);
      if ( v64 && *((_DWORD *)v64 + 10) < *(_DWORD *)(v10 + 88) )
      {
        if ( (unsigned int)sub_1FF020(
                             v112,
                             *(_QWORD **)(v112 + 72),
                             *(__int64 **)(v112 + 80),
                             v63,
                             (unsigned __int64)v64,
                             (__int64)&v113,
                             3) )
        {
          v7 = -36;
        }
        else
        {
          v78 = *(_QWORD *)(v112 + 56);
          if ( (*(_BYTE *)(*(_QWORD *)(v78 + 1496) + 604LL) & 0x10) != 0 )
            sub_1ECC30(v78, -1, 20, v79, v76, v77);
          else
            v7 = -20;
        }
      }
      else
      {
        v65 = *(_DWORD *)(v10 + 24);
        if ( (v65 & 0x400) != 0 )
        {
          BYTE1(v65) &= ~4u;
          *(_DWORD *)(v10 + 24) = v65;
          *(_BYTE *)(v112 + 48) = 1;
        }
      }
      goto LABEL_142;
    }
    sub_1034A0(*(_QWORD *)(v112 + 56), a3, (__int64)v62, *(_QWORD **)(v112 + 80));
    cleanup_argloc();
    cleanup_argloc();
LABEL_29:
    if ( *(_BYTE *)(a3 + 32) == 5 && v113.m128i_i8[8] > 4u )
    {
      if ( v113.m128i_i8[8] != 5 )
        sub_1FD6E0();
      v26 = *(_QWORD *)(a3 + 24);
      v27 = v113.m128i_i64[0] + v113.m128i_i32[3];
      if ( v27 > v26 )
      {
        if ( (unsigned __int8)sub_1ECF90(v111, v26, v27 - v26) )
          return 0;
      }
    }
LABEL_51:
    if ( (unsigned __int8)sub_1BF6D0(v10, 0, 0) )
    {
      v37 = *(unsigned __int8 **)(v112 + 56);
      if ( (v37[2] & 4) != 0 )
      {
        if ( (*(_BYTE *)(v10 + 27) & 2) == 0 && !(unsigned __int8)sub_1EADE0(v37) )
        {
          if ( (*(_BYTE *)(a3 + 48) & 4) == 0 )
          {
            if ( !under_debugger )
              sub_37EEE0(52919);
            goto LABEL_215;
          }
LABEL_66:
          *(_DWORD *)(v112 + 40) = 20;
        }
      }
      else
      {
        a1 = v112;
        v6 = *(_QWORD **)(v112 + 72);
        if ( (unsigned int)sub_1FF020(
                             v112,
                             v6,
                             *(__int64 **)(v112 + 80),
                             *(__m128i **)(v112 + 8),
                             a3,
                             (__int64)&v113,
                             3) )
          return (unsigned int)-36;
        if ( (*(_BYTE *)(a3 + 48) & 4) != 0 )
          goto LABEL_66;
        v53 = *(_BYTE *)(a3 + 32);
        if ( v53 == 1 )
        {
          v54 = *(int *)(a3 + 24);
        }
        else
        {
          if ( v53 != 5 )
            goto LABEL_196;
          v54 = *(_QWORD *)(a3 + 24);
        }
        v125.m128i_i8[0] = *(_BYTE *)(a3 + 32);
        v55 = *(_DWORD *)(a3 + 40);
        v124 = v54;
        v125.m128i_i32[1] = v55;
        if ( !(unsigned __int8)sub_1C0430((int *)v10, *(_DWORD *)(v10 + 88), (__int64)&v124, nullptr) )
          goto LABEL_66;
        *(_DWORD *)(v10 + 24) |= 0x2000000u;
      }
    }
    else if ( (*(_BYTE *)(v10 + 27) & 2) == 0 )
    {
      *(_DWORD *)(v112 + 40) = 26;
    }
  }
  v61 = *(_DWORD *)(v10 + 88);
  v120 = 0;
  v121 = 0;
  v122 = 0;
  v123 = 0;
  sub_100320(a3, (__int64)v95, (__int64)&v120);
  v124 = 0;
  v125 = 0u;
  v126 = 0;
  sub_1BF770(v10, (__int64)&v124, v61, v95[180], 0);
  if ( !(unsigned __int8)sub_60DE0(&v120, &v124) || !(unsigned __int8)sub_313DC0(&v125.m128i_u64[1], &v122) )
    goto LABEL_125;
  if ( *(_DWORD *)v10 != 2 )
  {
    v103 = 0;
    goto LABEL_125;
  }
  v68 = *(__int64 **)(v10 + 8);
  v108 = *v68 + 24 * v68[1];
  if ( *v68 == v108 )
  {
LABEL_194:
    if ( !under_debugger )
      sub_37EEE0(52223);
LABEL_215:
    BUG();
  }
  v69 = *v68;
  while ( 2 )
  {
    if ( (unsigned int)(*(_DWORD *)v69 - 3) > 1 )
    {
      if ( *(_DWORD *)v69 == 1 )
      {
LABEL_170:
        v73.m128i_i64[1] = *(unsigned __int16 *)(v69 + 18);
        v94 = *(_QWORD *)(v69 + 8);
        v73.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v95[187] + 24) + 16LL) & (v95[180] + v94);
        v119 = v73;
        if ( (unsigned __int8)sub_313CF0(&v122, &v119, 0) )
        {
          if ( *(_BYTE *)(a3 + 32) != 5 )
            sub_1FD6C0(&v122, &v119, v74, v75);
          v103 = v94 > *(_QWORD *)(a3 + 24);
          goto LABEL_125;
        }
      }
LABEL_166:
      v69 += 24;
      if ( v108 == v69 )
        goto LABEL_194;
      continue;
    }
    break;
  }
  v70 = *(unsigned __int16 *)(v69 + 8);
  if ( !(unsigned __int8)sub_61020(&v120, v70, *(unsigned __int16 *)(v69 + 18)) )
  {
    if ( *(_DWORD *)v69 == 1 )
      goto LABEL_170;
    goto LABEL_166;
  }
  if ( *(_BYTE *)(a3 + 32) != 1 )
    sub_1FD6A0(&v120, v70, v71, v72);
  v103 = (int)*(unsigned __int16 *)(v69 + 8) > *(_DWORD *)(a3 + 24);
LABEL_125:
  if ( v125.m128i_i64[1] )
  {
    *(_QWORD *)&v126 = 0;
    qfree();
  }
  qfree();
  if ( v122 )
  {
    *(_QWORD *)&v123 = 0;
    qfree();
  }
  qfree();
  if ( v103 )
  {
    v85 = *(_DWORD *)(v83 + 88) + 1;
    goto LABEL_20;
  }
LABEL_7:
  cleanup_argloc();
  return v7;
}

