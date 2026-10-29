unsigned __int64 __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher(
        __int64 a1,
        const __m128i *a2)
{
  __m128 v2; // xmm0
  __int64 v3; // rdx
  __m128i v4; // xmm2
  __m128i v5; // xmm3
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __m128i v14; // xmm1
  unsigned __int64 v15; // [rsp+8h] [rbp-90h]
  unsigned __int64 v16; // [rsp+8h] [rbp-90h]
  __m128i v17; // [rsp+10h] [rbp-88h] BYREF
  __m128i v18; // [rsp+20h] [rbp-78h] BYREF
  __int128 v19; // [rsp+30h] [rbp-68h] BYREF
  __m128i v20; // [rsp+40h] [rbp-58h] BYREF
  __m128i v21; // [rsp+50h] [rbp-48h] BYREF
  __m128i v22; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp-20h]

  v2 = (__m128)_mm_loadu_si128(a2 + 1);
  v23 = __readfsqword(0x28u);
  v3 = a1;
  v17.m128i_i32[0] = 11;
  v17.m128i_i64[1] = -1;
  *(_QWORD *)&v19 = 0;
  if ( v2.m128_u64[0] )
  {
    v4 = _mm_loadu_si128(a2);
    v5 = _mm_load_si128(&v17);
    _mm_storeh_ps((double *)&v22.m128i_i64[1], v2);
    a2[1] = 0;
    v18 = v4;
    v20 = v5;
    v21 = v4;
    v22.m128i_i64[0] = v2.m128_u64[0];
    v19 = 0;
  }
  else
  {
    _mm_storeh_ps((double *)&v19 + 1, v2);
    v18 = 0;
    v14 = _mm_load_si128(&v17);
    v22.m128i_i64[0] = 0;
    v20 = v14;
    v21 = 0;
    _mm_storeh_ps((double *)&v22.m128i_i64[1], v2);
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 == *(_QWORD *)(a1 + 72) )
  {
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v3 = a1;
    v10 = *(_QWORD *)(a1 + 64);
  }
  else
  {
    *(__m128i *)v6 = _mm_load_si128(&v20);
    *(__m128i *)(v6 + 32) = _mm_load_si128(&v22);
    v7 = v22.m128i_i64[1];
    *(_QWORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 40) = v7;
    v8 = v22.m128i_i64[0];
    *(_OWORD *)(v6 + 16) = 0;
    if ( v8 )
    {
      v9 = _mm_load_si128(&v21);
      *(_QWORD *)(v6 + 32) = v8;
      *(__m128i *)(v6 + 16) = v9;
      v22 = 0;
    }
    v10 = *(_QWORD *)(a1 + 64) + 48LL;
    *(_QWORD *)(a1 + 64) = v10;
  }
  v11 = v10 - *(_QWORD *)(v3 + 56);
  if ( v11 > 4800000 )
    std::__throw_regex_error();
  v12 = 0xAAAAAAAAAAAAAAABLL * (v11 >> 4) - 1;
  if ( v20.m128i_i32[0] == 11 && v22.m128i_i64[0] )
  {
    v16 = 0xAAAAAAAAAAAAAAABLL * (v11 >> 4) - 1;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v22.m128i_i64[0])(&v21, &v21, 3);
    v12 = v16;
  }
  if ( v17.m128i_i32[0] == 11 && (_QWORD)v19 )
  {
    v15 = v12;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v19)(&v18, &v18, 3);
    return v15;
  }
  return v12;
}

