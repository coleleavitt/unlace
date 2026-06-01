__int64 __fastcall sub_214C90(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __m128i si128; // xmm0
  __m128i v5[2]; // [rsp+0h] [rbp-28h] BYREF

  result = (__int64)sub_5E350(a1, (__int64 *)a2);
  v3 = *(_QWORD *)(a2 + 16);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  if ( a1[2] )
  {
    a1[3] = 0;
    v5[0] = si128;
    result = qfree();
    si128 = _mm_load_si128(v5);
  }
  a1[2] = v3;
  *(__m128i *)(a1 + 3) = si128;
  return result;
}

