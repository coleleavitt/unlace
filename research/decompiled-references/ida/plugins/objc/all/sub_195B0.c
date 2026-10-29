unsigned __int64 __fastcall sub_195B0(__int64 *a1, __int64 a2)
{
  size_t v2; // rbp
  size_t v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rbx
  void *v10; // rax
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __int64 v13; // rax
  __m128i v14; // xmm0
  void *v16; // rax
  const void *v17; // rsi
  __int64 v18; // rax
  void *v19; // rax
  const void *v20; // rsi
  __m128i v21; // [rsp+0h] [rbp-B8h] BYREF
  void *v22; // [rsp+10h] [rbp-A8h]
  __m128i v23; // [rsp+18h] [rbp-A0h] BYREF
  void *v24; // [rsp+28h] [rbp-90h]
  __m128i v25; // [rsp+30h] [rbp-88h] BYREF
  __int64 v26; // [rsp+40h] [rbp-78h]
  __m128i v27; // [rsp+48h] [rbp-70h] BYREF
  __m128i v28; // [rsp+58h] [rbp-60h] BYREF
  __m128i v29; // [rsp+68h] [rbp-50h] BYREF
  __int64 v30; // [rsp+78h] [rbp-40h]
  __int64 v31; // [rsp+80h] [rbp-38h]
  char v32; // [rsp+88h] [rbp-30h]
  unsigned __int64 v33; // [rsp+98h] [rbp-20h]

  v2 = *(_QWORD *)(a2 + 24);
  v33 = __readfsqword(0x28u);
  v22 = 0;
  v21 = _mm_loadu_si128((const __m128i *)a2);
  v23 = 0;
  if ( v2 )
  {
    v16 = (void *)qalloc_or_throw();
    v17 = *(const void **)(a2 + 16);
    v23.m128i_i64[1] = v2;
    v22 = v16;
    memcpy(v16, v17, v2);
    v23.m128i_i64[0] = v2;
  }
  v4 = *(_QWORD *)(a2 + 48);
  v24 = 0;
  v25 = 0;
  if ( v4 )
  {
    v19 = (void *)qalloc_or_throw();
    v20 = *(const void **)(a2 + 40);
    v24 = v19;
    v25.m128i_i64[1] = v4;
    memcpy(v19, v20, v4);
    v25.m128i_i64[0] = v4;
  }
  v26 = 0;
  copy_tinfo_t();
  v5 = *(_QWORD *)(a2 + 120);
  v6 = *(_QWORD *)(a2 + 128);
  v7 = *a1;
  v27 = _mm_loadu_si128((const __m128i *)(a2 + 72));
  v30 = v5;
  LOBYTE(v5) = *(_BYTE *)(a2 + 136);
  v31 = v6;
  v8 = a1[1];
  v28 = _mm_loadu_si128((const __m128i *)(a2 + 88));
  v32 = v5;
  v29 = _mm_loadu_si128((const __m128i *)(a2 + 104));
  if ( a1[2] < (unsigned __int64)(v8 + 1) )
  {
    v18 = qvector_reserve();
    *a1 = v18;
    v8 = a1[1];
    v7 = v18;
  }
  v9 = v7 + 144 * v8;
  *(__m128i *)v9 = _mm_load_si128(&v21);
  v10 = v22;
  v11 = _mm_loadu_si128(&v23);
  *(_QWORD *)(v9 + 64) = 0;
  *(__m128i *)(v9 + 24) = v11;
  *(_QWORD *)(v9 + 16) = v10;
  v12 = _mm_load_si128(&v25);
  v23 = 0;
  *(_QWORD *)(v9 + 40) = v24;
  *(__m128i *)(v9 + 48) = v12;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  copy_tinfo_t();
  v13 = v30;
  *(__m128i *)(v9 + 72) = _mm_loadu_si128(&v27);
  v14 = _mm_loadu_si128(&v28);
  *(_QWORD *)(v9 + 120) = v13;
  *(__m128i *)(v9 + 88) = v14;
  *(__m128i *)(v9 + 104) = _mm_loadu_si128(&v29);
  *(_QWORD *)(v9 + 128) = v31;
  *(_BYTE *)(v9 + 136) = v32;
  ++a1[1];
  clear_tinfo_t();
  if ( v24 )
  {
    v25.m128i_i64[0] = 0;
    qfree();
  }
  if ( v22 )
  {
    v23.m128i_i64[0] = 0;
    qfree();
  }
  return v33 - __readfsqword(0x28u);
}
