char __fastcall sub_3FA390(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // ecx
  unsigned __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rsi
  char v8; // dl
  char result; // al
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // ecx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx

  if ( (unsigned __int8)(*(_BYTE *)(a2 + 1) - 6) > 1u )
  {
    v8 = *(_BYTE *)(a2 + 5);
    if ( v8 != 11 )
    {
      result = 15;
      if ( v8 != 5 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
        {
          return *(_BYTE *)(a2 + 5);
        }
        else
        {
          result = 8;
          if ( (unsigned __int8)(v8 - 16) >= 2u )
            return *(_BYTE *)(a2 + 5);
        }
      }
      return result;
    }
    v10 = *(_DWORD *)(a1 + 52);
    if ( (v10 & 0x10) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 57) & 8) != 0 )
        return 7;
      if ( (v10 & 0x800) != 0 )
      {
        v11 = *(unsigned __int16 *)(a1 + 48);
        if ( (unsigned __int16)v11 <= 0x39u )
        {
          if ( (unsigned __int16)v11 > 0x34u )
            return 7;
          if ( (unsigned __int16)v11 <= 0x12u )
          {
            if ( (unsigned __int16)v11 <= 0xFu )
              goto LABEL_15;
            return 7;
          }
LABEL_25:
          v15 = (unsigned int)(v11 - 37);
          if ( (unsigned __int16)(v11 - 37) <= 0x3Bu )
          {
            v16 = 0xA1A000000E00005LL;
            result = 7;
            if ( _bittest64(&v16, v15) )
              return result;
          }
          goto LABEL_15;
        }
        if ( (unsigned __int16)(v11 - 61) <= 0x18u )
          return 7;
        if ( (unsigned __int16)v11 <= 0xA0u )
        {
          if ( (unsigned __int16)v11 > 0x6Cu )
          {
            v13 = 0xC050682000555LL;
            if ( !_bittest64(&v13, (unsigned int)(v11 - 109)) )
              goto LABEL_15;
            return 7;
          }
          goto LABEL_25;
        }
        if ( (_WORD)v11 == 738 || (_WORD)v11 == 741 )
          return 7;
      }
    }
LABEL_15:
    v12 = a1 + 24;
    v2 = *(_DWORD *)(v12 + 28);
    if ( (v2 & 0x10) == 0 )
    {
      v3 = *(_DWORD *)(v12 + 28) & 0x818;
      if ( v3 == 2056 || !v3 )
        return 2;
      else
        return v3 == 8 || v3 == 2048;
    }
    result = 7;
    if ( (*(_BYTE *)(v12 + 33) & 8) != 0 )
      return result;
    if ( (v2 & 0x800) == 0 )
      return (*(_DWORD *)(v12 + 28) & 0x818) == 16;
    v4 = *(unsigned __int16 *)(v12 + 24);
    if ( (unsigned __int16)v4 > 0x39u )
    {
      if ( (unsigned __int16)(v4 - 61) <= 0x18u )
        return result;
      if ( (unsigned __int16)v4 > 0xA0u )
      {
        if ( (_WORD)v4 == 738 || (_WORD)v4 == 741 )
          return result;
        return 2 * ((*(_DWORD *)(v12 + 28) & 0x818) == 2064);
      }
      if ( (unsigned __int16)v4 > 0x6Cu )
      {
        v7 = 0xC050682000555LL;
        if ( _bittest64(&v7, (unsigned int)(v4 - 109)) )
          return result;
        return 2 * ((*(_DWORD *)(v12 + 28) & 0x818) == 2064);
      }
    }
    else
    {
      if ( (unsigned __int16)v4 > 0x34u )
        return result;
      if ( (unsigned __int16)v4 <= 0x12u )
      {
        if ( (unsigned __int16)v4 > 0xFu )
          return result;
        return 2 * ((*(_DWORD *)(v12 + 28) & 0x818) == 2064);
      }
    }
    v5 = (unsigned int)(v4 - 37);
    if ( (unsigned __int16)v5 <= 0x3Bu )
    {
      v6 = 0xA1A000000E00005LL;
      result = 7;
      if ( _bittest64(&v6, v5) )
        return result;
    }
    return 2 * ((*(_DWORD *)(v12 + 28) & 0x818) == 2064);
  }
  v14 = *(_DWORD *)(a1 + 52);
  result = 7;
  if ( (v14 & 0x1018) != 0x1010 )
    return ((v14 & 0x1018) == 4104 || (v14 & 0x1008) == 0) + 1;
  return result;
}

