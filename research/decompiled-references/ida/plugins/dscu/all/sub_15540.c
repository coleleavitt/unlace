__int64 __fastcall sub_15540(__int64 a1, char a2, const char *a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  const char *v6; // rax
  const char *v7; // r12
  int v8; // eax
  unsigned int v9; // eax
  unsigned __int64 i; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned int v15; // r12d
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // r13
  unsigned __int64 v27; // r14
  __int64 j; // rbx
  int v30; // eax
  __int64 v31; // rsi
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // r14
  unsigned __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rax
  unsigned int v41; // eax
  unsigned int v42; // ebx
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rdi
  int v50; // r14d
  __int64 v51; // rax
  __int64 v52; // r15
  __int32 v53; // r12d
  __int64 v54; // r13
  __int64 v55; // rbp
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // r14
  __int64 v68; // r13
  __m128i v69; // xmm0
  __m128i v70; // xmm1
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rax
  size_t v74; // r13
  __int64 v75; // r9
  unsigned __int64 v76; // rdi
  __m128i v77; // xmm0
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  unsigned __int64 v82; // rsi
  __int64 v83; // rax
  unsigned int v85; // [rsp+4h] [rbp-4B4h]
  unsigned int s; // [rsp+8h] [rbp-4B0h]
  __m128i v87; // [rsp+10h] [rbp-4A8h] BYREF
  __int64 v88; // [rsp+20h] [rbp-498h]
  __m128i v89; // [rsp+28h] [rbp-490h] BYREF
  __m128i v90; // [rsp+38h] [rbp-480h] BYREF
  __int64 v91; // [rsp+48h] [rbp-470h]
  __int64 v92; // [rsp+50h] [rbp-468h]
  char v93[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v94; // [rsp+478h] [rbp-40h]

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 8);
  v94 = __readfsqword(0x28u);
  if ( !v4 )
    return 0;
  qlseek(v4, 0, 0);
  if ( qlread(*(_QWORD *)(v3 + 8), v3 + 16, 512) != 512 || strncmp((const char *)(v3 + 16), "dyld_v", 6u) )
    return 0;
  v6 = (const char *)(v3 + 23);
  v7 = (const char *)(v3 + 32);
  while ( *v6 == 32 )
  {
    if ( ++v6 == v7 )
      goto LABEL_7;
  }
  v7 = v6;
LABEL_7:
  v8 = *(unsigned __int8 *)v7 - 112;
  if ( *v7 == 112 )
  {
    v8 = *((unsigned __int8 *)v7 + 1) - 112;
    if ( v7[1] == 112 )
      v8 = *((unsigned __int8 *)v7 + 2) - 99;
  }
  *(_BYTE *)(v3 + 772) = v8 == 0;
  v9 = strncmp(v7, "x86_64", 6u);
  v13 = v9;
  if ( !v9 )
  {
    v14 = *(unsigned int *)(v3 + 32);
    *(_BYTE *)(v3 + 773) = 1;
    if ( (unsigned int)v14 > 0x38 )
      goto LABEL_12;
LABEL_46:
    *(_OWORD *)(v3 + 72) = 0;
    goto LABEL_47;
  }
  v30 = strncmp(v7, "arm64", 5u);
  v14 = *(unsigned int *)(v3 + 32);
  *(_BYTE *)(v3 + 773) = v30 == 0;
  if ( (unsigned int)v14 <= 0x38 )
    goto LABEL_46;
LABEL_12:
  if ( (unsigned int)v14 <= 0x74 )
  {
LABEL_47:
    *(_QWORD *)(v3 + 128) = 0;
    *(_OWORD *)(v3 + 152) = 0;
    goto LABEL_48;
  }
  if ( (unsigned int)v14 <= 0x88 )
  {
    *(_OWORD *)(v3 + 152) = 0;
LABEL_48:
    *(_QWORD *)(v3 + 328) = 0;
    *(_QWORD *)(v3 + 464) = 0;
    *(_QWORD *)(v3 + 408) = 0;
    if ( (a2 & 1) != 0 )
      goto LABEL_91;
LABEL_49:
    v85 = 0;
    goto LABEL_50;
  }
  if ( (unsigned int)v14 <= 0x138 )
    goto LABEL_48;
  if ( (unsigned int)v14 > 0x188 )
  {
    v85 = a2 & 1;
    if ( (a2 & 1) == 0 )
      goto LABEL_17;
    goto LABEL_91;
  }
  v12 = 0;
  *(_QWORD *)(v3 + 464) = 0;
  *(_QWORD *)(v3 + 408) = 0;
  if ( (a2 & 1) == 0 )
    goto LABEL_49;
LABEL_91:
  v57 = qlseek(*(_QWORD *)(v3 + 8), v14, 0);
  v61 = *(unsigned int *)(v3 + 32);
  if ( v61 != v57 )
    return 0;
  sub_12BE0((__int64 *)(v3 + 528), *(unsigned int *)(v3 + 36), v61, v58, v59, v60);
  sub_12020(*(_QWORD *)(v3 + 8), *(_DWORD *)(v3 + 36), 0x20u, "count of cache mapping infos", -1, -1);
  v13 = qlread(*(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 528), 32LL * *(unsigned int *)(v3 + 36));
  if ( v13 != 32LL * *(unsigned int *)(v3 + 36) )
    return 0;
  v62 = *(_QWORD **)(v3 + 528);
  for ( i = (unsigned __int64)&v62[4 * *(_QWORD *)(v3 + 536)]; (_QWORD *)i != v62; v62 += 4 )
  {
    v13 = *(_QWORD *)(v3 + 696);
    *v62 += v13;
  }
  LODWORD(v14) = *(_DWORD *)(v3 + 32);
  if ( (unsigned int)v14 <= 0xF8 )
  {
    if ( *(_QWORD *)(v3 + 536) > 2u )
    {
      v13 = *(_QWORD *)(v3 + 528);
      i = 0x100000000LL;
      v79 = *(_QWORD *)v13;
      *(_QWORD *)(v3 + 248) = 0x100000000LL;
      *(_QWORD *)(v3 + 240) = v79;
      *(_QWORD *)(v3 + 256) = v79 + 0x100000000LL - *(_QWORD *)(v13 + 64) - *(_QWORD *)(v13 + 72);
    }
    v85 = 1;
    goto LABEL_50;
  }
  v85 = 1;
LABEL_17:
  if ( (unsigned int)v14 <= 0x1C7 )
  {
LABEL_50:
    v15 = *(_DWORD *)(v3 + 44);
    v16 = *(_DWORD *)(v3 + 40);
    goto LABEL_19;
  }
  v15 = *(_DWORD *)(v3 + 468);
  v16 = *(_DWORD *)(v3 + 464);
LABEL_19:
  LOBYTE(i) = v16 != 0;
  LOBYTE(v13) = v15 != 0;
  if ( v15 != 0 && v16 != 0 && (a2 & 2) != 0 )
  {
    if ( v16 == qlseek(*(_QWORD *)(v3 + 8), v16, 0) )
    {
      v87.m128i_i64[1] = v15;
      sub_12C60((__int64 *)(v3 + 552), v15, v63, v64, v65, v66);
      sub_12020(*(_QWORD *)(v3 + 8), v15, 0x20u, "count of images in the cache file", -1, -1);
      if ( qlread(*(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 552), 32LL * v15) == 32LL * v15 )
      {
        v67 = 0;
        v88 = v3 + 600;
        while ( 1 )
        {
          *(_QWORD *)(32 * v67 + *(_QWORD *)(v3 + 552)) += *(_QWORD *)(v3 + 696);
          v73 = *(_QWORD *)(v3 + 552) + 32 * v67;
          if ( *(_QWORD *)v73 < *(_QWORD *)(v3 + 760) )
            *(_QWORD *)(v3 + 760) = *(_QWORD *)v73;
          if ( !qlgetz(*(_QWORD *)(v3 + 8), *(unsigned int *)(v73 + 24), v93, 1024) )
            break;
          v89.m128i_i64[1] = 0;
          v90 = 0;
          v74 = strlen(v93);
          v87.m128i_i64[0] = v74 + 1;
          v89.m128i_i64[1] = qvector_reserve(&v89.m128i_u64[1], 0, v74 + 1, 1, v74 + 1, v75);
          v90.m128i_i64[0] = v87.m128i_i64[0];
          memmove((void *)v89.m128i_i64[1], v93, v74);
          *(_BYTE *)(v89.m128i_i64[1] + v74) = 0;
          v83 = *(_QWORD *)(v3 + 608);
          v82 = *(_QWORD *)(v3 + 600);
          v13 = *(_QWORD *)(v3 + 616);
          v76 = v83 + 1;
          if ( (unsigned __int64)&v89.m128i_u64[1] < v82
            || (i = v82 + 24 * v13, (unsigned __int64)&v89.m128i_u64[1] >= i) )
          {
            if ( v13 < v76 )
            {
              v80 = qvector_reserve(v88, v82, v83 + 1, 24, v11, v12);
              *(_QWORD *)(v3 + 600) = v80;
              v82 = v80;
              v83 = *(_QWORD *)(v3 + 608);
            }
            v13 = v89.m128i_u64[1];
            v77 = _mm_loadu_si128(&v90);
            v78 = v82 + 24 * v83;
            *(_QWORD *)v78 = v89.m128i_i64[1];
            *(__m128i *)(v78 + 8) = v77;
            ++*(_QWORD *)(v3 + 608);
          }
          else
          {
            v68 = v89.m128i_i64[1];
            v69 = _mm_loadl_epi64(&v90);
            v89.m128i_i64[1] = 0;
            v70 = _mm_loadl_epi64((const __m128i *)&v90.m128i_u64[1]);
            v90 = 0;
            if ( v13 < v76 )
            {
              v89.m128i_i64[0] = v70.m128i_i64[0];
              v87.m128i_i64[0] = v69.m128i_i64[0];
              v81 = qvector_reserve(v88, v82, v83 + 1, 24, v11, v12);
              *(_QWORD *)(v3 + 600) = v81;
              v82 = v81;
              v70 = _mm_loadl_epi64(&v89);
              v83 = *(_QWORD *)(v3 + 608);
              v69 = _mm_loadl_epi64(&v87);
            }
            v71 = v82 + 24 * v83;
            *(_QWORD *)v71 = v68;
            *(__m128i *)(v71 + 8) = _mm_unpacklo_epi64(v69, v70);
            v72 = v89.m128i_i64[1];
            ++*(_QWORD *)(v3 + 608);
            if ( v72 )
            {
              v90.m128i_i64[0] = 0;
              qfree(v72);
            }
          }
          if ( (unsigned __int64)++v67 >= v87.m128i_i64[1] )
            goto LABEL_21;
        }
      }
    }
    return 0;
  }
LABEL_21:
  if ( (a2 & 4) != 0 )
    sub_11B60(v3, a3);
  if ( (a2 & 8) != 0 )
  {
    if ( *(_DWORD *)(v3 + 132) )
    {
      v17 = *(_DWORD *)(v3 + 128);
      if ( v17 )
      {
        if ( *(_DWORD *)(v3 + 128) != qlseek(*(_QWORD *)(v3 + 8), v17, 0) )
          return 0;
        sub_D210(*(_QWORD *)(v3 + 8), (_DWORD *)(v3 + 132), 8u, (__int64)"branch islands entries count", -1, -1);
        sub_12CE0((__int64 *)(v3 + 624), *(unsigned int *)(v3 + 132), v18, v19, v20, v21);
        if ( qlread(*(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 624), 8LL * *(unsigned int *)(v3 + 132)) != 8LL * *(unsigned int *)(v3 + 132) )
          return 0;
        v22 = *(_QWORD **)(v3 + 624);
        v13 = *(_QWORD *)(v3 + 632);
        for ( i = (unsigned __int64)&v22[v13]; (_QWORD *)i != v22; ++v22 )
        {
          v13 = *(_QWORD *)(v3 + 696);
          *v22 += v13;
        }
      }
    }
  }
  if ( (a2 & 0x10) != 0 )
  {
    v23 = *(_QWORD *)(v3 + 72);
    if ( v23 )
    {
      if ( *(_QWORD *)(v3 + 80) )
      {
        v24 = *(_QWORD *)(v3 + 528);
        v13 = v24 + 32LL * *(_QWORD *)(v3 + 536);
        if ( v13 != v24 )
        {
          while ( *(_DWORD *)(v24 + 24) != 3 )
          {
            v24 += 32;
            if ( v13 == v24 )
              goto LABEL_38;
          }
          sub_12490(v3, v23, *(_QWORD *)(v3 + 80), *(_QWORD *)v24, *(_QWORD *)(v24 + 8));
        }
      }
    }
LABEL_38:
    v25 = *(_DWORD *)(v3 + 328);
    if ( v25 )
    {
      if ( *(_DWORD *)(v3 + 332) )
      {
        v26 = 0;
        v27 = 0;
        for ( j = v25;
              qlseek(*(_QWORD *)(v3 + 8), v26 + j, 0) == v26 + j
           && qlread(*(_QWORD *)(v3 + 8), &v89.m128i_u64[1], 56) == 56;
              j = *(unsigned int *)(v3 + 328) )
        {
          ++v27;
          v26 += 56;
          v89.m128i_i64[1] += *(_QWORD *)(v3 + 696);
          sub_12490(v3, v91, v92, v89.m128i_i64[1], v90.m128i_i64[0]);
          if ( v27 >= *(unsigned int *)(v3 + 332) )
            goto LABEL_53;
        }
        return 0;
      }
    }
  }
LABEL_53:
  if ( (a2 & 0x20) != 0 )
  {
    v31 = *(_QWORD *)(v3 + 152);
    if ( v31 )
    {
      if ( *(_QWORD *)(v3 + 160) )
      {
        if ( *(_QWORD *)(v3 + 152) == qlseek(*(_QWORD *)(v3 + 8), v31, 0) )
        {
          v34 = *(_QWORD *)(v3 + 160);
          v35 = *(_QWORD *)(v3 + 584);
          if ( v35 < v34 )
          {
            if ( *(_QWORD *)(v3 + 592) < v34 )
            {
              *(_QWORD *)(v3 + 576) = qvector_reserve(
                                        v3 + 576,
                                        *(_QWORD *)(v3 + 576),
                                        *(_QWORD *)(v3 + 160),
                                        32,
                                        v32,
                                        v33);
              v35 = *(_QWORD *)(v3 + 584);
            }
            memset((void *)(*(_QWORD *)(v3 + 576) + 32 * v35), 0, 32 * (v34 - v35));
            *(_QWORD *)(v3 + 584) = v34;
            v34 = *(_QWORD *)(v3 + 160);
          }
          else if ( v34 != v35 )
          {
            *(_QWORD *)(v3 + 584) = v34;
          }
          v36 = *(_QWORD *)(v3 + 8);
          v37 = qlseek(v36, 0, 1);
          v38 = qlsize(v36) - v37;
          if ( ((v38 | v37) & 0x8000000000000000LL) != 0LL )
          {
            v39 = 0;
LABEL_65:
            sub_8130(
              (__int64)"%s is incorrect, maximum possible value is %u%s",
              "count of image text infos in the cache file",
              v39,
              "");
          }
          if ( v34 && (v34 >> 59 || v38 < 32 * v34) )
          {
            v39 = v38 >> 5;
            goto LABEL_65;
          }
          v13 = qlread(*(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 576), 32LL * *(_QWORD *)(v3 + 160));
          if ( v13 == 32LL * *(_QWORD *)(v3 + 160) )
          {
            v40 = *(_QWORD *)(v3 + 576);
            for ( i = v40 + 32LL * *(_QWORD *)(v3 + 584); v40 != i; v40 += 32 )
            {
              v13 = *(_QWORD *)(v3 + 696);
              *(_QWORD *)(v40 + 16) += v13;
            }
            goto LABEL_69;
          }
        }
        return 0;
      }
    }
  }
LABEL_69:
  if ( (a2 & 0xC0) == 0 )
  {
    if ( !v15 && v85 && *(_DWORD *)(v3 + 536) == 1 && (~*(_BYTE *)(*(_QWORD *)(v3 + 528) + 24LL) & 5) == 0 )
      *(_BYTE *)(v3 + 860) = 1;
    goto LABEL_102;
  }
  v41 = *(_DWORD *)(v3 + 408);
  if ( v41 && *(_DWORD *)(v3 + 412) )
  {
    v42 = *(_DWORD *)(v3 + 32);
    v43 = *(_QWORD *)(v3 + 8);
    v87.m128i_i32[0] = *(_DWORD *)(v3 + 412);
    s = v42;
    v44 = qlseek(v43, v41, 0);
    v48 = *(unsigned int *)(v3 + 408);
    if ( v48 == v44 )
    {
      sub_12D60((__int64 *)(v3 + 672), v87.m128i_u32[0], v48, v45, v46, v47);
      v49 = *(_QWORD *)(v3 + 8);
      v50 = 0;
      v87.m128i_i64[1] = (-(__int64)(v42 < 0x1C9) & 0xFFFFFFFFFFFFFFE0LL) + 56;
      sub_12020(v49, v87.m128i_u32[0], v87.m128i_u64[1], "count of subcache infos in the cache file", -1, -1);
      v51 = v3;
      LODWORD(v88) = v15;
      v52 = 0;
      v53 = v87.m128i_i32[0];
      v54 = v51;
      v87.m128i_i64[0] = (__int64)a3;
      v55 = v87.m128i_i64[1];
      while ( 1 )
      {
        v56 = v52 + *(_QWORD *)(v54 + 672);
        if ( qlread(*(_QWORD *)(v54 + 8), v56, v55) != v55 )
          break;
        ++v50;
        if ( s <= 0x1C8 )
          qsnprintf(v56 + 24, 32, ".%u", v50);
        v52 += 56;
        if ( v53 == v50 )
        {
          v15 = v88;
          a3 = (const char *)v87.m128i_i64[0];
          v3 = v54;
          goto LABEL_79;
        }
      }
    }
    return 0;
  }
LABEL_79:
  if ( !v15 )
  {
    v13 = v85;
    if ( v85 )
    {
      if ( *(_DWORD *)(v3 + 536) == 1 && (~*(_BYTE *)(*(_QWORD *)(v3 + 528) + 24LL) & 5) == 0 )
        *(_BYTE *)(v3 + 860) = 1;
    }
  }
  if ( a2 >= 0 )
  {
LABEL_102:
    if ( !a3 )
      return 1;
    goto LABEL_87;
  }
  if ( a3 )
  {
    sub_14DA0((__int64 *)v3, a3, v13, i, v11, v12);
LABEL_87:
    sub_9B20(v3, (__int64 *)(v3 + 576));
  }
  return 1;
}

