__int64 __fastcall sub_3A6260(__int64 *a1, double a2, double a3, double a4, double a5, double a6, double a7, __m128 a8)
{
  __int64 *v8; // rbx
  __m128 v9; // xmm2
  __m128i v10; // xmm3
  __int64 v11; // r13
  int v12; // r12d
  unsigned __int64 v13; // xmm6_8
  __int128 v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbp
  __m128i v18; // xmm0
  __int64 v19; // rax
  int v20; // eax
  __int64 result; // rax
  __int64 v22; // rdi
  __m128i v23; // xmm4
  __m128i v24; // [rsp+0h] [rbp-58h] BYREF
  __m128i v25; // [rsp+10h] [rbp-48h] BYREF
  __m128i v26[3]; // [rsp+20h] [rbp-38h] BYREF

  v8 = a1;
  v9 = (__m128)_mm_loadu_si128((const __m128i *)a1);
  v10 = _mm_loadu_si128((const __m128i *)(a1 + 3));
  *(_OWORD *)(a1 + 3) = 0;
  v11 = a1[2];
  v12 = *((_DWORD *)a1 + 10);
  a1[2] = 0;
  v13 = _mm_movehl_ps(a8, v9).m128_u64[0];
  v26[0] = (__m128i)v9;
  v25 = v10;
  if ( v13 < *(a1 - 5) )
  {
    v8 = a1 - 6;
    v14 = 0;
    while ( 1 )
    {
      v15 = *v8;
      v16 = v8[8];
      v17 = v8[2];
      v18 = _mm_loadu_si128((const __m128i *)(v8 + 3));
      *(_OWORD *)(v8 + 3) = v14;
      v8[6] = v15;
      v19 = v8[1];
      v8[2] = 0;
      v8[7] = v19;
      if ( v16 )
      {
        v8[9] = 0;
        v24 = v18;
        qfree();
        v18 = _mm_load_si128(&v24);
        v14 = 0;
      }
      v20 = *((_DWORD *)v8 + 10);
      v8[8] = v17;
      *(__m128i *)(v8 + 9) = v18;
      *((_DWORD *)v8 + 22) = v20;
      result = (__int64)(v8 - 6);
      if ( v13 >= *(v8 - 5) )
        break;
      v8 -= 6;
    }
    v22 = v8[2];
    *(__m128i *)v8 = _mm_load_si128(v26);
    if ( v22 )
    {
      v8[3] = 0;
      result = qfree();
    }
  }
  v23 = _mm_load_si128(&v25);
  v8[2] = v11;
  *((_DWORD *)v8 + 10) = v12;
  *(__m128i *)(v8 + 3) = v23;
  return result;
}

