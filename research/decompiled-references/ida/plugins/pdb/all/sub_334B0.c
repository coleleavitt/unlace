unsigned __int64 __fastcall sub_334B0(__int64 *a1, char *a2, __int64 a3)
{
  size_t v5; // r14
  size_t v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  char *v9; // r12
  void *v10; // rax
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  void *v14; // rax
  const void *v15; // rsi
  __int64 v16; // rax
  void *v17; // rax
  const void *v18; // rsi
  _DWORD v19[4]; // [rsp+0h] [rbp-88h] BYREF
  void *v20; // [rsp+10h] [rbp-78h]
  __m128i v21; // [rsp+18h] [rbp-70h] BYREF
  void *v22; // [rsp+28h] [rbp-60h]
  __m128i v23; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+40h] [rbp-48h] BYREF
  int v25; // [rsp+48h] [rbp-40h]
  unsigned __int64 v26; // [rsp+58h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v19[0] = 0;
  copy_argloc(v19, a3);
  v20 = nullptr;
  v21 = 0;
  v5 = *(_QWORD *)(a3 + 24);
  if ( v5 )
  {
    v14 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 24));
    v15 = *(const void **)(a3 + 16);
    v20 = v14;
    v21.m128i_i64[1] = v5;
    memcpy(v14, v15, v5);
    v21.m128i_i64[0] = v5;
  }
  v6 = *(_QWORD *)(a3 + 48);
  v22 = nullptr;
  v23 = 0;
  if ( v6 )
  {
    v17 = (void *)qalloc_or_throw(v6);
    v18 = *(const void **)(a3 + 40);
    v22 = v17;
    v23.m128i_i64[1] = v6;
    memcpy(v17, v18, v6);
    v23.m128i_i64[0] = v6;
  }
  v24 = 0;
  copy_tinfo_t(&v24, a3 + 64);
  v7 = *a1;
  v25 = *(_DWORD *)(a3 + 72);
  v8 = a1[1];
  v9 = &a2[-v7];
  if ( a1[2] < (unsigned __int64)(v8 + 1) )
  {
    v16 = qvector_reserve(a1, v7, v8 + 1, 80);
    *a1 = v16;
    a2 = &v9[v16];
    v8 = a1[1];
  }
  memmove(a2 + 80, a2, 80 * v8 - (_QWORD)v9);
  *(_DWORD *)a2 = 0;
  copy_argloc(a2, v19);
  v10 = v20;
  v11 = _mm_loadu_si128(&v21);
  *((_QWORD *)a2 + 8) = 0;
  *(__m128i *)(a2 + 24) = v11;
  *((_QWORD *)a2 + 2) = v10;
  v12 = _mm_load_si128(&v23);
  v21 = 0;
  *((_QWORD *)a2 + 5) = v22;
  *((__m128i *)a2 + 3) = v12;
  v20 = nullptr;
  v22 = nullptr;
  v23 = 0;
  copy_tinfo_t(a2 + 64, &v24);
  *((_DWORD *)a2 + 18) = v25;
  ++a1[1];
  clear_tinfo_t(&v24);
  if ( v22 )
  {
    v23.m128i_i64[0] = 0;
    qfree(v22);
  }
  if ( v20 )
  {
    v21.m128i_i64[0] = 0;
    qfree(v20);
  }
  cleanup_argloc(v19);
  return v26 - __readfsqword(0x28u);
}

