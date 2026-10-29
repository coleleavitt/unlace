unsigned __int64 __fastcall std::__detail::_Compiler<std::regex_traits<char>>::_M_disjunction(__int64 a1)
{
  char *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  char *v6; // rdi
  __int64 v7; // rbp
  char *v8; // rdi
  __int64 v9; // r10
  __int64 v10; // r9
  char *v11; // rdi
  __int64 v12; // r8
  _QWORD *v13; // rax
  __m128i *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rdx
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __m128i *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 *v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v34; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v35; // [rsp+8h] [rbp-F0h]
  __int64 v36; // [rsp+8h] [rbp-F0h]
  __int64 v37; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v38; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v39; // [rsp+10h] [rbp-E8h]
  _QWORD *v40; // [rsp+10h] [rbp-E8h]
  _QWORD *v41; // [rsp+10h] [rbp-E8h]
  __int64 v42; // [rsp+10h] [rbp-E8h]
  __int64 v43; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v44; // [rsp+18h] [rbp-E0h]
  __int64 v45; // [rsp+18h] [rbp-E0h]
  __int64 v46; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v47; // [rsp+20h] [rbp-D8h]
  __int64 v48; // [rsp+20h] [rbp-D8h]
  __int64 v49; // [rsp+28h] [rbp-D0h]
  __m128i v50; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v51; // [rsp+40h] [rbp-B8h]
  __m128i v52; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v53; // [rsp+60h] [rbp-98h] BYREF
  __m128i v54; // [rsp+70h] [rbp-88h] BYREF
  __m128i v55; // [rsp+80h] [rbp-78h] BYREF
  __m128i v56; // [rsp+90h] [rbp-68h] BYREF
  __m128i v57; // [rsp+A0h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+B8h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  std::__detail::_Compiler<std::regex_traits<char>>::_M_alternative();
  while ( *(_DWORD *)(a1 + 152) == 19 )
  {
    std::string::_M_assign();
    std::__detail::_Scanner<char>::_M_advance();
    v3 = *(char **)(a1 + 352);
    if ( v3 == *(char **)(a1 + 360) )
    {
      v27 = *(_QWORD **)(*(_QWORD *)(a1 + 376) - 8LL);
      v4 = v27[60];
      v5 = v27[61];
      v7 = v27[62];
      operator delete(v3, 0x1F8u);
      v28 = (__int64 *)(*(_QWORD *)(a1 + 376) - 8LL);
      v29 = *v28;
      *(_QWORD *)(a1 + 376) = v28;
      *(_QWORD *)(a1 + 360) = v29;
      *(_QWORD *)(a1 + 368) = v29 + 504;
      *(_QWORD *)(a1 + 352) = v29 + 480;
    }
    else
    {
      v4 = *((_QWORD *)v3 - 3);
      v5 = *((_QWORD *)v3 - 2);
      v6 = v3 - 24;
      v7 = *((_QWORD *)v6 + 2);
      *(_QWORD *)(a1 + 352) = v6;
    }
    std::__detail::_Compiler<std::regex_traits<char>>::_M_alternative();
    v8 = *(char **)(a1 + 352);
    if ( v8 == *(char **)(a1 + 360) )
    {
      v30 = *(_QWORD **)(*(_QWORD *)(a1 + 376) - 8LL);
      v46 = v30[60];
      v42 = v30[61];
      v36 = v30[62];
      operator delete(v8, 0x1F8u);
      v9 = v46;
      v10 = v42;
      v12 = v36;
      v31 = (__int64 *)(*(_QWORD *)(a1 + 376) - 8LL);
      v32 = *v31;
      *(_QWORD *)(a1 + 376) = v31;
      *(_QWORD *)(a1 + 360) = v32;
      *(_QWORD *)(a1 + 368) = v32 + 504;
      *(_QWORD *)(a1 + 352) = v32 + 480;
    }
    else
    {
      v9 = *((_QWORD *)v8 - 3);
      v10 = *((_QWORD *)v8 - 2);
      v11 = v8 - 24;
      v12 = *((_QWORD *)v11 + 2);
      *(_QWORD *)(a1 + 352) = v11;
    }
    v13 = *(_QWORD **)(a1 + 256);
    v55.m128i_i32[0] = 10;
    v55.m128i_i64[1] = -1;
    v14 = (__m128i *)v13[8];
    if ( v14 == (__m128i *)v13[9] )
    {
      v49 = v9;
      v48 = v10;
      v45 = v12;
      v41 = v13;
      std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
      v13 = v41;
      v9 = v49;
      v10 = v48;
      v12 = v45;
      v15 = v41[8];
    }
    else
    {
      *v14 = _mm_load_si128(&v55);
      v14[1] = _mm_load_si128(&v56);
      v14[2] = _mm_load_si128(&v57);
      v15 = v13[8] + 48LL;
      v13[8] = v15;
    }
    v16 = v15 - v13[7];
    if ( v16 > 4800000 )
      std::__throw_regex_error();
    v17 = 0xAAAAAAAAAAAAAAABLL * (v16 >> 4) - 1;
    if ( v55.m128i_i32[0] == 11 && v57.m128i_i64[0] )
    {
      v47 = v17;
      v43 = v9;
      v37 = v10;
      v33 = v12;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v57.m128i_i64[0])(&v56, &v56, 3);
      v17 = v47;
      v9 = v43;
      v10 = v37;
      v12 = v33;
    }
    v52.m128i_i32[0] = 1;
    v18 = *(_QWORD **)(a1 + 256);
    *(_QWORD *)(*(_QWORD *)(v4 + 56) + 48 * v7 + 8) = v17;
    *(_QWORD *)(*(_QWORD *)(v9 + 56) + 48 * v12 + 8) = v17;
    v53.m128i_i64[0] = v5;
    v19 = _mm_load_si128(&v53);
    v52.m128i_i64[1] = v10;
    v20 = _mm_load_si128(&v52);
    v56 = v19;
    v21 = _mm_load_si128(&v54);
    v55 = v20;
    v57 = v21;
    v22 = (__m128i *)v18[8];
    if ( v22 == (__m128i *)v18[9] )
    {
      v44 = v17;
      v40 = v18;
      std::vector<std::__detail::_State<char>>::_M_realloc_append<std::__detail::_State<char>>();
      v18 = v40;
      v17 = v44;
      v23 = v40[8];
    }
    else
    {
      *v22 = v20;
      v22[1] = _mm_load_si128(&v56);
      v22[2] = _mm_load_si128(&v57);
      v23 = v18[8] + 48LL;
      v18[8] = v23;
    }
    v24 = v23 - v18[7];
    if ( v24 > 4800000 )
      std::__throw_regex_error();
    v25 = 0xAAAAAAAAAAAAAAABLL * (v24 >> 4) - 1;
    if ( v55.m128i_i32[0] == 11 && v57.m128i_i64[0] )
    {
      v39 = 0xAAAAAAAAAAAAAAABLL * (v24 >> 4) - 1;
      v35 = v17;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v57.m128i_i64[0])(&v56, &v56, 3);
      v25 = v39;
      v17 = v35;
    }
    if ( v52.m128i_i32[0] == 11 && v54.m128i_i64[0] )
    {
      v38 = v25;
      v34 = v17;
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v54.m128i_i64[0])(&v53, &v53, 3);
      v25 = v38;
      v17 = v34;
    }
    v26 = *(_QWORD *)(a1 + 256);
    v50.m128i_i64[1] = v25;
    v51 = v17;
    v50.m128i_i64[0] = v26;
    std::deque<std::__detail::_StateSeq<std::regex_traits<char>>>::emplace_back<std::__detail::_StateSeq<std::regex_traits<char>>>(
      (_QWORD *)(a1 + 304),
      &v50);
  }
  return v58 - __readfsqword(0x28u);
}

