unsigned __int64 __fastcall sub_320B0(__int64 *a1, __int64 a2)
{
  void *v2; // r14
  size_t v3; // r12
  __int64 v5; // rax
  void *v6; // r13
  __int64 v7; // rax
  void *v8; // r15
  int v9; // r11d
  __int64 v10; // r10
  int v11; // r9d
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  __m128i v19; // xmm2
  __m128i v20; // xmm2
  __m128i v21; // xmm2
  void *v23; // rax
  const void *v24; // rsi
  size_t v25; // r15
  __m128i v26; // [rsp+8h] [rbp-140h] BYREF
  __m128i v27; // [rsp+18h] [rbp-130h] BYREF
  __int64 v28; // [rsp+28h] [rbp-120h]
  __int64 v29; // [rsp+30h] [rbp-118h]
  int v30; // [rsp+38h] [rbp-110h]
  int v31; // [rsp+3Ch] [rbp-10Ch]
  __m128i v32; // [rsp+40h] [rbp-108h] BYREF
  __m128i v33; // [rsp+50h] [rbp-F8h] BYREF
  int v34; // [rsp+C0h] [rbp-88h]
  __int64 v35; // [rsp+C8h] [rbp-80h]
  int v36; // [rsp+D0h] [rbp-78h]
  __m128i v37; // [rsp+D8h] [rbp-70h]
  __m128i v38; // [rsp+E8h] [rbp-60h]
  __int64 v39; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+108h] [rbp-40h]

  v2 = nullptr;
  v3 = *(_QWORD *)(a2 + 8);
  v40 = __readfsqword(0x28u);
  if ( v3 )
  {
    v2 = (void *)sub_198760(v3);
    memcpy(v2, *(const void **)a2, v3);
  }
  v5 = *(_QWORD *)(a2 + 32);
  v6 = nullptr;
  v27.m128i_i64[0] = v5;
  if ( v5 )
  {
    v25 = v5;
    v6 = (void *)sub_198760(v5);
    memcpy(v6, *(const void **)(a2 + 24), v25);
  }
  v7 = *(_QWORD *)(a2 + 56);
  v8 = nullptr;
  v26.m128i_i64[0] = v7;
  if ( v7 )
  {
    v8 = (void *)sub_198760(v7);
    memcpy(v8, *(const void **)(a2 + 48), v26.m128i_u64[0]);
  }
  v26.m128i_i64[1] = *(_QWORD *)(a2 + 80);
  if ( v26.m128i_i64[1] )
  {
    v23 = (void *)sub_198760(v26.m128i_i64[1]);
    v24 = *(const void **)(a2 + 72);
    v27.m128i_i64[1] = (__int64)v23;
    memcpy(v23, v24, v26.m128i_u64[1]);
  }
  else
  {
    v27.m128i_i64[1] = 0;
  }
  v9 = *(_DWORD *)(a2 + 96);
  v10 = *(_QWORD *)(a2 + 104);
  v11 = *(_DWORD *)(a2 + 112);
  v12 = _mm_loadu_si128((const __m128i *)(a2 + 120));
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 136));
  v14 = *(_QWORD *)(a2 + 152);
  v34 = v9;
  v15 = a1[1];
  v16 = *a1;
  v35 = v10;
  v36 = v11;
  v39 = v14;
  v37 = v12;
  v38 = v13;
  if ( a1[2] < (unsigned __int64)(v15 + 1) )
  {
    v31 = v11;
    v29 = v10;
    v30 = v9;
    v28 = v14;
    v33 = v12;
    v32 = v13;
    v16 = sub_1987B0(a1, v16, v15 + 1, 160);
    v11 = v31;
    v10 = v29;
    *a1 = v16;
    v12 = _mm_load_si128(&v33);
    v15 = a1[1];
    v13 = _mm_load_si128(&v32);
    v9 = v30;
    v14 = v28;
  }
  v17 = v27.m128i_i64[1];
  v18 = v16 + 160 * v15;
  *(__m128i *)(v18 + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  v19 = _mm_loadl_epi64(&v27);
  *(_QWORD *)v18 = v2;
  *(_QWORD *)(v18 + 24) = v6;
  *(__m128i *)(v18 + 32) = _mm_unpacklo_epi64(v19, v19);
  v20 = _mm_loadl_epi64(&v26);
  *(_QWORD *)(v18 + 48) = v8;
  *(_QWORD *)(v18 + 72) = v17;
  *(__m128i *)(v18 + 56) = _mm_unpacklo_epi64(v20, v20);
  v21 = _mm_loadl_epi64((const __m128i *)&v26.m128i_u64[1]);
  *(_DWORD *)(v18 + 96) = v9;
  *(_QWORD *)(v18 + 104) = v10;
  *(_DWORD *)(v18 + 112) = v11;
  *(_QWORD *)(v18 + 152) = v14;
  *(__m128i *)(v18 + 80) = _mm_unpacklo_epi64(v21, v21);
  *(__m128i *)(v18 + 120) = v12;
  *(__m128i *)(v18 + 136) = v13;
  ++a1[1];
  return v40 - __readfsqword(0x28u);
}
