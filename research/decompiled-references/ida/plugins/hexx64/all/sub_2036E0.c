__int64 __fastcall sub_2036E0(__int64 a1, unsigned int a2, unsigned __int64 a3, __m128i si128, __m128 a5)
{
  __int64 v5; // rax
  unsigned int v8; // r15d
  __int64 v9; // r12
  char v10; // al
  int v11; // eax
  int v13; // edx
  unsigned int v14; // eax
  __m128i v15; // xmm2
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  char v18; // al
  int v19; // r13d
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int8 v22; // r13
  __int64 v23; // rax
  __int32 v24; // eax
  unsigned int v25; // edi
  int v26; // edx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int8 *v31; // rdi
  unsigned int v32; // esi
  unsigned int v33; // ecx
  signed int v34; // r8d
  signed int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // edx
  __int32 v38; // eax
  signed int v39; // r8d
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // r8d
  __int32 v43; // eax
  unsigned int v44; // edx
  __int64 v45; // rax
  char v46; // al
  __int64 v47; // rdx
  __int32 v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdi
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  int v55; // r13d
  char v56; // al
  _QWORD *v57; // rdx
  __m128i *v58; // r14
  _QWORD *v59; // rax
  int v60; // eax
  int v61; // eax
  __int64 *v62; // rax
  __int64 v63; // r13
  __m128i v64; // rax
  char v65; // al
  _QWORD *v66; // rdi
  char v67; // [rsp+Fh] [rbp-151h]
  int v68; // [rsp+10h] [rbp-150h]
  char v69; // [rsp+10h] [rbp-150h]
  __int64 v70; // [rsp+18h] [rbp-148h]
  unsigned __int64 v71; // [rsp+18h] [rbp-148h]
  int v72; // [rsp+20h] [rbp-140h]
  unsigned int v73; // [rsp+20h] [rbp-140h]
  unsigned int v74; // [rsp+28h] [rbp-138h]
  unsigned int v75; // [rsp+28h] [rbp-138h]
  __int32 v76; // [rsp+28h] [rbp-138h]
  char v77; // [rsp+30h] [rbp-130h]
  signed int v78; // [rsp+30h] [rbp-130h]
  unsigned int v79; // [rsp+30h] [rbp-130h]
  unsigned int v80; // [rsp+30h] [rbp-130h]
  __int64 v81; // [rsp+30h] [rbp-130h]
  __int64 *v82; // [rsp+38h] [rbp-128h]
  signed int v83; // [rsp+38h] [rbp-128h]
  int v84; // [rsp+38h] [rbp-128h]
  unsigned int v85; // [rsp+38h] [rbp-128h]
  unsigned int v86; // [rsp+38h] [rbp-128h]
  int v87; // [rsp+38h] [rbp-128h]
  int v88; // [rsp+38h] [rbp-128h]
  int v89; // [rsp+40h] [rbp-120h]
  bool v90; // [rsp+48h] [rbp-118h]
  __int64 v91; // [rsp+48h] [rbp-118h]
  signed int v92; // [rsp+48h] [rbp-118h]
  int v93; // [rsp+48h] [rbp-118h]
  int v94; // [rsp+48h] [rbp-118h]
  __int64 v95; // [rsp+48h] [rbp-118h]
  __int64 v96; // [rsp+50h] [rbp-110h]
  __int64 v97; // [rsp+58h] [rbp-108h]
  __int64 v98; // [rsp+60h] [rbp-100h]
  __m128i v100; // [rsp+70h] [rbp-F0h] BYREF
  __int64 v101; // [rsp+80h] [rbp-E0h] BYREF
  __int64 v102; // [rsp+88h] [rbp-D8h]
  __int64 v103; // [rsp+90h] [rbp-D0h] BYREF
  __int64 v104; // [rsp+98h] [rbp-C8h]
  __m128i v105; // [rsp+A0h] [rbp-C0h] BYREF
  __m128i v106[2]; // [rsp+B0h] [rbp-B0h] BYREF
  __m128i v107; // [rsp+D0h] [rbp-90h] BYREF
  __int64 v108; // [rsp+E0h] [rbp-80h] BYREF
  __int128 v109; // [rsp+E8h] [rbp-78h]
  __int64 v110; // [rsp+100h] [rbp-60h] BYREF
  __m128i v111; // [rsp+108h] [rbp-58h] BYREF
  __int128 v112; // [rsp+118h] [rbp-48h]
  unsigned __int64 v113; // [rsp+128h] [rbp-38h]

  v113 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 56);
  if ( a2 >= *(_DWORD *)(v5 + 64) )
    sub_201380(*(double *)si128.m128i_i64);
  v98 = *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8LL * a2);
  if ( *(_BYTE *)(a3 + 32) == 5 )
  {
    if ( (unsigned __int8)sub_1F0C10(
                            *(_QWORD *)(*(_QWORD *)(v5 + 528) + 8LL * a2),
                            *(_QWORD *)(a3 + 24),
                            *(int *)(a3 + 40)) )
      return 0;
    v5 = *(_QWORD *)(a1 + 56);
  }
  v97 = *(_QWORD *)(v5 + 1504);
  v96 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL);
  v8 = sub_202D40(a1, v98, a3, *(double *)si128.m128i_i64, a5);
  if ( v8 )
    return (unsigned int)-36;
  v100 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
  v9 = **(_QWORD **)(a1 + 64) + 104LL * *(int *)(a1 + 44);
  if ( (*(_BYTE *)(a3 + 48) & 1) == 0 )
    goto LABEL_5;
  v22 = *(_BYTE *)(a3 + 32);
  if ( *(_DWORD *)v9 != 4 )
  {
    if ( (*(_BYTE *)(v9 + 27) & 2) != 0 )
    {
      v110 = (__int64)off_4DEE58;
      if ( v22 == 1 )
      {
        v23 = *(int *)(a3 + 24);
LABEL_42:
        v111.m128i_i64[0] = v23;
        v24 = *(_DWORD *)(a3 + 40);
        v111.m128i_i8[8] = v22;
        v111.m128i_i32[3] = v24;
        for_all_arglocs();
        if ( v111.m128i_i32[3] > *(_DWORD *)(a3 + 40) )
        {
          si128 = _mm_loadu_si128(&v111);
          v100 = si128;
          goto LABEL_29;
        }
        goto LABEL_5;
      }
      if ( v22 == 5 )
      {
        v23 = *(_QWORD *)(a3 + 24);
        goto LABEL_42;
      }
LABEL_196:
      sub_201340(*(double *)si128.m128i_i64);
    }
    v106[0] = (__m128i)0xFFFFFFFFFFFFFFFFLL;
    v91 = *(_QWORD *)(a1 + 56);
    if ( v22 == 1 )
    {
      v71 = *(int *)(a3 + 24);
    }
    else
    {
      if ( v22 != 5 )
        goto LABEL_196;
      v71 = *(_QWORD *)(a3 + 24);
    }
    v84 = *(_DWORD *)(a3 + 40);
    sub_1C3110(v9, (__int64)v106, *(_DWORD *)(v9 + 88), *(double *)si128.m128i_i64);
    if ( *(_DWORD *)v9 == 2 )
    {
      v61 = *(_DWORD *)(v9 + 88);
      v107 = 0u;
      v89 = v61;
      v108 = 0;
      v109 = 0;
      sub_103D60(a3, v91, v107.m128i_i64);
      si128.m128i_i64[0] = 0;
      v110 = 0;
      v111 = 0u;
      v112 = 0;
      sub_1C31B0(v9, (__int64)&v110, v89, *(_QWORD *)(v91 + 1440), 0, 0.0, a5);
      v69 = sub_64820(&v110, &v107);
      if ( v69 )
        v69 = sub_317F40(&v108, (__int64)&v111.m128i_i64[1]);
      if ( v111.m128i_i64[1] )
      {
        *(_QWORD *)&v112 = 0;
        qfree(v111.m128i_i64[1]);
      }
      qfree(v110);
      if ( v108 )
      {
        *(_QWORD *)&v109 = 0;
        qfree(v108);
      }
      qfree(v107.m128i_i64[0]);
      if ( v69 )
        goto LABEL_5;
      if ( !*(_DWORD *)(v9 + 92) && *(_DWORD *)v9 != 2 )
      {
        if ( v22 != v106[0].m128i_i8[8] )
          goto LABEL_118;
        v52 = v106[0].m128i_i64[0];
        goto LABEL_115;
      }
    }
    else
    {
      if ( v22 != v106[0].m128i_i8[8] )
      {
        if ( *(_DWORD *)(v9 + 92) )
          goto LABEL_28;
LABEL_118:
        v110 = 0;
        v111.m128i_i64[0] = 0;
        sub_201560(*(_QWORD *)(v91 + 1504), v106[0].m128i_i64, a3, *(double *)si128.m128i_i64);
        sub_32F770(v106[0].m128i_i64, &v110, v53);
        sub_1C7920(
          (__int64)&v110,
          *(_QWORD *)(v91 + 1504),
          nullptr,
          v106[0].m128i_u32[3],
          *(_DWORD *)(v91 + 72),
          *(double *)si128.m128i_i64);
        v54 = v111.m128i_i64[0];
        if ( v106[0].m128i_i8[8] == 1 )
        {
          if ( (_DWORD)v110 == 4 )
            v54 = v111.m128i_u16[0];
          else
            v54 = v111.m128i_i32[0];
        }
        v106[0].m128i_i64[0] = v54;
        cleanup_argloc();
        goto LABEL_28;
      }
      v52 = v106[0].m128i_i64[0];
      if ( v84 && v106[0].m128i_i64[0] >= v71 && v71 + v84 - 1 >= v106[0].m128i_i32[3] + v106[0].m128i_i64[0] - 1 )
        goto LABEL_5;
      if ( !*(_DWORD *)(v9 + 92) )
      {
LABEL_115:
        if ( v106[0].m128i_i32[3] && v71 >= v52 && v106[0].m128i_i32[3] + v52 - 1 >= v71 + v84 - 1 )
          goto LABEL_28;
        goto LABEL_118;
      }
    }
LABEL_28:
    si128 = _mm_load_si128(v106);
    v100 = si128;
    goto LABEL_29;
  }
  v25 = *(_DWORD *)(v9 + 8);
  v26 = *(_DWORD *)(v9 + 88) / 2;
  v27 = HIWORD(v25);
  if ( v22 != 1 )
    sub_201320(*(double *)si128.m128i_i64);
  v28 = *(int *)(a3 + 24);
  if ( !*(_DWORD *)(a3 + 40)
    || v27 < v28
    || (v29 = *(int *)(a3 + 40) + v28 - 1, v29 < v26 + v27 - 1)
    || (v27 = (unsigned __int16)v25, (unsigned __int16)v25 < v28)
    || v29 < v26 + (unsigned __int64)(unsigned __int16)v25 - 1 )
  {
    v100.m128i_i8[8] = 1;
    v100.m128i_i64[0] = v27;
    v100.m128i_i32[3] = v26;
    goto LABEL_51;
  }
  while ( 1 )
  {
LABEL_5:
    v100.m128i_i32[3] = sub_202840(a1, a2, a3, 1, 0, *(double *)si128.m128i_i64, a5);
    if ( v100.m128i_i32[3] < 0 )
      return 0;
    v101 = 0;
    v10 = *(_BYTE *)(a3 + 48);
    v102 = 0;
    v11 = v10 & 1;
    v90 = v11;
    if ( !v11 )
      goto LABEL_7;
    v13 = *(_DWORD *)(v9 + 88);
    v103 = -1;
    v104 = 0;
    v82 = *(__int64 **)(a1 + 56);
    v70 = v82[188];
    v77 = sub_1C3110(v9, (__int64)&v103, v13, *(double *)si128.m128i_i64);
    if ( v77 )
    {
      v107 = 0u;
      v108 = 0;
      v109 = 0;
      sub_1C3380(v9, (__int64)v82, (__int64)&v107, 0, 0.0, a5);
      si128.m128i_i64[0] = 0;
      v110 = 0;
      v111 = 0u;
      v112 = 0;
      sub_103D60(a3, (__int64)v82, &v110);
      if ( (unsigned __int8)sub_64820(&v110, &v107) && (unsigned __int8)sub_317F40(&v108, (__int64)&v111.m128i_i64[1]) )
      {
        v77 = 0;
      }
      else
      {
        cleanup_argloc();
        sub_201560(v70, &v103, a3, 0.0);
        sub_32F770(&v103, &v101, v30);
        v72 = HIDWORD(v104);
      }
      if ( v111.m128i_i64[1] )
      {
        *(_QWORD *)&v112 = 0;
        qfree(v111.m128i_i64[1]);
      }
      qfree(v110);
      if ( v108 )
      {
        *(_QWORD *)&v109 = 0;
        qfree(v108);
      }
      qfree(v107.m128i_i64[0]);
      if ( !v77 )
        goto LABEL_7;
      goto LABEL_20;
    }
    v68 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 == 2 )
      break;
    if ( v68 != 4 )
    {
      if ( !under_debugger )
        sub_383060(0xCB18u, *(double *)si128.m128i_i64);
      goto LABEL_215;
    }
    v73 = *(_DWORD *)(v9 + 88) / 2;
    v14 = *(_DWORD *)(v9 + 8);
    v74 = (unsigned __int16)v14;
    v83 = HIWORD(v14);
    if ( *(_BYTE *)(a3 + 32) != 1 )
    {
      if ( !under_debugger )
        sub_383060(0xC736u, *(double *)si128.m128i_i64);
      goto LABEL_215;
    }
    v15 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 40));
    v16 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 24));
    memset(v106, 0, 24);
    v17 = _mm_unpacklo_epi32(v16, v15);
    a5 = (__m128)_mm_cmpgt_epi32((__m128i)0LL, v17);
    si128 = _mm_unpacklo_epi32(v17, (__m128i)a5);
    v105 = si128;
    sub_316BB0(v106[0].m128i_i64, &v105, *(double *)si128.m128i_i64, a5);
    v107.m128i_i64[0] = v74;
    v107.m128i_i64[1] = v73;
    v67 = sub_317BD0(v106[0].m128i_i64, &v107);
    v110 = (unsigned int)v83;
    v111.m128i_i64[0] = v73;
    v18 = sub_317BD0(v106[0].m128i_i64, (__m128i *)&v110);
    if ( !v106[0].m128i_i64[1] )
    {
      if ( !v67 || !v18 )
      {
        if ( !v106[0].m128i_i64[0] )
          goto LABEL_7;
        goto LABEL_121;
      }
      if ( v83 == v74 + v73 )
      {
        if ( !v106[0].m128i_i64[0] )
          goto LABEL_7;
LABEL_121:
        qfree(v106[0].m128i_i64[0]);
        goto LABEL_7;
      }
      v19 = *(_DWORD *)(v70 + 88);
      if ( v106[0].m128i_i64[0] )
        qfree(v106[0].m128i_i64[0]);
      v72 = v19 + 1;
      goto LABEL_20;
    }
    v32 = v83;
    v33 = v74;
    v34 = v83;
    if ( (int)v74 <= v83 )
    {
      v34 = v74;
      v83 = v74;
      v33 = v32;
      v74 = v32;
      v90 = 0;
    }
    if ( v74 < v73 + v83 )
    {
      if ( !under_debugger )
        sub_383060(0xCA2Cu, *(double *)si128.m128i_i64);
      goto LABEL_215;
    }
    v35 = (v74 + v73 + v83) >> 1;
    if ( *(_BYTE *)(a3 + 32) != 1 )
      sub_201320(*(double *)si128.m128i_i64);
    v36 = *(_QWORD *)(a3 + 24);
    if ( v35 >= (int)v36 + *(_DWORD *)(a3 + 40) )
    {
      v111.m128i_i8[0] = 1;
      v110 = v34;
      v85 = v33;
      v111.m128i_i32[1] = v73;
      sub_201560(v70, &v110, a3, *(double *)si128.m128i_i64);
      v38 = v111.m128i_i32[1];
      v40 = v85;
      if ( v111.m128i_i8[0] != 1 )
        sub_201320(*(double *)si128.m128i_i64);
      v83 = v110;
      v39 = v110;
      if ( v74 >= v111.m128i_i32[1] + (int)v110 )
      {
        v76 = v111.m128i_i32[1];
        v80 = v110;
        v86 = v40;
        cleanup_argloc();
        v41 = v86;
        v42 = v80;
        v43 = v76;
LABEL_77:
        if ( !v90 )
        {
          v44 = v41;
          v41 = v42;
          v42 = v44;
        }
        v72 = 2 * v43;
        v83 = v41 | (v42 << 16);
        goto LABEL_80;
      }
LABEL_131:
      if ( v90 )
      {
        v72 = *(_DWORD *)(v70 + 88) + 1;
        cleanup_argloc();
      }
      else
      {
        v94 = v40 - v39 + v38;
        cleanup_argloc();
        v72 = v94;
      }
      goto LABEL_133;
    }
    if ( v35 >= (int)v36 )
    {
      v111.m128i_i8[0] = 1;
      v110 = v34;
      v111.m128i_i32[1] = v74 + v73 - v83;
      sub_201560(v70, &v110, a3, *(double *)si128.m128i_i64);
      v40 = v110;
      v38 = v111.m128i_i32[1];
      if ( v111.m128i_i8[0] != 1 )
        sub_201320(*(double *)si128.m128i_i64);
      v83 = v110;
      v39 = v110;
      v37 = v110;
    }
    else
    {
      v78 = v34;
      v111.m128i_i8[0] = 1;
      v110 = (int)v74;
      v111.m128i_i32[1] = v73;
      sub_201560(v70, &v110, a3, *(double *)si128.m128i_i64);
      v37 = v110;
      v38 = v111.m128i_i32[1];
      v39 = v78;
      if ( v111.m128i_i8[0] != 1 )
        sub_201320(*(double *)si128.m128i_i64);
      v40 = v110;
    }
    if ( v37 < v38 + v83 )
      goto LABEL_131;
    v72 = v38;
    v75 = v39;
    v79 = v40;
    cleanup_argloc();
    v41 = v79;
    v42 = v75;
    v43 = v72;
    if ( v79 != -1 )
      goto LABEL_77;
LABEL_133:
    v68 = 3;
LABEL_80:
    LODWORD(v101) = v68;
    LODWORD(v102) = v83;
    if ( v106[0].m128i_i64[0] )
    {
      v106[0].m128i_i64[1] = 0;
      qfree(v106[0].m128i_i64[0]);
    }
LABEL_20:
    if ( *(_DWORD *)(v97 + 88) < v72 )
    {
      *(_DWORD *)(a1 + 40) = 20;
      goto LABEL_7;
    }
    v92 = sub_11CA90(v72, *(double *)si128.m128i_i64);
    if ( (*(_BYTE *)(v9 + 25) & 1) != 0 )
    {
      v45 = *(_QWORD *)(a1 + 56);
      if ( *(_BYTE *)(v45 + 320)
        || (_DWORD)v101 == 1
        && (v49 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v45 + 936) + 40LL))(*(_QWORD *)(v45 + 936)),
            v49 != -1)
        && v49 > v102
        && v92 + v102 > v49 )
      {
        if ( (unsigned int)sub_1C2AD0((int *)&v101, (int *)v9, *(double *)si128.m128i_i64)
          || *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 1496LL) + 130LL) != v92
          || !(unsigned __int8)sub_1F0D70((int *)v9, (_QWORD *)v97) )
        {
          v8 = sub_203500(a1, a3, v9);
        }
        goto LABEL_7;
      }
    }
    LODWORD(v110) = 0;
    copy_argloc();
    v87 = *(_DWORD *)(v9 + 24);
    v72 = sub_2033E0(a1, (int *)v9, (__int64)&v101, v92, *(double *)si128.m128i_i64);
    if ( v72 == -1 )
      goto LABEL_110;
    v50 = *(int *)(a1 + 44);
    if ( (_DWORD)v50 == (_DWORD)v96 && (*(_BYTE *)(v9 + 25) & 4) != 0 )
      goto LABEL_142;
    v93 = v87 & 0x2000000;
    if ( !*(_DWORD *)(v9 + 92) )
    {
      v51 = *(_QWORD *)(a1 + 56);
      if ( (*(_BYTE *)(v51 + 2) & 4) != 0 )
      {
        v9 = **(_QWORD **)(a1 + 64) + 104 * v50;
        goto LABEL_108;
      }
      sub_1EF140(v51, v9, v72, *(double *)si128.m128i_i64);
      if ( !v65 )
      {
        v9 = **(_QWORD **)(a1 + 64) + 104LL * *(int *)(a1 + 44);
        goto LABEL_108;
      }
      v88 = sub_1F5580(*(_QWORD *)(a1 + 56), (int *)(a1 + 44), v72, *(double *)si128.m128i_i64, a5);
      v9 = **(_QWORD **)(a1 + 64) + 104LL * *(int *)(a1 + 44);
      if ( v88 < 0 )
      {
        if ( v88 != -20
          && (unsigned __int8)sub_1EF5A0(
                                (_DWORD *)v9,
                                *(_QWORD **)(*(_QWORD *)(a1 + 56) + 1504LL),
                                v72,
                                *(_DWORD *)(*(_QWORD *)(a1 + 56) + 72LL),
                                2,
                                *(double *)si128.m128i_i64) )
        {
          v8 = v88;
          goto LABEL_142;
        }
LABEL_108:
        copy_argloc();
        if ( v93 )
          *(_DWORD *)(v9 + 24) |= 0x2000000u;
LABEL_110:
        *(_DWORD *)(a1 + 40) = 20;
LABEL_142:
        cleanup_argloc();
        goto LABEL_7;
      }
    }
    if ( !a2 )
    {
      sub_1EF140(*(_QWORD *)(a1 + 56), v9, v72, *(double *)si128.m128i_i64);
      if ( !v56 )
        goto LABEL_108;
    }
    if ( !(unsigned __int8)sub_1EF5A0(
                             (_DWORD *)v9,
                             *(_QWORD **)(*(_QWORD *)(a1 + 56) + 1504LL),
                             v72,
                             *(_DWORD *)(*(_QWORD *)(a1 + 56) + 72LL),
                             2,
                             *(double *)si128.m128i_i64) )
      goto LABEL_108;
    sub_1C3110(v9, (__int64)&v100, *(_DWORD *)(v9 + 88), *(double *)si128.m128i_i64);
    v57 = *(_QWORD **)(a1 + 72);
    if ( *(_DWORD *)(v9 + 88) <= *(_DWORD *)(a3 + 40) )
    {
      v58 = (__m128i *)(*v57 + 24LL * *(int *)(v9 + 92));
      v59 = sub_104DF0((unsigned __int64 *)v58, a3);
      if ( v59 && *((_DWORD *)v59 + 10) < *(_DWORD *)(v9 + 88) )
      {
        if ( (unsigned int)sub_202CA0(
                             a1,
                             *(_QWORD **)(a1 + 72),
                             *(__int64 **)(a1 + 80),
                             v58,
                             (unsigned __int64)v59,
                             (__int64)&v100,
                             *(double *)si128.m128i_i64,
                             3) )
        {
          v8 = -36;
        }
        else
        {
          v66 = *(_QWORD **)(a1 + 56);
          if ( (*(_BYTE *)(v66[187] + 604LL) & 0x10) != 0 )
            sub_1F08B0(v66, 0xFFFFFFFFFFFFFFFFLL, 0x14u);
          else
            v8 = -20;
        }
      }
      else
      {
        v60 = *(_DWORD *)(v9 + 24);
        if ( (v60 & 0x400) != 0 )
        {
          BYTE1(v60) &= ~4u;
          *(_DWORD *)(v9 + 24) = v60;
          *(_BYTE *)(a1 + 48) = 1;
        }
      }
      goto LABEL_142;
    }
    sub_106EE0(*(_QWORD *)(a1 + 56), a3, v57, *(_QWORD **)(a1 + 80));
    cleanup_argloc();
    cleanup_argloc();
LABEL_29:
    if ( *(_BYTE *)(a3 + 32) == 5 && v100.m128i_i8[8] > 4u )
    {
      if ( v100.m128i_i8[8] != 5 )
        sub_201360(*(double *)si128.m128i_i64);
      v20 = *(_QWORD *)(a3 + 24);
      v21 = v100.m128i_i64[0] + v100.m128i_i32[3];
      if ( v21 > v20 )
      {
        if ( (unsigned __int8)sub_1F0C10(v98, v20, v21 - v20) )
          return 0;
      }
    }
LABEL_51:
    if ( (unsigned __int8)sub_1C3110(v9, 0, 0, *(double *)si128.m128i_i64) )
    {
      v31 = *(unsigned __int8 **)(a1 + 56);
      if ( (v31[2] & 4) != 0 )
      {
        if ( (*(_BYTE *)(v9 + 27) & 2) == 0 && !(unsigned __int8)sub_1EEA60(v31) )
        {
          if ( (*(_BYTE *)(a3 + 48) & 4) == 0 )
          {
            if ( !under_debugger )
              sub_383060(0xCEB7u, *(double *)si128.m128i_i64);
            goto LABEL_215;
          }
LABEL_66:
          *(_DWORD *)(a1 + 40) = 20;
        }
      }
      else
      {
        if ( (unsigned int)sub_202CA0(
                             a1,
                             *(_QWORD **)(a1 + 72),
                             *(__int64 **)(a1 + 80),
                             *(__m128i **)(a1 + 8),
                             a3,
                             (__int64)&v100,
                             *(double *)si128.m128i_i64,
                             3) )
          return (unsigned int)-36;
        if ( (*(_BYTE *)(a3 + 48) & 4) != 0 )
          goto LABEL_66;
        v46 = *(_BYTE *)(a3 + 32);
        if ( v46 == 1 )
        {
          v47 = *(int *)(a3 + 24);
        }
        else
        {
          if ( v46 != 5 )
            goto LABEL_196;
          v47 = *(_QWORD *)(a3 + 24);
        }
        v111.m128i_i8[0] = *(_BYTE *)(a3 + 32);
        v48 = *(_DWORD *)(a3 + 40);
        v110 = v47;
        v111.m128i_i32[1] = v48;
        if ( !(unsigned __int8)sub_1C3E70((int *)v9, *(_DWORD *)(v9 + 88), &v110, nullptr) )
          goto LABEL_66;
        *(_DWORD *)(v9 + 24) |= 0x2000000u;
      }
    }
    else if ( (*(_BYTE *)(v9 + 27) & 2) == 0 )
    {
      *(_DWORD *)(a1 + 40) = 26;
    }
  }
  v55 = *(_DWORD *)(v9 + 88);
  v107 = 0u;
  v108 = 0;
  v109 = 0;
  sub_103D60(a3, (__int64)v82, v107.m128i_i64);
  si128.m128i_i64[0] = 0;
  v110 = 0;
  v111 = 0u;
  v112 = 0;
  sub_1C31B0(v9, (__int64)&v110, v55, v82[180], 0, 0.0, a5);
  if ( !(unsigned __int8)sub_64820(&v107, &v110) || !(unsigned __int8)sub_317F40(&v111.m128i_i64[1], (__int64)&v108) )
    goto LABEL_125;
  if ( *(_DWORD *)v9 != 2 )
  {
    v90 = 0;
    goto LABEL_125;
  }
  v62 = *(__int64 **)(v9 + 8);
  v95 = *v62 + 24 * v62[1];
  if ( *v62 == v95 )
  {
LABEL_194:
    if ( !under_debugger )
      sub_383060(0xCBFFu, 0.0);
LABEL_215:
    BUG();
  }
  v63 = *v62;
  while ( 2 )
  {
    if ( (unsigned int)(*(_DWORD *)v63 - 3) > 1 )
    {
      if ( *(_DWORD *)v63 == 1 )
      {
LABEL_170:
        v64.m128i_i64[1] = *(unsigned __int16 *)(v63 + 18);
        v81 = *(_QWORD *)(v63 + 8);
        v64.m128i_i64[0] = *(_QWORD *)(*(_QWORD *)(v82[187] + 24) + 16LL) & (v82[180] + v81);
        v106[0] = v64;
        if ( (unsigned __int8)sub_317E70(&v108, v106, 0) )
        {
          if ( *(_BYTE *)(a3 + 32) != 5 )
            sub_201340(0.0);
          v90 = v81 > *(_QWORD *)(a3 + 24);
          goto LABEL_125;
        }
      }
LABEL_166:
      v63 += 24;
      if ( v95 == v63 )
        goto LABEL_194;
      continue;
    }
    break;
  }
  if ( !(unsigned __int8)sub_64A60(&v107, *(unsigned __int16 *)(v63 + 8), *(unsigned __int16 *)(v63 + 18)) )
  {
    if ( *(_DWORD *)v63 == 1 )
      goto LABEL_170;
    goto LABEL_166;
  }
  if ( *(_BYTE *)(a3 + 32) != 1 )
    sub_201320(0.0);
  v90 = (int)*(unsigned __int16 *)(v63 + 8) > *(_DWORD *)(a3 + 24);
LABEL_125:
  if ( v111.m128i_i64[1] )
  {
    *(_QWORD *)&v112 = 0;
    qfree(v111.m128i_i64[1]);
  }
  qfree(v110);
  if ( v108 )
  {
    *(_QWORD *)&v109 = 0;
    qfree(v108);
  }
  qfree(v107.m128i_i64[0]);
  if ( v90 )
  {
    v72 = *(_DWORD *)(v70 + 88) + 1;
    goto LABEL_20;
  }
LABEL_7:
  cleanup_argloc();
  return v8;
}

