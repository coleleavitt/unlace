__int64 __fastcall sub_28D60(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm2
  __m128i v3; // xmm3
  __m128i v4; // xmm4
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r13
  __int16 v8; // r12
  __int64 v9; // rax
  __m128i si128; // xmm1
  __int64 v11; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm5
  __int64 result; // rax
  __int64 v15; // rdi
  __m128i v16; // xmm6
  __int64 v17; // rdi
  __m128i v18; // xmm7
  __m128i v19; // [rsp+0h] [rbp-88h] BYREF
  __m128i v20; // [rsp+10h] [rbp-78h] BYREF
  __m128i v21; // [rsp+20h] [rbp-68h] BYREF
  __m128i v22; // [rsp+30h] [rbp-58h] BYREF
  __m128i v23[4]; // [rsp+40h] [rbp-48h] BYREF

  v2 = _mm_loadu_si128((const __m128i *)a1);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_OWORD *)(a1 + 24) = 0;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v5 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 48) = 0;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 64);
  v20 = v2;
  *(_QWORD *)(a1 + 16) = 0;
  v8 = *(_WORD *)(a1 + 72);
  *(_QWORD *)(a1 + 40) = 0;
  v19 = v3;
  *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)a2);
  v9 = *(_QWORD *)(a2 + 16);
  v21 = v4;
  *(_QWORD *)(a2 + 16) = 0;
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_OWORD *)(a2 + 24) = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v22.m128i_i64[0] = v9;
    v23[0] = si128;
    qfree();
    si128 = _mm_load_si128(v23);
    v9 = v22.m128i_i64[0];
  }
  *(__m128i *)(a1 + 24) = si128;
  *(_QWORD *)(a1 + 16) = v9;
  v11 = *(_QWORD *)(a2 + 40);
  v12 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  *(_QWORD *)(a2 + 40) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  if ( *(_QWORD *)(a1 + 40) )
  {
    *(_QWORD *)(a1 + 48) = 0;
    v23[0].m128i_i64[0] = v11;
    v22 = v12;
    qfree();
    v11 = v23[0].m128i_i64[0];
    v12 = _mm_load_si128(&v22);
  }
  *(_QWORD *)(a1 + 40) = v11;
  v13 = _mm_load_si128(&v20);
  *(__m128i *)(a1 + 48) = v12;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_BYTE *)(a1 + 72) = *(_BYTE *)(a2 + 72);
  result = *(unsigned __int8 *)(a2 + 73);
  *(_BYTE *)(a1 + 73) = result;
  v15 = *(_QWORD *)(a2 + 16);
  *(__m128i *)a2 = v13;
  if ( v15 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    result = qfree();
  }
  v16 = _mm_load_si128(&v19);
  v17 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = v5;
  *(__m128i *)(a2 + 24) = v16;
  if ( v17 )
  {
    *(_QWORD *)(a2 + 48) = 0;
    result = qfree();
  }
  v18 = _mm_load_si128(&v21);
  *(_QWORD *)(a2 + 40) = v6;
  *(_QWORD *)(a2 + 64) = v7;
  *(_WORD *)(a2 + 72) = v8;
  *(__m128i *)(a2 + 48) = v18;
  return result;
}

