__int64 __fastcall sub_2D5F0(__int64 a1, const __m128i *a2)
{
  int v2; // ebx
  __int64 v3; // r10
  __int64 v4; // r11
  int v5; // edx
  __int64 *v6; // rbx
  __int64 v7; // r10
  __m128i v8; // xmm0
  __int64 v9; // rbp
  __int64 v10; // r13
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  __m128i v20; // xmm0
  __m128i *v21; // rbp
  __int64 v22; // rax
  __m128i v23; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v24; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v25; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v26; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v27; // [rsp+40h] [rbp-98h] BYREF
  __m128i v28; // [rsp+50h] [rbp-88h] BYREF
  __m128i v29; // [rsp+60h] [rbp-78h] BYREF
  __m128i v30; // [rsp+70h] [rbp-68h] BYREF
  __m128i v31; // [rsp+80h] [rbp-58h] BYREF
  __m128i v32; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+A8h] [rbp-30h]

  v2 = *(_DWORD *)(a1 + 52);
  v33 = __readfsqword(0x28u);
  v3 = a2[2].m128i_i64[0];
  v4 = a2[2].m128i_i64[1];
  v23 = _mm_loadu_si128(a2);
  v5 = v2 - 1;
  v6 = *(__int64 **)(a1 + 16);
  v7 = *(_QWORD *)(a1 + 40) + v3;
  v24 = _mm_loadu_si128(a2 + 1);
  v25 = _mm_loadu_si128(a2 + 2);
  v26 = _mm_loadu_si128(a2 + 3);
  v8 = _mm_loadu_si128(a2 + 4);
  *(_DWORD *)(a1 + 52) = v5;
  v9 = *v6;
  v10 = v6[1];
  v27 = v8;
  if ( v5 <= 0
    || !*(_QWORD *)(**(_QWORD **)(a1 + 24) + 72LL * *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) - 40)
    || (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
        v12 = v9 + 80 * v10,
        v13 = v11 & v7,
        v14 = v11 & (v7 + v4),
        v12 == v9) )
  {
LABEL_11:
    v20 = _mm_load_si128(&v23);
    v25.m128i_i64[0] = v7;
    v28 = v20;
    v29 = _mm_load_si128(&v24);
    v30 = _mm_load_si128(&v25);
    v31 = _mm_load_si128(&v26);
    v32 = _mm_load_si128(&v27);
    if ( v6[2] < (unsigned __int64)(v10 + 1) )
    {
      v22 = qvector_reserve();
      v10 = v6[1];
      *v6 = v22;
      v9 = v22;
    }
    v21 = (__m128i *)(80 * v10 + v9);
    *v21 = _mm_load_si128(&v28);
    v21[1] = _mm_load_si128(&v29);
    v21[2] = _mm_load_si128(&v30);
    v21[3] = _mm_load_si128(&v31);
    v21[4] = _mm_load_si128(&v32);
    ++v6[1];
    return v33 - __readfsqword(0x28u);
  }
  else
  {
    v15 = v9;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v15 + 32);
      v17 = *(_QWORD *)(v15 + 40);
      v18 = v11 & (v16 + v17);
      if ( (v16 & v11) < v13 && v13 < v18 )
        break;
      if ( (v16 & v11) < v14 && v14 < v18 )
        break;
      v15 += 80;
      if ( v12 == v15 )
        goto LABEL_11;
    }
    return sub_14020(
             (__int64)"Section 0x%llX of size %llX intersects with the existing section(0x%llX, size %llX). Skipped",
             v7,
             v4,
             v16,
             v17);
  }
}

