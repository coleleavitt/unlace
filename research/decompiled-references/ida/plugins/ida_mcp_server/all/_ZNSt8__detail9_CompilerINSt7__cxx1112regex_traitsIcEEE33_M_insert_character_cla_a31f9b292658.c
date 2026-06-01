unsigned __int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_insert_character_class_matcher<false,false>(
        __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbp
  char v4; // bl
  char v5; // bl
  int v6; // eax
  unsigned __int16 v7; // r13
  char v8; // r12
  unsigned __int64 v9; // r15
  char v10; // si
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __int64 inserted; // rax
  __int64 v20; // [rsp+8h] [rbp-118h] BYREF
  __m128i v21; // [rsp+10h] [rbp-110h]
  __int128 v22; // [rsp+28h] [rbp-F8h] BYREF
  __m128 v23; // [rsp+38h] [rbp-E8h]
  __int128 v24; // [rsp+48h] [rbp-D8h]
  __int128 v25; // [rsp+58h] [rbp-C8h]
  __int128 v26; // [rsp+68h] [rbp-B8h]
  __int128 v27; // [rsp+78h] [rbp-A8h]
  __int128 v28; // [rsp+88h] [rbp-98h]
  __int128 v29; // [rsp+98h] [rbp-88h]
  __int64 v30; // [rsp+A8h] [rbp-78h]
  __int64 v31; // [rsp+B0h] [rbp-70h]
  char v32; // [rsp+B8h] [rbp-68h]
  __m128i v33; // [rsp+C0h] [rbp-60h] BYREF
  __m128i v34; // [rsp+D0h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+E0h] [rbp-40h]

  v1 = **(unsigned __int8 **)(a1 + 272);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 392) + 48LL);
  v35 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 384);
  v4 = *(_BYTE *)(v2 + 2 * v1 + 1);
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v5 = v4 & 1;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = v3;
  v32 = v5;
  v33 = 0;
  v34 = 0;
  v6 = std::regex_traits<char>::lookup_classname<char const*>();
  v7 = v6;
  v8 = BYTE2(v6);
  if ( (v6 & 0x10000) == 0 && !(_WORD)v6 )
    std::__throw_regex_error();
  LOWORD(v30) = v6;
  v9 = 0;
  BYTE2(v30) = BYTE2(v6);
  do
  {
    while ( 1 )
    {
      v10 = std::regex_traits<char>::isctype(v3, v9, v7, v8);
      v11 = v9 >> 6;
      v12 = 1LL << v9;
      v13 = v33.m128i_i64[v9 >> 6];
      if ( v5 == v10 )
        break;
      ++v9;
      v33.m128i_i64[v11] = v12 | v13;
      if ( v9 == 256 )
        goto LABEL_6;
    }
    ++v9;
    v33.m128i_i64[v11] = v13 & ~v12;
  }
  while ( v9 != 256 );
LABEL_6:
  v22 = 0;
  v14 = operator new(0x98u);
  *(_QWORD *)(v14 + 104) = v3;
  v15 = v30;
  *(_OWORD *)v14 = 0;
  *(_OWORD *)(v14 + 16) = 0;
  *(_OWORD *)(v14 + 32) = 0;
  *(_OWORD *)(v14 + 48) = 0;
  *(_OWORD *)(v14 + 64) = 0;
  *(_OWORD *)(v14 + 80) = 0;
  v16 = _mm_loadu_si128(&v33);
  *(_DWORD *)(v14 + 96) = v15;
  *(__m128i *)(v14 + 120) = v16;
  v17 = _mm_loadu_si128(&v34);
  *(_BYTE *)(v14 + 112) = v5;
  *(__m128i *)(v14 + 136) = v17;
  *(_QWORD *)&v22 = v14;
  v23 = _mm_loadh_ps((const double *)&std::_Function_handler<bool ()(char),std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>>::_M_invoke);
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

