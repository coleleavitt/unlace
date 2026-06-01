__int64 __fastcall sub_3B840(__int64 a1, char a2, const char *a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  const char *v6; // rax
  const char *v7; // r12
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // r12d
  int v11; // eax
  _QWORD *v12; // rax
  _QWORD *j; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // r13
  unsigned __int64 v19; // r14
  __int64 k; // rbx
  int v22; // eax
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rax
  __int64 v25; // r14
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 m; // rcx
  unsigned int v32; // ebx
  __int64 v33; // rdi
  int v34; // r14d
  __int64 v35; // rax
  __int64 v36; // r15
  __int32 v37; // r12d
  __int64 v38; // r13
  __int64 v39; // rbp
  _QWORD *v40; // rax
  _QWORD *i; // rcx
  __int64 v42; // r14
  __int64 v43; // r13
  __m128i v44; // xmm0
  __m128i v45; // xmm1
  __int64 v46; // rax
  __int64 v47; // rdi
  _QWORD *v48; // rax
  size_t v49; // r13
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rdi
  __m128i v52; // xmm0
  __int64 v53; // rax
  __int64 *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // rsi
  __int64 v59; // rax
  int v61; // [rsp+4h] [rbp-4B4h]
  __m128i v62; // [rsp+10h] [rbp-4A8h] BYREF
  __int64 v63; // [rsp+20h] [rbp-498h]
  __m128i v64; // [rsp+28h] [rbp-490h] BYREF
  __m128i v65; // [rsp+38h] [rbp-480h] BYREF
  __int64 v66; // [rsp+48h] [rbp-470h]
  __int64 v67; // [rsp+50h] [rbp-468h]
  char v68[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v69; // [rsp+478h] [rbp-40h]

  v3 = a1;
  v4 = *(_QWORD *)(a1 + 8);
  v69 = __readfsqword(0x28u);
  if ( !v4 )
    return 0;
  qlseek();
  if ( qlread() != 512 || strncmp((const char *)(v3 + 16), "dyld_v", 6u) )
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
    v9 = *(_DWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 773) = 1;
    if ( v9 > 0x38 )
      goto LABEL_12;
LABEL_46:
    *(_OWORD *)(v3 + 72) = 0;
    goto LABEL_47;
  }
  v22 = strncmp(v7, "arm64", 5u);
  v9 = *(_DWORD *)(v3 + 32);
  *(_BYTE *)(v3 + 773) = v22 == 0;
  if ( v9 <= 0x38 )
    goto LABEL_46;
LABEL_12:
  if ( v9 <= 0x74 )
  {
LABEL_47:
    *(_QWORD *)(v3 + 128) = 0;
    *(_OWORD *)(v3 + 152) = 0;
    goto LABEL_48;
  }
  if ( v9 <= 0x88 )
  {
    *(_OWORD *)(v3 + 152) = 0;
LABEL_48:
    *(_QWORD *)(v3 + 328) = 0;
    *(_QWORD *)(v3 + 464) = 0;
    *(_QWORD *)(v3 + 408) = 0;
    if ( (a2 & 1) != 0 )
      goto LABEL_91;
LABEL_49:
    v61 = 0;
    goto LABEL_50;
  }
  if ( v9 <= 0x138 )
    goto LABEL_48;
  if ( v9 > 0x188 )
  {
    v61 = a2 & 1;
    if ( (a2 & 1) == 0 )
      goto LABEL_17;
    goto LABEL_91;
  }
  *(_QWORD *)(v3 + 464) = 0;
  *(_QWORD *)(v3 + 408) = 0;
  if ( (a2 & 1) == 0 )
    goto LABEL_49;
LABEL_91:
  if ( *(_DWORD *)(v3 + 32) != qlseek() )
    return 0;
  sub_32D40((__int64 *)(v3 + 528), *(unsigned int *)(v3 + 36));
  sub_32180(*(_QWORD *)(v3 + 8), *(_DWORD *)(v3 + 36), 0x20u, (__int64)"count of cache mapping infos", -1, -1);
  if ( qlread() != 32LL * *(unsigned int *)(v3 + 36) )
    return 0;
  v40 = *(_QWORD **)(v3 + 528);
  for ( i = &v40[4 * *(_QWORD *)(v3 + 536)]; i != v40; v40 += 4 )
    *v40 += *(_QWORD *)(v3 + 696);
  v9 = *(_DWORD *)(v3 + 32);
  if ( v9 <= 0xF8 )
  {
    if ( *(_QWORD *)(v3 + 536) > 2u )
    {
      v54 = *(__int64 **)(v3 + 528);
      v55 = *v54;
      *(_QWORD *)(v3 + 248) = 0x100000000LL;
      *(_QWORD *)(v3 + 240) = v55;
      *(_QWORD *)(v3 + 256) = v55 + 0x100000000LL - v54[8] - v54[9];
    }
    v61 = 1;
    goto LABEL_50;
  }
  v61 = 1;
LABEL_17:
  if ( v9 <= 0x1C7 )
  {
LABEL_50:
    v10 = *(_DWORD *)(v3 + 44);
    v11 = *(_DWORD *)(v3 + 40);
    goto LABEL_19;
  }
  v10 = *(_DWORD *)(v3 + 468);
  v11 = *(_DWORD *)(v3 + 464);
LABEL_19:
  if ( v10 != 0 && v11 != 0 && (a2 & 2) != 0 )
  {
    if ( v11 == qlseek() )
    {
      v62.m128i_i64[1] = v10;
      sub_32DC0((__int64 *)(v3 + 552), v10);
      sub_32180(*(_QWORD *)(v3 + 8), v10, 0x20u, (__int64)"count of images in the cache file", -1, -1);
      if ( qlread() == 32LL * v10 )
      {
        v42 = 0;
        v63 = v3 + 600;
        while ( 1 )
        {
          *(_QWORD *)(32 * v42 + *(_QWORD *)(v3 + 552)) += *(_QWORD *)(v3 + 696);
          v48 = (_QWORD *)(*(_QWORD *)(v3 + 552) + 32 * v42);
          if ( *v48 < *(_QWORD *)(v3 + 760) )
            *(_QWORD *)(v3 + 760) = *v48;
          if ( !qlgetz() )
            break;
          v64.m128i_i64[1] = 0;
          v65 = 0;
          v49 = strlen(v68);
          v62.m128i_i64[0] = v49 + 1;
          v64.m128i_i64[1] = qvector_reserve();
          v65.m128i_i64[0] = v62.m128i_i64[0];
          memmove((void *)v64.m128i_i64[1], v68, v49);
          *(_BYTE *)(v64.m128i_i64[1] + v49) = 0;
          v59 = *(_QWORD *)(v3 + 608);
          v58 = *(_QWORD *)(v3 + 600);
          v50 = *(_QWORD *)(v3 + 616);
          v51 = v59 + 1;
          if ( (unsigned __int64)&v64.m128i_u64[1] < v58 || (unsigned __int64)&v64.m128i_u64[1] >= v58 + 24 * v50 )
          {
            if ( v50 < v51 )
            {
              v56 = qvector_reserve();
              *(_QWORD *)(v3 + 600) = v56;
              v58 = v56;
              v59 = *(_QWORD *)(v3 + 608);
            }
            v52 = _mm_loadu_si128(&v65);
            v53 = v58 + 24 * v59;
            *(_QWORD *)v53 = v64.m128i_i64[1];
            *(__m128i *)(v53 + 8) = v52;
            ++*(_QWORD *)(v3 + 608);
          }
          else
          {
            v43 = v64.m128i_i64[1];
            v44 = _mm_loadl_epi64(&v65);
            v64.m128i_i64[1] = 0;
            v45 = _mm_loadl_epi64((const __m128i *)&v65.m128i_u64[1]);
            v65 = 0;
            if ( v50 < v51 )
            {
              v64.m128i_i64[0] = v45.m128i_i64[0];
              v62.m128i_i64[0] = v44.m128i_i64[0];
              v57 = qvector_reserve();
              *(_QWORD *)(v3 + 600) = v57;
              v58 = v57;
              v45 = _mm_loadl_epi64(&v64);
              v59 = *(_QWORD *)(v3 + 608);
              v44 = _mm_loadl_epi64(&v62);
            }
            v46 = v58 + 24 * v59;
            *(_QWORD *)v46 = v43;
            *(__m128i *)(v46 + 8) = _mm_unpacklo_epi64(v44, v45);
            v47 = v64.m128i_i64[1];
            ++*(_QWORD *)(v3 + 608);
            if ( v47 )
            {
              v65.m128i_i64[0] = 0;
              qfree();
            }
          }
          if ( (unsigned __int64)++v42 >= v62.m128i_i64[1] )
            goto LABEL_21;
        }
      }
    }
    return 0;
  }
LABEL_21:
  if ( (a2 & 4) != 0 )
    sub_30CE0(v3, a3);
  if ( (a2 & 8) != 0 && *(_DWORD *)(v3 + 132) && *(_DWORD *)(v3 + 128) )
  {
    if ( *(_DWORD *)(v3 + 128) != qlseek() )
      return 0;
    sub_254B0(*(_QWORD *)(v3 + 8), (_DWORD *)(v3 + 132), 8u, (__int64)"branch islands entries count", -1, -1);
    sub_32E40((__int64 *)(v3 + 624), *(unsigned int *)(v3 + 132));
    if ( qlread() != 8LL * *(unsigned int *)(v3 + 132) )
      return 0;
    v12 = *(_QWORD **)(v3 + 624);
    for ( j = &v12[*(_QWORD *)(v3 + 632)]; j != v12; ++v12 )
      *v12 += *(_QWORD *)(v3 + 696);
  }
  if ( (a2 & 0x10) != 0 )
  {
    v14 = *(_QWORD *)(v3 + 72);
    if ( v14 )
    {
      if ( *(_QWORD *)(v3 + 80) )
      {
        v15 = *(_QWORD *)(v3 + 528);
        v16 = v15 + 32LL * *(_QWORD *)(v3 + 536);
        if ( v16 != v15 )
        {
          while ( *(_DWORD *)(v15 + 24) != 3 )
          {
            v15 += 32;
            if ( v16 == v15 )
              goto LABEL_38;
          }
          sub_325F0(v3, v14, *(_QWORD *)(v3 + 80), *(_QWORD *)v15, *(_QWORD *)(v15 + 8));
        }
      }
    }
LABEL_38:
    v17 = *(_DWORD *)(v3 + 328);
    if ( v17 )
    {
      if ( *(_DWORD *)(v3 + 332) )
      {
        v18 = 0;
        v19 = 0;
        for ( k = v17; qlseek() == v18 + k && qlread() == 56; k = *(unsigned int *)(v3 + 328) )
        {
          ++v19;
          v18 += 56;
          v64.m128i_i64[1] += *(_QWORD *)(v3 + 696);
          sub_325F0(v3, v66, v67, v64.m128i_i64[1], v65.m128i_i64[0]);
          if ( v19 >= *(unsigned int *)(v3 + 332) )
            goto LABEL_53;
        }
        return 0;
      }
    }
  }
LABEL_53:
  if ( (a2 & 0x20) != 0 && *(_QWORD *)(v3 + 152) && *(_QWORD *)(v3 + 160) )
  {
    if ( *(_QWORD *)(v3 + 152) == qlseek() )
    {
      v23 = *(_QWORD *)(v3 + 160);
      v24 = *(_QWORD *)(v3 + 584);
      if ( v24 < v23 )
      {
        if ( *(_QWORD *)(v3 + 592) < v23 )
        {
          *(_QWORD *)(v3 + 576) = qvector_reserve();
          v24 = *(_QWORD *)(v3 + 584);
        }
        memset((void *)(*(_QWORD *)(v3 + 576) + 32 * v24), 0, 32 * (v23 - v24));
        *(_QWORD *)(v3 + 584) = v23;
        v23 = *(_QWORD *)(v3 + 160);
      }
      else if ( v23 != v24 )
      {
        *(_QWORD *)(v3 + 584) = v23;
      }
      v25 = qlseek();
      v26 = qlsize() - v25;
      if ( ((v26 | v25) & 0x8000000000000000LL) != 0LL )
      {
        v29 = 0;
LABEL_65:
        sub_1A260(
          (__int64)"%s is incorrect, maximum possible value is %u%s",
          (__int64)"count of image text infos in the cache file",
          v29,
          (__int64)"",
          v27,
          v28,
          a2);
      }
      if ( v23 && (v23 >> 59 || v26 < 32 * v23) )
      {
        v29 = (unsigned int)(v26 >> 5);
        goto LABEL_65;
      }
      if ( qlread() == 32LL * *(_QWORD *)(v3 + 160) )
      {
        v30 = *(_QWORD *)(v3 + 576);
        for ( m = v30 + 32LL * *(_QWORD *)(v3 + 584); v30 != m; v30 += 32 )
          *(_QWORD *)(v30 + 16) += *(_QWORD *)(v3 + 696);
        goto LABEL_69;
      }
    }
    return 0;
  }
LABEL_69:
  if ( (a2 & 0xC0) == 0 )
  {
    if ( !v10 && v61 && *(_DWORD *)(v3 + 536) == 1 && (~*(_BYTE *)(*(_QWORD *)(v3 + 528) + 24LL) & 5) == 0 )
      *(_BYTE *)(v3 + 860) = 1;
    goto LABEL_102;
  }
  if ( *(_DWORD *)(v3 + 408) && *(_DWORD *)(v3 + 412) )
  {
    v32 = *(_DWORD *)(v3 + 32);
    v62.m128i_i32[0] = *(_DWORD *)(v3 + 412);
    if ( *(_DWORD *)(v3 + 408) == qlseek() )
    {
      sub_32EC0((__int64 *)(v3 + 672), v62.m128i_u32[0]);
      v33 = *(_QWORD *)(v3 + 8);
      v34 = 0;
      v62.m128i_i64[1] = (-(__int64)(v32 < 0x1C9) & 0xFFFFFFFFFFFFFFE0LL) + 56;
      sub_32180(v33, v62.m128i_u32[0], v62.m128i_u64[1], (__int64)"count of subcache infos in the cache file", -1, -1);
      v35 = v3;
      LODWORD(v63) = v10;
      v36 = 0;
      v37 = v62.m128i_i32[0];
      v38 = v35;
      v62.m128i_i64[0] = (__int64)a3;
      v39 = v62.m128i_i64[1];
      while ( qlread() == v39 )
      {
        ++v34;
        if ( v32 <= 0x1C8 )
          qsnprintf();
        v36 += 56;
        if ( v37 == v34 )
        {
          v10 = v63;
          a3 = (const char *)v62.m128i_i64[0];
          v3 = v38;
          goto LABEL_79;
        }
      }
    }
    return 0;
  }
LABEL_79:
  if ( !v10 && v61 && *(_DWORD *)(v3 + 536) == 1 && (~*(_BYTE *)(*(_QWORD *)(v3 + 528) + 24LL) & 5) == 0 )
    *(_BYTE *)(v3 + 860) = 1;
  if ( a2 >= 0 )
  {
LABEL_102:
    if ( !a3 )
      return 1;
    goto LABEL_87;
  }
  if ( a3 )
  {
    sub_3B0A0((__int64 *)v3);
LABEL_87:
    sub_1C2E0(v3, (__int64 *)(v3 + 576));
  }
  return 1;
}

