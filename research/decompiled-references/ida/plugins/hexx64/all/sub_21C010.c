__int64 __fastcall sub_21C010(__int64 *a1, __int64 a2, double a3)
{
  __int64 result; // rax
  __int64 v5; // r12
  __m128i si128; // xmm0
  __int64 v7; // rdi
  __m128i v8[2]; // [rsp+0h] [rbp-28h] BYREF

  result = (__int64)sub_648D0(a1, (const void **)a2, a3);
  v5 = *(_QWORD *)(a2 + 16);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v7 = a1[2];
  if ( v7 )
  {
    a1[3] = 0;
    v8[0] = si128;
    result = qfree(v7);
    si128 = _mm_load_si128(v8);
  }
  a1[2] = v5;
  *(__m128i *)(a1 + 3) = si128;
  return result;
}

