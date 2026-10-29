unsigned __int64 __fastcall sub_30310(__int64 a1, __int64 *a2)
{
  void *v2; // r14
  __int64 v4; // rax
  size_t v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rsi
  __m128i v8; // xmm0
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // rax
  const char *v12; // r14
  bool v13; // zf
  _DWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  void *v19; // rbp
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // rax
  void *v23; // rdi
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  const void **v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __m128i v33; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-30h]

  v2 = nullptr;
  v34 = __readfsqword(0x28u);
  v4 = sub_C08F0(a1 + 208);
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 )
  {
    v28 = (const void **)v4;
    v2 = (void *)sub_198760(*(_QWORD *)(v4 + 8));
    memcpy(v2, *v28, v5);
  }
  v6 = a2[1];
  v7 = *a2;
  if ( a2[2] < (unsigned __int64)(v6 + 1) )
  {
    v27 = sub_1987B0(a2, v7, v6 + 1, 24);
    *a2 = v27;
    v6 = a2[1];
    v7 = v27;
  }
  v8 = (__m128i)v5;
  v9 = 7;
  v10 = 6;
  v11 = v7 + 24 * v6;
  *(_QWORD *)v11 = v2;
  v12 = "noauth";
  *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64(v8, v8);
  ++a2[1];
  v13 = *(_DWORD *)(a1 + 260) == 1;
  ptr = nullptr;
  v33 = 0;
  if ( !v13 )
  {
    v9 = 8;
    v10 = 7;
    v12 = "hasauth";
  }
  v14 = (_DWORD *)sub_1987B0(&ptr, 0, v9, 1);
  ptr = v14;
  v33.m128i_i64[0] = v9;
  *v14 = *(_DWORD *)v12;
  *(_DWORD *)((char *)v14 + (unsigned int)v10 - 4) = *(_DWORD *)&v12[(unsigned int)v10 - 4];
  *((_BYTE *)ptr + v10) = 0;
  v15 = a2[1];
  v16 = *a2;
  v17 = a2[2];
  v18 = v15 + 1;
  if ( (unsigned __int64)&ptr < *a2 || (unsigned __int64)&ptr >= v16 + 24 * v17 )
  {
    if ( v17 < v18 )
    {
      v29 = sub_1987B0(a2, v16, v15 + 1, 24);
      *a2 = v29;
      v16 = v29;
      v15 = a2[1];
    }
    v25 = _mm_loadu_si128(&v33);
    v26 = v16 + 24 * v15;
    *(_QWORD *)v26 = ptr;
    *(__m128i *)(v26 + 8) = v25;
    ++a2[1];
  }
  else
  {
    v19 = ptr;
    v20 = _mm_loadl_epi64(&v33);
    ptr = nullptr;
    v21 = _mm_loadl_epi64((const __m128i *)&v33.m128i_u64[1]);
    v33 = 0;
    if ( v17 < v18 )
    {
      v31.m128i_i64[1] = v21.m128i_i64[0];
      v31.m128i_i64[0] = v20.m128i_i64[0];
      v30 = sub_1987B0(a2, v16, v15 + 1, 24);
      *a2 = v30;
      v16 = v30;
      v15 = a2[1];
      v21 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
      v20 = _mm_loadl_epi64(&v31);
    }
    v22 = v16 + 24 * v15;
    *(_QWORD *)v22 = v19;
    v23 = ptr;
    *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v20, v21);
    ++a2[1];
    if ( v23 )
    {
      v33.m128i_i64[0] = 0;
      j__free(v23);
    }
  }
  return v34 - __readfsqword(0x28u);
}
