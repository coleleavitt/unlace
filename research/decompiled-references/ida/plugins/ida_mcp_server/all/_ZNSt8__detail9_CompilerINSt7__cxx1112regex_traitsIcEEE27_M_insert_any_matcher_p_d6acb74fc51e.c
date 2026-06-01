unsigned __int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<true,true>(
        _QWORD *a1)
{
  unsigned __int64 v1; // rax
  _QWORD *v2; // rdx
  __m128i v3; // xmm1
  __m128i v4; // xmm2
  __int64 v5; // rax
  __m128i v6; // xmm1
  __int64 v7; // rcx
  __int64 v8; // rcx
  __m128i v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v15; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v17; // [rsp+18h] [rbp-C0h]
  __m128i v18; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v19; // [rsp+40h] [rbp-98h]
  __m128i v20; // [rsp+50h] [rbp-88h] BYREF
  __m128i v21; // [rsp+60h] [rbp-78h] BYREF
  __int128 v22; // [rsp+70h] [rbp-68h]
  __m128i v23; // [rsp+80h] [rbp-58h]
  __m128i v24; // [rsp+90h] [rbp-48h] BYREF
  __m128i v25; // [rsp+A0h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+B8h] [rbp-20h]

  v1 = a1[48];
  v2 = (_QWORD *)a1[32];
  v26 = __readfsqword(0x28u);
  v20.m128i_i32[0] = 11;
  v18 = (__m128i)v1;
  v3 = _mm_load_si128(&v18);
  v20.m128i_i64[1] = -1;
  v4 = _mm_load_si128(&v20);
  v25.m128i_i64[1] = (__int64)std::_Function_handler<bool ()(char),std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true>>::_M_invoke;
  v23 = v4;
  v25.m128i_i64[0] = (__int64)std::_Function_handler<bool ()(char),std::__detail::_AnyMatcher<std::regex_traits<char>,false,true,true>>::_M_manager;
  v24 = v3;
  v5 = v2[8];
  v19 = 0;
  v21 = v3;
  v22 = 0;
  if ( v5 == v2[9] )
  {
    v15.m128i_i64[0] = (__int64)v2;
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v2 = (_QWORD *)v15.m128i_i64[0];
    v10 = *(_QWORD *)(v15.m128i_i64[0] + 64);
  }
  else
  {
    v6 = _mm_load_si128(&v25);
    *(__m128i *)v5 = v4;
    *(__m128i *)(v5 + 32) = v6;
    v7 = v25.m128i_i64[1];
    *(_QWORD *)(v5 + 32) = 0;
    *(_QWORD *)(v5 + 40) = v7;
    v8 = v25.m128i_i64[0];
    *(_OWORD *)(v5 + 16) = 0;
    if ( v8 )
    {
      v9 = _mm_load_si128(&v24);
      *(_QWORD *)(v5 + 32) = v8;
      v25 = 0;
      *(__m128i *)(v5 + 16) = v9;
    }
    v10 = v2[8] + 48LL;
    v2[8] = v10;
  }
  v11 = v10 - v2[7];
  if ( v11 > 4800000 )
    std::__throw_regex_error();
  v12 = _mm_unpacklo_epi64(
          (__m128i)(0xAAAAAAAAAAAAAAABLL * (v11 >> 4) - 1),
          (__m128i)(0xAAAAAAAAAAAAAAABLL * (v11 >> 4) - 1));
  if ( v23.m128i_i32[0] == 11 && v25.m128i_i64[0] )
  {
    v15 = v12;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v25.m128i_i64[0])(&v24, &v24, 3);
    v12 = _mm_load_si128(&v15);
  }
  if ( v20.m128i_i32[0] == 11 && (_QWORD)v22 )
  {
    v15 = v12;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v22)(&v21, &v21, 3);
    v12 = _mm_load_si128(&v15);
  }
  v13 = a1[32];
  v17 = v12;
  v16 = v13;
  std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
    a1 + 38,
    (const __m128i *)&v16);
  if ( (_QWORD)v19 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v19)(&v18, &v18, 3);
  return v26 - __readfsqword(0x28u);
}

