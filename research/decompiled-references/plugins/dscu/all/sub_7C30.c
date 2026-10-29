__int64 __fastcall sub_7C30(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v6; // xmm2
  __m128i v8; // xmm0
  __int64 *v9; // r12
  __int64 v10; // rax
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __int64 v13; // rsi
  __int64 v14; // rdx
  __m128i si128; // xmm2
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i *v18; // rax
  __m128i v19; // xmm0
  __int64 *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __m128i v27[3]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-88h]
  __m128i v29; // [rsp+60h] [rbp-78h] BYREF
  __m128i v30; // [rsp+70h] [rbp-68h] BYREF
  __m128i v31; // [rsp+80h] [rbp-58h] BYREF
  __m128i v32; // [rsp+90h] [rbp-48h] BYREF
  __int64 v33; // [rsp+A0h] [rbp-38h]
  unsigned __int64 v34; // [rsp+A8h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 48) )
  {
    v6 = _mm_loadu_si128(a2);
    v8 = _mm_loadu_si128(a2 + 1);
    v9 = *(__int64 **)(a1 + 24);
    v10 = *(_QWORD *)(a1 + 40) + a2[1].m128i_i64[1];
    v28 = a2[4].m128i_i64[0];
    v11 = _mm_loadu_si128(a2 + 2);
    v27[0] = v8;
    v12 = _mm_loadu_si128(a2 + 3);
    v27[0].m128i_i64[1] = v10;
    v13 = *v9;
    v33 = v28;
    v14 = v9[1];
    v29 = v6;
    si128 = _mm_load_si128(v27);
    v27[1] = v11;
    v27[2] = v12;
    v30 = si128;
    v31 = v11;
    v32 = v12;
    if ( v9[2] < (unsigned __int64)(v14 + 1) )
    {
      v26 = qvector_reserve(v9, v13, v14 + 1, 72, a5, a6);
      v14 = v9[1];
      *v9 = v26;
      v13 = v26;
    }
    v16 = 9 * v14;
    v17 = v33;
    v18 = (__m128i *)(v13 + 8 * v16);
    *v18 = _mm_load_si128(&v29);
    v19 = _mm_load_si128(&v30);
    v18[4].m128i_i64[0] = v17;
    v18[1] = v19;
    v18[2] = _mm_load_si128(&v31);
    v18[3] = _mm_load_si128(&v32);
    ++v9[1];
    v20 = *(__int64 **)(a1 + 32);
    v21 = *v20;
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    v23 = v20[1];
    if ( v20[2] < (unsigned __int64)(v23 + 1) )
    {
      v25 = qvector_reserve(v20, v21, v23 + 1, 4, a5, a6);
      *v20 = v25;
      v21 = v25;
      v23 = v20[1];
    }
    *(_DWORD *)(v21 + 4 * v23) = v22;
    ++v20[1];
    *(_DWORD *)(a1 + 52) = a2[4].m128i_i32[0];
  }
  else
  {
    sub_78B0((__int64)"Found a 64-bit segment in 32-bit program, ignoring it");
  }
  return 0;
}
