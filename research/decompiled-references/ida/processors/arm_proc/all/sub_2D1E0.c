__int64 __fastcall sub_2D1E0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int16 v3; // cx
  unsigned int v4; // edx

  v3 = *(_WORD *)(a1 + 24);
  if ( v3 > 0x2Fu )
  {
    LOBYTE(a3) = (unsigned __int16)(v3 - 470) <= 1u;
    return a3;
  }
  else if ( v3 <= 0x16u )
  {
    return 0;
  }
  else
  {
    v4 = 1;
    if ( ((1LL << v3) & 0x820080000000LL) == 0 && (v4 = 0, ((1LL << v3) & 0x2800000) != 0) && *(_BYTE *)(a1 + 41) == 1 )
    {
      LOBYTE(v4) = *(_WORD *)(a1 + 46) == 15;
      return v4;
    }
    else
    {
      return v4;
    }
  }
}

