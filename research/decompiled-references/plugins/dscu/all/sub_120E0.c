unsigned __int64 __fastcall sub_120E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // r15d
  __int64 v7; // rax
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rbx
  __int64 v12; // rax
  void *v13; // r13
  __int64 v14; // r9
  __int64 v15; // rdx
  __m128i si128; // xmm0
  __int64 v17; // rsi
  __m128i v18; // xmm1
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __int64 v21; // rax
  __m128i v22; // xmm1
  __m128i v23; // xmm1
  __m128i v24; // xmm1
  size_t v26; // rbx
  __int64 v27; // rax
  size_t v28; // r13
  size_t v29; // rbx
  void *v30; // [rsp+8h] [rbp-150h]
  void *v31; // [rsp+10h] [rbp-148h]
  __m128i v32; // [rsp+18h] [rbp-140h] BYREF
  __int64 v33; // [rsp+28h] [rbp-130h] BYREF
  __m128i v34; // [rsp+30h] [rbp-128h] BYREF
  __m128i v35; // [rsp+40h] [rbp-118h] BYREF
  size_t n[2]; // [rsp+50h] [rbp-108h] BYREF
  __m128i v37[3]; // [rsp+60h] [rbp-F8h] BYREF
  int v38; // [rsp+90h] [rbp-C8h]
  int v39; // [rsp+B0h] [rbp-A8h]
  int v40; // [rsp+100h] [rbp-58h]
  __m128i v41; // [rsp+108h] [rbp-50h]
  unsigned __int64 v42; // [rsp+118h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(_QWORD *)(a2 + 48);
  v31 = nullptr;
  v35 = _mm_loadu_si128((const __m128i *)a2);
  v38 = v6;
  v32.m128i_i64[1] = v7;
  v34 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  v37[1] = v35;
  v37[2] = v34;
  if ( v7 )
  {
    v26 = 2 * v7;
    v31 = (void *)qalloc_or_throw(2 * v7);
    memcpy(v31, *(const void **)(a2 + 40), v26);
  }
  v8 = *(_DWORD *)(a2 + 64);
  v9 = *(_QWORD *)(a2 + 80);
  v30 = nullptr;
  v39 = v8;
  v32.m128i_i64[0] = v9;
  if ( v9 )
  {
    v29 = v9;
    v30 = (void *)qalloc_or_throw(v9);
    memcpy(v30, *(const void **)(a2 + 72), v29);
  }
  v10 = *(_QWORD *)(a2 + 104);
  v11 = nullptr;
  v33 = v10;
  if ( v10 )
  {
    v28 = 2 * v10;
    v11 = (void *)qalloc_or_throw(2 * v10);
    memcpy(v11, *(const void **)(a2 + 96), v28);
  }
  v12 = *(_QWORD *)(a2 + 128);
  v13 = nullptr;
  v37[0].m128i_i64[0] = v12;
  if ( v12 )
  {
    n[0] = 2 * v12;
    v13 = (void *)qalloc_or_throw(2 * v12);
    memcpy(v13, *(const void **)(a2 + 120), n[0]);
  }
  v14 = *(unsigned int *)(a2 + 144);
  v15 = a1[1];
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 152));
  v17 = *a1;
  v40 = *(_DWORD *)(a2 + 144);
  v41 = si128;
  if ( a1[2] < (unsigned __int64)(v15 + 1) )
  {
    v37[0].m128i_i32[3] = v14;
    *(__m128i *)n = si128;
    v27 = qvector_reserve(a1, v17, v15 + 1, 168, a5, v14);
    v15 = a1[1];
    LODWORD(v14) = v37[0].m128i_i32[3];
    *a1 = v27;
    v17 = v27;
    si128 = _mm_load_si128((const __m128i *)n);
  }
  v18 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
  v19 = _mm_load_si128(&v35);
  v20 = _mm_load_si128(&v34);
  v21 = v17 + 168 * v15;
  *(__m128i *)(v21 + 48) = _mm_unpacklo_epi64(v18, v18);
  v22 = _mm_loadl_epi64(&v32);
  *(_QWORD *)(v21 + 40) = v31;
  *(_DWORD *)(v21 + 32) = v6;
  *(__m128i *)(v21 + 80) = _mm_unpacklo_epi64(v22, v22);
  v23 = _mm_loadl_epi64((const __m128i *)&v33);
  *(_DWORD *)(v21 + 64) = v8;
  *(_QWORD *)(v21 + 72) = v30;
  *(__m128i *)(v21 + 104) = _mm_unpacklo_epi64(v23, v23);
  v24 = _mm_loadl_epi64(v37);
  *(_QWORD *)(v21 + 96) = v11;
  *(_QWORD *)(v21 + 120) = v13;
  *(_DWORD *)(v21 + 144) = v14;
  *(__m128i *)v21 = v19;
  *(__m128i *)(v21 + 16) = v20;
  *(__m128i *)(v21 + 128) = _mm_unpacklo_epi64(v24, v24);
  *(__m128i *)(v21 + 152) = si128;
  ++a1[1];
  return v42 - __readfsqword(0x28u);
}
