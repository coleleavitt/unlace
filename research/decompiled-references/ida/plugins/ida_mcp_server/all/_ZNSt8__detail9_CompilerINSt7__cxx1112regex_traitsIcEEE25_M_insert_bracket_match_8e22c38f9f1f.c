unsigned __int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_bracket_matcher<false,true>(
        __int64 a1,
        char a2)
{
  __m128i v2; // xmm0
  char v3; // si
  char v4; // al
  bool v5; // zf
  __int64 v6; // rax
  int v7; // edx
  __m128i v8; // xmm0
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 inserted; // rax
  char v16; // [rsp+6h] [rbp-11Ah]
  __int64 v17; // [rsp+8h] [rbp-118h] BYREF
  __m128i v18; // [rsp+10h] [rbp-110h]
  __int128 v19; // [rsp+28h] [rbp-F8h] BYREF
  __m128 v20; // [rsp+38h] [rbp-E8h]
  __m128i v21; // [rsp+48h] [rbp-D8h] BYREF
  __m128i v22; // [rsp+58h] [rbp-C8h] BYREF
  __m128i v23; // [rsp+68h] [rbp-B8h] BYREF
  __m128i v24; // [rsp+78h] [rbp-A8h] BYREF
  __m128i v25; // [rsp+88h] [rbp-98h] BYREF
  __m128i v26; // [rsp+98h] [rbp-88h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-78h]
  __m128i v28; // [rsp+B0h] [rbp-70h]
  char v29; // [rsp+C0h] [rbp-60h]
  __m128i v30; // [rsp+C8h] [rbp-58h] BYREF
  __m128i v31; // [rsp+D8h] [rbp-48h] BYREF
  unsigned __int64 v32; // [rsp+F0h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v2 = _mm_loadl_epi64((const __m128i *)(a1 + 384));
  v27 = 0;
  v29 = a2;
  v28 = _mm_unpacklo_epi64(v2, v2);
  v30 = 0;
  v31 = 0;
  if ( (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_try_char() )
  {
    v3 = **(_BYTE **)(a1 + 272);
    v4 = 1;
  }
  else
  {
    v3 = 0;
    v4 = 0;
    if ( *(_DWORD *)(a1 + 152) == 28 )
    {
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      v3 = 45;
      v4 = 1;
    }
  }
  do
  {
    v16 = v4;
    v5 = (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_expression_term<false,true>() == 0;
    v4 = v16;
  }
  while ( !v5 );
  if ( v16 == 1 )
    std::vector<char>::emplace_back<char>(&v21, v3);
  std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>::_M_ready();
  v19 = 0;
  v6 = operator new(0xA0u);
  *(_QWORD *)&v19 = v6;
  v7 = v27;
  *(__m128i *)v6 = _mm_load_si128(&v21);
  v8 = _mm_load_si128(&v22);
  *(_DWORD *)(v6 + 96) = v7;
  v9 = v28.m128i_i64[0];
  *(__m128i *)(v6 + 16) = v8;
  v10 = _mm_load_si128(&v23);
  *(_QWORD *)(v6 + 104) = v9;
  v11 = v28.m128i_i64[1];
  *(__m128i *)(v6 + 32) = v10;
  v12 = _mm_load_si128(&v24);
  *(_QWORD *)(v6 + 112) = v11;
  LOBYTE(v11) = v29;
  *(__m128i *)(v6 + 48) = v12;
  v13 = _mm_load_si128(&v25);
  *(_BYTE *)(v6 + 120) = v11;
  *(__m128i *)(v6 + 64) = v13;
  *(__m128i *)(v6 + 80) = _mm_load_si128(&v26);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  *(__m128i *)(v6 + 128) = _mm_load_si128(&v30);
  *(__m128i *)(v6 + 144) = _mm_load_si128(&v31);
  v20 = _mm_loadh_ps((const double *)&std::_Function_handler<bool ()(char),std::__detail::_BracketMatcher<std::regex_traits<char>,false,true>>::_M_invoke);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher();
  v17 = *(_QWORD *)(a1 + 256);
  v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)inserted, (__m128i)(unsigned __int64)inserted);
  std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
    (_QWORD *)(a1 + 304),
    (const __m128i *)&v17);
  if ( v20.m128_u64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v20.m128_u64[0])(&v19, &v19, 3);
  return v32 - __readfsqword(0x28u);
}

