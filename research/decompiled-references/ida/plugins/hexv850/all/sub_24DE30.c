__int64 __fastcall sub_24DE30(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128i v10; // xmm0
  __int64 v11; // rax

  if ( *(_DWORD *)(a2 + 12) == -1 )
    return 0;
  v5 = a1[12];
  v6 = a1[11];
  v7 = v5 + 1;
  if ( a1[13] < (unsigned __int64)(v5 + 1) )
  {
    v11 = qvector_reserve();
    v5 = a1[12];
    a1[11] = v11;
    v6 = v11;
    v7 = v5 + 1;
  }
  v8 = a1[2];
  v9 = a1[3];
  a1[12] = v7;
  v10 = _mm_loadl_epi64((const __m128i *)(v8 + 8 * v9 - 8));
  *(__m128i *)(v6 + 16 * v5) = _mm_unpacklo_epi64(v10, (__m128i)a2);
  return 0;
}

