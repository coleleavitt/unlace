__int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_assertion(__int64 a1, __m128i a2)
{
  int v2; // eax
  unsigned int v3; // edx
  _QWORD *v5; // rdx
  __m128i *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __m128i *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdx
  bool v15; // zf
  __m128i v16; // xmm1
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __m128i *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // r15
  _QWORD *v23; // rdx
  __int64 v24; // r9
  __m128i *v25; // rax
  __int64 v26; // rax
  bool v27; // r8
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __m128i v30; // xmm0
  __int64 inserted; // rax
  __m128i v32; // xmm0
  __m128i v33; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v35; // [rsp+18h] [rbp-E0h]
  __int64 v36; // [rsp+20h] [rbp-D8h]
  __int64 v37; // [rsp+28h] [rbp-D0h]
  __int64 v38; // [rsp+30h] [rbp-C8h]
  __int64 v39; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v40; // [rsp+48h] [rbp-B0h]
  __m128i v41; // [rsp+60h] [rbp-98h] BYREF
  __m128i v42; // [rsp+70h] [rbp-88h] BYREF
  __m128i v43; // [rsp+80h] [rbp-78h] BYREF
  __m128i v44; // [rsp+90h] [rbp-68h] BYREF
  __m128i v45; // [rsp+A0h] [rbp-58h] BYREF
  __m128i v46; // [rsp+B0h] [rbp-48h] BYREF
  unsigned __int64 v47; // [rsp+C8h] [rbp-30h]

  v2 = *(_DWORD *)(a1 + 152);
  v47 = __readfsqword(0x28u);
  switch ( v2 )
  {
    case 22:
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      v5 = *(_QWORD **)(a1 + 256);
      v44.m128i_i32[0] = 4;
      v44.m128i_i64[1] = -1;
      v6 = (__m128i *)v5[8];
      if ( v6 == (__m128i *)v5[9] )
      {
        v33.m128i_i64[0] = (__int64)v5;
        std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
        v5 = (_QWORD *)v33.m128i_i64[0];
        v7 = *(_QWORD *)(v33.m128i_i64[0] + 64);
      }
      else
      {
        *v6 = _mm_load_si128(&v44);
        v6[1] = _mm_load_si128(&v45);
        v6[2] = _mm_load_si128(&v46);
        v7 = v5[8] + 48LL;
        v5[8] = v7;
      }
      v8 = v7 - v5[7];
      if ( v8 > 4800000 )
        std::__throw_regex_error();
      a2 = _mm_unpacklo_epi64(
             (__m128i)(0xAAAAAAAAAAAAAAABLL * (v8 >> 4) - 1),
             (__m128i)(0xAAAAAAAAAAAAAAABLL * (v8 >> 4) - 1));
      if ( v44.m128i_i32[0] != 11 )
        goto LABEL_10;
LABEL_27:
      if ( !v46.m128i_i64[0] )
        goto LABEL_10;
      goto LABEL_17;
    case 23:
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      v10 = *(_QWORD **)(a1 + 256);
      v44.m128i_i32[0] = 5;
      v44.m128i_i64[1] = -1;
      v11 = (__m128i *)v10[8];
      if ( v11 == (__m128i *)v10[9] )
      {
        v33.m128i_i64[0] = (__int64)v10;
        std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
        v10 = (_QWORD *)v33.m128i_i64[0];
        v12 = *(_QWORD *)(v33.m128i_i64[0] + 64);
      }
      else
      {
        *v11 = _mm_load_si128(&v44);
        v11[1] = _mm_load_si128(&v45);
        v11[2] = _mm_load_si128(&v46);
        v12 = v10[8] + 48LL;
        v10[8] = v12;
      }
      v13 = v12 - v10[7];
      if ( v13 > 4800000 )
        std::__throw_regex_error();
      a2 = _mm_unpacklo_epi64(
             (__m128i)(0xAAAAAAAAAAAAAAABLL * (v13 >> 4) - 1),
             (__m128i)(0xAAAAAAAAAAAAAAABLL * (v13 >> 4) - 1));
      if ( v44.m128i_i32[0] != 11 || !v46.m128i_i64[0] )
        goto LABEL_10;
LABEL_17:
      v33 = a2;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v46.m128i_i64[0])(&v45, &v45, 3);
      a2 = _mm_load_si128(&v33);
LABEL_10:
      v9 = *(_QWORD *)(a1 + 256);
      v40 = a2;
      v39 = v9;
      std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
        (_QWORD *)(a1 + 304),
        (const __m128i *)&v39);
      return 1;
    case 24:
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      v14 = *(_QWORD **)(a1 + 256);
      v15 = **(_BYTE **)(a1 + 272) == 110;
      v41.m128i_i32[0] = 6;
      v42.m128i_i8[8] = v15;
      v16 = _mm_load_si128(&v42);
      v41.m128i_i64[1] = -1;
      v17 = _mm_load_si128(&v41);
      v45 = v16;
      v18 = _mm_load_si128(&v43);
      v44 = v17;
      v46 = v18;
      v19 = (__m128i *)v14[8];
      if ( v19 == (__m128i *)v14[9] )
      {
        v33.m128i_i64[0] = (__int64)v14;
        std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
        v14 = (_QWORD *)v33.m128i_i64[0];
        v20 = *(_QWORD *)(v33.m128i_i64[0] + 64);
      }
      else
      {
        *v19 = v17;
        v19[1] = _mm_load_si128(&v45);
        v19[2] = _mm_load_si128(&v46);
        v20 = v14[8] + 48LL;
        v14[8] = v20;
      }
      v21 = v20 - v14[7];
      if ( v21 > 4800000 )
        std::__throw_regex_error();
      a2 = _mm_unpacklo_epi64(
             (__m128i)(0xAAAAAAAAAAAAAAABLL * (v21 >> 4) - 1),
             (__m128i)(0xAAAAAAAAAAAAAAABLL * (v21 >> 4) - 1));
      if ( v44.m128i_i32[0] == 11 && v46.m128i_i64[0] )
      {
        v33 = a2;
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v46.m128i_i64[0])(&v45, &v45, 3);
        a2 = _mm_load_si128(&v33);
      }
      if ( v41.m128i_i32[0] == 11 && v43.m128i_i64[0] )
      {
        v33 = a2;
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v43.m128i_i64[0])(&v42, &v42, 3);
        a2 = _mm_load_si128(&v33);
      }
      goto LABEL_10;
  }
  v3 = 0;
  if ( v2 == 7 )
  {
    std::string::_M_assign();
    std::__detail::_Scanner<char>::_M_advance();
    v22 = **(_BYTE **)(a1 + 272);
    std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction();
    if ( *(_DWORD *)(a1 + 152) == 8 )
    {
      std::string::_M_assign();
      std::__detail::_Scanner<char>::_M_advance();
      std::__detail::_Compiler<std::regex_traits<char>>::_M_pop();
      v23 = *(_QWORD **)(a1 + 256);
      v24 = v38;
      v44.m128i_i32[0] = 12;
      v44.m128i_i64[1] = -1;
      v25 = (__m128i *)v23[8];
      if ( v25 == (__m128i *)v23[9] )
      {
        v34 = v38;
        v33.m128i_i64[0] = (__int64)v23;
        std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
        v23 = (_QWORD *)v33.m128i_i64[0];
        v24 = v38;
        v26 = *(_QWORD *)(v33.m128i_i64[0] + 64);
      }
      else
      {
        *v25 = _mm_load_si128(&v44);
        v25[1] = _mm_load_si128(&v45);
        v25[2] = _mm_load_si128(&v46);
        v26 = v23[8] + 48LL;
        v23[8] = v26;
      }
      v27 = v22 == 110;
      v28 = v26 - v23[7];
      if ( v28 > 4800000 )
        std::__throw_regex_error();
      v29 = 0xAAAAAAAAAAAAAAABLL * (v28 >> 4) - 1;
      if ( v44.m128i_i32[0] == 11 && v46.m128i_i64[0] )
      {
        v35 = 0xAAAAAAAAAAAAAAABLL * (v28 >> 4) - 1;
        LOBYTE(v34) = v22 == 110;
        v33.m128i_i64[0] = v24;
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v46.m128i_i64[0])(&v45, &v45, 3);
        v29 = v35;
        v27 = v22 == 110;
        v24 = v33.m128i_i64[0];
      }
      *(_QWORD *)(*(_QWORD *)(v36 + 56) + 48 * v24 + 8) = v29;
      v41.m128i_i32[0] = 7;
      v41.m128i_i64[1] = -1;
      v30 = _mm_load_si128(&v41);
      v42.m128i_i64[0] = v37;
      v42.m128i_i8[8] = v27;
      v44 = v30;
      v45 = _mm_load_si128(&v42);
      v46 = _mm_load_si128(&v43);
      inserted = std::__detail::_NFA<std::regex_traits<char>>::_M_insert_state();
      v33 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)inserted, (__m128i)(unsigned __int64)inserted);
      std::__detail::_State<char>::~_State();
      std::__detail::_State<char>::~_State();
      v32 = _mm_load_si128(&v33);
      v39 = *(_QWORD *)(a1 + 256);
      v40 = v32;
      std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
        (_QWORD *)(a1 + 304),
        (const __m128i *)&v39);
      return 1;
    }
    std::__throw_regex_error();
    goto LABEL_27;
  }
  return v3;
}

