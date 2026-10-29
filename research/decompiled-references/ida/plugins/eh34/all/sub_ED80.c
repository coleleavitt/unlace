__int64 __fastcall sub_ED80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v5; // zf
  __m128i v9; // xmm0
  void *v10; // r14
  __m128i v11; // xmm1
  void *v12; // r13
  __m128i v13; // xmm0
  __m128i si128; // xmm1
  __int64 v15; // rdi
  size_t n[2]; // [rsp+0h] [rbp-78h] BYREF
  __m128i v17; // [rsp+10h] [rbp-68h] BYREF
  void *src; // [rsp+20h] [rbp-58h] BYREF
  __m128i v19; // [rsp+28h] [rbp-50h] BYREF
  char v20; // [rsp+38h] [rbp-40h]
  unsigned __int64 v21; // [rsp+48h] [rbp-30h]

  v5 = *(_BYTE *)(a2 + 188) == 0;
  v21 = __readfsqword(0x28u);
  if ( v5 && (sub_5FFF0(a2, a4, a5), sub_ECE0((__int64)&src, a2, a3, 0), v20) )
  {
    v9 = _mm_loadl_epi64(&v19);
    v10 = nullptr;
    if ( v9.m128i_i64[0] )
    {
      n[0] = v9.m128i_i64[0];
      v10 = (void *)qalloc_or_throw(v9.m128i_i64[0]);
      memcpy(v10, src, v9.m128i_u64[0]);
      v9 = _mm_loadl_epi64((const __m128i *)n);
    }
    v11 = v9;
    v12 = src;
    v5 = *(_BYTE *)(a2 + 168) == 0;
    v13 = (__m128i)_mm_loadh_ps((const double *)&v19.m128i_i64[1]);
    si128 = _mm_unpacklo_epi64(v11, v11);
    v19 = 0;
    src = nullptr;
    if ( !v5 )
    {
      v15 = *(_QWORD *)(a2 + 144);
      *(_BYTE *)(a2 + 168) = 0;
      if ( v15 )
      {
        *(_QWORD *)(a2 + 152) = 0;
        v17 = v13;
        *(__m128i *)n = si128;
        qfree(v15);
        v13 = _mm_load_si128(&v17);
        si128 = _mm_load_si128((const __m128i *)n);
      }
    }
    *(_QWORD *)(a2 + 144) = v12;
    *(_BYTE *)(a2 + 168) = 1;
    *(__m128i *)(a2 + 152) = v13;
    *(_QWORD *)a1 = v10;
    *(_BYTE *)(a1 + 24) = 1;
    *(__m128i *)(a1 + 8) = si128;
  }
  else
  {
    *(_BYTE *)(a1 + 24) = 0;
  }
  return a1;
}

