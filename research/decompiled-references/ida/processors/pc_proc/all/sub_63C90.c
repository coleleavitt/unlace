__int64 __fastcall sub_63C90(
        const __m128i *a1,
        double a2,
        double a3,
        __m128 a4,
        __int64 a5,
        const __m128i *a6,
        char a7,
        int a8,
        int a9,
        int a10)
{
  __int64 v13; // rax
  __m128 si128; // xmm0
  unsigned __int64 v15; // rbp
  _QWORD *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22[3]; // [rsp+0h] [rbp-38h] BYREF

  a1[1] = _mm_loadu_si128(a6);
  v13 = getseg();
  a1[2].m128i_i64[0] = v13;
  if ( !v13 )
    return 0;
  if ( *(_QWORD *)(v13 + 8) < a1[1].m128i_i64[1] )
    return 0;
  *(_BYTE *)(a1->m128i_i64[1] + 96) = a7;
  *(_DWORD *)(a1->m128i_i64[1] + 88) = a8;
  *(_DWORD *)(a1->m128i_i64[1] + 92) = a9;
  *(_BYTE *)(a1->m128i_i64[1] + 97) = a10;
  si128 = (__m128)_mm_loadu_si128(a1 + 1);
  v15 = a1[1].m128i_i64[0] + a10;
  if ( _mm_movehl_ps(a4, si128).m128_u64[0] < v15 )
    return 0;
  v17 = (_QWORD *)a1->m128i_i64[1];
  v18 = v17[7];
  v19 = v17[6];
  if ( v17[8] < (unsigned __int64)(v18 + 1) )
  {
    v22[0] = (__m128i)si128;
    v21 = qvector_reserve();
    v18 = v17[7];
    si128 = (__m128)_mm_load_si128(v22);
    v17[6] = v21;
    v19 = v21;
  }
  v20 = v19 + 24 * v18;
  *(_OWORD *)v20 = 0;
  ++v17[7];
  *(_QWORD *)(v20 + 16) = v15;
  *(__m128 *)v20 = si128;
  return 1;
}

