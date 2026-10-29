__int64 __fastcall sub_2BCA40(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // r12
  __m128i v10; // xmm0
  __m128i v11; // xmm1
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16[2]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *a1;
  v4 = a1[2];
  if ( a2 >= *a1 && a2 < v3 + 24 * v4 )
  {
    v9 = *(_QWORD *)a2;
    v10 = _mm_loadl_epi64((const __m128i *)(a2 + 8));
    *(_QWORD *)a2 = 0;
    v11 = _mm_loadl_epi64((const __m128i *)(a2 + 16));
    *(_OWORD *)(a2 + 8) = 0;
    v12 = a1[1];
    v13 = *a1;
    if ( a1[2] < (unsigned __int64)(v12 + 1) )
    {
      v16[0].m128i_i64[1] = v11.m128i_i64[0];
      v16[0].m128i_i64[0] = v10.m128i_i64[0];
      v15 = qvector_reserve();
      v12 = a1[1];
      v10 = _mm_loadl_epi64(v16);
      *a1 = v15;
      v13 = v15;
      v11 = _mm_loadl_epi64((const __m128i *)&v16[0].m128i_u64[1]);
    }
    result = v13 + 24 * v12;
    *(_QWORD *)result = v9;
    *(__m128i *)(result + 8) = _mm_unpacklo_epi64(v10, v11);
    ++a1[1];
  }
  else
  {
    v5 = a1[1];
    if ( v4 < v5 + 1 )
    {
      v14 = qvector_reserve();
      *a1 = v14;
      v3 = v14;
      v5 = a1[1];
    }
    v6 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    v7 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0;
    result = v3 + 24 * v5;
    *(__m128i *)(result + 8) = v6;
    *(_QWORD *)result = v7;
    *(_OWORD *)(a2 + 8) = 0;
    ++a1[1];
  }
  return result;
}

