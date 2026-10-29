const __m128i **__fastcall sub_FD7A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  const __m128i **result; // rax

  v6 = *(_QWORD *)(a1 + 16);
  if ( *(__int16 *)(v6 + 20) >= 0 )
    result = (const __m128i **)sub_EF2D0((_QWORD *)(a1 + 8), v6, 0, a4, a5, a6);
  else
    result = *(const __m128i ***)(v6 + 8);
  if ( result )
  {
    if ( *result )
      return (const __m128i **)sub_FD650(a1, *result, a3, a4, a5, a6);
  }
  return result;
}
