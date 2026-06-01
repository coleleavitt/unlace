__int64 __fastcall sub_1E7F0(unsigned __int64 a1)
{
  int v1; // eax

  v1 = getinf(5);
  if ( v1 != 18 && v1 != 25 )
    return 0xFFFFFFFFLL;
  if ( a1 > 7 )
    return 4294967294LL;
  return dword_28640[a1];
}

