__int64 __fastcall sub_2D910(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // esi
  int v15; // ebp

  if ( !(unsigned int)sub_2C940(a1, a2, a3, a2 + 40, a4, *(unsigned __int8 *)(a5 + 12))
    || !(unsigned int)sub_2C940(a1, a2, a3, a2 + 80, a4, *(unsigned __int8 *)(a5 + 13))
    || !(unsigned int)sub_2C940(a1, a2, a3, a2 + 120, a4, *(unsigned __int8 *)(a5 + 14)) )
  {
    return 0;
  }
  v10 = *(_DWORD *)(a5 + 16);
  BYTE1(v11) = BYTE1(v10);
  switch ( v10 & 0xF )
  {
    case 1:
      if ( (a4 & 0x1000000) != 0 )
      {
        v13 = *(_DWORD *)(a2 + 28) | 8;
        *(_DWORD *)(a2 + 28) = v13;
        v11 = *(_DWORD *)(a5 + 16);
        BYTE1(v10) = BYTE1(v11);
        v14 = v11 & 0xF0;
        if ( v14 == 48 )
          goto LABEL_46;
        if ( v14 > 0x30 )
        {
          if ( v14 == 64 )
            goto LABEL_55;
          if ( v14 == 80 )
            goto LABEL_13;
        }
        else
        {
          if ( v14 == 16 )
            goto LABEL_52;
          if ( v14 == 32 )
            goto LABEL_13;
        }
      }
      else
      {
        v12 = v10 & 0xF0;
        if ( v12 == 64 )
          goto LABEL_55;
        if ( v12 > 0x40 )
          goto LABEL_11;
        if ( v12 == 16 )
          goto LABEL_52;
        if ( v12 == 48 )
          goto LABEL_46;
      }
      goto LABEL_14;
    case 2:
      if ( (a4 & 0x10000) != 0 )
      {
        *(_DWORD *)(a2 + 28) |= 8u;
        v10 = *(_DWORD *)(a5 + 16);
        BYTE1(v11) = BYTE1(v10);
      }
      goto LABEL_8;
    case 3:
      if ( (a4 & 1) == 0 )
        goto LABEL_28;
      *(_DWORD *)(a2 + 28) |= 8u;
      v10 = *(_DWORD *)(a5 + 16);
      BYTE1(v11) = BYTE1(v10);
      goto LABEL_23;
    case 4:
      if ( (a4 & 1) != 0 )
        return 0;
LABEL_28:
      v12 = v10 & 0xF0;
      if ( v12 == 48 )
        goto LABEL_46;
      if ( v12 <= 0x30 )
        goto LABEL_30;
      goto LABEL_11;
    case 5:
      if ( (a4 & 1) == 0 )
        return 0;
LABEL_23:
      v12 = v10 & 0xF0;
      if ( v12 == 48 )
        goto LABEL_46;
      if ( v12 <= 0x30 )
        goto LABEL_30;
      if ( v12 == 64 )
        goto LABEL_26;
      goto LABEL_11;
    default:
LABEL_8:
      v12 = v10 & 0xF0;
      if ( v12 == 48 )
      {
LABEL_46:
        if ( (a4 & 0x800) == 0 )
        {
          BYTE1(v11) = BYTE1(v10);
          goto LABEL_14;
        }
        goto LABEL_26;
      }
      if ( v12 <= 0x30 )
      {
LABEL_30:
        if ( v12 != 16 )
        {
          if ( v12 != 32 )
            goto LABEL_14;
          if ( (a4 & 0x1000000) == 0 )
          {
            BYTE1(v11) = BYTE1(v10);
            goto LABEL_14;
          }
          goto LABEL_12;
        }
LABEL_52:
        if ( (a4 & 0x2000000) == 0 )
        {
          BYTE1(v11) = BYTE1(v10);
          goto LABEL_14;
        }
LABEL_26:
        *(_DWORD *)(a2 + 28) |= 2u;
        v11 = *(_DWORD *)(a5 + 16);
        goto LABEL_14;
      }
      if ( v12 == 64 )
      {
LABEL_55:
        if ( (a4 & 1) == 0 )
        {
          BYTE1(v11) = BYTE1(v10);
          goto LABEL_14;
        }
        goto LABEL_26;
      }
LABEL_11:
      if ( v12 != 80 )
        goto LABEL_14;
LABEL_12:
      v13 = *(_DWORD *)(a2 + 28);
LABEL_13:
      *(_DWORD *)(a2 + 28) = v13 | 2;
      v11 = *(_DWORD *)(a5 + 16);
LABEL_14:
      if ( (v11 & 0x100) != 0 )
      {
        *(_DWORD *)(a2 + 28) |= 0x200u;
        v11 = *(_DWORD *)(a5 + 16);
      }
      if ( (v11 & 0x200) != 0 )
        *(_DWORD *)(a2 + 28) |= 0x100u;
      if ( *(_BYTE *)(a5 + 12) == 41 )
      {
        v15 = (a4 >> 23) & 7;
        if ( !v15 )
        {
          *(_WORD *)(a2 + 24) = 18;
          goto LABEL_20;
        }
        if ( v15 == 1 )
        {
          *(_WORD *)(a2 + 24) = 20;
          goto LABEL_20;
        }
        return 0;
      }
      if ( *(_WORD *)(a2 + 24) == 14 )
      {
        sub_2D7C0(a1, a2);
        return *(unsigned __int16 *)(a2 + 26);
      }
LABEL_20:
      sub_2B100(a1, a2);
      return *(unsigned __int16 *)(a2 + 26);
  }
}

