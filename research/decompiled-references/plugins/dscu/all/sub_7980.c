__int64 __fastcall sub_7980(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, unsigned __int64 a6)
{
  int v6; // ebx
  __int64 v7; // r10
  __int64 v8; // r11
  int v9; // edx
  __int64 *v10; // rbx
  __int64 v11; // r10
  __m128i v12; // xmm0
  __int64 v13; // rbp
  __int64 v14; // r13
  unsigned __int64 v15; // rdi
  __int64 v16; // r14
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __m128i v22; // xmm0
  __m128i *v23; // rbp
  __int64 v24; // rax
  __m128i v25; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v26; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v27; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v28; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v29; // [rsp+40h] [rbp-98h] BYREF
  __m128i v30; // [rsp+50h] [rbp-88h] BYREF
  __m128i v31; // [rsp+60h] [rbp-78h] BYREF
  __m128i v32; // [rsp+70h] [rbp-68h] BYREF
  __m128i v33; // [rsp+80h] [rbp-58h] BYREF
  __m128i v34; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+A8h] [rbp-30h]

  v6 = *(_DWORD *)(a1 + 52);
  v35 = __readfsqword(0x28u);
  v7 = a2[2].m128i_i64[0];
  v8 = a2[2].m128i_i64[1];
  v25 = _mm_loadu_si128(a2);
  v9 = v6 - 1;
  v10 = *(__int64 **)(a1 + 16);
  v11 = *(_QWORD *)(a1 + 40) + v7;
  v26 = _mm_loadu_si128(a2 + 1);
  v27 = _mm_loadu_si128(a2 + 2);
  v28 = _mm_loadu_si128(a2 + 3);
  v12 = _mm_loadu_si128(a2 + 4);
  *(_DWORD *)(a1 + 52) = v9;
  v13 = *v10;
  v14 = v10[1];
  v29 = v12;
  if ( v9 <= 0
    || !*(_QWORD *)(**(_QWORD **)(a1 + 24) + 72LL * *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) - 40)
    || (v15 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
        v16 = v13 + 80 * v14,
        v17 = v15 & v11,
        a6 = v15 & (v11 + v8),
        v16 == v13) )
  {
LABEL_11:
    v22 = _mm_load_si128(&v25);
    v27.m128i_i64[0] = v11;
    v30 = v22;
    v31 = _mm_load_si128(&v26);
    v32 = _mm_load_si128(&v27);
    v33 = _mm_load_si128(&v28);
    v34 = _mm_load_si128(&v29);
    if ( v10[2] < (unsigned __int64)(v14 + 1) )
    {
      v24 = qvector_reserve(
              v10,
              v13,
              v14 + 1,
              80,
              a5,
              a6,
              v25.m128i_i64[0],
              v25.m128i_i64[1],
              v26.m128i_i64[0],
              v26.m128i_i64[1]);
      v14 = v10[1];
      *v10 = v24;
      v13 = v24;
    }
    v23 = (__m128i *)(80 * v14 + v13);
    *v23 = _mm_load_si128(&v30);
    v23[1] = _mm_load_si128(&v31);
    v23[2] = _mm_load_si128(&v32);
    v23[3] = _mm_load_si128(&v33);
    v23[4] = _mm_load_si128(&v34);
    ++v10[1];
    return v35 - __readfsqword(0x28u);
  }
  else
  {
    v18 = v13;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v18 + 32);
      a5 = *(_QWORD *)(v18 + 40);
      v20 = v15 & (v19 + a5);
      if ( (v19 & v15) < v17 && v17 < v20 )
        break;
      if ( (v19 & v15) < a6 && a6 < v20 )
        break;
      v18 += 80;
      if ( v16 == v18 )
        goto LABEL_11;
    }
    return sub_78B0((__int64)"Section 0x%llX of size %llX intersects with the existing section(0x%llX, size %llX). Skipped");
  }
}
