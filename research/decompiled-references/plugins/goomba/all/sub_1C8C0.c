__int64 __fastcall sub_1C8C0(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rbp
  __m128i v4; // xmm1
  __int64 v5; // rdx
  unsigned __int64 v6; // r13
  __int64 result; // rax
  _QWORD *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  _QWORD *v12; // rdi
  __int64 v13; // xmm1_8
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rsi
  __m128i v19[3]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a2->m128i_i64[1];
  v4 = _mm_loadl_epi64(a2);
  if ( v3 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v3 + 8), 1u);
    else
      ++*(_DWORD *)(v3 + 8);
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 16);
  result = v5 + 1;
  if ( v6 < v5 + 1 )
  {
    v19[0].m128i_i64[0] = v4.m128i_i64[0];
    v9 = qvector_reserve(a1, 0, v5 + 1, 16);
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_QWORD *)(a1 + 16);
    v8 = (_QWORD *)v9;
    *(_QWORD *)(a1 + 16) = v6;
    v12 = *(_QWORD **)a1;
    v13 = v19[0].m128i_i64[0];
    v14 = v10 - 1;
    if ( v14 >= 0 )
    {
      v15 = v9;
      do
      {
        v16 = *v12;
        v12 += 2;
        v15 += 16;
        *(_QWORD *)(v15 - 8) = 0;
        *(_QWORD *)(v15 - 16) = v16;
        v17 = *(v12 - 1);
        *((_OWORD *)v12 - 1) = 0;
        *(_QWORD *)(v15 - 8) = v17;
      }
      while ( v14-- != 0 );
      v12 = *(_QWORD **)a1;
    }
    v19[0].m128i_i64[0] = v13;
    result = qfree(v12);
    v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 16) = v11;
    v4 = _mm_loadl_epi64(v19);
  }
  else
  {
    v8 = *(_QWORD **)a1;
  }
  *(__m128i *)&v8[2 * v5] = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)v3);
  ++*(_QWORD *)(a1 + 8);
  return result;
}
