__int64 __fastcall sub_2A730(__int64 *a1, __int64 *a2)
{
  __m128i v2; // xmm2
  __m128i v3; // xmm3
  __m128i v4; // xmm4
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r15
  __m128i v10; // xmm1
  __int64 v11; // rcx
  __m128i si128; // xmm1
  __int64 v13; // rcx
  __m128i v14; // xmm0
  __int64 v15; // rcx
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __m128i v18; // xmm5
  __int64 v19; // rdi
  __m128i v20; // xmm6
  __int64 v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm7
  __m128i v24; // xmm0
  char v26; // [rsp+6h] [rbp-10Ah]
  unsigned __int8 v27; // [rsp+7h] [rbp-109h]
  __m128i v28; // [rsp+8h] [rbp-108h] BYREF
  __m128i v29; // [rsp+18h] [rbp-F8h] BYREF
  __m128i v30; // [rsp+28h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+38h] [rbp-D8h]
  __int64 v32; // [rsp+40h] [rbp-D0h]
  __m128i v33[7]; // [rsp+48h] [rbp-C8h] BYREF
  __m128i v34[5]; // [rsp+B8h] [rbp-58h] BYREF

  v2 = _mm_loadu_si128((const __m128i *)a1 + 1);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 5));
  *((_OWORD *)a1 + 1) = 0;
  v4 = _mm_loadu_si128((const __m128i *)a1 + 4);
  v5 = a1[10];
  *(_OWORD *)(a1 + 5) = 0;
  v6 = a1[1];
  v7 = a1[4];
  a1[1] = 0;
  v8 = a1[7];
  v9 = *a1;
  *((_OWORD *)a1 + 4) = 0;
  a1[4] = 0;
  a1[7] = 0;
  v31 = v5;
  v28 = v2;
  v29 = v3;
  v30 = v4;
  v10 = _mm_loadu_si128((const __m128i *)a1 + 6);
  v26 = *((_BYTE *)a1 + 88);
  LOBYTE(v5) = *((_BYTE *)a1 + 112);
  *a1 = *a2;
  v11 = a2[1];
  v34[0] = v10;
  si128 = _mm_loadu_si128((const __m128i *)a2 + 1);
  a2[1] = 0;
  *((_OWORD *)a2 + 1) = 0;
  v27 = v5;
  if ( a1[1] )
  {
    a1[2] = 0;
    v32 = v11;
    v33[0] = si128;
    qfree();
    si128 = _mm_load_si128(v33);
    v11 = v32;
  }
  *((__m128i *)a1 + 1) = si128;
  a1[1] = v11;
  v13 = a2[4];
  v14 = _mm_loadu_si128((const __m128i *)(a2 + 5));
  a2[4] = 0;
  *(_OWORD *)(a2 + 5) = 0;
  if ( a1[4] )
  {
    a1[5] = 0;
    v32 = v13;
    v33[0] = v14;
    qfree();
    v14 = _mm_load_si128(v33);
    v13 = v32;
  }
  a1[4] = v13;
  *(__m128i *)(a1 + 5) = v14;
  v15 = a2[7];
  v16 = _mm_loadu_si128((const __m128i *)a2 + 4);
  a2[7] = 0;
  *((_OWORD *)a2 + 4) = 0;
  if ( a1[7] )
  {
    a1[8] = 0;
    v32 = v15;
    v33[0] = v16;
    qfree();
    v16 = _mm_load_si128(v33);
    v15 = v32;
  }
  a1[7] = v15;
  *((__m128i *)a1 + 4) = v16;
  *((_DWORD *)a1 + 20) = *((_DWORD *)a2 + 20);
  *((_DWORD *)a1 + 21) = *((_DWORD *)a2 + 21);
  *((_BYTE *)a1 + 88) = *((_BYTE *)a2 + 88);
  *((__m128i *)a1 + 6) = _mm_loadu_si128((const __m128i *)a2 + 6);
  *((_BYTE *)a1 + 112) = *((_BYTE *)a2 + 112);
  v17 = a2[1];
  *a2 = v9;
  if ( v17 )
  {
    a2[2] = 0;
    qfree();
  }
  v18 = _mm_load_si128(&v28);
  v19 = a2[4];
  a2[1] = v6;
  *((__m128i *)a2 + 1) = v18;
  if ( v19 )
  {
    a2[5] = 0;
    qfree();
  }
  v20 = _mm_load_si128(&v29);
  v21 = a2[7];
  a2[4] = v7;
  *(__m128i *)(a2 + 5) = v20;
  if ( v21 )
  {
    a2[8] = 0;
    qfree();
  }
  v22 = v31;
  v23 = _mm_load_si128(&v30);
  a2[7] = v8;
  v24 = _mm_load_si128(v34);
  a2[10] = v22;
  *((__m128i *)a2 + 4) = v23;
  *((_BYTE *)a2 + 88) = v26;
  *((__m128i *)a2 + 6) = v24;
  *((_BYTE *)a2 + 112) = v27;
  return v27;
}

