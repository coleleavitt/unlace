unsigned __int64 __fastcall sub_53CD0(__int64 *a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int64 v5; // rax
  size_t v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rbx
  size_t v10; // r12
  __int64 v11; // r13
  const char *v12; // rsi
  char *v13; // rdi
  __m128i v15; // xmm0
  void *v16; // rbx
  __m128i v17; // xmm0
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rax
  const void *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r15
  __int64 *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __m128i v28; // xmm0
  __int64 v29; // rcx
  __int64 v30; // rcx
  __m128i v31; // xmm0
  __int64 v33; // [rsp+0h] [rbp-C0h]
  __m128i v34; // [rsp+10h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+20h] [rbp-A0h]
  char *s1; // [rsp+28h] [rbp-98h] BYREF
  size_t n[4]; // [rsp+30h] [rbp-90h]
  __m128i v38; // [rsp+50h] [rbp-70h] BYREF
  __int64 v39; // [rsp+60h] [rbp-60h]
  unsigned __int64 v40; // [rsp+80h] [rbp-40h]

  v5 = a3[1].m128i_i64[0];
  v6 = *(_QWORD *)(a4 + 8);
  v40 = __readfsqword(0x28u);
  v7 = a2;
  *(_OWORD *)n = 0;
  s1 = nullptr;
  v35 = v5;
  v34 = _mm_loadu_si128(a3);
  if ( v6 > 1 )
  {
    v21 = *(const void **)a4;
    s1 = (char *)qvector_reserve(&s1, 0, v6, 1);
    n[0] = v6;
    memmove(s1, v21, v6 - 1);
    s1[v6 - 1] = 0;
    v7 = a2;
  }
  v8 = a1[1];
  v9 = *a1;
  v10 = n[0];
  v11 = *a1 + 56 * v8;
  if ( *a1 != v11 )
  {
    do
    {
      if ( *(_QWORD *)v9 != v7 || *(_OWORD *)(v9 + 8) - *(_OWORD *)&v34 != 0 || v35 != *(_QWORD *)(v9 + 24) )
        goto LABEL_5;
      if ( *(_QWORD *)(v9 + 40) )
      {
        v12 = *(const char **)(v9 + 32);
        v13 = (char *)src;
        if ( !v10 )
          goto LABEL_12;
      }
      else
      {
        if ( !v10 )
        {
          if ( v9 != v11 )
            goto LABEL_14;
          v15 = _mm_loadu_si128(&v34);
          v16 = nullptr;
          v39 = v35;
          v38 = v15;
          goto LABEL_23;
        }
        v12 = src;
      }
      v13 = s1;
LABEL_12:
      if ( !strcmp(v13, v12) )
      {
        if ( v9 == v11 )
          break;
        goto LABEL_14;
      }
LABEL_5:
      v9 += 56;
    }
    while ( v11 != v9 );
  }
  v17 = _mm_loadu_si128(&v34);
  v16 = nullptr;
  v39 = v35;
  v38 = v17;
  if ( v10 )
  {
    v16 = (void *)qalloc_or_throw(v10);
    memcpy(v16, s1, v10);
    v8 = a1[1];
  }
LABEL_23:
  if ( a1[2] < (unsigned __int64)(v8 + 1) )
  {
    v33 = a1[2];
    v22 = qvector_reserve(a1, 0, v8 + 1, 56);
    v23 = a1[1];
    v18 = v22;
    v24 = a1[2];
    v25 = (__int64 *)*a1;
    a1[2] = v33;
    v26 = v23 - 1;
    if ( v26 >= 0 )
    {
      do
      {
        v27 = *v25;
        v28 = _mm_loadu_si128((const __m128i *)(v25 + 1));
        v22 += 56;
        v25 += 7;
        *(_QWORD *)(v22 - 56) = v27;
        v29 = *(v25 - 4);
        *(__m128i *)(v22 - 48) = v28;
        *(_QWORD *)(v22 - 32) = v29;
        v30 = *(v25 - 3);
        v31 = _mm_loadu_si128((const __m128i *)v25 - 1);
        *(v25 - 3) = 0;
        *(_QWORD *)(v22 - 24) = v30;
        *(__m128i *)(v22 - 16) = v31;
        *(v25 - 1) = 0;
      }
      while ( v26-- != 0 );
      v25 = (__int64 *)*a1;
    }
    qfree(v25);
    a1[2] = v24;
    v8 = a1[1];
    *a1 = v18;
  }
  else
  {
    v18 = *a1;
  }
  v19 = v39;
  v20 = v18 + 56 * v8;
  *(__m128i *)(v20 + 8) = _mm_loadu_si128(&v38);
  *(_QWORD *)v20 = v7;
  *(_QWORD *)(v20 + 24) = v19;
  *(_QWORD *)(v20 + 32) = v16;
  *(__m128i *)(v20 + 40) = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  ++a1[1];
LABEL_14:
  if ( s1 )
  {
    n[0] = 0;
    qfree(s1);
  }
  return v40 - __readfsqword(0x28u);
}

