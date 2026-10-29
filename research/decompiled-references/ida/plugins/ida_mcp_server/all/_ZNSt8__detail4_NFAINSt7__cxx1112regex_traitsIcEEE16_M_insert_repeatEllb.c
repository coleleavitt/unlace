unsigned __int64 __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_repeat(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int8 a4)
{
  __m128i *v4; // rax
  __int64 v5; // r8
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+8h] [rbp-90h]
  unsigned __int64 v14; // [rsp+8h] [rbp-90h]
  __m128i v15; // [rsp+10h] [rbp-88h] BYREF
  __m128i v16; // [rsp+20h] [rbp-78h] BYREF
  __m128i v17; // [rsp+30h] [rbp-68h] BYREF
  __m128i v18; // [rsp+40h] [rbp-58h]
  __m128i v19; // [rsp+50h] [rbp-48h] BYREF
  __m128i v20; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+78h] [rbp-20h]

  v4 = *(__m128i **)(a1 + 64);
  v21 = __readfsqword(0x28u);
  v5 = a1;
  v16.m128i_i64[0] = a3;
  v16.m128i_i8[8] = a4;
  v6 = _mm_load_si128(&v16);
  v15.m128i_i32[0] = 2;
  v15.m128i_i64[1] = a2;
  v7 = _mm_load_si128(&v15);
  v19 = v6;
  v8 = _mm_load_si128(&v17);
  v18 = v7;
  v20 = v8;
  if ( v4 == *(__m128i **)(a1 + 72) )
  {
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v5 = a1;
    v9 = *(_QWORD *)(a1 + 64);
  }
  else
  {
    *v4 = v7;
    v4[1] = _mm_load_si128(&v19);
    v4[2] = _mm_load_si128(&v20);
    v9 = *(_QWORD *)(a1 + 64) + 48LL;
    *(_QWORD *)(a1 + 64) = v9;
  }
  v10 = v9 - *(_QWORD *)(v5 + 56);
  if ( v10 > 4800000 )
    std::__throw_regex_error();
  v11 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 4) - 1;
  if ( v18.m128i_i32[0] == 11 && v20.m128i_i64[0] )
  {
    v13 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 4) - 1;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v20.m128i_i64[0])(&v19, &v19, 3);
    v11 = v13;
    if ( v15.m128i_i32[0] != 11 )
      return v11;
  }
  else if ( v15.m128i_i32[0] != 11 )
  {
    return v11;
  }
  if ( v17.m128i_i64[0] )
  {
    v14 = v11;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v17.m128i_i64[0])(&v16, &v16, 3);
    return v14;
  }
  return v11;
}

