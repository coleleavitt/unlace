char __fastcall sub_6C2B0(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // dx
  __int64 v3; // rax
  __int64 v4; // rax
  char v5; // cl

  v2 = *(_WORD *)(a1 + 24);
  if ( v2 > 0x252u )
  {
    if ( v2 > 0x2C6u )
    {
      LOBYTE(v3) = v2 == 728;
      return v3;
    }
    if ( v2 <= 0x2C4u )
    {
      LOBYTE(v3) = v2 == 660;
      return v3;
    }
    goto LABEL_12;
  }
  if ( v2 <= 0x227u )
  {
    if ( v2 <= 0xFCu )
    {
      if ( v2 <= 0xE4u )
      {
        if ( v2 <= 0x7Bu )
        {
          LOBYTE(v3) = v2 > 0x79u;
          return v3;
        }
        if ( (unsigned __int16)(v2 - 125) <= 1u )
          goto LABEL_7;
LABEL_11:
        LOBYTE(v3) = 0;
        return v3;
      }
LABEL_23:
      LOBYTE(v3) = 1;
      return v3;
    }
    if ( v2 <= 0x161u )
    {
      LOBYTE(v3) = v2 > 0x15Fu;
      return v3;
    }
    v5 = v2 + 68;
    if ( (unsigned __int16)(v2 - 444) > 0x27u )
      goto LABEL_11;
    v3 = 1LL << v5;
    if ( ((1LL << v5) & 0x40000000DFLL) == 0 )
    {
      LOBYTE(v3) = (v3 & 0x8000000020LL) != 0;
      return v3;
    }
LABEL_12:
    LODWORD(v3) = (a2 >> 1) & 1;
    return v3;
  }
  v4 = 1LL << ((unsigned __int8)v2 - 40);
  if ( (v4 & 0x38000001A73LL) != 0 )
    goto LABEL_12;
  if ( (v4 & 0x58C) != 0 )
    goto LABEL_23;
  if ( v2 != 594 )
    goto LABEL_11;
LABEL_7:
  LOBYTE(v3) = a2 & 1;
  return v3;
}

