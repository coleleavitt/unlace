bool __fastcall sub_B920(unsigned __int64 a1, bool a2)
{
  bool result; // al
  unsigned int v3; // edx
  unsigned int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( (get_flags_ex(a1, 4) & 0x10000) == 0 || a1 <= 3 )
    return 0;
  v3 = sub_B8C0(a1 - 4);
  result = a2;
  v4 = v3 & 0xC0000000;
  if ( (v3 & 0xC0000000) != 0x40000000 )
  {
    if ( v4 != 0x80000000 )
    {
      if ( !v4 && (v3 & 0x20000000) == 0 )
      {
        v5 = (v3 >> 22) & 7;
        if ( v5 == 3 )
          return result;
        if ( (v3 & 0x1000000) != 0 )
        {
          if ( (unsigned int)(v5 - 5) <= 1 )
          {
LABEL_12:
            result = a2;
            if ( !a2 )
              return (v3 & 0x1E000000) == 0x10000000;
            return result;
          }
        }
        else if ( (unsigned int)(v5 - 1) <= 1 )
        {
          goto LABEL_12;
        }
      }
      return 0;
    }
    v6 = (v3 >> 19) & 0x3F;
    if ( v6 == 56 )
    {
      if ( !a2 )
        return (v3 & 0x3E000000) == 0;
    }
    else
    {
      return v6 == 57;
    }
  }
  return result;
}
