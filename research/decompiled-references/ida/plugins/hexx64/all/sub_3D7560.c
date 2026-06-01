__int64 __fastcall sub_3D7560(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // r13
  size_t v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // rax

  v4 = nullptr;
  v5 = *(_QWORD *)(a2 + 8);
  if ( v5 )
  {
    v4 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 8), a2, a3, a4);
    memcpy(v4, *(const void **)a2, v5);
  }
  v6 = a1[1];
  v7 = *a1;
  if ( a1[2] < (unsigned __int64)(v6 + 1) )
  {
    v9 = qvector_reserve((__int64)a1, v7, v6 + 1, 24);
    *a1 = v9;
    v6 = a1[1];
    v7 = v9;
  }
  result = v7 + 24 * v6;
  *(_QWORD *)result = v4;
  *(__m128i *)(result + 8) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  ++a1[1];
  return result;
}

