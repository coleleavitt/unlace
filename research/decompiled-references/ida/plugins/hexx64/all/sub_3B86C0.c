__int64 __fastcall sub_3B86C0(__int64 a1, __int64 *a2)
{
  __m128i v3; // xmm3
  __int64 v4; // r12
  __int64 v5; // rax
  __m128i si128; // xmm1
  __int64 result; // rax
  __int64 v8; // r13
  __m128i v9; // xmm2
  __int64 v10; // rdi
  __int64 v11; // rdi
  __m128i v12; // xmm4
  __m128i v13; // [rsp+0h] [rbp-58h] BYREF
  __m128i v14; // [rsp+10h] [rbp-48h] BYREF
  __m128i v15[3]; // [rsp+20h] [rbp-38h] BYREF

  v3 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v4 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v5 = *a2;
  si128 = _mm_loadu_si128((const __m128i *)a1);
  v13 = v3;
  *(_QWORD *)a1 = v5;
  result = a2[1];
  *(_QWORD *)(a1 + 8) = result;
  v8 = a2[2];
  v9 = _mm_loadu_si128((const __m128i *)(a2 + 3));
  a2[2] = 0;
  *(_OWORD *)(a2 + 3) = 0;
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v15[0] = si128;
    v14 = v9;
    result = qfree(v10);
    si128 = _mm_load_si128(v15);
    v9 = _mm_load_si128(&v14);
  }
  *(_QWORD *)(a1 + 16) = v8;
  *(__m128i *)(a1 + 24) = v9;
  v11 = a2[2];
  *(__m128i *)a2 = si128;
  if ( v11 )
  {
    a2[3] = 0;
    result = qfree(v11);
  }
  v12 = _mm_load_si128(&v13);
  a2[2] = v4;
  *(__m128i *)(a2 + 3) = v12;
  return result;
}

