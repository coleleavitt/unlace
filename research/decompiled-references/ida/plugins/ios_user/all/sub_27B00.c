__int64 __fastcall sub_27B00(__int64 a1, const __m128i *a2)
{
  __m128i v2; // xmm2
  __m128i v4; // xmm0
  __int64 *v5; // r12
  __int64 v6; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __int64 v9; // rsi
  __int64 v10; // rdx
  __m128i si128; // xmm2
  __int64 v12; // rax
  __int64 v13; // rdx
  __m128i *v14; // rax
  __m128i v15; // xmm0
  __int64 *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __m128i v23[3]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-88h]
  __m128i v25; // [rsp+60h] [rbp-78h] BYREF
  __m128i v26; // [rsp+70h] [rbp-68h] BYREF
  __m128i v27; // [rsp+80h] [rbp-58h] BYREF
  __m128i v28; // [rsp+90h] [rbp-48h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-38h]
  unsigned __int64 v30; // [rsp+A8h] [rbp-30h]

  v30 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 48) )
  {
    v2 = _mm_loadu_si128(a2);
    v4 = _mm_loadu_si128(a2 + 1);
    v5 = *(__int64 **)(a1 + 24);
    v6 = *(_QWORD *)(a1 + 40) + a2[1].m128i_i64[1];
    v24 = a2[4].m128i_i64[0];
    v7 = _mm_loadu_si128(a2 + 2);
    v23[0] = v4;
    v8 = _mm_loadu_si128(a2 + 3);
    v23[0].m128i_i64[1] = v6;
    v9 = *v5;
    v29 = v24;
    v10 = v5[1];
    v25 = v2;
    si128 = _mm_load_si128(v23);
    v23[1] = v7;
    v23[2] = v8;
    v26 = si128;
    v27 = v7;
    v28 = v8;
    if ( v5[2] < (unsigned __int64)(v10 + 1) )
    {
      v22 = qvector_reserve();
      v10 = v5[1];
      *v5 = v22;
      v9 = v22;
    }
    v12 = 9 * v10;
    v13 = v29;
    v14 = (__m128i *)(v9 + 8 * v12);
    *v14 = _mm_load_si128(&v25);
    v15 = _mm_load_si128(&v26);
    v14[4].m128i_i64[0] = v13;
    v14[1] = v15;
    v14[2] = _mm_load_si128(&v27);
    v14[3] = _mm_load_si128(&v28);
    ++v5[1];
    v16 = *(__int64 **)(a1 + 32);
    v17 = *v16;
    v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    v19 = v16[1];
    if ( v16[2] < (unsigned __int64)(v19 + 1) )
    {
      v21 = qvector_reserve();
      *v16 = v21;
      v17 = v21;
      v19 = v16[1];
    }
    *(_DWORD *)(v17 + 4 * v19) = v18;
    ++v16[1];
    *(_DWORD *)(a1 + 52) = a2[4].m128i_i32[0];
  }
  else
  {
    sub_130A0((__int64)"Found a 64-bit segment in 32-bit program, ignoring it");
  }
  return 0;
}

