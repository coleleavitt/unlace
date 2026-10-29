unsigned __int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<false,true>(
        _QWORD *a1)
{
  _BYTE *v1; // rax
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  __m128i v4; // xmm1
  __m128i v5; // xmm2
  __int64 v6; // rax
  __m128i v7; // xmm1
  __int64 v8; // rcx
  __int64 v9; // rcx
  __m128i v10; // xmm1
  __int64 v11; // rax
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v16; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v18; // [rsp+18h] [rbp-C0h]
  __m128i v19; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-98h]
  __m128i v21; // [rsp+50h] [rbp-88h] BYREF
  __m128i v22; // [rsp+60h] [rbp-78h] BYREF
  __int128 v23; // [rsp+70h] [rbp-68h]
  __m128i v24; // [rsp+80h] [rbp-58h]
  __m128i v25; // [rsp+90h] [rbp-48h] BYREF
  __m128i v26; // [rsp+A0h] [rbp-38h] BYREF
  unsigned __int64 v27; // [rsp+B8h] [rbp-20h]

  v1 = (_BYTE *)a1[34];
  v2 = a1[48];
  v27 = __readfsqword(0x28u);
  v3 = (_QWORD *)a1[32];
  LOBYTE(v1) = *v1;
  v19.m128i_i64[0] = v2;
  v21.m128i_i32[0] = 11;
  v19.m128i_i8[8] = (char)v1;
  v4 = _mm_load_si128(&v19);
  v20 = 0;
  v21.m128i_i64[1] = -1;
  v5 = _mm_load_si128(&v21);
  v26.m128i_i64[1] = (__int64)std::_Function_handler<bool ()(char),std::__detail::_CharMatcher<std::regex_traits<char>,false,true>>::_M_invoke;
  v24 = v5;
  v26.m128i_i64[0] = (__int64)std::_Function_handler<bool ()(char),std::__detail::_CharMatcher<std::regex_traits<char>,false,true>>::_M_manager;
  v25 = v4;
  v6 = v3[8];
  v22 = v4;
  v23 = 0;
  if ( v6 == v3[9] )
  {
    v16.m128i_i64[0] = (__int64)v3;
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v3 = (_QWORD *)v16.m128i_i64[0];
    v11 = *(_QWORD *)(v16.m128i_i64[0] + 64);
  }
  else
  {
    v7 = _mm_load_si128(&v26);
    *(__m128i *)v6 = v5;
    *(__m128i *)(v6 + 32) = v7;
    v8 = v26.m128i_i64[1];
    *(_QWORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 40) = v8;
    v9 = v26.m128i_i64[0];
    *(_OWORD *)(v6 + 16) = 0;
    if ( v9 )
    {
      v10 = _mm_load_si128(&v25);
      *(_QWORD *)(v6 + 32) = v9;
      v26 = 0;
      *(__m128i *)(v6 + 16) = v10;
    }
    v11 = v3[8] + 48LL;
    v3[8] = v11;
  }
  v12 = v11 - v3[7];
  if ( v12 > 4800000 )
    std::__throw_regex_error();
  v13 = _mm_unpacklo_epi64(
          (__m128i)(0xAAAAAAAAAAAAAAABLL * (v12 >> 4) - 1),
          (__m128i)(0xAAAAAAAAAAAAAAABLL * (v12 >> 4) - 1));
  if ( v24.m128i_i32[0] == 11 && v26.m128i_i64[0] )
  {
    v16 = v13;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v26.m128i_i64[0])(&v25, &v25, 3);
    v13 = _mm_load_si128(&v16);
  }
  if ( v21.m128i_i32[0] == 11 && (_QWORD)v23 )
  {
    v16 = v13;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v23)(&v22, &v22, 3);
    v13 = _mm_load_si128(&v16);
  }
  v14 = a1[32];
  v18 = v13;
  v17 = v14;
  std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
    a1 + 38,
    (const __m128i *)&v17);
  if ( (_QWORD)v20 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v20)(&v19, &v19, 3);
  return v27 - __readfsqword(0x28u);
}

