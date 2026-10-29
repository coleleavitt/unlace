__int64 __fastcall sub_27FE0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // ax
  unsigned int v4; // edx
  char v5; // al

  v3 = *(_WORD *)(a1 + 24);
  if ( v3 == 910 )
  {
    LOBYTE(a3) = (*(_WORD *)(a1 + 46) & 0xFFFD) == 1;
    return a3;
  }
  else
  {
    v4 = 0;
    if ( v3 != 868 )
      return v4;
    v5 = *(_BYTE *)(a1 + 33);
    if ( (v5 & 0x18) == 0x10 )
    {
      v4 = ~v5 & 0x60;
      if ( (~v5 & 0x60) == 0 )
      {
        LOBYTE(v4) = (v5 & 6) == 0;
        return v4;
      }
    }
    return 0;
  }
}

