__m128i *__fastcall sub_18BA40(const __m128i **a1, unsigned __int64 a2, int a3, char a4)
{
  __m128i v4; // xmm1
  __int64 v8; // rdx
  __m128i *result; // rax
  int v10; // edi
  int v11; // edx
  bool v12; // zf
  __int32 v13; // esi
  __m128i *v14; // rcx
  __m128i v15; // xmm0
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  const __m128i *v19; // rcx
  const __m128i *v20; // r15
  const __m128i *v21; // rdi
  __m128i si128; // xmm1
  __int64 v23; // rcx
  __int64 v24; // rdx
  __m128i v25; // xmm0
  __m128i v27[4]; // [rsp+0h] [rbp-48h] BYREF

  v4 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
  v8 = (__int64)a1[1];
  if ( !v8 )
  {
    if ( a1[2] )
    {
      v16 = (__int64)*a1;
    }
    else
    {
      v27[0] = v4;
      v18 = qvector_reserve();
      v19 = a1[1];
      v20 = a1[2];
      a1[2] = nullptr;
      v21 = *a1;
      si128 = _mm_load_si128(v27);
      v16 = v18;
      v23 = (__int64)&v19[-1].m128i_i64[1] + 7;
      if ( v23 >= 0 )
      {
        v24 = v18;
        do
        {
          v25 = _mm_loadu_si128(v21);
          v24 += 32;
          v21 += 2;
          *(__m128i *)(v24 - 32) = v25;
          *(__m128i *)(v24 - 16) = _mm_loadu_si128(v21 - 1);
        }
        while ( v23-- != 0 );
      }
      v27[0] = si128;
      qfree();
      *a1 = (const __m128i *)v16;
      v8 = (__int64)a1[1];
      a1[2] = v20;
      v4 = _mm_load_si128(v27);
    }
    v17 = v16 + 32 * v8;
    *(_QWORD *)(v17 + 16) = 0;
    *(_DWORD *)(v17 + 24) = 0;
    *(_OWORD *)v17 = 0;
    v8 = (__int64)a1[1]->m128i_i64 + 1;
    a1[1] = (const __m128i *)v8;
  }
  result = (__m128i *)*a1;
  v10 = a2 - a3;
  if ( 32 * v8 )
  {
    do
    {
      v15 = _mm_loadu_si128(result);
      if ( a4 )
      {
        v11 = -1;
        *result = _mm_sub_epi64(v15, v4);
        v12 = v10 == 0;
        if ( v10 >= 0 )
        {
LABEL_5:
          if ( v12 )
          {
            v13 = result[1].m128i_i32[2];
            v14 = (__m128i *)((char *)result + 24);
          }
          else
          {
            v13 = result[1].m128i_i32[0];
            v14 = result + 1;
          }
          goto LABEL_7;
        }
      }
      else
      {
        v11 = 1;
        *result = _mm_add_epi64(v15, v4);
        v12 = v10 == 0;
        if ( v10 >= 0 )
          goto LABEL_5;
      }
      v13 = result[1].m128i_i32[1];
      v14 = (__m128i *)((char *)result + 20);
LABEL_7:
      result += 2;
      v14->m128i_i32[0] = v13 + v11;
    }
    while ( result != &(*a1)[2 * (_QWORD)a1[1]] );
  }
  return result;
}

