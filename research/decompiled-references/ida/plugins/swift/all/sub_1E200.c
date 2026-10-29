__int64 __fastcall sub_1E200(unsigned __int64 a1, __int64 a2)
{
  int v2; // eax

  if ( ((a2 - 4) & 0xFFFFFFFFFFFFFFFBLL) != 0 )
    return 0xFFFFFFFFLL;
  v2 = getinf(5);
  if ( v2 == 18 || v2 == 25 )
  {
    if ( a1 <= 7 )
      return dword_285E0[a1];
  }
  else
  {
    if ( v2 != 11 )
      return 0xFFFFFFFFLL;
    if ( a1 <= 3 )
      return dword_285B0[a1];
  }
  return 4294967294LL;
}

