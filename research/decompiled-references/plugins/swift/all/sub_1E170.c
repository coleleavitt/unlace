__int64 __fastcall sub_1E170(unsigned __int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = getinf(5);
  if ( v2 == 18 || v2 == 25 )
  {
    if ( a1 <= 5 )
      return dword_28600[a1];
    return 4294967294LL;
  }
  if ( v2 != 11 )
    return 0xFFFFFFFFLL;
  if ( a1 > 3 )
    return 4294967294LL;
  if ( a2 == 1 )
    return dword_21A00[a1];
  else
    return dword_285C0[a1];
}
