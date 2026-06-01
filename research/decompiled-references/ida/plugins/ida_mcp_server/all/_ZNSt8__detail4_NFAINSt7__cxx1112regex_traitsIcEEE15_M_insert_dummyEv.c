unsigned __int64 __fastcall std::__detail::_NFA<std::regex_traits<char>>::_M_insert_dummy(__int64 a1)
{
  __m128i *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // [rsp+8h] [rbp-60h]
  __m128i v8; // [rsp+10h] [rbp-58h] BYREF
  __m128i v9; // [rsp+20h] [rbp-48h] BYREF
  __m128i v10; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-20h]

  v1 = *(__m128i **)(a1 + 64);
  v11 = __readfsqword(0x28u);
  v2 = a1;
  v8.m128i_i32[0] = 10;
  v8.m128i_i64[1] = -1;
  if ( v1 == *(__m128i **)(a1 + 72) )
  {
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v2 = a1;
    v3 = *(_QWORD *)(a1 + 64);
  }
  else
  {
    *v1 = _mm_load_si128(&v8);
    v1[1] = _mm_load_si128(&v9);
    v1[2] = _mm_load_si128(&v10);
    v3 = *(_QWORD *)(a1 + 64) + 48LL;
    *(_QWORD *)(a1 + 64) = v3;
  }
  v4 = v3 - *(_QWORD *)(v2 + 56);
  if ( v4 > 4800000 )
    std::__throw_regex_error();
  v5 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 4) - 1;
  if ( v8.m128i_i32[0] == 11 && v10.m128i_i64[0] )
  {
    v7 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 4) - 1;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v10.m128i_i64[0])(&v9, &v9, 3);
    return v7;
  }
  return v5;
}

