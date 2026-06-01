__int64 __fastcall sub_3B0DC0(__int64 a1, __int64 *a2)
{
  __m128i v2; // xmm3
  __int64 v3; // r12
  __int64 v4; // rax
  __m128i si128; // xmm1
  __int64 result; // rax
  __int64 v7; // r13
  __m128i v8; // xmm2
  __int64 v9; // rdi
  __m128i v10; // xmm4
  __m128i v11; // [rsp+0h] [rbp-58h] BYREF
  __m128i v12; // [rsp+10h] [rbp-48h] BYREF
  __m128i v13[3]; // [rsp+20h] [rbp-38h] BYREF

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v3 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v4 = *a2;
  si128 = _mm_loadu_si128((const __m128i *)a1);
  v11 = v2;
  *(_QWORD *)a1 = v4;
  result = a2[1];
  *(_QWORD *)(a1 + 8) = result;
  v7 = a2[2];
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 3));
  a2[2] = 0;
  *(_OWORD *)(a2 + 3) = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v13[0] = si128;
    v12 = v8;
    result = qfree();
    si128 = _mm_load_si128(v13);
    v8 = _mm_load_si128(&v12);
  }
  *(_QWORD *)(a1 + 16) = v7;
  *(__m128i *)(a1 + 24) = v8;
  v9 = a2[2];
  *(__m128i *)a2 = si128;
  if ( v9 )
  {
    a2[3] = 0;
    result = qfree();
  }
  v10 = _mm_load_si128(&v11);
  a2[2] = v3;
  *(__m128i *)(a2 + 3) = v10;
  return result;
}

