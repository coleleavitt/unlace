__int64 __fastcall sub_16EB70(__int64 a1)
{
  __int64 result; // rax
  __m128i v2; // xmm1
  __int64 v3; // rcx
  __m128 v4; // xmm0
  char *v5; // rsi

  if ( *(_QWORD *)(a1 + 40) > 1u )
  {
    sub_16E9A0("certificate", *(char **)(a1 + 32), 17);
    v5 = (char *)s1;
    if ( *(_QWORD *)(a1 + 64) )
      v5 = *(char **)(a1 + 56);
    sub_16E9A0("private key", v5, 17);
  }
  result = xmmword_2426D8;
  if ( (unsigned __int64)xmmword_2426D8 > 1 )
  {
    v2 = _mm_loadu_si128((const __m128i *)(a1 + 120));
    v3 = qword_2426D0;
    v4 = _mm_loadh_ps((const double *)&xmmword_2426D8 + 1);
    qword_2426D0 = *(_QWORD *)(a1 + 112);
    *(_QWORD *)(a1 + 112) = v3;
    *(__m128 *)(a1 + 120) = v4;
    xmmword_2426D8 = (__int128)v2;
  }
  return result;
}
