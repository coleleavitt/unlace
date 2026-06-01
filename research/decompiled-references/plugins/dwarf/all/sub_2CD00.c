__int64 __fastcall sub_2CD00(__int64 a1, const __m128i *a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  const char *v6; // rsi

  v3 = sub_97BF0(a2);
  if ( (unsigned __int16)v3 > 0x17u )
    return 0;
  v4 = 8912900;
  if ( !_bittest64(&v4, v3) )
    return 0;
  if ( !(unsigned __int8)sub_84C30(a2) )
    return 0;
  v6 = (const char *)sub_9AC00(a2);
  if ( strcmp(*(const char **)(a1 + 24), v6) )
    return 0;
  if ( (a2[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || a2[14].m128i_i64[0] == -1 )
  {
    if ( under_debugger )
      BUG();
    interr(30478);
    return sub_2CDB0();
  }
  else
  {
    *(__m128i *)(a1 + 32) = _mm_loadu_si128(a2 + 14);
    return 1;
  }
}
