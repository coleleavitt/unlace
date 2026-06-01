__int64 __fastcall std::_Function_handler<bool ()(char),std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>>::_M_manager(
        void **a1,
        void **a2,
        int a3)
{
  void *v5; // rbx
  __int64 v6; // rax
  const __m128i *v7; // rcx
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  char *v11; // rdi
  char *v12; // rax
  const __m128i *v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  char *v25; // rdi
  const void *v26; // rsi
  char *v27; // rax
  __int32 v28; // eax
  __m128i v29; // xmm0
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rax
  const __m128i *v33; // [rsp+0h] [rbp-38h]
  unsigned __int64 v34; // [rsp+0h] [rbp-38h]
  size_t v35; // [rsp+0h] [rbp-38h]
  const __m128i *v36; // [rsp+0h] [rbp-38h]
  unsigned __int64 v37; // [rsp+0h] [rbp-38h]
  size_t v38; // [rsp+0h] [rbp-38h]
  const __m128i *v39; // [rsp+8h] [rbp-30h]
  const __m128i *v40; // [rsp+8h] [rbp-30h]
  const __m128i *v41; // [rsp+8h] [rbp-30h]
  const __m128i *v42; // [rsp+8h] [rbp-30h]

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      *a1 = *a2;
      return 0;
    }
    else
    {
      if ( a3 == 2 )
      {
        v33 = (const __m128i *)*a2;
        v6 = operator new(0xA0u);
        v7 = v33;
        v8 = v6;
        v9 = v33->m128i_i64[1] - v33->m128i_i64[0];
        *(_QWORD *)(v6 + 16) = 0;
        *(_OWORD *)v6 = 0;
        if ( v9 )
        {
          v39 = v33;
          v34 = v9;
          v10 = operator new(v9);
          v9 = v34;
          v7 = v39;
          v11 = (char *)v10;
        }
        else
        {
          v11 = nullptr;
        }
        *(_QWORD *)(v8 + 16) = &v11[v9];
        *(__m128i *)v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
        if ( v7->m128i_i64[1] - v7->m128i_i64[0] > 0 )
        {
          v40 = v7;
          v35 = v7->m128i_i64[1] - v7->m128i_i64[0];
          v12 = (char *)memcpy(v11, (const void *)v7->m128i_i64[0], v35);
          v7 = v40;
          v11 = &v12[v35];
        }
        *(_QWORD *)(v8 + 8) = v11;
        v36 = v7;
        std::vector<std::string>::vector();
        v13 = v36;
        v14 = v36[3].m128i_i64[1] - v36[3].m128i_i64[0];
        *(_QWORD *)(v8 + 64) = 0;
        v15 = v14;
        *(_OWORD *)(v8 + 48) = 0;
        if ( v14 )
        {
          v16 = operator new(v14);
          v13 = v36;
          v17 = v16;
        }
        else
        {
          v17 = 0;
        }
        *(_QWORD *)(v8 + 64) = v17 + v15;
        *(__m128i *)(v8 + 48) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
        v18 = v13[3].m128i_i64[1];
        v19 = v13[3].m128i_i64[0];
        if ( v18 == v19 )
        {
          v22 = v17;
        }
        else
        {
          v20 = v18 - v19;
          v21 = 0;
          do
          {
            *(_WORD *)(v17 + v21) = *(_WORD *)(v19 + v21);
            v21 += 2;
          }
          while ( v20 != v21 );
          v22 = v17 + v20;
        }
        v23 = v13[5].m128i_i64[0] - v13[4].m128i_i64[1];
        *(_QWORD *)(v8 + 56) = v22;
        *(_QWORD *)(v8 + 88) = 0;
        *(_OWORD *)(v8 + 72) = 0;
        if ( v23 )
        {
          v41 = v13;
          v37 = v23;
          v24 = operator new(v23);
          v23 = v37;
          v13 = v41;
          v25 = (char *)v24;
        }
        else
        {
          v25 = nullptr;
        }
        *(_QWORD *)(v8 + 88) = &v25[v23];
        *(__m128i *)(v8 + 72) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
        v26 = (const void *)v13[4].m128i_i64[1];
        if ( v13[5].m128i_i64[0] - (__int64)v26 > 0 )
        {
          v42 = v13;
          v38 = v13[5].m128i_i64[0] - (_QWORD)v26;
          v27 = (char *)memcpy(v25, v26, v38);
          v13 = v42;
          v25 = &v27[v38];
        }
        v28 = v13[6].m128i_i32[0];
        v29 = _mm_loadu_si128(v13 + 8);
        *(_QWORD *)(v8 + 80) = v25;
        *(_DWORD *)(v8 + 96) = v28;
        v30 = v13[6].m128i_i64[1];
        *(__m128i *)(v8 + 128) = v29;
        v31 = _mm_loadu_si128(v13 + 9);
        *(_QWORD *)(v8 + 104) = v30;
        v32 = v13[7].m128i_i64[0];
        *(__m128i *)(v8 + 144) = v31;
        *(_QWORD *)(v8 + 112) = v32;
        LOBYTE(v32) = v13[7].m128i_i8[8];
        *a1 = (void *)v8;
        *(_BYTE *)(v8 + 120) = v32;
      }
      else if ( a3 == 3 )
      {
        v5 = *a1;
        if ( *a1 )
        {
          std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>::~_BracketMatcher();
          operator delete(v5, 0xA0u);
        }
      }
      return 0;
    }
  }
  else
  {
    *a1 = &`typeinfo for'std::__detail::_BracketMatcher<std::regex_traits<char>,true,false>;
    return 0;
  }
}

