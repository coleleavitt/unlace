__int64 __fastcall sub_2DFB0(__int64 a1, __int64 a2)
{
  int v3; // eax
  _BYTE *v4; // rsi
  unsigned __int16 v5; // ax
  unsigned __int64 v6; // rcx
  __int16 v8; // ax
  int v9; // ecx
  __int16 v10; // si
  __int16 v11; // ax
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // ax
  unsigned int v15; // eax
  __int16 v16; // ax
  __int16 v17; // ax
  __int16 v18; // ax

  v3 = 0;
  v4 = (_BYTE *)(a2 + 45);
  do
  {
    if ( (*(_QWORD *)(a2 + 40LL * v3 + 40) & 0xFF000000FF00LL) == 0x20000000100LL )
      *v4 = 7;
    ++v3;
    v4 += 40;
  }
  while ( v3 != 3 );
  v5 = *(_WORD *)(a2 + 24);
  v6 = *(_QWORD *)(a2 + 128);
  if ( v5 == 563 )
  {
    if ( v6 > 0x17 )
      return 0;
    v16 = word_699C0[v6];
    *(_WORD *)(a2 + 24) = v16;
    if ( !v16 )
      return 0;
    goto LABEL_65;
  }
  if ( v5 > 0x233u )
  {
    if ( v5 == 1653 )
    {
      if ( (v6 & 0x10) != 0 )
        *(_WORD *)(a2 + 24) = 1654;
    }
    else
    {
      if ( v5 <= 0x675u )
      {
        if ( v5 == 1594 )
        {
          if ( v6 > 0x10 )
            return 0;
          v11 = word_69A40[v6];
          *(_WORD *)(a2 + 24) = v11;
          if ( !v11 )
            return 0;
        }
        else
        {
          if ( v5 > 0x63Au )
          {
            if ( v5 != 1650 )
              return *(unsigned __int16 *)(a2 + 26);
            if ( (v6 & 0x13) == 0 )
            {
              *(_BYTE *)(a2 + 121) = 5;
              *(_BYTE *)(a2 + 125) = 0;
              *(_QWORD *)(a2 + 128) = ((unsigned int)v6 >> 2) & 3;
              return *(unsigned __int16 *)(a2 + 26);
            }
            if ( (v6 & 3) == 2 )
            {
              *(_BYTE *)(a2 + 121) = 5;
              *(_BYTE *)(a2 + 125) = 0;
              *(_WORD *)(a2 + 24) = 1651;
              *(_QWORD *)(a2 + 128) = ((unsigned int)v6 >> 2) & 7;
              return *(unsigned __int16 *)(a2 + 26);
            }
            return 0;
          }
          if ( v5 == 564 )
          {
            if ( v6 > 0x17 )
              return 0;
            v13 = word_69A00[v6];
            *(_WORD *)(a2 + 24) = v13;
            if ( !v13 )
              return 0;
          }
          else
          {
            if ( v5 != 1566 )
              return *(unsigned __int16 *)(a2 + 26);
            if ( v6 > 0x20 )
              return 0;
            v8 = word_69A60[v6];
            *(_WORD *)(a2 + 24) = v8;
            if ( !v8 )
              return 0;
          }
        }
        goto LABEL_65;
      }
      if ( v5 == 1686 )
      {
        v15 = (unsigned int)v6 >> 3;
        if ( (unsigned int)v6 >> 3 == 1 )
        {
          *(_WORD *)(a2 + 24) = 1688;
        }
        else if ( v15 == 2 )
        {
          *(_WORD *)(a2 + 24) = 1687;
        }
        else if ( v15 )
        {
          return 0;
        }
        *(_BYTE *)(a2 + 121) = 5;
        *(_BYTE *)(a2 + 125) = 0;
        *(_QWORD *)(a2 + 128) = v6 & 7;
        return *(unsigned __int16 *)(a2 + 26);
      }
      if ( v5 == 1872 )
      {
        if ( v6 > 0x20 )
          return 0;
        v14 = *(_WORD *)&aPQRSTUVW[2 * v6];
        *(_WORD *)(a2 + 24) = v14;
        if ( !v14 )
          return 0;
        goto LABEL_65;
      }
      if ( v5 != 1655 )
        return *(unsigned __int16 *)(a2 + 26);
      if ( (v6 & 0x10) == 0 )
      {
        *(_BYTE *)(a2 + 121) = 5;
        *(_BYTE *)(a2 + 125) = 0;
        *(_QWORD *)(a2 + 128) = v6 & 3;
        *(_BYTE *)(a2 + 161) = 5;
        *(_BYTE *)(a2 + 165) = 0;
        *(_QWORD *)(a2 + 168) = (unsigned int)v6 >> 2;
        return *(unsigned __int16 *)(a2 + 26);
      }
      *(_WORD *)(a2 + 24) = 1656;
    }
    *(_BYTE *)(a2 + 121) = 5;
    *(_BYTE *)(a2 + 125) = 0;
    *(_QWORD *)(a2 + 128) = v6 & 0xF;
    return *(unsigned __int16 *)(a2 + 26);
  }
  if ( v5 <= 0x1B6u )
  {
    if ( v5 > 0x1A1u )
    {
      switch ( *(_WORD *)(a2 + 24) )
      {
        case 0x1A2:
          if ( v6 > 0xF )
            return 0;
          v12 = word_69B00[v6];
          *(_WORD *)(a2 + 24) = v12;
          if ( !v12 )
            return 0;
          goto LABEL_65;
        case 0x1AB:
        case 0x1AC:
        case 0x1AD:
        case 0x1AE:
        case 0x1AF:
          v9 = *(_DWORD *)(a2 + 28);
          if ( (v9 & 0x10) != 0 )
          {
            if ( v5 == 430 )
            {
              v10 = 1638;
            }
            else
            {
              v10 = 1637;
              if ( v5 != 431 )
              {
                v10 = 1636;
                if ( v5 != 428 )
                  v10 = 4 * (v5 != 429) + 1635;
              }
            }
            *(_WORD *)(a2 + 24) = v10;
            *(_DWORD *)(a2 + 28) = v9 ^ 0x10;
          }
          return *(unsigned __int16 *)(a2 + 26);
        case 0x1B0:
          if ( (_DWORD)v6 == 4 )
          {
            *(_WORD *)(a2 + 24) = 1563;
          }
          else
          {
            if ( (_DWORD)v6 != 26 )
              goto LABEL_14;
            *(_WORD *)(a2 + 24) = 1564;
          }
          goto LABEL_15;
        case 0x1B1:
          if ( !(_DWORD)v6 )
            goto LABEL_15;
          if ( (_DWORD)v6 != 4 )
            return 0;
          *(_WORD *)(a2 + 24) = 1562;
          goto LABEL_15;
        case 0x1B5:
          if ( (_DWORD)v6 == 1 )
          {
            *(_WORD *)(a2 + 24) = 1542;
          }
          else
          {
            if ( (_DWORD)v6 != 4 )
              goto LABEL_14;
            *(_WORD *)(a2 + 24) = 1543;
          }
          break;
        case 0x1B6:
          if ( !(_DWORD)v6 )
            goto LABEL_15;
          if ( (_DWORD)v6 != 6 )
            return 0;
          *(_WORD *)(a2 + 24) = 1544;
          goto LABEL_15;
        default:
          return *(unsigned __int16 *)(a2 + 26);
      }
      goto LABEL_15;
    }
    return *(unsigned __int16 *)(a2 + 26);
  }
  switch ( v5 )
  {
    case 0x229u:
      if ( v6 > 0xF )
        return 0;
      v18 = word_69AE0[v6];
      *(_WORD *)(a2 + 24) = v18;
      if ( !v18 )
        return 0;
      break;
    case 0x22Fu:
      if ( v6 > 0x20 )
        return 0;
      v17 = word_69AA0[v6];
      *(_WORD *)(a2 + 24) = v17;
      if ( !v17 )
        return 0;
      break;
    case 0x205u:
      if ( (_DWORD)v6 == 1 )
      {
        if ( !*(_WORD *)(a2 + 86) )
        {
          *(_BYTE *)(a2 + 81) = 0;
          *(_WORD *)(a2 + 24) = 1871;
          goto LABEL_15;
        }
      }
      else
      {
LABEL_14:
        if ( !(_DWORD)v6 )
        {
LABEL_15:
          *(_BYTE *)(a2 + 121) = 0;
          return *(unsigned __int16 *)(a2 + 26);
        }
      }
      return 0;
    default:
      return *(unsigned __int16 *)(a2 + 26);
  }
LABEL_65:
  *(_BYTE *)(a2 + 121) = 0;
  return *(unsigned __int16 *)(a2 + 26);
}

