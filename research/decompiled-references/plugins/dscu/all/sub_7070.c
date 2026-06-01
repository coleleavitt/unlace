__int64 __fastcall sub_7070(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  int v9; // edi
  unsigned __int64 v10; // rax
  const void *v11; // rbx
  __int64 *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  void *v15; // r12
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // rdi
  size_t v27; // rbp
  __int64 v28; // r13
  __int64 v29; // r8
  __int64 v30; // r9
  size_t v31; // rbx
  char *v32; // rdi
  _BYTE *v33; // rdx
  __int64 v34; // r13
  size_t v35; // rbp
  __int64 *v36; // rbp
  void *v37; // r12
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i v44; // [rsp+0h] [rbp-58h] BYREF
  void *src; // [rsp+10h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v47; // [rsp+28h] [rbp-30h]

  v47 = __readfsqword(0x28u);
  v6 = *a2;
  if ( *a2 > 0x80000023 )
    return 0;
  if ( v6 > 0x80000017 )
  {
    a5 = 2177;
    if ( !_bittest64(&a5, v6 + 2147483624) )
      return 0;
  }
  else if ( v6 != 12 && v6 != 32 )
  {
    return 0;
  }
  v9 = *(_DWORD *)(a1 + 16);
  if ( v9 && v9 != v6 )
    return 0;
  v10 = a2[2];
  v11 = (const void *)(v10 + a3);
  if ( (v10 + a3 >= a4) | __CFADD__(v10, a3) || v10 <= 0x17 )
  {
    v12 = *(__int64 **)(a1 + 8);
    src = nullptr;
    *(_OWORD *)n = 0;
    src = (void *)((__int64 (__fastcall *)(void **, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64))qvector_reserve)(
                    &src,
                    0,
                    17,
                    1,
                    a5,
                    a6,
                    v44.m128i_i64[0],
                    v44.m128i_i64[1]);
    n[0] = 17;
    *(__m128i *)src = _mm_load_si128((const __m128i *)&xmmword_19110);
    v15 = src;
    *((_BYTE *)src + 16) = 0;
    v16 = *v12;
    v17 = v12[2];
    if ( (unsigned __int64)&src < *v12 || (unsigned __int64)&src >= v16 + 24 * v17 )
    {
      v24 = v12[1];
      if ( v17 < v24 + 1 )
      {
        v41 = qvector_reserve(v12, v16, v24 + 1, 24, v13, v14, v44.m128i_i64[0], v44.m128i_i64[1], src, n[0]);
        *v12 = v41;
        v16 = v41;
        v15 = src;
        v24 = v12[1];
      }
      v25 = v16 + 24 * v24;
      *(__m128i *)(v25 + 8) = _mm_loadu_si128((const __m128i *)n);
      *(_QWORD *)v25 = v15;
      *(_OWORD *)n = 0;
      ++v12[1];
    }
    else
    {
      v18 = _mm_loadl_epi64((const __m128i *)n);
      src = nullptr;
      v19 = _mm_loadl_epi64((const __m128i *)&n[1]);
      *(_OWORD *)n = 0;
      v20 = v12[1];
      v21 = *v12;
      if ( v12[2] < (unsigned __int64)(v20 + 1) )
      {
        v42 = qvector_reserve(v12, v21, v20 + 1, 24, v13, v14, v18.m128i_i64[0], v19.m128i_i64[0], src, n[0]);
        v20 = v12[1];
        v18 = _mm_loadl_epi64(&v44);
        *v12 = v42;
        v21 = v42;
        v19 = _mm_loadl_epi64((const __m128i *)&v44.m128i_u64[1]);
      }
      v22 = v21 + 24 * v20;
      *(_QWORD *)v22 = v15;
      *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v18, v19);
      v23 = src;
      ++v12[1];
      if ( v23 )
      {
        n[0] = 0;
        qfree(v23);
      }
    }
    return 0;
  }
  v26 = nullptr;
  src = nullptr;
  v27 = a4 - (_QWORD)v11;
  *(_OWORD *)n = 0;
  v28 = a4 - (_QWORD)v11 + 1;
  if ( a4 - (_QWORD)v11 != -1 )
  {
    src = (void *)((__int64 (__fastcall *)(void **, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64))qvector_reserve)(
                    &src,
                    0,
                    v28,
                    1,
                    a5,
                    a6,
                    v44.m128i_i64[0],
                    v44.m128i_i64[1]);
    v26 = src;
  }
  n[0] = v28;
  memmove(v26, v11, v27);
  *((_BYTE *)src + v27) = 0;
  v31 = n[0];
  if ( n[0] > 1 )
  {
    v32 = (char *)src;
    v33 = (char *)src + n[0] - 1;
    if ( src < v33 )
    {
      while ( !*(v33 - 1) )
      {
        if ( src == --v33 )
          goto LABEL_39;
      }
    }
    v34 = v33 - (_BYTE *)src;
    if ( v33 == src )
    {
LABEL_39:
      if ( !src )
      {
        v36 = *(__int64 **)(a1 + 8);
        goto LABEL_38;
      }
      n[0] = 0;
      qfree(src);
      src = nullptr;
      v31 = n[0];
      n[1] = 0;
    }
    else
    {
      v35 = v34 + 1;
      if ( n[0] < v34 + 1 )
      {
        if ( n[1] < v35 )
        {
          src = (void *)((__int64 (__fastcall *)(void **, void *, __int64, __int64, __int64, __int64, __int64, __int64))qvector_reserve)(
                          &src,
                          src,
                          v34 + 1,
                          1,
                          v29,
                          v30,
                          v44.m128i_i64[0],
                          v44.m128i_i64[1]);
          v31 = n[0];
          v32 = (char *)src;
        }
        memset(&v32[v31], 0, v35 - v31);
        n[0] = v34 + 1;
        v33 = (char *)src + v34;
      }
      else if ( n[0] != v34 + 1 )
      {
        n[0] = v34 + 1;
      }
      *v33 = 0;
      v31 = n[0];
    }
  }
  v36 = *(__int64 **)(a1 + 8);
  v37 = nullptr;
  if ( v31 )
  {
LABEL_38:
    v37 = (void *)qalloc_or_throw(v31);
    memcpy(v37, src, v31);
  }
  v38 = v36[1];
  v39 = *v36;
  if ( v36[2] < (unsigned __int64)(v38 + 1) )
  {
    v43 = qvector_reserve(v36, v39, v38 + 1, 24, v29, v30, v44.m128i_i64[0], v44.m128i_i64[1], src, n[0]);
    *v36 = v43;
    v38 = v36[1];
    v39 = v43;
  }
  v40 = v39 + 24 * v38;
  *(_QWORD *)v40 = v37;
  *(__m128i *)(v40 + 8) = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
  ++v36[1];
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return 0;
}
