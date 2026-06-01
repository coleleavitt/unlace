unsigned __int64 __fastcall sub_35300(_QWORD *a1, void *p_src)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v5; // rax
  int v6; // r15d
  __int64 v7; // rax
  struct _Unwind_Exception *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // r13d
  __int64 v12; // rax
  char *v13; // rcx
  char *v14; // rax
  __int64 v15; // rax
  char *v16; // rax
  __int64 v17; // r14
  int v18; // ebx
  __int64 v19; // rax
  __m128i *v20; // r13
  char *m128i_i8; // rax
  unsigned __int64 v22; // rbx
  void *v23; // rbp
  __int64 v24; // rdi
  __m128i v25; // xmm0
  unsigned __int64 v26; // rbx
  void *v27; // rbp
  __int64 v28; // rdi
  __m128i v29; // xmm0
  __int64 v30; // r13
  __int64 v31; // r13
  void (__fastcall *hexdsp)(__int64, __int64); // rax
  void *v33; // rdi
  __int64 v35; // rcx
  const __m128i *v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __m128i v39; // xmm0
  bool v40; // cf
  const __m128i *v41; // rdi
  __int64 v42; // rax
  __m128i *v43; // rdx
  __m128i v44; // xmm0
  __int64 v45; // rax
  __int64 v46; // rbp
  void *v47; // rbx
  const __m128i *v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __m128i v51; // xmm0
  __int64 v52; // rbp
  __int64 v53; // rax
  __int64 v54; // r14
  void *v55; // rbx
  const __m128i *v56; // rdi
  __int64 v57; // rdx
  __int64 v58; // rcx
  __m128i v59; // xmm0
  void *v60; // rax
  void *v61; // rax
  __m128i v62; // [rsp+0h] [rbp-A8h] BYREF
  void *v63; // [rsp+18h] [rbp-90h]
  int v64; // [rsp+24h] [rbp-84h]
  void **v65; // [rsp+28h] [rbp-80h]
  void *v66; // [rsp+30h] [rbp-78h] BYREF
  __int128 v67; // [rsp+38h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  __int128 v69; // [rsp+58h] [rbp-50h]
  unsigned __int64 v70; // [rsp+68h] [rbp-40h]

  v64 = (int)p_src;
  v70 = __readfsqword(0x28u);
  v3 = a1[5];
  v67 = 0;
  v66 = nullptr;
  v69 = 0;
  src = nullptr;
  if ( v3 >> 1 )
  {
    p_src = nullptr;
    v45 = qvector_reserve(&v66, 0, v3 >> 1, 16);
    v46 = *((_QWORD *)&v67 + 1);
    v47 = (void *)v45;
    *((_QWORD *)&v67 + 1) = 0;
    v48 = (const __m128i *)v66;
    v49 = v67 - 1;
    if ( (__int64)v67 - 1 >= 0 )
    {
      v50 = v45;
      do
      {
        v51 = _mm_loadu_si128(v48);
        v50 += 16;
        ++v48;
        *(__m128i *)(v50 - 16) = v51;
        v40 = v49-- == 0;
      }
      while ( !v40 );
      v48 = (const __m128i *)v66;
    }
    qfree(v48);
    v3 = a1[5];
    *((_QWORD *)&v67 + 1) = v46;
    v52 = *((_QWORD *)&v69 + 1);
    v66 = v47;
    if ( *((_QWORD *)&v69 + 1) < v3 >> 1 )
    {
      p_src = nullptr;
      v53 = qvector_reserve(&src, 0, v3 >> 1, 16);
      v54 = *((_QWORD *)&v69 + 1);
      v55 = (void *)v53;
      *((_QWORD *)&v69 + 1) = v52;
      v56 = (const __m128i *)src;
      v57 = v69 - 1;
      if ( (__int64)v69 - 1 >= 0 )
      {
        v58 = v53;
        do
        {
          v59 = _mm_loadu_si128(v56);
          v58 += 16;
          ++v56;
          *(__m128i *)(v58 - 16) = v59;
          v40 = v57-- == 0;
        }
        while ( !v40 );
        v56 = (const __m128i *)src;
      }
      qfree(v56);
      src = v55;
      v3 = a1[5];
      *((_QWORD *)&v69 + 1) = v54;
    }
  }
  if ( v3 )
  {
    v4 = 0;
    v5 = 0;
    p_src = &src;
    v65 = &src;
    v6 = 1 << v64;
    do
    {
      while ( 1 )
      {
        v7 = 16 * v5;
        v8 = (struct _Unwind_Exception *)v7;
        if ( (v6 & v4) != 0 )
          break;
        v9 = a1[4] + v7;
        v10 = *(_QWORD *)v9;
        v11 = *(_DWORD *)(v9 + 8);
        v12 = v67;
        if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)(v67 + 1) )
        {
          v62.m128i_i64[0] = *((_QWORD *)&v67 + 1);
          v35 = qvector_reserve(&v66, 0, v67 + 1, 16);
          p_src = *((void **)&v67 + 1);
          v36 = (const __m128i *)v66;
          *((_QWORD *)&v67 + 1) = v62.m128i_i64[0];
          v37 = v67 - 1;
          if ( (__int64)v67 - 1 >= 0 )
          {
            v38 = v35;
            do
            {
              v39 = _mm_loadu_si128(v36);
              v38 += 16;
              ++v36;
              *(__m128i *)(v38 - 16) = v39;
              v40 = v37-- == 0;
            }
            while ( !v40 );
            v36 = (const __m128i *)v66;
          }
          v63 = p_src;
          v62.m128i_i64[0] = v35;
          qfree(v36);
          v13 = (char *)v62.m128i_i64[0];
          v12 = v67;
          v66 = (void *)v62.m128i_i64[0];
          *((_QWORD *)&v67 + 1) = p_src;
        }
        else
        {
          v13 = (char *)v66;
        }
        v14 = &v13[16 * v12];
        *(_QWORD *)v14 = v10;
        *((_DWORD *)v14 + 2) = v11;
        v15 = a1[7];
        *(_QWORD *)&v67 = v67 + 1;
        v16 = (char *)v8 + v15;
        v17 = *(_QWORD *)v16;
        v18 = *((_DWORD *)v16 + 2);
        v19 = v69;
        if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v69 + 1) )
        {
          v62.m128i_i64[0] = *((_QWORD *)&v69 + 1);
          v20 = (__m128i *)qvector_reserve(v65, 0, v69 + 1, 16);
          p_src = *((void **)&v69 + 1);
          v41 = (const __m128i *)src;
          *((_QWORD *)&v69 + 1) = v62.m128i_i64[0];
          v42 = v69 - 1;
          if ( (__int64)v69 - 1 >= 0 )
          {
            v43 = v20;
            do
            {
              v44 = _mm_loadu_si128(v41);
              ++v43;
              ++v41;
              v43[-1] = v44;
              v40 = v42-- == 0;
            }
            while ( !v40 );
            v41 = (const __m128i *)src;
          }
          v62.m128i_i64[0] = (__int64)p_src;
          qfree(v41);
          v19 = v69;
          src = v20;
          *((_QWORD *)&v69 + 1) = p_src;
        }
        else
        {
          v20 = (__m128i *)src;
        }
        m128i_i8 = v20[v19].m128i_i8;
        *(_QWORD *)m128i_i8 = v17;
        *((_DWORD *)m128i_i8 + 2) = v18;
        *(_QWORD *)&v69 = v69 + 1;
        v5 = ++v4;
        if ( (unsigned __int64)v4 >= a1[5] )
          goto LABEL_12;
      }
      if ( *(_QWORD *)(a1[4] + v7) )
      {
        if ( !under_debugger )
        {
          interr(30682);
          if ( src )
          {
            *(_QWORD *)&v69 = 0;
            qfree(src);
          }
          if ( v66 )
          {
            *(_QWORD *)&v67 = 0;
            qfree(v66);
          }
          _Unwind_Resume(v8);
        }
        BUG();
      }
      v5 = ++v4;
    }
    while ( (unsigned __int64)v4 < a1[5] );
  }
LABEL_12:
  v22 = v67;
  v23 = nullptr;
  if ( (_QWORD)v67 )
  {
    v61 = (void *)qalloc_or_throw(16 * v67);
    p_src = v66;
    v23 = v61;
    memcpy(v61, v66, 16 * v22);
  }
  v24 = a1[4];
  v25 = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
  if ( v24 )
  {
    a1[5] = 0;
    v62 = v25;
    qfree(v24);
    v25 = _mm_load_si128(&v62);
  }
  v26 = v69;
  a1[4] = v23;
  v27 = nullptr;
  *(__m128i *)(a1 + 5) = v25;
  if ( v26 )
  {
    v60 = (void *)qalloc_or_throw(16 * v26);
    p_src = src;
    v27 = v60;
    memcpy(v60, src, 16 * v26);
  }
  v28 = a1[7];
  v29 = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
  if ( v28 )
  {
    a1[8] = 0;
    v62 = v29;
    qfree(v28);
    v29 = _mm_load_si128(&v62);
  }
  a1[7] = v27;
  v30 = v64;
  *((__m128i *)a1 + 4) = v29;
  v31 = a1[1] + 16 * v30;
  hexdsp = (void (__fastcall *)(__int64, __int64))get_hexdsp(v28, p_src);
  hexdsp(276, v31);
  memmove((void *)v31, (const void *)(v31 + 16), a1[1] + 16LL * a1[2] - v31 - 16);
  v33 = src;
  --a1[2];
  if ( v33 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v33);
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  return v70 - __readfsqword(0x28u);
}
