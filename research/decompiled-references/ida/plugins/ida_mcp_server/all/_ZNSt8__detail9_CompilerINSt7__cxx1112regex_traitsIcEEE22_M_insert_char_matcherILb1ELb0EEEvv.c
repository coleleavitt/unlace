unsigned __int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_char_matcher<true,false>(
        _QWORD *a1)
{
  __int64 v1; // r13
  char *v2; // rax
  _QWORD *v4; // rbp
  char v5; // r12
  __int64 v6; // rdi
  __int8 v7; // al
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __int64 v10; // rax
  __m128i v11; // xmm1
  __int64 v12; // rdx
  __int64 v13; // rdx
  __m128i v14; // xmm1
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v20; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-D8h] BYREF
  __m128i v22; // [rsp+18h] [rbp-D0h]
  __m128i v23; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+40h] [rbp-A8h]
  __m128i v25; // [rsp+50h] [rbp-98h] BYREF
  __m128i v26; // [rsp+60h] [rbp-88h] BYREF
  __int128 v27; // [rsp+70h] [rbp-78h]
  __m128i v28; // [rsp+80h] [rbp-68h]
  __m128i v29; // [rsp+90h] [rbp-58h] BYREF
  __m128i v30; // [rsp+A0h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+B8h] [rbp-30h]

  v1 = a1[48];
  v2 = (char *)a1[34];
  v31 = __readfsqword(0x28u);
  v4 = (_QWORD *)a1[32];
  v5 = *v2;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v1 + 8LL)
                 + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
  if ( !v6 )
    std::__throw_bad_cast();
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 32LL))(v6, (unsigned int)v5);
  v23.m128i_i64[0] = v1;
  v23.m128i_i8[8] = v7;
  v8 = _mm_load_si128(&v23);
  v25.m128i_i32[0] = 11;
  v25.m128i_i64[1] = -1;
  v9 = _mm_load_si128(&v25);
  v30.m128i_i64[1] = (__int64)std::_Function_handler<bool ()(char),std::__detail::_CharMatcher<std::regex_traits<char>,true,false>>::_M_invoke;
  v28 = v9;
  v30.m128i_i64[0] = (__int64)std::_Function_handler<bool ()(char),std::__detail::_CharMatcher<std::regex_traits<char>,true,false>>::_M_manager;
  v29 = v8;
  v10 = v4[8];
  v24 = 0;
  v26 = v8;
  v27 = 0;
  if ( v10 == v4[9] )
  {
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v15 = v4[8];
  }
  else
  {
    v11 = _mm_load_si128(&v30);
    *(__m128i *)v10 = v9;
    *(__m128i *)(v10 + 32) = v11;
    v12 = v30.m128i_i64[1];
    *(_QWORD *)(v10 + 32) = 0;
    *(_QWORD *)(v10 + 40) = v12;
    v13 = v30.m128i_i64[0];
    *(_OWORD *)(v10 + 16) = 0;
    if ( v13 )
    {
      v14 = _mm_load_si128(&v29);
      *(_QWORD *)(v10 + 32) = v13;
      v30 = 0;
      *(__m128i *)(v10 + 16) = v14;
    }
    v15 = v4[8] + 48LL;
    v4[8] = v15;
  }
  v16 = v15 - v4[7];
  if ( v16 > 4800000 )
    std::__throw_regex_error();
  v17 = _mm_unpacklo_epi64(
          (__m128i)(0xAAAAAAAAAAAAAAABLL * (v16 >> 4) - 1),
          (__m128i)(0xAAAAAAAAAAAAAAABLL * (v16 >> 4) - 1));
  if ( v28.m128i_i32[0] == 11 && v30.m128i_i64[0] )
  {
    v20 = v17;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v30.m128i_i64[0])(&v29, &v29, 3);
    v17 = _mm_load_si128(&v20);
  }
  if ( v25.m128i_i32[0] == 11 && (_QWORD)v27 )
  {
    v20 = v17;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v27)(&v26, &v26, 3);
    v17 = _mm_load_si128(&v20);
  }
  v18 = a1[32];
  v22 = v17;
  v21 = v18;
  std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
    a1 + 38,
    (const __m128i *)&v21);
  if ( (_QWORD)v24 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v24)(&v23, &v23, 3);
  return v31 - __readfsqword(0x28u);
}

