unsigned __int64 __fastcall sub_5A430(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // ebp
  int v5; // r12d
  bool v6; // zf
  __m128i v7; // xmm0
  __m128 *v8; // rsi
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __m128i v16; // [rsp+0h] [rbp-48h] BYREF
  __m128i v17; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+20h] [rbp-28h]
  unsigned __int64 v19; // [rsp+28h] [rbp-20h]

  v4 = a4;
  v19 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 24) = 10;
  *(_QWORD *)(a1 + 8) = 0;
  v5 = *(unsigned __int16 *)(a3 + 24);
  v6 = *(_BYTE *)(a3 + 81) == 5;
  LOWORD(v18) = *(_WORD *)(a3 + 24);
  v7 = (__m128i)_mm_loadh_ps((const double *)(a3 + 16));
  v17 = v7;
  if ( v6 )
    v4 = a4 | (*(_BYTE *)(a3 + 121) == 0);
  v8 = *(__m128 **)a1;
  WORD1(v18) = v4;
  v9 = *(_QWORD *)(a1 + 16);
  if ( &v17 >= (__m128i *)v8 && &v17 < (__m128i *)((char *)v8 + 24 * v9) )
  {
    if ( !v9 )
    {
      v16 = v7;
      v14 = qvector_reserve(a1, v8, 1, 24);
      v15 = *(_QWORD *)(a1 + 8);
      v7 = _mm_load_si128(&v16);
      *(_QWORD *)a1 = v14;
      v8 = (__m128 *)(v14 + 24 * v15);
    }
    *v8 = (__m128)v7;
    v8[1].m128_i32[0] = v5 | (v4 << 16);
  }
  else
  {
    if ( !v9 )
    {
      v12 = qvector_reserve(a1, v8, 1, 24);
      v13 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v12;
      v8 = (__m128 *)(v12 + 24 * v13);
    }
    v10 = _mm_load_si128(&v17);
    v8[1].m128_u64[0] = v18;
    *v8 = (__m128)v10;
  }
  ++*(_QWORD *)(a1 + 8);
  return v19 - __readfsqword(0x28u);
}

