int __fastcall sub_EE420(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int16 v4; // cx
  __int16 v5; // r8
  char v6; // al
  int result; // eax
  long double v8; // fst7
  long double v9; // fst7

  v4 = *(_WORD *)(a1 + 20);
  v5 = *(_WORD *)(a2 + 20);
  v6 = v5 | v4;
  if ( (((unsigned __int8)v5 | (unsigned __int8)v4) & 1) != 0 )
    return (v5 & 1) - (v4 & 1);
  if ( (v6 & 0x2C) == 0 )
  {
    if ( (v6 & 2) != 0 )
    {
      if ( (v4 & 2) == 0 )
        return 1;
      if ( (v5 & 2) == 0 )
        return -1;
      if ( a3 )
        return sub_EE2B0((const __m128i *)a1, (const __m128i *)a2, a3, nullptr, a4);
    }
    return sub_C7D20(a1, a2);
  }
  if ( ((unsigned __int8)v5 & (unsigned __int8)v4 & 0x24) != 0 )
    goto LABEL_13;
  if ( ((unsigned __int8)v5 & (unsigned __int8)v4 & 8) != 0 )
  {
    if ( *(double *)a2 <= *(double *)a1 )
      return *(double *)a1 > *(double *)a2;
    return -1;
  }
  if ( (v4 & 0x24) != 0 )
  {
    if ( (v5 & 8) != 0 )
    {
      v9 = (long double)*(__int64 *)a1;
      if ( *(double *)a2 <= v9 )
        return v9 > *(double *)a2;
      return -1;
    }
    if ( (v5 & 0x24) == 0 )
      return -1;
LABEL_13:
    if ( *(_QWORD *)a1 >= *(_QWORD *)a2 )
      return *(_QWORD *)a1 > *(_QWORD *)a2;
    return -1;
  }
  result = 1;
  if ( (v4 & 8) == 0 )
    return result;
  if ( (v5 & 0x24) == 0 )
    return -1;
  v8 = (long double)*(__int64 *)a2;
  if ( *(double *)a1 <= v8 )
    return -(v8 > *(double *)a1);
  return result;
}
