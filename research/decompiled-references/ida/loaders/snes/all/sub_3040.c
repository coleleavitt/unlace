__int64 __fastcall sub_3040(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rsi
  int v5; // edi
  int v6; // edx
  char v7; // r9
  __int64 v8; // r8
  unsigned int v9; // edi
  unsigned int v10; // r8d
  int v11; // r8d
  int v12; // esi
  int v13; // r8d
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx

  result = a2;
  v3 = a2 >> 16;
  v5 = v3;
  if ( (unsigned __int8)(v3 - 126) <= 1u )
    return result;
  v6 = (unsigned __int16)result;
  v7 = v3 & 0x40;
  if ( (v3 & 0x40) == 0 )
  {
    if ( (unsigned __int16)result <= 0x1FFFu )
      return (unsigned __int16)result + 8257536LL;
    if ( (unsigned __int16)(result - 8448) <= 0x83u
      || (unsigned __int16)(result - 16406) <= 1u
      || (unsigned __int16)(result - 16896) <= 0x1Fu
      || (unsigned __int16)(result - 17152) <= 0x7Fu )
    {
      return (unsigned __int16)result;
    }
  }
  if ( *(_BYTE *)(a1 + 39) )
  {
    if ( *(_DWORD *)(a1 + 4) && (unsigned __int8)(v3 - 112) <= 7u )
    {
      if ( (result & 0x8000u) == 0LL )
        return result;
      v8 = result + 0x800000;
      if ( (unsigned __int8)(v3 + 0x80) > 0xBFu )
      {
        if ( *(_BYTE *)(a1 + 35) )
          return result;
LABEL_22:
        if ( *(_BYTE *)(a1 + 36) && !v7 )
          goto LABEL_24;
        return result;
      }
    }
    else
    {
      v8 = result;
      if ( (unsigned __int8)v3 <= 0x7Du )
      {
        v8 = result + 0x800000;
        LOBYTE(v5) = v3 + 0x80;
      }
      if ( (unsigned __int8)v5 > 0xBFu )
        goto LABEL_17;
    }
    if ( (result & 0x8000u) != 0LL )
      return v8;
    if ( (unsigned __int16)result > 0x5FFFu )
      return (unsigned __int16)result;
LABEL_17:
    if ( *(_BYTE *)(a1 + 35) )
    {
      if ( v7 )
        return result;
LABEL_19:
      if ( (unsigned __int16)(result - 10240) <= 1u )
        return (unsigned __int16)result;
LABEL_20:
      if ( !*(_BYTE *)(a1 + 36) )
        return result;
LABEL_24:
      if ( (unsigned __int16)(result - 18496) > 2u )
        return result;
      return (unsigned __int16)result;
    }
    goto LABEL_22;
  }
  if ( !*(_BYTE *)(a1 + 37) )
  {
    switch ( *(_DWORD *)(a1 + 24) )
    {
      case 0:
        v10 = *(_DWORD *)(a1 + 4);
        if ( v10 && ((unsigned __int8)(v3 - 112) <= 0xDu || (unsigned __int8)v3 > 0xEFu) )
        {
          if ( v10 <= 0x8000 && *(_DWORD *)a1 <= 0x200000u || (result & 0x8000u) == 0LL )
          {
            v17 = (v10 - 1) & (result & 0x7FFF | ((_DWORD)v3 << 15) & 0x78000);
            v18 = (v17 & 0x7FFF) + (((v17 >> 15) + 112) << 16);
            result = v18 + 0x800000;
            if ( (unsigned __int8)v3 <= 0xFDu )
              return v18;
            return result;
          }
          if ( (unsigned __int8)v3 > 0x7Du )
            return result;
          v8 = result + 0x800000;
          if ( (unsigned __int8)(v3 + 0x80) > 0xBFu )
          {
            if ( !*(_BYTE *)(a1 + 35) )
              goto LABEL_22;
            return result;
          }
        }
        else
        {
          v8 = result;
          if ( (unsigned __int8)v3 <= 0x7Du )
          {
            v8 = result + 0x800000;
            LOBYTE(v5) = v3 + 0x80;
          }
          if ( (unsigned __int8)v5 > 0xBFu )
            goto LABEL_17;
        }
        goto LABEL_49;
      case 1:
        v13 = *(_DWORD *)(a1 + 4);
        if ( !v13 || (unsigned __int8)((v3 & 0x7F) - 16) > 0x2Fu )
        {
          v8 = result;
          if ( (unsigned __int8)v3 > 0x7Du )
          {
LABEL_83:
            if ( (unsigned __int8)v5 > 0xBFu )
              return v8;
            goto LABEL_84;
          }
LABEL_82:
          v8 = result + 0x800000;
          LOBYTE(v5) = v3 + 0x80;
          goto LABEL_83;
        }
        if ( (unsigned __int16)(result - 24576) <= 0x1FFFu )
        {
          v15 = (v13 - 1) & ((((_DWORD)v3 << 13) & 0x3E000) + (unsigned __int16)result - 24576);
          return (((v15 >> 13) + 32) << 16) + (v15 & 0x1FFF) + 24576;
        }
        if ( (unsigned __int8)v3 <= 0x7Du )
          goto LABEL_82;
LABEL_84:
        if ( (result & 0x8000u) == 0LL )
          goto LABEL_17;
        return (unsigned __int16)result + (((unsigned __int8)v5 | 0xC0) << 16);
      case 2:
        v9 = *(_DWORD *)(a1 + 4);
        if ( !v9 )
          goto LABEL_90;
        if ( (unsigned __int8)(v3 - 112) <= 0xDu )
          goto LABEL_93;
        if ( (v3 & 0x60) == 0x20 && (unsigned __int16)(result - 24576) <= 0x1FFFu )
        {
          v15 = (v9 - 1) & ((((_DWORD)v3 << 13) & 0x3E000) + (unsigned __int16)result - 24576);
          return (((v15 >> 13) + 32) << 16) + (v15 & 0x1FFF) + 24576;
        }
LABEL_90:
        if ( v7 )
          return result;
        if ( (result & 0x8000u) != 0LL )
          return (unsigned __int16)result + (((unsigned __int8)v3 | 0x80) << 16);
        goto LABEL_41;
      case 3:
        v9 = *(_DWORD *)(a1 + 4);
        if ( !v9 )
          goto LABEL_98;
        if ( (v3 & 0x60) == 0x20 )
        {
          if ( (unsigned __int16)(result - 24576) <= 0x1FFFu )
            goto LABEL_129;
        }
        else
        {
          if ( (unsigned __int8)(v3 - 112) <= 0xDu )
          {
            if ( *(_DWORD *)a1 <= 0x200000u && v9 <= 0x8000 || (result & 0x8000u) == 0LL )
            {
              v6 = result & 0x7FFF;
              v14 = ((_DWORD)v3 << 15) & 0x78000;
              return (((((v9 - 1) & (v6 | v14)) >> 15) + 112) << 16) + ((v9 - 1) & (v6 | v14) & 0x7FFF);
            }
            return result;
          }
LABEL_98:
          if ( (unsigned __int8)v3 > 0xBFu )
            return result;
        }
        if ( (v3 & 0x80u) == 0LL )
        {
          if ( (unsigned __int8)v3 > 0x3Fu )
            return result;
          if ( (result & 0x8000u) != 0LL )
            return (unsigned __int16)result + (((unsigned __int8)v3 + 64) << 16);
          goto LABEL_41;
        }
        if ( (result & 0x8000u) != 0LL )
          return (unsigned __int16)result + (((unsigned __int8)v3 + 64) << 16);
        goto LABEL_17;
      case 4:
        if ( *(_DWORD *)(a1 + 4) )
        {
          if ( v7 )
          {
            if ( (unsigned __int8)(v3 - 112) <= 0xFu || (unsigned __int8)(v3 + 16) <= 1u )
              return (unsigned __int16)result + (((_DWORD)v3 << 16) & 0x7F0000);
            return result;
          }
          if ( (unsigned __int16)(result - 24576) <= 0x1FFFu )
            return (unsigned __int16)result;
        }
        else if ( (v3 & 0x60) == 0x40 || v7 )
        {
          return result;
        }
        if ( (result & 0x8000u) == 0LL )
          goto LABEL_41;
        return result;
      case 5:
        v12 = v3 - 128;
        v8 = result;
        if ( (unsigned __int8)v12 <= 0x3Fu )
        {
          v8 = result - 0x800000;
          v5 = v12;
        }
        if ( !*(_DWORD *)(a1 + 4) )
        {
          if ( (unsigned __int8)v5 > 0xBFu )
            return v8;
          if ( (unsigned __int8)v5 <= 0x3Fu )
            goto LABEL_49;
          goto LABEL_17;
        }
        if ( (unsigned __int8)v5 <= 0x3Fu )
        {
          if ( (unsigned __int16)(result - 24576) <= 0x1FFFu )
            return (unsigned __int16)result + 4169728LL;
LABEL_49:
          if ( (result & 0x8000u) == 0LL )
            goto LABEL_17;
          return v8;
        }
        if ( (unsigned __int8)v5 <= 0x4Fu )
          return (unsigned __int16)result + ((v5 << 16) & 0xF10000);
        if ( (unsigned __int8)v5 <= 0xBFu )
          goto LABEL_17;
        return v8;
      case 6:
        v11 = *(_DWORD *)(a1 + 4);
        if ( !v11 )
        {
          if ( (unsigned __int8)(v3 - 80) <= 0xFu )
            return result;
          v8 = result;
          if ( (unsigned __int8)v3 > 0x7Du )
            goto LABEL_56;
          goto LABEL_55;
        }
        if ( v7 )
        {
          if ( (unsigned __int8)(v3 - 80) <= 0xFu || (unsigned __int8)v3 > 0x7Du )
            return result;
          goto LABEL_55;
        }
        if ( (unsigned __int16)(result - 24576) <= 0x1FFFu )
        {
          v16 = (v11 - 1) & ((((_DWORD)v3 << 13) & 0x3E000) + (unsigned __int16)result - 24576);
          return (v16 >> 13 << 16) + (v16 & 0x1FFF) + 24576;
        }
        if ( (unsigned __int8)v3 <= 0x7Du )
        {
LABEL_55:
          v8 = result + 0x800000;
          LOBYTE(v5) = v3 + 0x80;
LABEL_56:
          if ( (unsigned __int8)v5 > 0xBFu )
            return v8;
        }
        if ( (result & 0x8000u) != 0LL )
          return (unsigned __int16)result + (((unsigned __int8)v5 | 0xC0) << 16);
        if ( (unsigned __int16)(result - 18432) <= 0x3Fu )
          return (unsigned __int16)result;
        goto LABEL_17;
      default:
        goto LABEL_17;
    }
  }
  v9 = *(_DWORD *)(a1 + 4);
  if ( !v9 )
    goto LABEL_38;
  if ( (unsigned __int8)(v3 - 112) <= 0xDu )
  {
LABEL_93:
    if ( (result & 0x8000u) == 0LL )
    {
      v14 = ((_DWORD)v3 << 15) & 0x78000;
      return (((((v9 - 1) & (v6 | v14)) >> 15) + 112) << 16) + ((v9 - 1) & (v6 | v14) & 0x7FFF);
    }
    return result;
  }
  if ( (v3 & 0x60) != 0x20 )
  {
LABEL_38:
    if ( v7 )
      return result;
    goto LABEL_39;
  }
  if ( (unsigned __int16)(result - 24576) > 0x1FFFu )
  {
    if ( v7 )
      return result;
LABEL_39:
    if ( (result & 0x8000u) != 0LL )
      return (unsigned __int16)result + (((unsigned __int8)v3 | 0x80) << 16);
    if ( (unsigned __int16)(result - 18432) <= 7u )
      return (unsigned __int16)result;
LABEL_41:
    if ( !*(_BYTE *)(a1 + 35) )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_129:
  v15 = (v9 - 1) & ((((_DWORD)v3 << 13) & 0x3E000) + (unsigned __int16)result - 24576);
  return (((v15 >> 13) + 32) << 16) + (v15 & 0x1FFF) + 24576;
}

