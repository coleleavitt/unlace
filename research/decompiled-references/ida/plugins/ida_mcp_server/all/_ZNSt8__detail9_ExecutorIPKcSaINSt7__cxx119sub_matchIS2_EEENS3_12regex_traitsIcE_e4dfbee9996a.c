__int64 __fastcall std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_lookahead(
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
  __m128i v13; // xmm2
  __m128i v14; // xmm3
  __int64 v15; // rax
  int v16; // ebx
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
  __int64 v27; // xmm0_8
  unsigned int v28; // ebp
  _BYTE *v29; // rsi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __m128i v33; // xmm0
  __m128i *v34; // rdi
  _QWORD *v35; // r12
  _QWORD *v36; // rbx
  void *v37; // rdi
  __int64 v38; // rsi
  __m128i v40; // [rsp+0h] [rbp-108h] BYREF
  std::locale *v41; // [rsp+10h] [rbp-F8h]
  __int64 v42; // [rsp+18h] [rbp-F0h]
  void *v43; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE *v44; // [rsp+28h] [rbp-E0h]
  char *v45; // [rsp+30h] [rbp-D8h]
  int v46; // [rsp+38h] [rbp-D0h]
  void *v47[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B8h]
  __m128i v49; // [rsp+60h] [rbp-A8h]
  __int64 v50; // [rsp+70h] [rbp-98h]
  __int64 v51; // [rsp+78h] [rbp-90h]
  void **v52; // [rsp+80h] [rbp-88h]
  void *v53; // [rsp+88h] [rbp-80h]
  char *v54; // [rsp+90h] [rbp-78h]
  char *v55; // [rsp+98h] [rbp-70h]
  void *v56[2]; // [rsp+A0h] [rbp-68h]
  __int64 v57; // [rsp+B0h] [rbp-58h]
  void *v58; // [rsp+B8h] [rbp-50h]
  __int64 v59; // [rsp+C0h] [rbp-48h]
  int v60; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v61; // [rsp+D8h] [rbp-30h]

  v3 = *(const __m128i **)(a1 + 8);
  v4 = *(const __m128i **)a1;
  v61 = __readfsqword(0x28u);
  v6 = (char *)v3 - (char *)v4;
  if ( v3 == v4 )
  {
    v8 = nullptr;
  }
  else
  {
    v40.m128i_i64[0] = (char *)v3 - (char *)v4;
    v7 = operator new((char *)v3 - (char *)v4);
    v6 = (char *)v3 - (char *)v4;
    v8 = (char *)v7;
  }
  v43 = v8;
  v45 = &v8[v6];
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
  v14 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v44 = v8;
  v50 = v12;
  v15 = *(_QWORD *)(v12 + 16);
  v52 = &v43;
  v16 = *(_DWORD *)(a1 + 136);
  v17 = *(_QWORD *)(v15 + 64) - *(_QWORD *)(v15 + 56);
  v51 = v15;
  v40 = v13;
  v18 = 0xAAAAAAAAAAAAAAABLL * (v17 >> 4);
  *(_OWORD *)v47 = 0;
  v48 = 0;
  v49 = _mm_unpacklo_epi64(v13, v14);
  if ( v18 )
  {
    v42 = 16 * v18;
    v19 = (char *)operator new(16 * v18);
    v53 = v19;
    v20 = &v19[16 * v18];
    v55 = v20;
    do
    {
      *(_QWORD *)v19 = 0;
      v19 += 16;
      *((_DWORD *)v19 - 2) = 0;
    }
    while ( v19 != v20 );
    v54 = v19;
    v57 = 0;
    *(_OWORD *)v56 = 0;
    v21 = (void *)operator new[](v18);
    v8 = nullptr;
    v22 = memset(v21, 0, v18);
  }
  else
  {
    v53 = nullptr;
    v55 = nullptr;
    v54 = nullptr;
    v57 = 0;
    *(_OWORD *)v56 = 0;
    v22 = (void *)operator new[](0);
  }
  v58 = v22;
  v27 = _mm_load_si128(&v40).m128i_u64[0];
  if ( (v16 & 0x80u) != 0 )
    v16 &= 0xFFFFFFFA;
  v60 = v16;
  v59 = a2;
  v28 = std::__detail::_Executor<char const*,std::allocator<std::sub_match<char const*>>,std::regex_traits<char>,false>::_M_main_dispatch(
          (__int64)v47,
          (__int64)v8,
          v23,
          v24,
          v25,
          v26,
          v40.m128i_i64[0],
          v40.m128i_i32[2],
          v41,
          v42,
          (int)v43,
          (int)v44,
          (int)v45,
          v46,
          (int)v47[0],
          (__int64)v47[1],
          v48,
          v27,
          v49.m128i_i64[0]);
  if ( (_BYTE)v28 )
  {
    v29 = v43;
    if ( v44 != v43 )
    {
      v30 = 0;
      v31 = 0xAAAAAAAAAAAAAAABLL * ((v44 - (_BYTE *)v43) >> 3);
      v32 = 0;
      do
      {
        if ( v29[v32 + 16] )
        {
          v33 = _mm_loadu_si128((const __m128i *)&v29[v32]);
          v34 = (__m128i *)(v32 + *(_QWORD *)a1);
          v34[1].m128i_i8[0] = 1;
          *v34 = v33;
        }
        ++v30;
        v32 += 24;
      }
      while ( v30 < v31 );
    }
  }
  if ( v58 )
    operator delete[](v58);
  v35 = v56[1];
  v36 = v56[0];
  if ( v56[1] != v56[0] )
  {
    do
    {
      while ( 1 )
      {
        v37 = (void *)v36[1];
        if ( !v37 )
          break;
        v38 = v36[3];
        v36 += 4;
        operator delete(v37, v38 - (_QWORD)v37);
        if ( v35 == v36 )
          goto LABEL_24;
      }
      v36 += 4;
    }
    while ( v35 != v36 );
LABEL_24:
    v36 = v56[0];
  }
  if ( v36 )
    operator delete(v36, v57 - (_QWORD)v36);
  if ( v53 )
    operator delete(v53, v55 - (_BYTE *)v53);
  if ( v47[0] )
    operator delete(v47[0], v48 - (unsigned __int64)v47[0]);
  if ( v43 )
    operator delete(v43, v45 - (_BYTE *)v43);
  return v28;
}

