__int64 __fastcall std::_Function_handler<bool ()(char),std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>>::_M_manager(
        void **a1,
        void **a2,
        int a3)
{
  void *v5; // rbx
  const __m128i *v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // r12
  char *v10; // rcx
  size_t v11; // rbx
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rbx
  __int64 v14; // r14
  __int64 v15; // r15
  size_t v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  _BYTE *v19; // rdi
  _BYTE *v20; // rcx
  size_t v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  _BYTE *v24; // rdi
  _BYTE *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  char *v29; // rcx
  const void *v30; // rsi
  size_t v31; // rbx
  int v32; // eax
  __m128i v33; // xmm0
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rax
  _BYTE *v37; // [rsp+0h] [rbp-78h]
  _BYTE *v38; // [rsp+0h] [rbp-78h]
  __int64 v39; // [rsp+10h] [rbp-68h]
  unsigned __int64 v40; // [rsp+28h] [rbp-50h]
  unsigned __int64 v41; // [rsp+30h] [rbp-48h]

  if ( !a3 )
  {
    *a1 = &`typeinfo for'std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>;
    return 0;
  }
  if ( a3 == 1 )
  {
    *a1 = *a2;
    return 0;
  }
  if ( a3 != 2 )
  {
    if ( a3 == 3 )
    {
      v5 = *a1;
      if ( *a1 )
      {
        std::__detail::_BracketMatcher<std::regex_traits<char>,true,true>::~_BracketMatcher();
        operator delete(v5, 0xA0u);
      }
    }
    return 0;
  }
  v6 = (const __m128i *)*a2;
  v7 = operator new(0xA0u);
  v8 = v6->m128i_i64[1] - v6->m128i_i64[0];
  v9 = v7;
  *(_OWORD *)v7 = 0;
  *(_QWORD *)(v7 + 16) = 0;
  if ( v8 )
    v10 = (char *)operator new(v8);
  else
    v10 = nullptr;
  *(_QWORD *)(v9 + 16) = &v10[v8];
  *(__m128i *)v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
  if ( v6->m128i_i64[1] - v6->m128i_i64[0] > 0 )
  {
    v11 = v6->m128i_i64[1] - v6->m128i_i64[0];
    v10 = (char *)memcpy(v10, (const void *)v6->m128i_i64[0], v11) + v11;
  }
  *(_QWORD *)(v9 + 8) = v10;
  std::vector<std::string>::vector();
  v12 = v6[3].m128i_i64[1] - v6[3].m128i_i64[0];
  *(_QWORD *)(v9 + 64) = 0;
  *(_OWORD *)(v9 + 48) = 0;
  if ( v12 )
    v39 = operator new(v12);
  else
    v39 = 0;
  *(_QWORD *)(v9 + 64) = v39 + v12;
  v13 = (_QWORD *)v39;
  *(__m128i *)(v9 + 48) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v39);
  v14 = v6[3].m128i_i64[0];
  v15 = v6[3].m128i_i64[1];
  if ( v15 != v14 )
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(v14 + 8);
      v19 = v13 + 2;
      *v13 = v13 + 2;
      v20 = *(_BYTE **)v14;
      v40 = v18;
      if ( v18 <= 0xF )
        break;
      v38 = *(_BYTE **)v14;
      v27 = std::string::_M_create();
      *v13 = v27;
      v19 = (_BYTE *)v27;
      v20 = v38;
      v13[2] = v40;
      v21 = v40 + 1;
      if ( !v40 )
        goto LABEL_29;
      v22 = -1;
      if ( v40 != -1 )
      {
LABEL_23:
        memcpy(v19, v20, v21);
        v22 = v40;
      }
LABEL_24:
      v13[1] = v22;
      v23 = *(_QWORD *)(v14 + 40);
      v24 = v13 + 6;
      v13[4] = v13 + 6;
      v25 = *(_BYTE **)(v14 + 32);
      v41 = v23;
      if ( v23 <= 0xF )
      {
        v16 = v23 + 1;
        if ( !v23 )
          goto LABEL_30;
LABEL_19:
        memcpy(v24, v25, v16);
        v17 = v41;
        goto LABEL_20;
      }
      v37 = *(_BYTE **)(v14 + 32);
      v26 = std::string::_M_create();
      v13[4] = v26;
      v24 = (_BYTE *)v26;
      v25 = v37;
      v13[6] = v41;
      v16 = v41 + 1;
      if ( !v41 )
      {
LABEL_30:
        *v24 = *v25;
        v17 = v41;
        goto LABEL_20;
      }
      v17 = -1;
      if ( v41 != -1 )
        goto LABEL_19;
LABEL_20:
      v14 += 64;
      v13[5] = v17;
      v13 += 8;
      if ( v15 == v14 )
        goto LABEL_34;
    }
    v21 = v18 + 1;
    if ( v18 )
      goto LABEL_23;
LABEL_29:
    *v19 = *v20;
    v22 = v40;
    goto LABEL_24;
  }
LABEL_34:
  *(_QWORD *)(v9 + 56) = v13;
  v28 = v6[5].m128i_i64[0] - v6[4].m128i_i64[1];
  *(_OWORD *)(v9 + 72) = 0;
  *(_QWORD *)(v9 + 88) = 0;
  if ( v28 )
    v29 = (char *)operator new(v28);
  else
    v29 = nullptr;
  *(_QWORD *)(v9 + 88) = &v29[v28];
  *(__m128i *)(v9 + 72) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v29, (__m128i)(unsigned __int64)v29);
  v30 = (const void *)v6[4].m128i_i64[1];
  if ( v6[5].m128i_i64[0] - (__int64)v30 > 0 )
  {
    v31 = v6[5].m128i_i64[0] - (_QWORD)v30;
    v29 = (char *)memcpy(v29, v30, v31) + v31;
  }
  v32 = v6[6].m128i_i32[0];
  *(_QWORD *)(v9 + 80) = v29;
  v33 = _mm_loadu_si128(v6 + 8);
  *(_DWORD *)(v9 + 96) = v32;
  v34 = v6[6].m128i_i64[1];
  *(__m128i *)(v9 + 128) = v33;
  v35 = _mm_loadu_si128(v6 + 9);
  *(_QWORD *)(v9 + 104) = v34;
  v36 = v6[7].m128i_i64[0];
  *(__m128i *)(v9 + 144) = v35;
  *(_QWORD *)(v9 + 112) = v36;
  LOBYTE(v36) = v6[7].m128i_i8[8];
  *a1 = (void *)v9;
  *(_BYTE *)(v9 + 120) = v36;
  return 0;
}

