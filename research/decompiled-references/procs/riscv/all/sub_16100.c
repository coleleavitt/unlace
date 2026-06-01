__int64 __fastcall sub_16100(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v3; // ax
  unsigned int v4; // edx

  v3 = *(_WORD *)(a1 + 24);
  if ( v3 > 0x2Bu )
  {
    LOBYTE(a3) = v3 == 142;
    return a3;
  }
  else
  {
    v4 = 1;
    if ( v3 <= 0x28u )
    {
      v4 = 0;
      if ( v3 == 4 && !*(_QWORD *)(a1 + 96) && !*(_WORD *)(a1 + 46) )
        LOBYTE(v4) = *(_WORD *)(a1 + 86) == 1;
    }
    return v4;
  }
}
