__int64 __fastcall sub_24A70(__int64 a1, __int64 *a2, double a3, __m128i a4, __m128 a5, __m128 a6)
{
  unsigned int v6; // r12d

  if ( (unsigned int)sub_238A0(a1, a2, 0, a3, a4, a5, a6) == 1 )
  {
    v6 = 1;
    if ( (unsigned __int8)sub_31E10(a1, a2) )
      return (unsigned int)-6;
    else
      sub_31F60(a1, a2);
  }
  else
  {
    return (unsigned int)-5;
  }
  return v6;
}

