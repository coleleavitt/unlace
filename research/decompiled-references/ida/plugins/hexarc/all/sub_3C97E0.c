__int64 __fastcall sub_3C97E0(unsigned __int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // eax

  v5 = a1 & 7;
  if ( v5 > 2 )
    return 0;
  if ( v5 - 1 <= 1 )
    sub_3C9740(a5, v5, a1 >> 3, a2, a3);
  return 1;
}

