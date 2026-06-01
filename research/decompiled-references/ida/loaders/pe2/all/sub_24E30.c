__int64 __fastcall sub_24E30(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  int v7; // edx

  v6 = a2 & 0xFF000000;
  if ( (a2 & 0xFF000000) == 0x14000000 )
  {
    v7 = 10;
    return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
  }
  if ( v6 > 0x14000000 )
  {
    if ( v6 == 637534208 )
    {
      v7 = 16;
      return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
    }
    if ( v6 > 0x26000000 )
    {
      if ( v6 == 704643072 )
      {
        v7 = 19;
        return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
      }
      if ( v6 > 0x2A000000 )
      {
        if ( v6 == 721420288 )
        {
          v7 = 21;
          return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
        }
      }
      else
      {
        if ( v6 == 654311424 )
        {
          v7 = 17;
          return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
        }
        if ( v6 == 671088640 )
        {
          v7 = 18;
          return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
        }
      }
    }
    else
    {
      if ( v6 == 452984832 )
      {
        v7 = 13;
        return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
      }
      if ( v6 > 0x1B000000 )
      {
        if ( v6 == 0x20000000 )
        {
          v7 = 14;
          return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
        }
        if ( v6 == 587202560 )
        {
          v7 = 15;
          return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
        }
      }
      else
      {
        if ( v6 == 385875968 )
        {
          v7 = 9;
          return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
        }
        if ( v6 == 436207616 )
        {
          v7 = 12;
          return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
        }
      }
    }
LABEL_48:
    sub_DB80((__int64)"Unexpected token %x.", a2, a3, a4, a5, a6, 0);
  }
  if ( v6 == 0x8000000 )
  {
    v7 = 4;
    return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
  }
  if ( v6 > 0x8000000 )
  {
    if ( v6 == 234881024 )
    {
      v7 = 8;
      return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
    }
    if ( v6 > 0xE000000 )
    {
      if ( v6 == 285212672 )
      {
        v7 = 11;
        return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
      }
    }
    else
    {
      if ( v6 == 150994944 )
      {
        v7 = 5;
        return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
      }
      if ( v6 == 167772160 )
      {
        v7 = 6;
        return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
      }
    }
    goto LABEL_48;
  }
  if ( v6 == 0x2000000 )
  {
    v7 = 3;
    return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
  }
  if ( v6 > 0x2000000 )
  {
    if ( v6 == 0x4000000 )
    {
      v7 = 1;
      return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
    }
    if ( v6 == 100663296 )
    {
      v7 = 0;
      return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
    }
    goto LABEL_48;
  }
  v7 = v6 == 0 ? 7 : 2;
  return v7 | (32 * (_DWORD)a2) & 0x1FFFFFE0u;
}

