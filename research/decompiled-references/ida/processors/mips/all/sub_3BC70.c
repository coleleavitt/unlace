unsigned __int64 __fastcall sub_3BC70(__int64 *a1, const char *a2, char a3)
{
  const char *v3; // r13
  size_t v5; // r14
  signed __int64 v6; // r9
  unsigned __int64 v7; // rdx
  const char *v8; // rsi
  size_t v9; // rdx
  char *v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbx
  signed __int64 v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // rax
  __int64 v20; // r14
  size_t v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdi
  __m128i v26; // xmm0
  __int64 v27; // rax
  void *v29; // rbx
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __int64 v32; // rax
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  __m128i c; // [rsp+8h] [rbp-70h] BYREF
  signed __int64 v37; // [rsp+18h] [rbp-60h]
  void *v38; // [rsp+20h] [rbp-58h] BYREF
  __m128i v39; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( !a2 )
    return v40 - __readfsqword(0x28u);
  v3 = a2;
  if ( !*a2 )
    return v40 - __readfsqword(0x28u);
  c.m128i_i32[0] = a3;
  while ( 1 )
  {
    v10 = strchr(v3, c.m128i_i32[0]);
    if ( !v10 )
      break;
    v11 = a1[1];
    v12 = *a1;
    if ( a1[2] < (unsigned __int64)(v11 + 1) )
    {
      v18 = qvector_reserve(a1, v12, v11 + 1, 24);
      v11 = a1[1];
      *a1 = v18;
      v12 = v18;
    }
    v13 = v12 + 24 * v11;
    v14 = v10 - v3;
    *(_OWORD *)(v13 + 8) = 0;
    *(_QWORD *)v13 = 0;
    ++a1[1];
    v5 = *(_QWORD *)(v13 + 8);
    v15 = *(_QWORD *)(v13 + 16);
    v16 = *(_QWORD *)v13;
    if ( v5 )
    {
      --v5;
      v6 = v14 + v5;
      v7 = v14 + v5 + 1;
      if ( v15 >= v7 )
        goto LABEL_5;
    }
    else
    {
      v7 = v14 + 1;
      v6 = v10 - v3;
      if ( v15 >= v14 + 1 )
      {
        *(_QWORD *)(v13 + 8) = v7;
        *(_BYTE *)(v16 + v14) = 0;
        goto LABEL_7;
      }
    }
    v37 = v6;
    c.m128i_i64[1] = v7;
    v17 = qvector_reserve(v13, v16, v7, 1);
    v6 = v37;
    v7 = c.m128i_u64[1];
    *(_QWORD *)v13 = v17;
    v16 = v17;
LABEL_5:
    *(_QWORD *)(v13 + 8) = v7;
    *(_BYTE *)(v16 + v6) = 0;
    if ( v5 )
      memmove((void *)(*(_QWORD *)v13 + v14), *(const void **)v13, v5);
LABEL_7:
    v8 = v3;
    v9 = v10 - v3;
    v3 = v10 + 1;
    memmove(*(void **)v13, v8, v9);
  }
  v38 = nullptr;
  v39 = 0;
  v19 = strlen(v3);
  v20 = v19 + 1;
  v21 = v19;
  v38 = (void *)qvector_reserve(&v38, 0, v19 + 1, 1);
  v39.m128i_i64[0] = v20;
  memmove(v38, v3, v21);
  *((_BYTE *)v38 + v21) = 0;
  v22 = a1[1];
  v23 = *a1;
  v24 = a1[2];
  v25 = v22 + 1;
  if ( (unsigned __int64)&v38 < *a1 || (unsigned __int64)&v38 >= v23 + 24 * v24 )
  {
    if ( v24 < v25 )
    {
      v34 = qvector_reserve(a1, v23, v22 + 1, 24);
      *a1 = v34;
      v23 = v34;
      v22 = a1[1];
    }
    v26 = _mm_loadu_si128(&v39);
    v27 = v23 + 24 * v22;
    *(_QWORD *)v27 = v38;
    *(__m128i *)(v27 + 8) = v26;
    ++a1[1];
  }
  else
  {
    v29 = v38;
    v30 = _mm_loadl_epi64(&v39);
    v38 = nullptr;
    v31 = _mm_loadl_epi64((const __m128i *)&v39.m128i_u64[1]);
    v39 = 0;
    if ( v24 < v25 )
    {
      c.m128i_i64[1] = v31.m128i_i64[0];
      c.m128i_i64[0] = v30.m128i_i64[0];
      v35 = qvector_reserve(a1, v23, v22 + 1, 24);
      *a1 = v35;
      v23 = v35;
      v31 = _mm_loadl_epi64((const __m128i *)&c.m128i_u64[1]);
      v22 = a1[1];
      v30 = _mm_loadl_epi64(&c);
    }
    v32 = v23 + 24 * v22;
    *(_QWORD *)v32 = v29;
    v33 = v38;
    *(__m128i *)(v32 + 8) = _mm_unpacklo_epi64(v30, v31);
    ++a1[1];
    if ( v33 )
    {
      v39.m128i_i64[0] = 0;
      qfree(v33);
    }
  }
  return v40 - __readfsqword(0x28u);
}

