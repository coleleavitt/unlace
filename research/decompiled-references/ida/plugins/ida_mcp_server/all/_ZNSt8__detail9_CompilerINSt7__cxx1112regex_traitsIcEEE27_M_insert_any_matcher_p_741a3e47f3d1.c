unsigned __int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_any_matcher_posix<false,false>(
        __int64 a1)
{
  _QWORD *v1; // rdx
  __m128i v2; // xmm2
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rcx
  __int64 v6; // rcx
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rax
  __m128i v13; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v15; // [rsp+18h] [rbp-C0h]
  __int128 v16; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+40h] [rbp-98h]
  __m128i v18; // [rsp+50h] [rbp-88h] BYREF
  __int128 v19; // [rsp+60h] [rbp-78h] BYREF
  __int128 v20; // [rsp+70h] [rbp-68h]
  __m128i v21; // [rsp+80h] [rbp-58h]
  __m128i v22; // [rsp+90h] [rbp-48h] BYREF
  __m128i v23; // [rsp+A0h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+B8h] [rbp-20h]

  v1 = *(_QWORD **)(a1 + 256);
  v24 = __readfsqword(0x28u);
  v18.m128i_i32[0] = 11;
  v18.m128i_i64[1] = -1;
  v2 = _mm_load_si128(&v18);
  v23.m128i_i64[1] = (__int64)std::_Function_handler<bool ()(char),std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>>::_M_invoke;
  v21 = v2;
  v23.m128i_i64[0] = (__int64)std::_Function_handler<bool ()(char),std::__detail::_AnyMatcher<std::regex_traits<char>,false,false,false>>::_M_manager;
  v22 = 0;
  v3 = v1[8];
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v20 = 0;
  if ( v3 == v1[9] )
  {
    v13.m128i_i64[0] = (__int64)v1;
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v1 = (_QWORD *)v13.m128i_i64[0];
    v8 = *(_QWORD *)(v13.m128i_i64[0] + 64);
  }
  else
  {
    v4 = _mm_load_si128(&v23);
    *(__m128i *)v3 = v2;
    *(__m128i *)(v3 + 32) = v4;
    v5 = v23.m128i_i64[1];
    *(_QWORD *)(v3 + 32) = 0;
    *(_QWORD *)(v3 + 40) = v5;
    v6 = v23.m128i_i64[0];
    *(_OWORD *)(v3 + 16) = 0;
    if ( v6 )
    {
      v7 = _mm_load_si128(&v22);
      *(_QWORD *)(v3 + 32) = v6;
      v23 = 0;
      *(__m128i *)(v3 + 16) = v7;
    }
    v8 = v1[8] + 48LL;
    v1[8] = v8;
  }
  v9 = v8 - v1[7];
  if ( v9 > 4800000 )
    std::__throw_regex_error();
  v10 = _mm_unpacklo_epi64(
          (__m128i)(0xAAAAAAAAAAAAAAABLL * (v9 >> 4) - 1),
          (__m128i)(0xAAAAAAAAAAAAAAABLL * (v9 >> 4) - 1));
  if ( v21.m128i_i32[0] == 11 && v23.m128i_i64[0] )
  {
    v13 = v10;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v23.m128i_i64[0])(&v22, &v22, 3);
    v10 = _mm_load_si128(&v13);
  }
  if ( v18.m128i_i32[0] == 11 && (_QWORD)v20 )
  {
    v13 = v10;
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v20)(&v19, &v19, 3);
    v10 = _mm_load_si128(&v13);
  }
  v11 = *(_QWORD *)(a1 + 256);
  v15 = v10;
  v14 = v11;
  std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
    (_QWORD *)(a1 + 304),
    (const __m128i *)&v14);
  if ( (_QWORD)v17 )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v17)(&v16, &v16, 3);
  return v24 - __readfsqword(0x28u);
}

