__int64 *__fastcall sub_3AA3E0(
        __int64 *a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        __m128 a8)
{
  __int64 v8; // rbp
  __int64 *v9; // rbx
  __m128 v10; // xmm2
  __m128i v11; // xmm3
  __int64 v12; // r13
  int v13; // r12d
  unsigned __int64 v14; // xmm6_8
  __int128 v15; // xmm1
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rbp
  __m128i v19; // xmm0
  __int64 v20; // rax
  int v21; // eax
  __int64 *result; // rax
  __int64 v23; // rdi
  __m128i v24; // xmm4
  __m128i v25; // [rsp+0h] [rbp-58h] BYREF
  __m128i v26; // [rsp+10h] [rbp-48h] BYREF
  __m128i v27[3]; // [rsp+20h] [rbp-38h] BYREF

  v27[1].m128i_i64[1] = v8;
  v9 = a1;
  v10 = (__m128)_mm_loadu_si128((const __m128i *)a1);
  v11 = _mm_loadu_si128((const __m128i *)(a1 + 3));
  *(_OWORD *)(a1 + 3) = 0;
  v12 = a1[2];
  v13 = *((_DWORD *)a1 + 10);
  a1[2] = 0;
  v14 = _mm_movehl_ps(a8, v10).m128_u64[0];
  v27[0] = (__m128i)v10;
  v26 = v11;
  if ( v14 < *(a1 - 5) )
  {
    v9 = a1 - 6;
    v15 = 0;
    while ( 1 )
    {
      v16 = *v9;
      v17 = v9[8];
      v18 = v9[2];
      v19 = _mm_loadu_si128((const __m128i *)(v9 + 3));
      *(_OWORD *)(v9 + 3) = v15;
      v9[6] = v16;
      v20 = v9[1];
      v9[2] = 0;
      v9[7] = v20;
      if ( v17 )
      {
        v9[9] = 0;
        v25 = v19;
        qfree(v17);
        v19 = _mm_load_si128(&v25);
        v15 = 0;
      }
      v21 = *((_DWORD *)v9 + 10);
      v9[8] = v18;
      *(__m128i *)(v9 + 9) = v19;
      *((_DWORD *)v9 + 22) = v21;
      result = v9 - 6;
      if ( v14 >= *(v9 - 5) )
        break;
      v9 -= 6;
    }
    v23 = v9[2];
    *(__m128i *)v9 = _mm_load_si128(v27);
    if ( v23 )
    {
      v9[3] = 0;
      result = (__int64 *)qfree(v23);
    }
  }
  v24 = _mm_load_si128(&v26);
  v9[2] = v12;
  *((_DWORD *)v9 + 10) = v13;
  *(__m128i *)(v9 + 3) = v24;
  return result;
}

