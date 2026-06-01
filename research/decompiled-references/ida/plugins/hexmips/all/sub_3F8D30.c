unsigned __int64 __fastcall sub_3F8D30(__int64 *a1, __int64 a2)
{
  size_t v3; // r13
  size_t v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  void *v11; // rax
  const void *v12; // rsi
  __int64 v13; // rax
  void *v14; // rax
  const void *v15; // rsi
  void *v16; // [rsp+10h] [rbp-78h]
  __m128i v17; // [rsp+18h] [rbp-70h] BYREF
  void *v18; // [rsp+28h] [rbp-60h]
  __m128i v19; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h]
  int v21; // [rsp+48h] [rbp-40h]
  unsigned __int64 v22; // [rsp+58h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  copy_argloc();
  v16 = nullptr;
  v17 = 0;
  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 )
  {
    v11 = (void *)qalloc_or_throw();
    v12 = *(const void **)(a2 + 16);
    v16 = v11;
    v17.m128i_i64[1] = v3;
    memcpy(v11, v12, v3);
    v17.m128i_i64[0] = v3;
  }
  v4 = *(_QWORD *)(a2 + 48);
  v18 = nullptr;
  v19 = 0;
  if ( v4 )
  {
    v14 = (void *)qalloc_or_throw();
    v15 = *(const void **)(a2 + 40);
    v18 = v14;
    v19.m128i_i64[1] = v4;
    memcpy(v14, v15, v4);
    v19.m128i_i64[0] = v4;
  }
  v20 = 0;
  copy_tinfo_t();
  v5 = a1[1];
  v6 = *a1;
  v21 = *(_DWORD *)(a2 + 72);
  if ( a1[2] < (unsigned __int64)(v5 + 1) )
  {
    v13 = qvector_reserve();
    *a1 = v13;
    v5 = a1[1];
    v6 = v13;
  }
  v7 = v6 + 80 * v5;
  *(_DWORD *)v7 = 0;
  copy_argloc();
  v8 = _mm_loadu_si128(&v17);
  *(_QWORD *)(v7 + 64) = 0;
  *(__m128i *)(v7 + 24) = v8;
  *(_QWORD *)(v7 + 16) = v16;
  v9 = _mm_load_si128(&v19);
  v17 = 0;
  *(_QWORD *)(v7 + 40) = v18;
  *(__m128i *)(v7 + 48) = v9;
  v18 = nullptr;
  v19 = 0;
  copy_tinfo_t();
  *(_DWORD *)(v7 + 72) = v21;
  ++a1[1];
  clear_tinfo_t();
  if ( v18 )
  {
    v19.m128i_i64[0] = 0;
    qfree();
  }
  cleanup_argloc();
  return v22 - __readfsqword(0x28u);
}

