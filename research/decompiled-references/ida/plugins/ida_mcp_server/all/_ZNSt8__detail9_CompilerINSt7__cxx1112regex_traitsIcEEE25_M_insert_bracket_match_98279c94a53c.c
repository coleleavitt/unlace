unsigned __int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<true,false>(
        __int64 a1,
        char a2)
{
  __m128i v3; // xmm0
  char v4; // r13
  char v5; // al
  bool v6; // zf
  __int64 v7; // rax
  int v8; // edx
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __int64 inserted; // rax
  __int64 v17; // rdi
  char v18; // al
  char v19; // [rsp+6h] [rbp-11Ah]
  __int64 v20; // [rsp+8h] [rbp-118h] BYREF
  __m128i v21; // [rsp+10h] [rbp-110h]
  __int128 v22; // [rsp+28h] [rbp-F8h] BYREF
  __m128 v23; // [rsp+38h] [rbp-E8h]
  __m128i v24; // [rsp+48h] [rbp-D8h] BYREF
  __m128i v25; // [rsp+58h] [rbp-C8h] BYREF
  __m128i v26; // [rsp+68h] [rbp-B8h] BYREF
  __m128i v27; // [rsp+78h] [rbp-A8h] BYREF
  __m128i v28; // [rsp+88h] [rbp-98h] BYREF
  __m128i v29; // [rsp+98h] [rbp-88h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-78h]
  __m128i v31; // [rsp+B0h] [rbp-70h]
  char v32; // [rsp+C0h] [rbp-60h]
  __m128i v33; // [rsp+C8h] [rbp-58h] BYREF
  __m128i v34; // [rsp+D8h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+F0h] [rbp-30h]

  v35 = __readfsqword(0x28u);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v3 = _mm_loadl_epi64((const __m128i *)(a1 + 384));
  v30 = 0;
  v32 = a2;
  v31 = _mm_unpacklo_epi64(v3, v3);
  v33 = 0;
  v34 = 0;
  if ( (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char() )
  {
    v4 = **(_BYTE **)(a1 + 272);
    v5 = 1;
  }
  else
  {
    v4 = 0;
    v5 = 0;
    if ( *(_DWORD *)(a1 + 152) == 28 )
    {
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      v4 = 45;
      v5 = 1;
    }
  }
  do
  {
    v19 = v5;
    v6 = (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<true,false>() == 0;
    v5 = v19;
  }
  while ( !v6 );
  if ( v19 == 1 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v31.m128i_i64[0] + 8LL)
                    + 8 * std::locale::id::_M_id((std::locale::id *)&std::ctype<char>::id));
    if ( !v17 )
      std::__throw_bad_cast();
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 32LL))(v17, (unsigned int)v4);
    std::vector<char>::emplace_back<char>(&v24, v18);
  }
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::_M_ready();
  v22 = 0;
  v7 = operator new(0xA0u);
  *(_QWORD *)&v22 = v7;
  v8 = v30;
  *(__m128i *)v7 = _mm_load_si128(&v24);
  v9 = _mm_load_si128(&v25);
  *(_DWORD *)(v7 + 96) = v8;
  v10 = v31.m128i_i64[0];
  *(__m128i *)(v7 + 16) = v9;
  v11 = _mm_load_si128(&v26);
  *(_QWORD *)(v7 + 104) = v10;
  v12 = v31.m128i_i64[1];
  *(__m128i *)(v7 + 32) = v11;
  v13 = _mm_load_si128(&v27);
  *(_QWORD *)(v7 + 112) = v12;
  LOBYTE(v12) = v32;
  *(__m128i *)(v7 + 48) = v13;
  v14 = _mm_load_si128(&v28);
  *(_BYTE *)(v7 + 120) = v12;
  *(__m128i *)(v7 + 64) = v14;
  *(__m128i *)(v7 + 80) = _mm_load_si128(&v29);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  *(__m128i *)(v7 + 128) = _mm_load_si128(&v33);
  *(__m128i *)(v7 + 144) = _mm_load_si128(&v34);
  v23 = _mm_loadh_ps((const double *)std::_Function_handler<bool ()(char),std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>>::_M_invoke);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher();
  v20 = *(_QWORD *)(a1 + 256);
  v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)inserted, (__m128i)(unsigned __int64)inserted);
  std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
    (_QWORD *)(a1 + 304),
    (const __m128i *)&v20);
  if ( v23.m128_u64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v23.m128_u64[0])(&v22, &v22, 3);
  return v35 - __readfsqword(0x28u);
}

