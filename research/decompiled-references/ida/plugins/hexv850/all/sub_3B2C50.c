__int64 __fastcall sub_3B2C50(__int64 a1, __int64 *a2)
{
  __m128i v2; // xmm3
  __int64 v3; // r13
  __m128i si128; // xmm1
  int v5; // r12d
  __int64 v6; // rax
  __int64 v7; // r14
  __m128i v8; // xmm2
  __int64 result; // rax
  __int64 v10; // rdi
  __m128i v11; // xmm4
  __m128i v12; // [rsp+0h] [rbp-58h] BYREF
  __m128i v13; // [rsp+10h] [rbp-48h] BYREF
  __m128i v14[3]; // [rsp+20h] [rbp-38h] BYREF

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v3 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 24) = 0;
  si128 = _mm_loadu_si128((const __m128i *)a1);
  v5 = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  v6 = *a2;
  v12 = v2;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = a2[1];
  v7 = a2[2];
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 3));
  a2[2] = 0;
  *(_OWORD *)(a2 + 3) = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v14[0] = si128;
    v13 = v8;
    qfree();
    si128 = _mm_load_si128(v14);
    v8 = _mm_load_si128(&v13);
  }
  *(_QWORD *)(a1 + 16) = v7;
  *(__m128i *)(a1 + 24) = v8;
  result = *((unsigned int *)a2 + 10);
  *(_DWORD *)(a1 + 40) = result;
  v10 = a2[2];
  *(__m128i *)a2 = si128;
  if ( v10 )
  {
    a2[3] = 0;
    result = qfree();
  }
  v11 = _mm_load_si128(&v12);
  a2[2] = v3;
  *((_DWORD *)a2 + 10) = v5;
  *(__m128i *)(a2 + 3) = v11;
  return result;
}

