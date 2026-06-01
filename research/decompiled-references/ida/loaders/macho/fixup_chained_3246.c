__int64 __fastcall sub_3B7E0(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  const char *v6; // rax
  const char *v7; // r12
  int v8; // eax
  int v9; // r9d
  __int64 v10; // rsi
  unsigned int v11; // r12d
  unsigned int v12; // eax
  unsigned int v13; // eax
  _QWORD *v14; // rax
  _QWORD *j; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // r13
  unsigned __int64 v21; // r14
  __int64 k; // rbx
  int v23; // r9d
  int v25; // eax
  __int64 v26; // rsi
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r14
  unsigned __int64 v31; // rax
  int v32; // r8d
  int v33; // r9d
  int v34; // edx
  __int64 v35; // rax
  __int64 m; // rcx
  unsigned int v37; // eax
  unsigned int v38; // ebx
  __int64 v39; // rdi
  __int64 v40; // rdi
  int v41; // r14d
  __int64 v42; // rax
  __int64 v43; // r15
  __int32 v44; // r12d
  __int64 v45; // r13
  __int64 v46; // rbp
  __int64 v47; // rbx
  _QWORD *v48; // rax
  _QWORD *i; // rcx
  __int64 v50; // r14
  __int64 v51; // r13
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  __int64 v54; // rax
  __int64 v55; // rdi
  __int64 v56; // rax
  size_t v57; // r13
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rdi
  __m128i v60; // xmm0
  __int64 v61; // rax
  __int64 *v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rsi
  __int64 v67; // rax
  int v68; // [rsp+0h] [rbp-4B8h]
  int v69; // [rsp+4h] [rbp-4B4h]
  char *s; // [rsp+8h] [rbp-4B0h]
  unsigned int sa; // [rsp+8h] [rbp-4B0h]
  unsigned int sb; // [rsp+8h] [rbp-4B0h]
  __m128i v73; // [rsp+10h] [rbp-4A8h] BYREF
  __int64 v74; // [rsp+20h] [rbp-498h]
  __m128i v75; // [rsp+28h] [rbp-490h] BYREF
  __m128i v76; // [rsp+38h] [rbp-480h] BYREF
  __int64 v77; // [rsp+48h] [rbp-470h]
  __int64 v78; // [rsp+50h] [rbp-468h]
  int v79; // [rsp+58h] [rbp-460h]
  int v80; // [rsp+60h] [rbp-458h]
  int v81; // [rsp+68h] [rbp-450h]
  int v82; // [rsp+70h] [rbp-448h] BYREF
  int v83; // [rsp+78h] [rbp-440h]
  int v84; // [rsp+80h] [rbp-438h]
  int v85; // [rsp+88h] [rbp-430h]
  int v86; // [rsp+90h] [rbp-428h]
  int v87; // [rsp+98h] [rbp-420h]
  int v88; // [rsp+A0h] [rbp-418h]
  int v89; // [rsp+A8h] [rbp-410h]
  int v90; // [rsp+B0h] [rbp-408h]
  int v91; // [rsp+B8h] [rbp-400h]
  int v92; // [rsp+C0h] [rbp-3F8h]
  int v93; // [rsp+C8h] [rbp-3F0h]
  int v94; // [rsp+D0h] [rbp-3E8h]
  int v95; // [rsp+D8h] [rbp-3E0h]
  __int64 v96; // [rsp+E0h] [rbp-3D8h]
  unsigned __int64 v97; // [rsp+478h] [rbp-40h]

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 8);
  v68 = a2;
  v97 = __readfsqword(0x28u);
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
  if ( !strncmp(v7, "x86_64", 6u) )
  {
    v10 = *(unsigned int *)(v3 + 32);
    *(_BYTE *)(v3 + 773) = 1;
    if ( (unsigned int)v10 > 0x38 )
      goto LABEL_12;
LABEL_46:
    *(_OWORD *)(v3 + 72) = 0;
    goto LABEL_47;
  }
  v25 = strncmp(v7, "arm64", 5u);
  v10 = *(unsigned int *)(v3 + 32);
  *(_BYTE *)(v3 + 773) = v25 == 0;
  if ( (unsigned int)v10 <= 0x38 )
    goto LABEL_46;
LABEL_12:
  if ( (unsigned int)v10 <= 0x74 )
  {
LABEL_47:
    *(_QWORD *)(v3 + 128) = 0;
    *(_OWORD *)(v3 + 152) = 0;
    goto LABEL_48;
  }
  if ( (unsigned int)v10 <= 0x88 )
  {
    *(_OWORD *)(v3 + 152) = 0;
LABEL_48:
    *(_QWORD *)(v3 + 328) = 0;
    *(_QWORD *)(v3 + 464) = 0;
    *(_QWORD *)(v3 + 408) = 0;
    if ( (v68 & 1) != 0 )
      goto LABEL_92;
LABEL_49:
    v69 = 0;
    goto LABEL_50;
  }
  if ( (unsigned int)v10 <= 0x138 )
    goto LABEL_48;
  if ( (unsigned int)v10 > 0x188 )
  {
    v69 = v68 & 1;
    if ( (v68 & 1) == 0 )
      goto LABEL_17;
    goto LABEL_92;
  }
  v9 = 0;
  *(_QWORD *)(v3 + 464) = 0;
  *(_QWORD *)(v3 + 408) = 0;
  if ( (v68 & 1) == 0 )
    goto LABEL_49;
LABEL_92:
  if ( *(_DWORD *)(v3 + 32) != qlseek(*(_QWORD *)(v3 + 8), v10, 0) )
    return 0;
  sub_32D40(v3 + 528, *(unsigned int *)(v3 + 36));
  sub_32180(*(_QWORD *)(v3 + 8), *(unsigned int *)(v3 + 36), 32, "count of cache mapping infos", -1, -1);
  if ( qlread(*(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 528), 32LL * *(unsigned int *)(v3 + 36)) != 32LL
                                                                                              * *(unsigned int *)(v3 + 36) )
    return 0;
  v48 = *(_QWORD **)(v3 + 528);
  for ( i = &v48[4 * *(_QWORD *)(v3 + 536)]; i != v48; v48 += 4 )
    *v48 += *(_QWORD *)(v3 + 696);
  LODWORD(v10) = *(_DWORD *)(v3 + 32);
  if ( (unsigned int)v10 <= 0xF8 )
  {
    if ( *(_QWORD *)(v3 + 536) > 2u )
    {
      v62 = *(__int64 **)(v3 + 528);
      v63 = *v62;
      *(_QWORD *)(v3 + 248) = 0x100000000LL;
      *(_QWORD *)(v3 + 240) = v63;
      *(_QWORD *)(v3 + 256) = v63 + 0x100000000LL - v62[8] - v62[9];
    }
    v69 = 1;
    goto LABEL_50;
  }
  v69 = 1;
LABEL_17:
  if ( (unsigned int)v10 <= 0x1C7 )
  {
LABEL_50:
    v11 = *(_DWORD *)(v3 + 44);
    v12 = *(_DWORD *)(v3 + 40);
    goto LABEL_19;
  }
  v11 = *(_DWORD *)(v3 + 468);
  v12 = *(_DWORD *)(v3 + 464);
LABEL_19:
  if ( v11 != 0 && v12 != 0 && (v68 & 2) != 0 )
  {
    if ( v12 == qlseek(*(_QWORD *)(v3 + 8), v12, 0) )
    {
      v73.m128i_i64[1] = v11;
      sub_32DC0(v3 + 552, v11);
      sub_32180(*(_QWORD *)(v3 + 8), v11, 32, "count of images in the cache file", -1, -1);
      if ( qlread(*(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 552), 32LL * v11) == 32LL * v11 )
      {
        v50 = 0;
        s = (char *)&v82;
        v74 = v3 + 600;
        while ( 1 )
        {
          *(_QWORD *)(32 * v50 + *(_QWORD *)(v3 + 552)) += *(_QWORD *)(v3 + 696);
          v56 = *(_QWORD *)(v3 + 552) + 32 * v50;
          if ( *(_QWORD *)v56 < *(_QWORD *)(v3 + 760) )
            *(_QWORD *)(v3 + 760) = *(_QWORD *)v56;
          if ( !qlgetz(*(_QWORD *)(v3 + 8), *(unsigned int *)(v56 + 24), &v82, 1024) )
            break;
          v75.m128i_i64[1] = 0;
          v76 = 0;
          v57 = strlen((const char *)&v82);
          v73.m128i_i64[0] = v57 + 1;
          v75.m128i_i64[1] = qvector_reserve(&v75.m128i_u64[1], 0, v57 + 1, 1);
          v76.m128i_i64[0] = v73.m128i_i64[0];
          memmove((void *)v75.m128i_i64[1], &v82, v57);
          *(_BYTE *)(v75.m128i_i64[1] + v57) = 0;
          v67 = *(_QWORD *)(v3 + 608);
          v66 = *(_QWORD *)(v3 + 600);
          v58 = *(_QWORD *)(v3 + 616);
          v59 = v67 + 1;
          if ( (unsigned __int64)&v75.m128i_u64[1] < v66 || (unsigned __int64)&v75.m128i_u64[1] >= v66 + 24 * v58 )
          {
            if ( v58 < v59 )
            {
              v64 = qvector_reserve(v74, v66, v67 + 1, 24);
              *(_QWORD *)(v3 + 600) = v64;
              v66 = v64;
              v67 = *(_QWORD *)(v3 + 608);
            }
            v60 = _mm_loadu_si128(&v76);
            v61 = v66 + 24 * v67;
            *(_QWORD *)v61 = v75.m128i_i64[1];
            *(__m128i *)(v61 + 8) = v60;
            ++*(_QWORD *)(v3 + 608);
          }
          else
          {
            v51 = v75.m128i_i64[1];
            v52 = _mm_loadl_epi64(&v76);
            v75.m128i_i64[1] = 0;
            v53 = _mm_loadl_epi64((const __m128i *)&v76.m128i_u64[1]);
            v76 = 0;
            if ( v58 < v59 )
            {
              v75.m128i_i64[0] = v53.m128i_i64[0];
              v73.m128i_i64[0] = v52.m128i_i64[0];
              v65 = qvector_reserve(v74, v66, v67 + 1, 24);
              *(_QWORD *)(v3 + 600) = v65;
              v66 = v65;
              v53 = _mm_loadl_epi64(&v75);
              v67 = *(_QWORD *)(v3 + 608);
              v52 = _mm_loadl_epi64(&v73);
            }
            v54 = v66 + 24 * v67;
            *(_QWORD *)v54 = v51;
            *(__m128i *)(v54 + 8) = _mm_unpacklo_epi64(v52, v53);
            v55 = v75.m128i_i64[1];
            ++*(_QWORD *)(v3 + 608);
            if ( v55 )
            {
              v76.m128i_i64[0] = 0;
              qfree(v55, v66);
            }
          }
          if ( (unsigned __int64)++v50 >= v73.m128i_i64[1] )
            goto LABEL_21;
        }
      }
    }
    return 0;
  }
LABEL_21:
  if ( (v68 & 4) != 0 )
    sub_30CE0(v3, a3);
  if ( (v68 & 8) != 0 )
  {
    if ( *(_DWORD *)(v3 + 132) )
    {
      v13 = *(_DWORD *)(v3 + 128);
      if ( v13 )
      {
        if ( *(_DWORD *)(v3 + 128) == qlseek(*(_QWORD *)(v3 + 8), v13, 0) )
        {
          sub_254B0(*(_QWORD *)(v3 + 8), v3 + 132, 8, "branch islands entries count", -1, -1);
          sub_32E40(v3 + 624, *(unsigned int *)(v3 + 132));
          if ( qlread(*(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 624), 8LL * *(unsigned int *)(v3 + 132)) == 8LL * *(unsigned int *)(v3 + 132) )
          {
            v14 = *(_QWORD **)(v3 + 624);
            for ( j = &v14[*(_QWORD *)(v3 + 632)]; j != v14; ++v14 )
              *v14 += *(_QWORD *)(v3 + 696);
            goto LABEL_30;
          }
        }
        return 0;
      }
    }
  }
LABEL_30:
  if ( (v68 & 0x10) != 0 )
  {
    v16 = *(_QWORD *)(v3 + 72);
    if ( v16 )
    {
      if ( *(_QWORD *)(v3 + 80) )
      {
        v17 = *(_QWORD *)(v3 + 528);
        v18 = v17 + 32LL * *(_QWORD *)(v3 + 536);
        if ( v18 != v17 )
        {
          while ( *(_DWORD *)(v17 + 24) != 3 )
          {
            v17 += 32;
            if ( v18 == v17 )
              goto LABEL_38;
          }
          sub_325F0(
            v3,
            v16,
            *(_QWORD *)(v3 + 80),
            *(_QWORD *)v17,
            *(_QWORD *)(v17 + 8),
            v9,
            v68,
            (_DWORD)s,
            v73.m128i_i32[0],
            v73.m128i_i32[2],
            v74,
            v75.m128i_i32[0],
            v75.m128i_i32[2],
            v76.m128i_i8[0],
            v76.m128i_i32[2],
            v77,
            v78,
            v79,
            v80,
            v81,
            v82,
            v83,
            v84,
            v85,
            v86,
            v87,
            v88,
            v89,
            v90,
            v91,
            v92,
            v93,
            v94,
            v95,
            v96);
        }
      }
    }
LABEL_38:
    v19 = *(_DWORD *)(v3 + 328);
    if ( v19 && *(_DWORD *)(v3 + 332) )
    {
      sa = v11;
      v20 = 0;
      v21 = 0;
      for ( k = v19; ; k = *(unsigned int *)(v3 + 328) )
      {
        if ( qlseek(*(_QWORD *)(v3 + 8), v20 + k, 0) != v20 + k
          || qlread(*(_QWORD *)(v3 + 8), &v75.m128i_u64[1], 56) != 56 )
        {
          return 0;
        }
        ++v21;
        v20 += 56;
        sub_325F0(
          v3,
          v77,
          v78,
          v75.m128i_i32[2] + *(_QWORD *)(v3 + 696),
          v76.m128i_i32[0],
          v23,
          v68,
          sa,
          v73.m128i_i32[0],
          v73.m128i_i32[2],
          v74,
          v75.m128i_i32[0],
          v75.m128i_i32[2] + *(_QWORD *)(v3 + 696),
          v76.m128i_i8[0],
          v76.m128i_i32[2],
          v77,
          v78,
          v79,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93,
          v94,
          v95,
          v96);
        if ( v21 >= *(unsigned int *)(v3 + 332) )
          break;
      }
      v11 = sa;
    }
  }
  if ( (v68 & 0x20) != 0 )
  {
    v26 = *(_QWORD *)(v3 + 152);
    if ( v26 )
    {
      if ( *(_QWORD *)(v3 + 160) )
      {
        if ( *(_QWORD *)(v3 + 152) != qlseek(*(_QWORD *)(v3 + 8), v26, 0) )
          return 0;
        v27 = *(_QWORD *)(v3 + 160);
        v28 = *(_QWORD *)(v3 + 584);
        if ( v28 < v27 )
        {
          if ( *(_QWORD *)(v3 + 592) < v27 )
          {
            *(_QWORD *)(v3 + 576) = qvector_reserve(v3 + 576, *(_QWORD *)(v3 + 576), *(_QWORD *)(v3 + 160), 32);
            v28 = *(_QWORD *)(v3 + 584);
          }
          memset((void *)(*(_QWORD *)(v3 + 576) + 32 * v28), 0, 32 * (v27 - v28));
          *(_QWORD *)(v3 + 584) = v27;
          v27 = *(_QWORD *)(v3 + 160);
        }
        else if ( v27 != v28 )
        {
          *(_QWORD *)(v3 + 584) = v27;
        }
        v29 = *(_QWORD *)(v3 + 8);
        v30 = qlseek(v29, 0, 1);
        v31 = qlsize(v29) - v30;
        if ( ((v31 | v30) & 0x8000000000000000LL) != 0LL )
        {
          v34 = 0;
LABEL_66:
          sub_1A260(
            (unsigned int)"%s is incorrect, maximum possible value is %u%s",
            (unsigned int)"count of image text infos in the cache file",
            v34,
            (unsigned int)"",
            v32,
            v33);
        }
        if ( v27 && (v27 >> 59 || v31 < 32 * v27) )
        {
          v34 = v31 >> 5;
          goto LABEL_66;
        }
        if ( qlread(*(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 576), 32LL * *(_QWORD *)(v3 + 160)) != 32LL
                                                                                               * *(_QWORD *)(v3 + 160) )
          return 0;
        v35 = *(_QWORD *)(v3 + 576);
        for ( m = v35 + 32LL * *(_QWORD *)(v3 + 584); v35 != m; v35 += 32 )
          *(_QWORD *)(v35 + 16) += *(_QWORD *)(v3 + 696);
      }
    }
  }
  if ( (v68 & 0xC0) == 0 )
  {
    if ( !v11 && v69 && *(_DWORD *)(v3 + 536) == 1 && (~*(_BYTE *)(*(_QWORD *)(v3 + 528) + 24LL) & 5) == 0 )
      *(_BYTE *)(v3 + 860) = 1;
    goto LABEL_103;
  }
  v37 = *(_DWORD *)(v3 + 408);
  if ( v37 && *(_DWORD *)(v3 + 412) )
  {
    v38 = *(_DWORD *)(v3 + 32);
    v39 = *(_QWORD *)(v3 + 8);
    v73.m128i_i32[0] = *(_DWORD *)(v3 + 412);
    sb = v38;
    if ( *(_DWORD *)(v3 + 408) == qlseek(v39, v37, 0) )
    {
      sub_32EC0(v3 + 672, v73.m128i_u32[0]);
      v40 = *(_QWORD *)(v3 + 8);
      v41 = 0;
      v73.m128i_i64[1] = (-(__int64)(v38 < 0x1C9) & 0xFFFFFFFFFFFFFFE0LL) + 56;
      sub_32180(v40, v73.m128i_u32[0], v73.m128i_i64[1], "count of subcache infos in the cache file", -1, -1);
      v42 = v3;
      LODWORD(v74) = v11;
      v43 = 0;
      v44 = v73.m128i_i32[0];
      v45 = v42;
      v73.m128i_i64[0] = a3;
      v46 = v73.m128i_i64[1];
      while ( 1 )
      {
        v47 = v43 + *(_QWORD *)(v45 + 672);
        if ( qlread(*(_QWORD *)(v45 + 8), v47, v46) != v46 )
          break;
        ++v41;
        if ( sb <= 0x1C8 )
          qsnprintf(v47 + 24, 32, ".%u", v41);
        v43 += 56;
        if ( v44 == v41 )
        {
          v11 = v74;
          a3 = v73.m128i_i64[0];
          v3 = v45;
          goto LABEL_80;
        }
      }
    }
    return 0;
  }
LABEL_80:
  if ( !v11 && v69 && *(_DWORD *)(v3 + 536) == 1 && (~*(_BYTE *)(*(_QWORD *)(v3 + 528) + 24LL) & 5) == 0 )
    *(_BYTE *)(v3 + 860) = 1;
  if ( (v68 & 0x80u) == 0 )
  {
LABEL_103:
    if ( !a3 )
      return 1;
    goto LABEL_88;
  }
  if ( a3 )
  {
    sub_3B040(v3, a3);
LABEL_88:
    sub_1C2E0(v3, v3 + 576);
  }
  return 1;
}
