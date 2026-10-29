__int64 __fastcall sub_3E40F0(_DWORD *a1, unsigned int a2)
{
  if ( a2 <= 0x1F )
    return a1[20] * a2 + a1[88];
  if ( a2 == 48 )
    return (unsigned int)a1[120];
  if ( a2 == 49 )
    return (unsigned int)a1[121];
  return 0xFFFFFFFFLL;
}

