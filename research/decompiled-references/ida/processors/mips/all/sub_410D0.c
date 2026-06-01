unsigned __int16 *__fastcall sub_410D0(__int64 a1, unsigned int *a2, _WORD *a3, __int64 a4)
{
  unsigned __int16 word; // ax
  unsigned int v7; // r15d
  unsigned int v8; // r14d
  unsigned int v9; // ebx
  unsigned __int16 *result; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx

  word = get_word(a4);
  *a2 = word;
  v7 = word >> 10;
  if ( (word & 0x1000) == 0 && (v7 & 7) != 0 )
  {
    *a3 = 2;
    v9 = *a2;
  }
  else
  {
    *a3 = 4;
    v8 = *a2 << 16;
    v9 = v8 | (unsigned __int16)get_word(a4 + 2);
    *a2 = v9;
  }
  result = sub_40A40(v9, &word_5D3A0[20 * v7]);
  if ( (*(_BYTE *)(a1 + 188) & 2) == 0 || !result || *a3 != 4 )
    return result;
  v11 = *result;
  if ( (unsigned __int16)v11 <= 0xE5u )
  {
    if ( (unsigned __int16)v11 > 0x38u )
    {
      switch ( *result )
      {
        case 0x39u:
          goto LABEL_38;
        case 0x49u:
        case 0x4Au:
        case 0x4Bu:
        case 0x4Cu:
        case 0x98u:
          goto LABEL_23;
        case 0x53u:
        case 0x54u:
        case 0x5Bu:
        case 0x5Cu:
          if ( (v9 & 0x30000) != 0 )
            result = nullptr;
          break;
        case 0x99u:
        case 0x9Au:
        case 0x9Bu:
        case 0x9Cu:
        case 0x9Du:
          goto LABEL_20;
        case 0x9Eu:
        case 0x9Fu:
        case 0xA0u:
        case 0xA1u:
        case 0xD9u:
        case 0xDAu:
        case 0xDDu:
        case 0xDEu:
          goto LABEL_17;
        case 0xA2u:
        case 0xA3u:
        case 0xA4u:
        case 0xA5u:
        case 0xA6u:
        case 0xA7u:
        case 0xA9u:
        case 0xAAu:
        case 0xABu:
        case 0xADu:
        case 0xAEu:
        case 0xAFu:
        case 0xB0u:
        case 0xB1u:
        case 0xE4u:
        case 0xE5u:
          goto LABEL_12;
        case 0xCFu:
        case 0xD0u:
        case 0xD1u:
        case 0xD2u:
        case 0xE3u:
          goto LABEL_29;
        case 0xDBu:
        case 0xDCu:
          if ( (v9 & 0x1800) != 0 )
            result = nullptr;
          break;
        default:
          return result;
      }
      return result;
    }
    if ( (unsigned __int16)v11 > 0x1Au )
    {
      v12 = 1LL << v11;
      if ( ((1LL << v11) & 0x12A000000000000LL) != 0 )
      {
        if ( (v9 & 0x1C000) != 0 )
          return nullptr;
        return result;
      }
      if ( (v12 & 0x40A00000000000LL) == 0 )
      {
        if ( (v12 & 0x38000000) == 0 )
          return result;
        goto LABEL_17;
      }
LABEL_38:
      if ( (v9 & 0xC000) != 0 )
        return nullptr;
      return result;
    }
    if ( !(_WORD)v11 )
      return result;
    if ( ((1LL << v11) & 0xE07F0E) != 0 )
      goto LABEL_17;
    if ( ((1LL << v11) & 0x71F80F0) == 0 )
      return result;
    goto LABEL_29;
  }
  if ( (unsigned __int16)v11 > 0x23Au )
  {
    if ( (_WORD)v11 == 815 )
    {
LABEL_17:
      if ( (v9 & 0x400) != 0 )
        return nullptr;
      return result;
    }
    if ( (_WORD)v11 == 0xFFF1 && (v9 & 0x1000) != 0 )
      return nullptr;
  }
  else
  {
    if ( (unsigned __int16)v11 > 0x206u )
    {
      v13 = 1LL << ((unsigned __int8)v11 - 7);
      if ( (v13 & 0xE000000081E01LL) == 0 )
      {
        if ( (v13 & 0x1800024) == 0 )
        {
          if ( (v13 & 0x18000) == 0 )
            return result;
          goto LABEL_17;
        }
        goto LABEL_38;
      }
LABEL_29:
      if ( (v9 & 0x600) != 0 )
        return nullptr;
      return result;
    }
    LOWORD(v11) = v11 - 504;
    switch ( v11 )
    {
      case 0LL:
        goto LABEL_17;
      case 4LL:
LABEL_20:
        if ( (v9 & 0x3FF0000) != 0 )
          result = nullptr;
        break;
      case 7LL:
LABEL_23:
        if ( (v9 & 0x3E00000) != 0 )
          result = nullptr;
        break;
      case 9LL:
        goto LABEL_29;
      case 10LL:
      case 11LL:
LABEL_12:
        if ( (v9 & 0x8000) != 0 )
          result = nullptr;
        break;
      default:
        return result;
    }
  }
  return result;
}

