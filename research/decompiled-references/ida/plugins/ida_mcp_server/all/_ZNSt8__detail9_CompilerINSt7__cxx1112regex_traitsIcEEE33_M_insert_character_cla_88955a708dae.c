unsigned __int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<true,true>(
        const __m128i *a1)
{
  unsigned __int8 *v1; // rsi
  __int64 v2; // rax
  __m128i v3; // xmm1
  int v4; // eax
  __int64 v5; // rax
  int v6; // edx
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __int64 inserted; // rax
  __int64 v15; // [rsp+0h] [rbp-118h] BYREF
  __m128i v16; // [rsp+8h] [rbp-110h]
  __int128 v17; // [rsp+20h] [rbp-F8h] BYREF
  __m128 v18; // [rsp+30h] [rbp-E8h]
  __m128i v19; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v20; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v21; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v22; // [rsp+70h] [rbp-A8h] BYREF
  __m128i v23; // [rsp+80h] [rbp-98h] BYREF
  __m128i v24; // [rsp+90h] [rbp-88h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-78h]
  __m128i v26; // [rsp+A8h] [rbp-70h]
  char v27; // [rsp+B8h] [rbp-60h]
  __m128i v28; // [rsp+C0h] [rbp-58h] BYREF
  __m128i v29; // [rsp+D0h] [rbp-48h] BYREF
  unsigned __int64 v30; // [rsp+E8h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v1 = (unsigned __int8 *)a1[17].m128i_i64[0];
  v2 = a1[24].m128i_i64[1];
  v25 = 0;
  v3 = _mm_loadu_si128(a1 + 24);
  LOBYTE(v2) = *(_BYTE *)(*(_QWORD *)(v2 + 48) + 2LL * *v1 + 1);
  v26 = _mm_unpacklo_epi64(v3, v3);
  v28 = 0;
  v27 = v2 & 1;
  v29 = 0;
  v4 = std::regex_traits<char>::lookup_classname<char const*>();
  if ( (v4 & 0x10000) == 0 && !(_WORD)v4 )
    std::__throw_regex_error();
  LOWORD(v25) = v4;
  BYTE2(v25) = BYTE2(v4);
  std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::_M_ready();
  v17 = 0;
  v5 = operator new(0xA0u);
  *(_QWORD *)&v17 = v5;
  v6 = v25;
  *(__m128i *)v5 = _mm_load_si128(&v19);
  v7 = _mm_load_si128(&v20);
  *(_DWORD *)(v5 + 96) = v6;
  v8 = v26.m128i_i64[0];
  *(__m128i *)(v5 + 16) = v7;
  v9 = _mm_load_si128(&v21);
  *(_QWORD *)(v5 + 104) = v8;
  v10 = v26.m128i_i64[1];
  *(__m128i *)(v5 + 32) = v9;
  v11 = _mm_load_si128(&v22);
  *(_QWORD *)(v5 + 112) = v10;
  LOBYTE(v10) = v27;
  *(__m128i *)(v5 + 48) = v11;
  v12 = _mm_load_si128(&v23);
  *(_BYTE *)(v5 + 120) = v10;
  *(__m128i *)(v5 + 64) = v12;
  *(__m128i *)(v5 + 80) = _mm_load_si128(&v24);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  *(__m128i *)(v5 + 128) = _mm_load_si128(&v28);
  *(__m128i *)(v5 + 144) = _mm_load_si128(&v29);
  v18 = _mm_loadh_ps((const double *)&std::_Function_handler<bool ()(char),std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>>::_M_invoke);
  inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_matcher();
  v15 = a1[16].m128i_i64[0];
  v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)inserted, (__m128i)(unsigned __int64)inserted);
  std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
    (const __m128i *)a1[19].m128i_i64,
    (const __m128i *)&v15);
  if ( v18.m128_u64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v18.m128_u64[0])(&v17, &v17, 3);
  return v30 - __readfsqword(0x28u);
}

