__int64 __fastcall std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_lookahead(
        __int64 a1,
        __int64 a2)
{
  const __m128i *v3; // rcx
  const __m128i *v4; // r8
  signed __int64 v5; // rdx
  __int64 v6; // rax
  char *v7; // rdi
  const __m128i *v8; // rax
  char *v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rax
  int v12; // ecx
  __m128i v13; // xmm0
  __m128i v14; // xmm2
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  unsigned int v20; // ebx
  _BYTE *v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // r8
  signed __int64 v28; // [rsp+8h] [rbp-D0h]
  __int64 v29; // [rsp+8h] [rbp-D0h]
  const __m128i *v30; // [rsp+10h] [rbp-C8h]
  int v31; // [rsp+10h] [rbp-C8h]
  const __m128i *v32; // [rsp+18h] [rbp-C0h]
  void *v33; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE *v34; // [rsp+28h] [rbp-B0h]
  char *v35; // [rsp+30h] [rbp-A8h]
  void *v36[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v37; // [rsp+50h] [rbp-88h]
  __int64 v38; // [rsp+58h] [rbp-80h]
  __m128i v39; // [rsp+60h] [rbp-78h]
  __int64 v40; // [rsp+70h] [rbp-68h]
  __int64 v41; // [rsp+78h] [rbp-60h]
  void **v42; // [rsp+80h] [rbp-58h]
  void *v43; // [rsp+88h] [rbp-50h]
  _QWORD *v44; // [rsp+90h] [rbp-48h]
  char *v45; // [rsp+98h] [rbp-40h]
  __int64 v46; // [rsp+A0h] [rbp-38h]
  __int64 v47; // [rsp+A8h] [rbp-30h]
  int v48; // [rsp+B0h] [rbp-28h]
  unsigned __int8 v49; // [rsp+B4h] [rbp-24h]
  unsigned __int64 v50; // [rsp+B8h] [rbp-20h]

  v3 = *(const __m128i **)(a1 + 8);
  v4 = *(const __m128i **)a1;
  v50 = __readfsqword(0x28u);
  v5 = (char *)v3 - (char *)v4;
  if ( v3 == v4 )
  {
    v7 = nullptr;
  }
  else
  {
    v32 = v4;
    v30 = v3;
    v28 = (char *)v3 - (char *)v4;
    v6 = operator new((char *)v3 - (char *)v4);
    v4 = v32;
    v3 = v30;
    v5 = v28;
    v7 = (char *)v6;
  }
  v33 = v7;
  v35 = &v7[v5];
  if ( v3 != v4 )
  {
    v8 = v4;
    v9 = v7;
    do
    {
      v10 = _mm_loadu_si128(v8);
      v8 = (const __m128i *)((char *)v8 + 24);
      v9 += 24;
      *(__m128i *)(v9 - 24) = v10;
      *((_QWORD *)v9 - 1) = v8[-1].m128i_i64[1];
    }
    while ( v3 != v8 );
    v7 += 24
        * ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)((char *)&v3[-2].m128i_u64[1] - (char *)v4) >> 3))
         & 0x1FFFFFFFFFFFFFFFLL)
        + 24;
  }
  v11 = *(_QWORD *)(a1 + 48);
  v12 = *(_DWORD *)(a1 + 112);
  v13 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v34 = v7;
  v40 = v11;
  v15 = *(_QWORD *)(v11 + 16);
  v42 = &v33;
  v16 = *(_QWORD *)(v15 + 64) - *(_QWORD *)(v15 + 56);
  v41 = v15;
  *(_OWORD *)v36 = 0;
  v17 = 0xAAAAAAAAAAAAAAABLL * (v16 >> 4);
  v39 = _mm_unpacklo_epi64(v13, v14);
  v37 = 0;
  if ( v17 )
  {
    v31 = v12;
    v29 = 2 * v17;
    v18 = (_QWORD *)operator new(16 * v17);
    v12 = v31;
    v43 = v18;
    v19 = &v18[v29];
    v45 = (char *)&v18[v29];
    do
    {
      *v18 = 0;
      v18 += 2;
      *((_DWORD *)v18 - 2) = 0;
    }
    while ( v18 != v19 );
  }
  else
  {
    v43 = nullptr;
    v18 = nullptr;
    v45 = nullptr;
  }
  v44 = v18;
  v47 = 0;
  if ( (v12 & 0x80u) != 0 )
    v12 &= 0xFFFFFFFA;
  v48 = v12;
  v46 = a2;
  v38 = v39.m128i_i64[0];
  v49 = 0;
  std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator=(
    (__int64 *)v36,
    (const __m128i **)&v33);
  std::__detail::_Executor<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,std::regex_traits<char>,true>::_M_dfs();
  v20 = v49;
  if ( v49 )
  {
    v21 = v33;
    if ( v34 != v33 )
    {
      v22 = 0;
      v23 = 0xAAAAAAAAAAAAAAABLL * ((v34 - (_BYTE *)v33) >> 3);
      v24 = 0;
      do
      {
        if ( v21[v24 + 16] )
        {
          v25 = v24 + *(_QWORD *)a1;
          *(_QWORD *)v25 = *(_QWORD *)&v21[v24];
          v26 = *(_QWORD *)&v21[v24 + 8];
          *(_BYTE *)(v25 + 16) = 1;
          *(_QWORD *)(v25 + 8) = v26;
        }
        ++v22;
        v24 += 24;
      }
      while ( v22 < v23 );
    }
  }
  if ( v43 )
    operator delete(v43, v45 - (_BYTE *)v43);
  if ( v36[0] )
    operator delete(v36[0], v37 - (unsigned __int64)v36[0]);
  if ( v33 )
    operator delete(v33, v35 - (_BYTE *)v33);
  return v20;
}

