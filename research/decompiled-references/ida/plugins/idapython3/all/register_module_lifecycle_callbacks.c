__m128i *__fastcall register_module_lifecycle_callbacks(const __m128i *a1)
{
  __int64 v1; // rdx
  __m128i v2; // xmm0
  __int64 v3; // rbx
  __int64 v4; // rsi
  __m128i *result; // rax
  __int64 v6; // rax
  __m128i v7; // [rsp+0h] [rbp-18h] BYREF

  v1 = xmmword_24678;
  v2 = _mm_loadu_si128(a1);
  v3 = a1[1].m128i_i64[0];
  v4 = qword_24670;
  if ( *((_QWORD *)&xmmword_24678 + 1) < (unsigned __int64)(xmmword_24678 + 1) )
  {
    v7 = v2;
    v6 = qvector_reserve();
    v1 = xmmword_24678;
    v2 = _mm_load_si128(&v7);
    qword_24670 = v6;
    v4 = v6;
  }
  result = (__m128i *)(v4 + 24 * v1);
  *result = v2;
  result[1].m128i_i64[0] = v3;
  *(_QWORD *)&xmmword_24678 = xmmword_24678 + 1;
  return result;
}

