__int64 __fastcall std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_lookahead(
        __int64 a1,
        __int64 a2)
{
  const __m128i *v3; // rbx
  const __m128i *v4; // r13
  signed __int64 v6; // rdx
  __int64 v7; // rax
  char *v8; // rsi
  const __m128i *v9; // rax
  char *v10; // rdx
  __m128i v11; // xmm0
  __int64 v12; // rax
  __m128i v13; // xmm0
  __m128i v14; // xmm2
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // r13
  unsigned __int64 v18; // r13
  char *v19; // rax
  char *v20; // rcx
  void *v21; // rax
  void *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // ebp
  _BYTE *v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // r8
  _QWORD *v34; // r12
  _QWORD *v35; // rbx
  void *v36; // rdi
  __int64 v37; // rsi
  __int64 v39; // [rsp+0h] [rbp-F8h]
  __int64 v40; // [rsp+8h] [rbp-F0h]
  void *v41; // [rsp+10h] [rbp-E8h] BYREF
  std::locale *v42; // [rsp+18h] [rbp-E0h]
  char *v43; // [rsp+20h] [rbp-D8h]
  int v44; // [rsp+28h] [rbp-D0h]
  void *v45[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v46; // [rsp+40h] [rbp-B8h]
  __m128i v47; // [rsp+50h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-98h]
  __int64 v49; // [rsp+68h] [rbp-90h]
  void **v50; // [rsp+70h] [rbp-88h]
  void *v51; // [rsp+78h] [rbp-80h]
  char *v52; // [rsp+80h] [rbp-78h]
  char *v53; // [rsp+88h] [rbp-70h]
  void *v54[2]; // [rsp+90h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-58h]
  void *v56; // [rsp+A8h] [rbp-50h]
  __int64 v57; // [rsp+B0h] [rbp-48h]
  int v58; // [rsp+B8h] [rbp-40h]
  unsigned __int64 v59; // [rsp+C8h] [rbp-30h]

  v3 = *(const __m128i **)(a1 + 8);
  v4 = *(const __m128i **)a1;
  v59 = __readfsqword(0x28u);
  v6 = (char *)v3 - (char *)v4;
  if ( v3 == v4 )
  {
    v8 = nullptr;
  }
  else
  {
    v40 = (char *)v3 - (char *)v4;
    v7 = operator new((char *)v3 - (char *)v4);
    v6 = (char *)v3 - (char *)v4;
    v8 = (char *)v7;
  }
  v41 = v8;
  v43 = &v8[v6];
  if ( v3 != v4 )
  {
    v9 = v4;
    v10 = v8;
    do
    {
      v11 = _mm_loadu_si128(v9);
      v9 = (const __m128i *)((char *)v9 + 24);
      v10 += 24;
      *(__m128i *)(v10 - 24) = v11;
      *((_QWORD *)v10 - 1) = v9[-1].m128i_i64[1];
    }
    while ( v3 != v9 );
    v8 += 24
        * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)&v3[-2].m128i_u64[1] - (char *)v4) >> 3))
         & 0x1FFFFFFFFFFFFFFFLL)
        + 24;
  }
  v12 = *(_QWORD *)(a1 + 48);
  v13 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v46 = 0;
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v15 = *(_DWORD *)(a1 + 136);
  v48 = v12;
  v16 = *(_QWORD *)(v12 + 16);
  v42 = (std::locale *)v8;
  v17 = *(_QWORD *)(v16 + 64) - *(_QWORD *)(v16 + 56);
  v49 = v16;
  v50 = &v41;
  v18 = 0xAAAAAAAAAAAAAAABLL * (v17 >> 4);
  *(_OWORD *)v45 = 0;
  v47 = _mm_unpacklo_epi64(v13, v14);
  if ( v18 )
  {
    v40 = 16 * v18;
    v19 = (char *)operator new(16 * v18);
    v51 = v19;
    v20 = &v19[16 * v18];
    v53 = v20;
    do
    {
      *(_QWORD *)v19 = 0;
      v19 += 16;
      *((_DWORD *)v19 - 2) = 0;
    }
    while ( v19 != v20 );
    v52 = v19;
    v55 = 0;
    *(_OWORD *)v54 = 0;
    v21 = (void *)operator new[](v18);
    v8 = nullptr;
    v22 = memset(v21, 0, v18);
  }
  else
  {
    v51 = nullptr;
    v53 = nullptr;
    v52 = nullptr;
    v55 = 0;
    *(_OWORD *)v54 = 0;
    v22 = (void *)operator new[](0);
  }
  v56 = v22;
  if ( (v15 & 0x80u) != 0 )
    v15 &= 0xFFFFFFFA;
  v58 = v15;
  v57 = a2;
  v27 = std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,false>::_M_main_dispatch(
          (__int64)v45,
          (__int64)v8,
          v23,
          v24,
          v25,
          v26,
          v39,
          v40,
          (int)v41,
          v42,
          (int)v43,
          v44,
          (int)v45[0],
          (int)v45[1],
          v46,
          v47.m128i_i64[0],
          v47.m128i_i64[0],
          v47.m128i_i64[1],
          v48,
          v49,
          (int)v50,
          (int)v51,
          (__int64)v52);
  if ( (_BYTE)v27 )
  {
    v28 = v41;
    if ( v42 != v41 )
    {
      v29 = 0;
      v30 = 0xAAAAAAAAAAAAAAABLL * ((v42 - (std::locale *)v41) >> 3);
      v31 = 0;
      do
      {
        if ( v28[v31 + 16] )
        {
          v32 = v31 + *(_QWORD *)a1;
          *(_QWORD *)v32 = *(_QWORD *)&v28[v31];
          v33 = *(_QWORD *)&v28[v31 + 8];
          *(_BYTE *)(v32 + 16) = 1;
          *(_QWORD *)(v32 + 8) = v33;
        }
        ++v29;
        v31 += 24;
      }
      while ( v29 < v30 );
    }
  }
  if ( v56 )
    operator delete[](v56);
  v34 = v54[1];
  v35 = v54[0];
  if ( v54[1] != v54[0] )
  {
    do
    {
      while ( 1 )
      {
        v36 = (void *)v35[1];
        if ( !v36 )
          break;
        v37 = v35[3];
        v35 += 4;
        operator delete(v36, v37 - (_QWORD)v36);
        if ( v34 == v35 )
          goto LABEL_24;
      }
      v35 += 4;
    }
    while ( v34 != v35 );
LABEL_24:
    v35 = v54[0];
  }
  if ( v35 )
    operator delete(v35, v55 - (_QWORD)v35);
  if ( v51 )
    operator delete(v51, v53 - (_BYTE *)v51);
  if ( v45[0] )
    operator delete(v45[0], v46 - (unsigned __int64)v45[0]);
  if ( v41 )
    operator delete(v41, v43 - (_BYTE *)v41);
  return v27;
}

