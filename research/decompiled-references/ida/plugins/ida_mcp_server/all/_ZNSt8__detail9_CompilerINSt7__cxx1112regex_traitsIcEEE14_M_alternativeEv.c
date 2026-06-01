unsigned __int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_alternative(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // rbp
  __m128i v4; // xmm0
  __int64 *v5; // rdi
  __int64 v6; // r12
  char *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r8
  __m128i si128; // xmm0
  _QWORD *v13; // rbp
  __m128i *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  const __m128i *v19; // rax
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __m128i v29; // [rsp+0h] [rbp-98h] BYREF
  __int64 v30; // [rsp+18h] [rbp-80h]
  _BYTE v31[24]; // [rsp+20h] [rbp-78h] BYREF
  __m128i v32; // [rsp+40h] [rbp-58h] BYREF
  __m128i v33; // [rsp+50h] [rbp-48h] BYREF
  __m128i v34; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-20h]

  v35 = __readfsqword(0x28u);
  if ( (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_assertion() )
    goto LABEL_2;
  if ( (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_atom() )
  {
    while ( (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_quantifier()
         && (unsigned __int8)std::__detail::_Compiler<std::regex_traits<char>>::_M_quantifier() )
      ;
LABEL_2:
    v2 = (char *)a1[44];
    if ( v2 == (char *)a1[45] )
    {
      v19 = *(const __m128i **)(a1[47] - 8LL);
      v3 = v19[31].m128i_i64[0];
      v6 = v19[30].m128i_i64[0];
      *(_QWORD *)&v31[16] = v3;
      *(__m128i *)v31 = _mm_loadu_si128(v19 + 30);
      operator delete(v2, 0x1F8u);
      v20 = (__int64 *)(a1[47] - 8LL);
      v21 = *v20;
      a1[47] = v20;
      a1[45] = v21;
      a1[46] = v21 + 504;
      a1[44] = v21 + 480;
    }
    else
    {
      v3 = *((_QWORD *)v2 - 1);
      v4 = _mm_loadu_si128((const __m128i *)(v2 - 24));
      v5 = (__int64 *)(v2 - 24);
      v6 = *v5;
      a1[44] = v5;
      *(_QWORD *)&v31[16] = v3;
      *(__m128i *)v31 = v4;
    }
    std::__detail::_Compiler<std::regex_traits<char>>::_M_alternative();
    v7 = (char *)a1[44];
    if ( v7 == (char *)a1[45] )
    {
      v22 = *(_QWORD *)(a1[47] - 8LL);
      v23 = *(_QWORD *)(v22 + 496);
      v30 = *(_QWORD *)(v22 + 488);
      v29.m128i_i64[0] = v23;
      operator delete(v7, 0x1F8u);
      v24 = v30;
      v10 = v29.m128i_i64[0];
      v25 = (__int64 *)(a1[47] - 8LL);
      v26 = *v25;
      a1[47] = v25;
      a1[45] = v26;
      v27 = v26 + 504;
      a1[44] = v26 + 480;
      v28 = *(_QWORD *)(v6 + 56) + 48 * v3;
      a1[46] = v27;
      *(_QWORD *)(v28 + 8) = v24;
    }
    else
    {
      v8 = a1[46];
      v9 = *((_QWORD *)v7 - 2);
      v10 = *((_QWORD *)v7 - 1);
      a1[44] = v7 - 24;
      *(_QWORD *)(*(_QWORD *)(v6 + 56) + 48 * v3 + 8) = v9;
      if ( v7 - 24 != (char *)(v8 - 24) )
      {
        *(_QWORD *)v31 = v6;
        si128 = _mm_load_si128((const __m128i *)v31);
        *((_QWORD *)v7 - 1) = v10;
        *(__m128i *)(v7 - 24) = si128;
        *(_QWORD *)&v31[16] = v10;
        a1[44] = v7;
        return v35 - __readfsqword(0x28u);
      }
    }
    *(_QWORD *)v31 = v6;
    *(_QWORD *)&v31[16] = v10;
    std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::_M_push_back_aux<std::__detail::_StateSeq<std::regex_traits<char>> const&>();
    return v35 - __readfsqword(0x28u);
  }
  v13 = (_QWORD *)a1[32];
  v32.m128i_i32[0] = 10;
  v32.m128i_i64[1] = -1;
  v14 = (__m128i *)v13[8];
  if ( v14 == (__m128i *)v13[9] )
  {
    std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
    v15 = v13[8];
  }
  else
  {
    *v14 = _mm_load_si128(&v32);
    v14[1] = _mm_load_si128(&v33);
    v14[2] = _mm_load_si128(&v34);
    v15 = v13[8] + 48LL;
    v13[8] = v15;
  }
  v16 = v15 - v13[7];
  if ( v16 > 4800000 )
    std::__throw_regex_error();
  v17 = _mm_unpacklo_epi64(
          (__m128i)(0xAAAAAAAAAAAAAAABLL * (v16 >> 4) - 1),
          (__m128i)(0xAAAAAAAAAAAAAAABLL * (v16 >> 4) - 1));
  if ( v32.m128i_i32[0] == 11 && v34.m128i_i64[0] )
  {
    v29 = v17;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v34.m128i_i64[0])(&v33, &v33, 3);
    v17 = _mm_load_si128(&v29);
  }
  v18 = a1[32];
  *(__m128i *)&v31[8] = v17;
  *(_QWORD *)v31 = v18;
  std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
    a1 + 38,
    (const __m128i *)v31);
  return v35 - __readfsqword(0x28u);
}

