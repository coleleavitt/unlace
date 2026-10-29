__int64 __fastcall sub_9FB0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  void *v4; // r14
  size_t v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rax
  size_t v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int16 v12; // ax
  size_t v14; // r8
  const void *v15; // r9
  void *v16; // rdi
  const char **v17; // r15
  __int64 v18; // rax
  const char **v19; // r14
  const char *v20; // rsi
  __m128i v21; // xmm4
  char *v22; // rsi
  bool v23; // zf
  const char *v24; // rsi
  size_t v25; // r14
  char **v26; // r15
  char *v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  __int64 v31; // rax
  const char **v32; // r15
  const char *v33; // rbx
  const char **v34; // r12
  const char *v35; // rsi
  __int64 v36; // rdi
  const char *v37; // rsi
  const char *v38; // rsi
  size_t v39; // r12
  char *v40; // rbx
  char *v41; // r15
  void *v42; // r14
  __int64 v43; // rax
  char *v44; // r8
  void *v45; // rax
  char *v46; // rax
  const void *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __m128i v51; // xmm5
  __m128i v52; // [rsp+0h] [rbp-108h] BYREF
  char *s1; // [rsp+10h] [rbp-F8h]
  char *v54; // [rsp+18h] [rbp-F0h]
  __int16 v55; // [rsp+2Eh] [rbp-DAh] BYREF
  const char *v56; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v57; // [rsp+38h] [rbp-D0h]
  size_t n[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v59; // [rsp+68h] [rbp-A0h]
  __int64 v60; // [rsp+78h] [rbp-90h]
  __int64 v61; // [rsp+80h] [rbp-88h]
  __int128 v62; // [rsp+88h] [rbp-80h]
  __m128i v63; // [rsp+98h] [rbp-70h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-60h]
  __int128 v65; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v66; // [rsp+C8h] [rbp-40h]

  v1 = a1 + 8712;
  v66 = __readfsqword(0x28u);
  sub_7CC0(a1, (__int64)"URL", (__int64 *)(a1 + 8712));
  sub_7CC0(a1, (__int64)"FILE", (__int64 *)(a1 + 8760));
  sub_6540((_QWORD *)a1, (__int64 *)(a1 + 8760));
  if ( *(_QWORD *)(a1 + 8768) )
  {
    v29 = *(_QWORD *)(a1 + 8760);
    if ( a1 + 8736 != v29 )
    {
      v30 = *(_QWORD *)(v29 + 8);
      if ( v30 > 1 )
      {
        v44 = *(char **)v29;
        v45 = *(void **)(a1 + 8736);
        if ( *(_QWORD *)(a1 + 8752) < v30 )
        {
          s1 = v44;
          v45 = (void *)qvector_reserve();
          v44 = s1;
          *(_QWORD *)(a1 + 8736) = v45;
        }
        *(_QWORD *)(a1 + 8744) = v30;
        memmove(v45, v44, v30 - 1);
        *(_BYTE *)(*(_QWORD *)(a1 + 8736) + v30 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8744) = 0;
      }
    }
  }
  if ( !*(_QWORD *)(a1 + 8720) )
  {
    *(_OWORD *)&n[1] = 0;
    v3 = qvector_reserve();
    n[0] = v3;
    v4 = nullptr;
    n[1] = 59;
    *(__m128i *)v3 = _mm_load_si128((const __m128i *)&xmmword_175F0);
    *(__m128i *)(v3 + 16) = _mm_load_si128((const __m128i *)&xmmword_17600);
    *(__m128i *)(v3 + 32) = _mm_load_si128((const __m128i *)&xmmword_17610);
    *(__m128i *)(v3 + 42) = _mm_load_si128((const __m128i *)&xmmword_17620);
    *(_BYTE *)(n[0] + 58) = 0;
    v5 = n[1];
    if ( n[1] )
    {
      v4 = (void *)qalloc_or_throw();
      memcpy(v4, (const void *)n[0], n[1]);
    }
    v6 = *(_QWORD *)(a1 + 8720);
    v7 = *(_QWORD *)(a1 + 8712);
    if ( *(_QWORD *)(a1 + 8728) < (unsigned __int64)(v6 + 1) )
    {
      v31 = qvector_reserve();
      *(_QWORD *)(a1 + 8712) = v31;
      v6 = *(_QWORD *)(a1 + 8720);
      v7 = v31;
    }
    v8 = v7 + 24 * v6;
    *(_QWORD *)v8 = v4;
    *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    v9 = n[0];
    ++*(_QWORD *)(a1 + 8720);
    if ( v9 )
    {
      n[1] = 0;
      qfree();
    }
  }
  v10 = *(_QWORD *)(a1 + 8712);
  if ( a1 + 8688 != v10 )
  {
    v11 = *(_QWORD *)(v10 + 8);
    if ( !v11 || (v14 = v11 - 1, v11 == 1) )
    {
      *(_QWORD *)(a1 + 8696) = 0;
    }
    else
    {
      v15 = *(const void **)v10;
      v16 = *(void **)(a1 + 8688);
      if ( *(_QWORD *)(a1 + 8704) < v11 )
      {
        v52.m128i_i64[0] = *(_QWORD *)v10;
        s1 = (char *)(v11 - 1);
        v49 = qvector_reserve();
        v15 = (const void *)v52.m128i_i64[0];
        v14 = v11 - 1;
        *(_QWORD *)(a1 + 8688) = v49;
        v16 = (void *)v49;
      }
      *(_QWORD *)(a1 + 8696) = v11;
      memmove(v16, v15, v14);
      *(_BYTE *)(*(_QWORD *)(a1 + 8688) + v11 - 1) = 0;
    }
  }
  v55 = *(_WORD *)(a1 + 8792);
  if ( (int)sub_5F10(
              (__int64)"Import SVD file\n"
                       "\n"
                       "%/%*Import and apply register information from an SVD file\n"
                       "<Open local file:R> <load from a Github repository:R>1>\n"
                       "<File:b10:1:1::><...:B11::::> <Repository:b20:1:1::>\n"
                       "<:E30::60::>",
              sub_6980,
              a1,
              &v55,
              a1 + 8760,
              a1 + 8736,
              sub_60B0,
              v1,
              a1 + 8688,
              a1,
              a1 + 8664) > 0 )
  {
    v12 = v55;
    *(_WORD *)(a1 + 8792) = v55;
    if ( v12 )
      goto LABEL_14;
    if ( *(_QWORD *)(a1 + 8744) <= 1u )
      return 1;
    v17 = *(const char ***)(a1 + 8760);
    v18 = 3LL * *(_QWORD *)(a1 + 8768);
    v52 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v63.m128i_u64[1], (__m128i)(unsigned __int64)&off_1B9D0);
    v19 = &v17[v18];
    s1 = *(char **)(a1 + 8736);
    if ( v17 == v19 )
      goto LABEL_75;
    while ( 1 )
    {
      v20 = ::s1;
      if ( v17[1] )
        v20 = *v17;
      if ( !strcmp(s1, v20) )
        break;
      v17 += 3;
      if ( v19 == v17 )
        goto LABEL_75;
    }
    if ( v17 == v19 )
    {
LABEL_75:
      v51 = _mm_load_si128(&v52);
      v56 = nullptr;
      v60 = 0;
      v61 = 0;
      v64 = 0;
      v57 = 0;
      memset(n, 0, sizeof(n));
      v59 = 0;
      v62 = 0;
      v65 = 0;
      v63 = v51;
    }
    else
    {
      if ( *v17 )
      {
        v17[1] = nullptr;
        qfree();
      }
      memmove(v17, v17 + 3, *(_QWORD *)(a1 + 8760) + 24LL * *(_QWORD *)(a1 + 8768) - (_QWORD)v17 - 24);
      v21 = _mm_load_si128(&v52);
      --*(_QWORD *)(a1 + 8768);
      v22 = (char *)::s1;
      v23 = *(_QWORD *)(a1 + 8744) == 0;
      v60 = 0;
      v56 = nullptr;
      v61 = 0;
      v64 = 0;
      v57 = 0;
      memset(n, 0, sizeof(n));
      v59 = 0;
      v62 = 0;
      v65 = 0;
      v63 = v21;
      if ( v23 )
        goto LABEL_32;
      s1 = *(char **)(a1 + 8736);
    }
    v22 = s1;
LABEL_32:
    v52.m128i_i64[0] = (__int64)n;
    if ( !(unsigned __int8)sub_165A0(n, v22, &v56) )
    {
      v24 = ::s1;
      if ( (_QWORD)v57 )
        v24 = v56;
      sub_5990((__int64)"%s\n", v24);
    }
    v25 = *(_QWORD *)(a1 + 8744);
    v26 = *(char ***)(a1 + 8760);
    if ( v25 )
    {
      v46 = (char *)qalloc_or_throw();
      v47 = *(const void **)(a1 + 8736);
      s1 = v46;
      memcpy(v46, v47, v25);
      v27 = (char *)v26 - *(_QWORD *)(a1 + 8760);
    }
    else
    {
      s1 = nullptr;
      v27 = nullptr;
    }
    v28 = *(_QWORD *)(a1 + 8768);
    if ( *(_QWORD *)(a1 + 8776) < (unsigned __int64)(v28 + 1) )
    {
      v54 = v27;
      v48 = qvector_reserve();
      v27 = v54;
      *(_QWORD *)(a1 + 8760) = v48;
      v26 = (char **)&v27[v48];
      v28 = *(_QWORD *)(a1 + 8768);
    }
    memmove(v26 + 3, v26, 24 * v28 - (_QWORD)v27);
    *v26 = s1;
    *(__m128i *)(v26 + 1) = _mm_unpacklo_epi64((__m128i)v25, (__m128i)v25);
    ++*(_QWORD *)(a1 + 8768);
    sub_7B70(a1, (__int64)"FILE", a1 + 8760);
    sub_9620(v52.m128i_i64[0]);
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      qfree();
    }
    v12 = *(_WORD *)(a1 + 8792);
LABEL_14:
    if ( v12 != 1 || *(_QWORD *)(a1 + 8696) <= 1u )
      return 1;
    v32 = *(const char ***)(a1 + 8712);
    v33 = *(const char **)(a1 + 8688);
    v34 = &v32[3 * *(_QWORD *)(a1 + 8720)];
    if ( v32 == v34 )
      goto LABEL_76;
    while ( 1 )
    {
      v35 = ::s1;
      if ( v32[1] )
        v35 = *v32;
      if ( !strcmp(v33, v35) )
        break;
      v32 += 3;
      if ( v34 == v32 )
        goto LABEL_76;
    }
    if ( v32 == v34 )
    {
LABEL_76:
      v36 = a1 + 208;
      memset(n, 0, sizeof(n));
    }
    else
    {
      if ( *v32 )
      {
        v32[1] = nullptr;
        qfree();
      }
      memmove(v32, v32 + 3, *(_QWORD *)(a1 + 8712) + 24LL * *(_QWORD *)(a1 + 8720) - (_QWORD)v32 - 24);
      --*(_QWORD *)(a1 + 8720);
      v23 = *(_QWORD *)(a1 + 8696) == 0;
      memset(n, 0, sizeof(n));
      v36 = a1 + 208;
      v37 = ::s1;
      if ( v23 )
        goto LABEL_56;
      v33 = *(const char **)(a1 + 8688);
    }
    v37 = v33;
LABEL_56:
    if ( !(unsigned __int8)sub_9860(v36, v37, (__int64 *)n) )
    {
      v38 = ::s1;
      if ( n[1] )
        v38 = (const char *)n[0];
      sub_5990((__int64)"%s\n", v38);
    }
    v39 = *(_QWORD *)(a1 + 8696);
    v40 = *(char **)(a1 + 8712);
    if ( v39 )
    {
      v42 = (void *)qalloc_or_throw();
      memcpy(v42, *(const void **)(a1 + 8688), v39);
      v41 = &v40[-*(_QWORD *)(a1 + 8712)];
    }
    else
    {
      v41 = nullptr;
      v42 = nullptr;
    }
    v43 = *(_QWORD *)(a1 + 8720);
    if ( *(_QWORD *)(a1 + 8728) < (unsigned __int64)(v43 + 1) )
    {
      v50 = qvector_reserve();
      *(_QWORD *)(a1 + 8712) = v50;
      v40 = &v41[v50];
      v43 = *(_QWORD *)(a1 + 8720);
    }
    memmove(v40 + 24, v40, 24 * v43 - (_QWORD)v41);
    *(_QWORD *)v40 = v42;
    *(__m128i *)(v40 + 8) = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v39);
    ++*(_QWORD *)(a1 + 8720);
    sub_7B70(a1, (__int64)"URL", v1);
    if ( n[0] )
    {
      n[1] = 0;
      qfree();
    }
  }
  return 1;
}

