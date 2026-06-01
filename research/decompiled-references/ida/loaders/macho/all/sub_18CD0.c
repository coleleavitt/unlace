__int64 __fastcall sub_18CD0(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // eax
  __int64 v7; // r8
  int v8; // edi
  unsigned __int64 v9; // rax
  const void *v10; // rbx
  __int64 *v11; // rbx
  void *v12; // r12
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  void *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  void *v23; // rdi
  size_t v24; // rbp
  __int64 v25; // r13
  size_t v26; // rbx
  char *v27; // rdi
  _BYTE *v28; // rdx
  __int64 v29; // r13
  size_t v30; // rbp
  __int64 *v31; // rbp
  void *v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __m128i v39; // [rsp+0h] [rbp-58h] BYREF
  void *src; // [rsp+10h] [rbp-48h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v42; // [rsp+28h] [rbp-30h]

  v42 = __readfsqword(0x28u);
  v4 = *a2;
  if ( *a2 > 0x80000023 )
    return 0;
  if ( v4 > 0x80000017 )
  {
    v7 = 2177;
    if ( !_bittest64(&v7, v4 + 2147483624) )
      return 0;
  }
  else if ( v4 != 12 && v4 != 32 )
  {
    return 0;
  }
  v8 = *(_DWORD *)(a1 + 16);
  if ( v8 && v8 != v4 )
    return 0;
  v9 = a2[2];
  v10 = (const void *)(v9 + a3);
  if ( (v9 + a3 >= a4) | __CFADD__(v9, a3) || v9 <= 0x17 )
  {
    v11 = *(__int64 **)(a1 + 8);
    *(_OWORD *)n = 0;
    src = (void *)qvector_reserve();
    n[0] = 17;
    *(__m128i *)src = _mm_load_si128((const __m128i *)&xmmword_574A0);
    v12 = src;
    *((_BYTE *)src + 16) = 0;
    v13 = *v11;
    v14 = v11[2];
    if ( (unsigned __int64)&src < *v11 || (unsigned __int64)&src >= v13 + 24 * v14 )
    {
      v21 = v11[1];
      if ( v14 < v21 + 1 )
      {
        v36 = qvector_reserve();
        *v11 = v36;
        v13 = v36;
        v12 = src;
        v21 = v11[1];
      }
      v22 = v13 + 24 * v21;
      *(__m128i *)(v22 + 8) = _mm_loadu_si128((const __m128i *)n);
      *(_QWORD *)v22 = v12;
      *(_OWORD *)n = 0;
      ++v11[1];
    }
    else
    {
      v15 = _mm_loadl_epi64((const __m128i *)n);
      src = nullptr;
      v16 = _mm_loadl_epi64((const __m128i *)&n[1]);
      *(_OWORD *)n = 0;
      v17 = v11[1];
      v18 = *v11;
      if ( v11[2] < (unsigned __int64)(v17 + 1) )
      {
        v39.m128i_i64[1] = v16.m128i_i64[0];
        v39.m128i_i64[0] = v15.m128i_i64[0];
        v37 = qvector_reserve();
        v17 = v11[1];
        v15 = _mm_loadl_epi64(&v39);
        *v11 = v37;
        v18 = v37;
        v16 = _mm_loadl_epi64((const __m128i *)&v39.m128i_u64[1]);
      }
      v19 = v18 + 24 * v17;
      *(_QWORD *)v19 = v12;
      *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v15, v16);
      v20 = src;
      ++v11[1];
      if ( v20 )
      {
        n[0] = 0;
        qfree();
      }
    }
    return 0;
  }
  v23 = nullptr;
  src = nullptr;
  v24 = a4 - (_QWORD)v10;
  *(_OWORD *)n = 0;
  v25 = a4 - (_QWORD)v10 + 1;
  if ( a4 - (_QWORD)v10 != -1 )
  {
    src = (void *)qvector_reserve();
    v23 = src;
  }
  n[0] = v25;
  memmove(v23, v10, v24);
  *((_BYTE *)src + v24) = 0;
  v26 = n[0];
  if ( n[0] > 1 )
  {
    v27 = (char *)src;
    v28 = (char *)src + n[0] - 1;
    if ( src < v28 )
    {
      while ( !*(v28 - 1) )
      {
        if ( src == --v28 )
          goto LABEL_39;
      }
    }
    v29 = v28 - (_BYTE *)src;
    if ( v28 == src )
    {
LABEL_39:
      if ( !src )
      {
        v31 = *(__int64 **)(a1 + 8);
        goto LABEL_38;
      }
      n[0] = 0;
      qfree();
      src = nullptr;
      v26 = 0;
      n[1] = 0;
    }
    else
    {
      v30 = v29 + 1;
      if ( n[0] < v29 + 1 )
      {
        if ( n[1] < v30 )
        {
          src = (void *)qvector_reserve();
          v26 = n[0];
          v27 = (char *)src;
        }
        memset(&v27[v26], 0, v30 - v26);
        n[0] = v29 + 1;
        v28 = (char *)src + v29;
      }
      else if ( n[0] != v29 + 1 )
      {
        n[0] = v29 + 1;
      }
      *v28 = 0;
      v26 = n[0];
    }
  }
  v31 = *(__int64 **)(a1 + 8);
  v32 = nullptr;
  if ( v26 )
  {
LABEL_38:
    v32 = (void *)qalloc_or_throw();
    memcpy(v32, src, v26);
  }
  v33 = v31[1];
  v34 = *v31;
  if ( v31[2] < (unsigned __int64)(v33 + 1) )
  {
    v38 = qvector_reserve();
    *v31 = v38;
    v33 = v31[1];
    v34 = v38;
  }
  v35 = v34 + 24 * v33;
  *(_QWORD *)v35 = v32;
  *(__m128i *)(v35 + 8) = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
  ++v31[1];
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return 0;
}

