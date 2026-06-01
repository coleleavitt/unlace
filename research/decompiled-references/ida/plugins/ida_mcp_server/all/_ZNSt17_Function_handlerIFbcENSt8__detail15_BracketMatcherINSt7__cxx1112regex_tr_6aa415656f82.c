__int64 __fastcall std::_Function_handler<bool ()(char),std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>>::_M_manager(
        void **a1,
        void **a2,
        int a3)
{
  void *v5; // rbx
  char *v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  char *v10; // rcx
  size_t v11; // rbx
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r14
  size_t v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  _BYTE *v19; // rdi
  _BYTE *v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  char *v31; // rcx
  const void *v32; // rsi
  size_t v33; // rbx
  int v34; // eax
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // [rsp+8h] [rbp-60h]
  _BYTE *v39; // [rsp+8h] [rbp-60h]
  unsigned __int64 v40; // [rsp+8h] [rbp-60h]
  __int64 v41; // [rsp+10h] [rbp-58h]
  __int64 v42; // [rsp+18h] [rbp-50h]
  unsigned __int64 v43; // [rsp+20h] [rbp-48h]

  if ( !a3 )
  {
    *a1 = &`typeinfo for'std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>;
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
        std::__detail::_BracketMatcher<std::regex_traits<char>,false,false>::~_BracketMatcher();
        operator delete(v5, 0x98u);
      }
    }
    return 0;
  }
  v6 = (char *)*a2;
  v7 = operator new(0x98u);
  v8 = *((_QWORD *)v6 + 1) - *(_QWORD *)v6;
  v9 = v7;
  *(_OWORD *)v7 = 0;
  *(_QWORD *)(v7 + 16) = 0;
  if ( v8 )
    v10 = (char *)operator new(v8);
  else
    v10 = nullptr;
  *(_QWORD *)(v9 + 16) = &v10[v8];
  *(__m128i *)v9 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
  if ( (__int64)(*((_QWORD *)v6 + 1) - *(_QWORD *)v6) > 0 )
  {
    v11 = *((_QWORD *)v6 + 1) - *(_QWORD *)v6;
    v10 = (char *)memcpy(v10, *(const void **)v6, v11) + v11;
  }
  v12 = *((_QWORD *)v6 + 4) - *((_QWORD *)v6 + 3);
  *(_QWORD *)(v9 + 8) = v10;
  *(_QWORD *)(v9 + 40) = 0;
  *(_OWORD *)(v9 + 24) = 0;
  if ( v12 )
    v42 = operator new(v12);
  else
    v42 = 0;
  *(_QWORD *)(v9 + 40) = v42 + v12;
  v13 = (_QWORD *)v42;
  *(__m128i *)(v9 + 24) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v42, (__m128i)(unsigned __int64)v42);
  v14 = *((_QWORD *)v6 + 3);
  v15 = *((_QWORD *)v6 + 4);
  if ( v15 != v14 )
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(v14 + 8);
      v19 = v13 + 2;
      *v13 = v13 + 2;
      v20 = *(_BYTE **)v14;
      v43 = v18;
      if ( v18 <= 0xF )
        break;
      v41 = v14;
      v39 = *(_BYTE **)v14;
      v19 = (_BYTE *)std::string::_M_create();
      v20 = v39;
      v14 = v41;
      *v13 = v19;
      v13[2] = v43;
      v16 = v43 + 1;
      if ( !v43 )
      {
LABEL_26:
        *v19 = *v20;
        v17 = v43;
        goto LABEL_20;
      }
      v17 = -1;
      if ( v43 != -1 )
        goto LABEL_19;
LABEL_20:
      v14 += 32;
      v13[1] = v17;
      v13 += 4;
      if ( v15 == v14 )
        goto LABEL_27;
    }
    v16 = v18 + 1;
    if ( !v18 )
      goto LABEL_26;
LABEL_19:
    v38 = v14;
    memcpy(v19, v20, v16);
    v17 = v43;
    v14 = v38;
    goto LABEL_20;
  }
LABEL_27:
  v21 = *((_QWORD *)v6 + 7) - *((_QWORD *)v6 + 6);
  *(_QWORD *)(v9 + 32) = v13;
  *(_QWORD *)(v9 + 64) = 0;
  v22 = v21;
  *(_OWORD *)(v9 + 48) = 0;
  if ( v21 )
    v23 = operator new(v21);
  else
    v23 = 0;
  *(_QWORD *)(v9 + 64) = v23 + v22;
  *(__m128i *)(v9 + 48) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
  v24 = *((_QWORD *)v6 + 7);
  v25 = *((_QWORD *)v6 + 6);
  if ( v24 == v25 )
  {
    v28 = v23;
  }
  else
  {
    v26 = v24 - v25;
    v27 = 0;
    do
    {
      *(_WORD *)(v23 + v27) = *(_WORD *)(v25 + v27);
      v27 += 2;
    }
    while ( v26 != v27 );
    v28 = v23 + v26;
  }
  v29 = *((_QWORD *)v6 + 10) - *((_QWORD *)v6 + 9);
  *(_QWORD *)(v9 + 56) = v28;
  *(_QWORD *)(v9 + 88) = 0;
  *(_OWORD *)(v9 + 72) = 0;
  if ( v29 )
  {
    v40 = v29;
    v30 = operator new(v29);
    v29 = v40;
    v31 = (char *)v30;
  }
  else
  {
    v31 = nullptr;
  }
  *(_QWORD *)(v9 + 88) = &v31[v29];
  *(__m128i *)(v9 + 72) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
  v32 = *((const void **)v6 + 9);
  if ( (__int64)(*((_QWORD *)v6 + 10) - (_QWORD)v32) > 0 )
  {
    v33 = *((_QWORD *)v6 + 10) - (_QWORD)v32;
    v31 = (char *)memcpy(v31, v32, v33) + v33;
  }
  v34 = *((_DWORD *)v6 + 24);
  v35 = _mm_loadu_si128((const __m128i *)(v6 + 120));
  *(_QWORD *)(v9 + 80) = v31;
  *(_DWORD *)(v9 + 96) = v34;
  v36 = *((_QWORD *)v6 + 13);
  *(__m128i *)(v9 + 120) = v35;
  v37 = _mm_loadu_si128((const __m128i *)(v6 + 136));
  *(_QWORD *)(v9 + 104) = v36;
  LOBYTE(v36) = v6[112];
  *(__m128i *)(v9 + 136) = v37;
  *(_BYTE *)(v9 + 112) = v36;
  *a1 = (void *)v9;
  return 0;
}

