unsigned __int64 __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_subexpr_end(_QWORD *a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v11; // [rsp+8h] [rbp-90h]
  unsigned __int64 v12; // [rsp+8h] [rbp-90h]
  __m128i v13; // [rsp+10h] [rbp-88h] BYREF
  __m128i v14; // [rsp+20h] [rbp-78h] BYREF
  __m128i v15; // [rsp+30h] [rbp-68h] BYREF
  __m128i v16; // [rsp+40h] [rbp-58h]
  __m128i v17; // [rsp+50h] [rbp-48h] BYREF
  __m128i v18; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp-20h]

  v1 = a1[1];
  v19 = __readfsqword(0x28u);
  v2 = a1;
  v13.m128i_i32[0] = 9;
  v13.m128i_i64[1] = -1;
  v3 = *(_QWORD *)(v1 - 8);
  v4 = _mm_load_si128(&v13);
  a1[1] = v1 - 8;
  v14.m128i_i64[0] = v3;
  v5 = _mm_load_si128(&v14);
  v6 = (__m128i *)a1[8];
  v16 = v4;
  v17 = v5;
  v18 = _mm_load_si128(&v15);
  if ( v6 == (__m128i *)a1[9] )
  {
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v2 = a1;
    v7 = a1[8];
  }
  else
  {
    *v6 = v4;
    v6[1] = _mm_load_si128(&v17);
    v6[2] = _mm_load_si128(&v18);
    v7 = a1[8] + 48LL;
    a1[8] = v7;
  }
  v8 = v7 - v2[7];
  if ( v8 > 4800000 )
    std::__throw_regex_error();
  v9 = 0xAAAAAAAAAAAAAAABLL * (v8 >> 4) - 1;
  if ( v16.m128i_i32[0] == 11 && v18.m128i_i64[0] )
  {
    v11 = 0xAAAAAAAAAAAAAAABLL * (v8 >> 4) - 1;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v18.m128i_i64[0])(&v17, &v17, 3);
    v9 = v11;
    if ( v13.m128i_i32[0] != 11 )
      return v9;
  }
  else if ( v13.m128i_i32[0] != 11 )
  {
    return v9;
  }
  if ( v15.m128i_i64[0] )
  {
    v12 = v9;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v15.m128i_i64[0])(&v14, &v14, 3);
    return v12;
  }
  return v9;
}

