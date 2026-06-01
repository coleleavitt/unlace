unsigned __int64 __fastcall sub_32240(__int64 *a1, __int64 a2)
{
  int v3; // r15d
  __int64 v4; // rax
  int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // rbx
  __int64 v9; // rax
  void *v10; // r13
  __int32 v11; // r9d
  __int64 v12; // rdx
  __m128i si128; // xmm0
  __int64 v14; // rsi
  __m128i v15; // xmm1
  __m128i v16; // xmm4
  __m128i v17; // xmm5
  __int64 v18; // rax
  __m128i v19; // xmm1
  __m128i v20; // xmm1
  __m128i v21; // xmm1
  size_t v23; // rbx
  __int64 v24; // rax
  size_t v25; // r13
  size_t v26; // rbx
  void *v27; // [rsp+8h] [rbp-150h]
  void *v28; // [rsp+10h] [rbp-148h]
  __m128i v29; // [rsp+18h] [rbp-140h] BYREF
  __int64 v30; // [rsp+28h] [rbp-130h] BYREF
  __m128i v31; // [rsp+30h] [rbp-128h] BYREF
  __m128i v32; // [rsp+40h] [rbp-118h] BYREF
  size_t n[2]; // [rsp+50h] [rbp-108h] BYREF
  __m128i v34[3]; // [rsp+60h] [rbp-F8h] BYREF
  int v35; // [rsp+90h] [rbp-C8h]
  int v36; // [rsp+B0h] [rbp-A8h]
  int v37; // [rsp+100h] [rbp-58h]
  __m128i v38; // [rsp+108h] [rbp-50h]
  unsigned __int64 v39; // [rsp+118h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 48);
  v28 = nullptr;
  v32 = _mm_loadu_si128((const __m128i *)a2);
  v35 = v3;
  v29.m128i_i64[1] = v4;
  v31 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  v34[1] = v32;
  v34[2] = v31;
  if ( v4 )
  {
    v23 = 2 * v4;
    v28 = (void *)qalloc_or_throw();
    memcpy(v28, *(const void **)(a2 + 40), v23);
  }
  v5 = *(_DWORD *)(a2 + 64);
  v6 = *(_QWORD *)(a2 + 80);
  v27 = nullptr;
  v36 = v5;
  v29.m128i_i64[0] = v6;
  if ( v6 )
  {
    v26 = v6;
    v27 = (void *)qalloc_or_throw();
    memcpy(v27, *(const void **)(a2 + 72), v26);
  }
  v7 = *(_QWORD *)(a2 + 104);
  v8 = nullptr;
  v30 = v7;
  if ( v7 )
  {
    v25 = 2 * v7;
    v8 = (void *)qalloc_or_throw();
    memcpy(v8, *(const void **)(a2 + 96), v25);
  }
  v9 = *(_QWORD *)(a2 + 128);
  v10 = nullptr;
  v34[0].m128i_i64[0] = v9;
  if ( v9 )
  {
    n[0] = 2 * v9;
    v10 = (void *)qalloc_or_throw();
    memcpy(v10, *(const void **)(a2 + 120), n[0]);
  }
  v11 = *(_DWORD *)(a2 + 144);
  v12 = a1[1];
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 152));
  v14 = *a1;
  v37 = *(_DWORD *)(a2 + 144);
  v38 = si128;
  if ( a1[2] < (unsigned __int64)(v12 + 1) )
  {
    v34[0].m128i_i32[3] = v11;
    *(__m128i *)n = si128;
    v24 = qvector_reserve();
    v12 = a1[1];
    v11 = v34[0].m128i_i32[3];
    *a1 = v24;
    v14 = v24;
    si128 = _mm_load_si128((const __m128i *)n);
  }
  v15 = _mm_loadl_epi64((const __m128i *)&v29.m128i_u64[1]);
  v16 = _mm_load_si128(&v32);
  v17 = _mm_load_si128(&v31);
  v18 = v14 + 168 * v12;
  *(__m128i *)(v18 + 48) = _mm_unpacklo_epi64(v15, v15);
  v19 = _mm_loadl_epi64(&v29);
  *(_QWORD *)(v18 + 40) = v28;
  *(_DWORD *)(v18 + 32) = v3;
  *(__m128i *)(v18 + 80) = _mm_unpacklo_epi64(v19, v19);
  v20 = _mm_loadl_epi64((const __m128i *)&v30);
  *(_DWORD *)(v18 + 64) = v5;
  *(_QWORD *)(v18 + 72) = v27;
  *(__m128i *)(v18 + 104) = _mm_unpacklo_epi64(v20, v20);
  v21 = _mm_loadl_epi64(v34);
  *(_QWORD *)(v18 + 96) = v8;
  *(_QWORD *)(v18 + 120) = v10;
  *(_DWORD *)(v18 + 144) = v11;
  *(__m128i *)v18 = v16;
  *(__m128i *)(v18 + 16) = v17;
  *(__m128i *)(v18 + 128) = _mm_unpacklo_epi64(v21, v21);
  *(__m128i *)(v18 + 152) = si128;
  ++a1[1];
  return v39 - __readfsqword(0x28u);
}

