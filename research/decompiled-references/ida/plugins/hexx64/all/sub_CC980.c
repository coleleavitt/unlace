__int64 __fastcall sub_CC980(__int64 a1, __int64 a2, __m128i a3, __m128 a4, __m128i a5, double a6)
{
  __m128i *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // r12d
  unsigned int v11; // r15d
  __m128i *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // r12d
  __int64 v19; // r13
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r11
  int v23; // ecx
  __int64 v24; // r9
  __int64 v25; // rsi
  __int64 v26; // r15
  __int64 v27; // rax
  int v28; // r10d
  __int64 v29; // rsi
  __int64 v30; // r14
  _DWORD *v31; // r10
  int *v32; // rdi
  __int64 v33; // r14
  _DWORD *v34; // rsi
  int v35; // r9d
  _DWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r12
  __int64 v39; // rax
  int v40; // r14d
  _QWORD *v41; // r13
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 *v48; // rdx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // r15
  __int64 v52; // rax
  __int64 v53; // r14
  _DWORD *v54; // rax
  _DWORD *v55; // rdx
  char *v56; // rdi
  __int32 v57; // eax
  int v58; // r12d
  __int64 v59; // r14
  unsigned __int8 *v60; // r15
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int32 v64; // edi
  __int64 *v65; // rax
  char v66; // al
  double v67; // xmm4_8
  __m128 v68; // xmm5
  __int64 v69; // rax
  __int64 *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int32 v73; // r15d
  int v74; // r13d
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  int v82; // r9d
  __int64 v83; // rcx
  __int64 v84; // r8
  int v85; // r9d
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  _QWORD *v91; // r13
  __int64 v92; // rsi
  __int64 v93; // rax
  __int64 v94; // r15
  __int64 v95; // r11
  __int64 v96; // r10
  __int64 v97; // rdi
  __int64 v98; // r12
  unsigned int i; // eax
  __int64 v100; // rdx
  __int64 v101; // rcx
  int v102; // edx
  __int64 v103; // rdi
  __int64 v104; // [rsp+0h] [rbp-E0h]
  __int64 v105; // [rsp+8h] [rbp-D8h]
  bool v106; // [rsp+8h] [rbp-D8h]
  __int64 v107; // [rsp+8h] [rbp-D8h]
  __int64 v108; // [rsp+8h] [rbp-D8h]
  __int64 v109; // [rsp+10h] [rbp-D0h]
  unsigned int v110; // [rsp+18h] [rbp-C8h]
  bool v111; // [rsp+1Fh] [rbp-C1h]
  __m128i v112; // [rsp+20h] [rbp-C0h] BYREF
  char v113; // [rsp+3Fh] [rbp-A1h] BYREF
  __int64 v114[2]; // [rsp+40h] [rbp-A0h] BYREF
  __int64 v115; // [rsp+50h] [rbp-90h] BYREF
  __int128 v116; // [rsp+58h] [rbp-88h]
  __int64 (__fastcall **v117)(); // [rsp+70h] [rbp-70h] BYREF
  __int64 v118; // [rsp+78h] [rbp-68h]
  __int64 v119; // [rsp+80h] [rbp-60h] BYREF
  __int128 v120; // [rsp+88h] [rbp-58h]
  __int64 v121; // [rsp+98h] [rbp-48h]
  unsigned __int64 v122; // [rsp+A8h] [rbp-38h]

  v7 = *(__m128i **)(a2 + 64);
  v8 = *(_QWORD *)(a1 + 320);
  v122 = __readfsqword(0x28u);
  v9 = 0;
  *(_QWORD *)(a1 + 328) = v7;
  if ( *(_QWORD *)(v8 + 1880) )
  {
    v10 = 0;
    while ( (unsigned __int8)sub_C7820(v7, *(_QWORD *)(v8 + 1872) + 40 * v9 + 16, nullptr) )
    {
      v8 = *(_QWORD *)(a1 + 320);
      v9 = ++v10;
      if ( (unsigned __int64)v10 >= *(_QWORD *)(v8 + 1880) )
      {
        v13 = (__m128i *)a2;
        goto LABEL_9;
      }
      v7 = *(__m128i **)(a1 + 328);
    }
    return 0;
  }
  v13 = (__m128i *)a2;
LABEL_9:
  v14 = 0;
  v111 = sub_BBB60((__int64 *)a1, 0, v13->m128i_i64, *(double *)a3.m128i_i64);
  if ( !v111 )
    return 0;
  v15 = *(int *)(a1 + 224);
  v16 = *(_QWORD *)(a1 + 16);
  v17 = v13[4].m128i_i64[0];
  v18 = *(_DWORD *)(v17 + 64);
  v110 = *(_DWORD *)(v16 + 4 * v15);
  if ( v110 >= v18 )
LABEL_133:
    sub_B7BA0(*(double *)a3.m128i_i64);
  v19 = *(_QWORD *)(v17 + 528);
  v20 = *(_QWORD *)(a1 + 320);
  v109 = *(_QWORD *)(v19 + 8LL * v110);
  v21 = *(_DWORD *)(v20 + 64);
  if ( v21 != 1 )
  {
    if ( v21 > 0 )
    {
      v104 = *(int *)(a1 + 224);
      v22 = 0;
      v23 = *(_DWORD *)(v20 + 64);
      v105 = v21;
      v24 = (__int64)v13;
      while ( 1 )
      {
        v25 = *(unsigned int *)(v16 + 4 * v22);
        if ( (_DWORD)v25 == -1 )
          return 0;
        v26 = *(_QWORD *)(v20 + 528);
        v27 = *(_QWORD *)(v26 + 8 * v22);
        if ( (unsigned int)v25 >= v18 )
          goto LABEL_133;
        v28 = *(_DWORD *)(v27 + 72);
        v29 = *(_QWORD *)(v19 + 8 * v25);
        v30 = *(_QWORD *)(v27 + 352);
        if ( v28 )
        {
          if ( (v28 != *(_DWORD *)(*(_QWORD *)(v27 + 64) + 64LL) - 1 || *(_QWORD *)(v27 + 48))
            && *(_DWORD *)(v29 + 352) != (_DWORD)v30 )
          {
            return 0;
          }
        }
        if ( (int)v30 > 0 )
        {
          v31 = *(_DWORD **)(v29 + 344);
          v32 = *(int **)(v27 + 344);
          v112.m128i_i64[1] = v24;
          v33 = (__int64)&v32[(unsigned int)(v30 - 1) + 1];
          v34 = &v31[*(_QWORD *)(v29 + 352)];
          do
          {
            v35 = *(_DWORD *)(v16 + 4LL * *v32);
            if ( v31 == v34 )
              return 0;
            v112.m128i_i64[0] = v20;
            v36 = v31;
            while ( v35 != *v36 )
            {
              if ( v34 == ++v36 )
                return 0;
            }
            ++v32;
            v20 = v112.m128i_i64[0];
          }
          while ( (int *)v33 != v32 );
          v24 = v112.m128i_i64[1];
        }
        if ( v105 == ++v22 )
        {
          v21 = v23;
          v15 = v104;
          v13 = (__m128i *)v24;
          goto LABEL_29;
        }
      }
    }
    v26 = *(_QWORD *)(v20 + 528);
LABEL_29:
    v37 = *(_QWORD *)(v26 + 8 * v15);
    v14 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v37 + 64) + 64LL) - 1);
    if ( (_DWORD)v14 == *(_DWORD *)(v37 + 72) )
    {
      v95 = *(_QWORD *)(v37 + 376);
      if ( (int)v95 > 0 )
      {
        v96 = *(_QWORD *)(v109 + 368);
        v97 = v96 + 4LL * *(_QWORD *)(v109 + 376);
        v14 = *(_QWORD *)(v37 + 368);
        v98 = v14 + 4LL * (unsigned int)(v95 - 1) + 4;
        while ( v96 != v97 )
        {
          v37 = *(_QWORD *)(v109 + 368);
          while ( *(_DWORD *)(v16 + 4LL * *(int *)v14) != *(_DWORD *)v37 )
          {
            v37 += 4;
            if ( v97 == v37 )
              return 0;
          }
          v14 += 4;
          if ( v98 == v14 )
            goto LABEL_30;
        }
        return 0;
      }
    }
LABEL_30:
    if ( (*(_BYTE *)(v20 + 1512) & 1) == 0 )
    {
      v38 = 0;
      if ( v21 <= 0 )
        goto LABEL_55;
      goto LABEL_34;
    }
    goto LABEL_108;
  }
  v38 = 0;
  if ( (*(_BYTE *)(v20 + 1512) & 1) != 0 )
  {
LABEL_108:
    v14 = (__int64)&v117;
    v118 = 0;
    v119 = 0;
    v120 = 0u;
    v117 = &off_4DC130;
    v121 = a1;
    if ( (unsigned int)sub_11F830(v13, (__int64)&v117) )
    {
      v112.m128i_i32[2] = -1;
      v58 = -1;
      v111 = 0;
      goto LABEL_86;
    }
    return 0;
  }
  do
  {
LABEL_34:
    v39 = *(_QWORD *)(v20 + 528);
    v40 = 0;
    v112.m128i_i32[2] = v38;
    v41 = *(_QWORD **)(v39 + 8 * v38);
    v42 = 0;
    if ( v41[89] )
    {
      do
      {
        a3 = _mm_cvtsi32_si128(*(_DWORD *)(v41[88] + 4 * v42));
        v44 = *(_QWORD *)(a1 + 160);
        a4 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v112.m128i_u32[2]), a3);
        if ( v44 == *(_QWORD *)(a1 + 176) - 12LL )
        {
          v45 = *(_QWORD *)(a1 + 184);
          if ( 0xAAAAAAAAAAAAAAABLL
             * (((v44 - *(_QWORD *)(a1 + 168)) >> 2) + ((__int64)(*(_QWORD *)(a1 + 144) - *(_QWORD *)(a1 + 128)) >> 2))
             + 42 * ((v45 == 0) + ((v45 - *(_QWORD *)(a1 + 152)) >> 3) - 1) == 0xAAAAAAAAAAAAAAALL )
            std::__throw_length_error("cannot create std::deque larger than max_size()");
          if ( (unsigned __int64)(*(_QWORD *)(a1 + 120) - ((v45 - *(_QWORD *)(a1 + 112)) >> 3)) <= 1 )
          {
            v14 = 1;
            v112.m128i_i64[0] = a4.m128_u64[0];
            sub_C5460(a1 + 112, 1u, 0);
            v45 = *(_QWORD *)(a1 + 184);
            a4.m128_u64[0] = v112.m128i_i64[0];
          }
          v112.m128i_i64[0] = a4.m128_u64[0];
          v46 = operator new(0x1F8u);
          a4 = (__m128)_mm_loadl_epi64(&v112);
          *(_QWORD *)(v45 + 8) = v46;
          v47 = *(_QWORD *)(a1 + 160);
          *(_DWORD *)(v47 + 8) = -1;
          *(_QWORD *)v47 = a4.m128_u64[0];
          v48 = (__int64 *)(*(_QWORD *)(a1 + 184) + 8LL);
          *(_QWORD *)(a1 + 184) = v48;
          v43 = *v48;
          a5 = (__m128i)(unsigned __int64)(*v48 + 504);
          a3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v48, a5);
          *(__m128i *)(a1 + 168) = a3;
        }
        else
        {
          *(_DWORD *)(v44 + 8) = -1;
          *(_QWORD *)v44 = a4.m128_u64[0];
          v43 = *(_QWORD *)(a1 + 160) + 12LL;
        }
        ++v40;
        *(_QWORD *)(a1 + 160) = v43;
        v42 = v40;
      }
      while ( (unsigned __int64)v40 < v41[89] );
    }
    v49 = sub_330DE0((__int64)v41);
    if ( v41[73] )
    {
      v50 = v41[72];
      v51 = 24LL * v49;
      v52 = *(_QWORD *)(v50 + v51 + 8);
      if ( (int)v52 > 0 )
      {
        v53 = 0;
        v112.m128i_i64[0] = 4LL * (unsigned int)(v52 - 1);
        while ( 1 )
        {
          v37 = *(unsigned int *)(*(_QWORD *)(v50 + v51) + v53);
          v54 = (_DWORD *)v41[88];
          v55 = &v54[v41[89]];
          if ( v54 == v55 )
            goto LABEL_53;
          while ( (_DWORD)v37 != *v54 )
          {
            if ( v55 == ++v54 )
              goto LABEL_53;
          }
          if ( v54 == v55 )
          {
LABEL_53:
            v14 = v112.m128i_u32[2];
            sub_C5650((_QWORD *)a1, v112.m128i_i32[2], v37);
            if ( v53 == v112.m128i_i64[0] )
              break;
          }
          else if ( v53 == v112.m128i_i64[0] )
          {
            break;
          }
          v50 = v41[72];
          v53 += 4;
        }
      }
    }
    v20 = *(_QWORD *)(a1 + 320);
    ++v38;
  }
  while ( *(_DWORD *)(v20 + 64) > (int)v38 );
LABEL_55:
  v56 = *(char **)(a1 + 160);
  if ( v56 == *(char **)(a1 + 128) )
  {
    v112.m128i_i32[2] = -1;
    v58 = -1;
    v111 = 0;
  }
  else
  {
    v106 = 0;
    do
    {
      if ( v56 == *(char **)(a1 + 168) )
      {
        v69 = *(_QWORD *)(*(_QWORD *)(a1 + 184) - 8LL);
        v58 = *(_DWORD *)(v69 + 492);
        v112.m128i_i32[2] = *(_DWORD *)(v69 + 496);
        operator delete(v56, 0x1F8u);
        v70 = (__int64 *)(*(_QWORD *)(a1 + 184) - 8LL);
        *(_QWORD *)(a1 + 184) = v70;
        v71 = *v70;
        v72 = *v70 + 504;
        *(_QWORD *)(a1 + 168) = v71;
        *(_QWORD *)(a1 + 176) = v72;
        *(_QWORD *)(a1 + 160) = v71 + 492;
      }
      else
      {
        v57 = *((_DWORD *)v56 - 2);
        v58 = *((_DWORD *)v56 - 3);
        *(_QWORD *)(a1 + 160) = v56 - 12;
        v112.m128i_i32[2] = v57;
      }
      v59 = (v112.m128i_i64[1] << 32) | (unsigned int)v58;
      v14 = v59;
      if ( !(unsigned __int8)sub_CC680(
                               (__m128i *)a1,
                               v59,
                               *(double *)a3.m128i_i64,
                               *(double *)a4.m128_u64,
                               *(double *)a5.m128i_i64,
                               a6) )
      {
        v14 = v112.m128i_u32[2];
        v60 = (unsigned __int8 *)sub_330E60(
                                   *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL) + 8LL * v58),
                                   v112.m128i_i32[2]);
        if ( (v60[4] & 4) == 0 )
        {
          if ( *(_DWORD *)(a1 + 224) != v58 )
            return 0;
          v61 = sub_330DE0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 320) + 528LL) + 8LL * v58));
          if ( v112.m128i_i32[2] != v61 - 1
            || *(_QWORD *)(a1 + 160) != *(_QWORD *)(a1 + 128)
            || *(_DWORD *)(*(_QWORD *)(a1 + 320) + 64LL) == 1 )
          {
            return 0;
          }
          v62 = *(_QWORD *)(a1 + 328);
          v63 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * v58);
          if ( (unsigned int)v63 >= *(_DWORD *)(v62 + 64) )
            goto LABEL_133;
          v37 = *(_QWORD *)(v62 + 528);
          v14 = *(_QWORD *)(*(_QWORD *)(v37 + 8 * v63) + 48LL);
          v64 = v112.m128i_i32[2] - 1;
          if ( v112.m128i_i32[2] - 1 >= 0 )
          {
            v65 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 24LL * v58) + 8LL * v64);
            v37 = (__int64)&v65[-v64 - 1];
            while ( 1 )
            {
              v20 = *v65;
              if ( *v65 )
                break;
              if ( --v65 == (__int64 *)v37 )
                goto LABEL_72;
            }
            v14 = *(_QWORD *)(v20 + 8);
          }
LABEL_72:
          if ( !v14 )
            goto LABEL_80;
          v112.m128i_i64[0] = v14;
          v66 = sub_BD940(a1, (int *)v14, v60);
          v14 = v112.m128i_i64[0];
          if ( v66 )
          {
            v14 = v59;
            sub_CBF00(
              (__m128i *)a1,
              v59,
              v112.m128i_u64[0],
              *(double *)a3.m128i_i64,
              *(double *)a4.m128_u64,
              *(double *)a5.m128i_i64,
              a6,
              v67,
              v68);
          }
          else
          {
            v106 = v111;
          }
        }
      }
      v56 = *(char **)(a1 + 160);
    }
    while ( v56 != *(char **)(a1 + 128) );
    v111 = v106;
  }
LABEL_80:
  if ( *(_QWORD *)(a1 + 376) )
  {
    v73 = v112.m128i_i32[2];
    v74 = 0;
    v75 = 0;
    while ( 1 )
    {
      v14 = *(unsigned int *)(*(_QWORD *)(a1 + 368) + 4 * v75);
      if ( (unsigned __int8)sub_BBEC0(a1, v14, *(double *)a3.m128i_i64) )
        return 0;
      v75 = ++v74;
      if ( (unsigned __int64)v74 >= *(_QWORD *)(a1 + 376) )
      {
        v112.m128i_i32[2] = v73;
        break;
      }
    }
  }
LABEL_86:
  if ( !(unsigned __int8)sub_C7BB0((_QWORD *)a1, a3, v14, v20, v37) || !(unsigned __int8)sub_BD840(a1) )
    return 0;
  v114[0] = 0;
  v112.m128i_i64[0] = (__int64)v114;
  v114[1] = 0;
  v115 = 0;
  v116 = 0;
  v11 = sub_BEC40(a1, (__int64)v114, v76, v77, 0.0, a4);
  if ( (_BYTE)v11 )
  {
    v78 = *(_QWORD *)(a1 + 216);
    v117 = nullptr;
    v118 = 0;
    v119 = 0;
    v120 = 0;
    sub_32FE70(v78, (__int64 *)&v117, v109, 1, 0.0, a4);
    v112.m128i_i64[0] = (__int64)v114;
    sub_64640(v114, (__int64 *)&v117, v79, v80, v81, v82);
    sub_317C60(&v115, (__int64)&v119);
    v107 = *(_QWORD *)(a1 + 216);
    sub_64640((__int64 *)v112.m128i_i64[0], (__int64 *)(v107 + 96), v107, v83, v84, v85);
    sub_317C60(&v115, v107 + 112);
    v86 = *(_QWORD *)(a1 + 320);
    v113 = 0;
    if ( *(int *)(v86 + 64) <= 1 )
    {
      v91 = nullptr;
    }
    else
    {
      if ( v111 )
      {
        v87 = v112.m128i_u32[2];
        v112.m128i_i64[1] = (unsigned int)v58;
        v108 = v87;
        v88 = sub_BD4C0(a1, (unsigned int)v58 | (unsigned __int64)(v87 << 32));
        v89 = v112.m128i_i64[1];
        v90 = v108;
        v91 = (_QWORD *)v88;
        if ( !v88 )
          goto LABEL_100;
      }
      else
      {
        v90 = v112.m128i_u32[2];
        v91 = nullptr;
        v89 = (unsigned int)v58;
      }
      if ( !(unsigned __int8)sub_C6460((__m128i *)a1, (v90 << 32) | v89, v112.m128i_i64[0], v91, &v113, 0.0, a4) )
      {
        sub_B82A0((unsigned __int64 **)(a1 + 352), *(_QWORD *)(a1 + 328), 0.0, a4);
        if ( v111 )
        {
          if ( v91 )
          {
            sub_7CCD0((__int64)v91);
            j__qfree((__int64)v91);
          }
          goto LABEL_100;
        }
      }
    }
    if ( !(unsigned __int8)sub_BD640((_QWORD **)a1, v109, (__int64 *)v112.m128i_i64[0], (__int64)v91)
      && !sub_17C4E0(*(__int64 **)(*(_QWORD *)(a1 + 328) + 784LL), v112.m128i_i64[0], v110, 0xFFFFFFFF, 0, 0, 2u, 1u) )
    {
      for ( i = sub_64960((_QWORD *)(a1 + 336), 0); i != *(_DWORD *)(a1 + 344); i = sub_64960(
                                                                                      (_QWORD *)(a1 + 336),
                                                                                      i + 1) )
      {
        v100 = *(_QWORD *)(a1 + 328);
        if ( i >= *(_DWORD *)(v100 + 64) )
          sub_B7BA0(0.0);
        v101 = *(_QWORD *)(*(_QWORD *)(v100 + 528) + 8LL * i);
        v102 = *(_DWORD *)(v101 + 24);
        BYTE1(v102) &= ~2u;
        LOBYTE(v102) = v102 | 0x80;
        *(_DWORD *)(v101 + 24) = v102;
      }
      v103 = *(_QWORD *)(a1 + 192);
      if ( v103 )
      {
        *(_QWORD *)(a1 + 200) = 0;
        qfree(v103);
        *(_QWORD *)(a1 + 192) = 0;
        *(_QWORD *)(a1 + 208) = 0;
      }
      goto LABEL_101;
    }
    v92 = *(_QWORD *)(a1 + 328);
    if ( v91 )
    {
      v93 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 4LL * v58);
      if ( (unsigned int)v93 >= *(_DWORD *)(v92 + 64) )
        sub_B7BA0(0.0);
      v94 = *(_QWORD *)(*(_QWORD *)(v92 + 528) + 8 * v93);
      sub_A3480(v94, v91);
      if ( v113 )
        sub_69EC0(*(_QWORD *)(a1 + 328), v94, 0.0);
      v92 = *(_QWORD *)(a1 + 328);
    }
    sub_B82A0((unsigned __int64 **)(a1 + 352), v92, 0.0, a4);
LABEL_100:
    v11 = 0;
LABEL_101:
    if ( v119 )
    {
      *(_QWORD *)&v120 = 0;
      qfree(v119);
    }
    qfree((__int64)v117);
  }
  if ( v115 )
  {
    *(_QWORD *)&v116 = 0;
    qfree(v115);
  }
  qfree(v114[0]);
  return v11;
}

