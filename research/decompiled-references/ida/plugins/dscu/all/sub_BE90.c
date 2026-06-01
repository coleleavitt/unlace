unsigned __int64 __fastcall sub_BE90(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r10
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // [rsp+0h] [rbp-78h] BYREF
  __m128i v8; // [rsp+10h] [rbp-68h] BYREF
  __m128i v9; // [rsp+20h] [rbp-58h] BYREF
  __m128i v10; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h]
  int v12; // [rsp+48h] [rbp-30h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  __int128 v14; // [rsp+58h] [rbp-20h]
  unsigned __int64 v15; // [rsp+68h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_9BC0(a3, &v8, &v8.m128i_u64[1]) )
  {
    v13 = 0;
    v14 = 0;
    v5 = _mm_loadl_epi64(&v8);
    v11 = 2;
    v12 = -1;
    v6 = (__m128i)_mm_loadh_ps((const double *)&v8.m128i_i64[1]);
    v10 = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)(v8.m128i_i64[1] - v5.m128i_i64[0]));
    if ( v8.m128i_i64[1] != v5.m128i_i64[0] )
    {
      v7 = v6;
      sub_6130(v3, (__int64)&v10);
      v6 = _mm_load_si128(&v7);
    }
    v9 = v6;
    rangeset_t_sub(a2, &v9);
  }
  return v15 - __readfsqword(0x28u);
}

