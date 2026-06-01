__m128i *__fastcall sub_20B470(__int64 a1, const __m128i *a2, double a3, __m128 a4, __m128 a5)
{
  __int64 v6; // rax
  __m128i *v7; // r12
  __m128 si128; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // rbp
  __int64 *v14; // r13
  __m128i *v15; // rsi
  __int32 v16; // ebx
  char *v17; // rbp
  __m128i v18; // xmm0
  __int64 v20; // rax
  bool v21; // al
  __int64 v22; // rax
  __m128i v23[4]; // [rsp+0h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(__m128i **)a1;
  si128 = (__m128)_mm_loadu_si128(a2);
  v9 = 24 * v6;
  v10 = 0xAAAAAAAAAAAAAAABLL * ((24 * v6) >> 3);
  if ( 24 * v6 <= 0 )
  {
    v15 = *(__m128i **)a1;
    v11 = si128.m128_u64[0];
    goto LABEL_10;
  }
  v11 = si128.m128_u64[0];
  do
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(v11 + 72);
      v13 = v10 >> 1;
      v14 = &v7->m128i_i64[(v10 >> 1) + (v10 & 0xFFFFFFFFFFFFFFFELL)];
      if ( *(_DWORD *)(*v14 + 72) < v12 )
      {
        v7 = (__m128i *)(v14 + 3);
        v10 = v10 - 1 - v13;
        goto LABEL_8;
      }
      if ( *(_DWORD *)(*v14 + 72) == v12 )
      {
        v20 = v14[1];
        if ( v20 )
          break;
      }
      v10 >>= 1;
LABEL_5:
      if ( v10 <= 0 )
        goto LABEL_9;
    }
    a4 = _mm_movehl_ps(a4, si128);
    v21 = sub_121C80(a4.m128_i64[0], *(_QWORD *)(v20 + 8), 0);
    si128 = (__m128)_mm_loadu_si128(a2);
    if ( !v21 )
    {
      v10 >>= 1;
      v11 = si128.m128_u64[0];
      goto LABEL_5;
    }
    v11 = si128.m128_u64[0];
    v7 = (__m128i *)(v14 + 3);
    v10 = v10 - 1 - v13;
LABEL_8:
    ;
  }
  while ( v10 > 0 );
LABEL_9:
  v6 = *(_QWORD *)(a1 + 8);
  v15 = *(__m128i **)a1;
  v9 = 24 * v6;
LABEL_10:
  if ( v7 != (__m128i *)&v15->m128i_i8[v9]
    && v7->m128i_i64[0] == v11
    && v7->m128i_i64[1] == _mm_movehl_ps(a5, si128).m128_u64[0] )
  {
    return nullptr;
  }
  v16 = a2[1].m128i_i32[0];
  v17 = (char *)((char *)v7 - (char *)v15);
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v6 + 1) )
  {
    v23[0] = (__m128i)si128;
    v22 = qvector_reserve();
    si128 = (__m128)_mm_load_si128(v23);
    *(_QWORD *)a1 = v22;
    v7 = (__m128i *)&v17[v22];
    v9 = 24LL * *(_QWORD *)(a1 + 8);
  }
  v23[0] = (__m128i)si128;
  memmove(&v7[1].m128i_u64[1], v7, v9 - (_QWORD)v17);
  v18 = _mm_load_si128(v23);
  v7[1].m128i_i32[0] = v16;
  *v7 = v18;
  ++*(_QWORD *)(a1 + 8);
  return v7;
}

