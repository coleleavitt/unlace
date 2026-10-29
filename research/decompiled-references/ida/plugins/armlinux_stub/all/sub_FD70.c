__int64 __fastcall sub_FD70(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r12
  _QWORD *v7; // rbx
  __int64 result; // rax
  size_t v9; // r14
  void *v10; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // eax
  size_t v15; // rbx
  void *v16; // r12
  __int64 v17; // rax
  unsigned int v19; // [rsp+8h] [rbp-50h]
  unsigned int v20; // [rsp+Ch] [rbp-4Ch]
  __int64 v21; // [rsp+10h] [rbp-48h]

  v3 = a2;
  v4 = 0;
  v5 = 0;
  v6 = a1[7];
  if ( v6 )
  {
    do
    {
      v7 = (_QWORD *)(v4 + a1[6]);
      if ( v7[4] )
      {
        v7[5] = 0;
        qfree();
      }
      if ( v7[1] )
      {
        v7[2] = 0;
        qfree();
      }
      ++v5;
      v4 += 56;
    }
    while ( v6 != v5 );
  }
  a1[7] = 0;
  if ( a1[8] < (unsigned __int64)a3 )
    a1[6] = qvector_reserve();
  result = (unsigned int)a3;
  if ( a3 > 0 )
  {
    v21 = a2 + 56LL * a3;
    do
    {
      v14 = *(_DWORD *)v3;
      v15 = *(_QWORD *)(v3 + 16);
      v3 += 56;
      v16 = nullptr;
      v19 = v14;
      v20 = *(_DWORD *)(v3 - 52);
      if ( v15 )
      {
        v10 = nullptr;
        v16 = (void *)qalloc_or_throw();
        memcpy(v16, *(const void **)(v3 - 48), v15);
        v9 = *(_QWORD *)(v3 - 16);
        if ( v9 )
        {
LABEL_17:
          v10 = (void *)qalloc_or_throw();
          memcpy(v10, *(const void **)(v3 - 24), v9);
        }
      }
      else
      {
        v9 = *(_QWORD *)(v3 - 16);
        v10 = nullptr;
        if ( v9 )
          goto LABEL_17;
      }
      v11 = a1[7];
      v12 = a1[6];
      if ( a1[8] < (unsigned __int64)(v11 + 1) )
      {
        v17 = qvector_reserve();
        a1[6] = v17;
        v12 = v17;
        v11 = a1[7];
      }
      v13 = v12 + 56 * v11;
      *(_QWORD *)v13 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), _mm_cvtsi32_si128(v20)).m128i_u64[0];
      *(_QWORD *)(v13 + 8) = v16;
      *(__m128i *)(v13 + 16) = _mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
      *(_QWORD *)(v13 + 32) = v10;
      *(__m128i *)(v13 + 40) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
      result = v21;
      ++a1[7];
    }
    while ( v3 != v21 );
  }
  return result;
}

