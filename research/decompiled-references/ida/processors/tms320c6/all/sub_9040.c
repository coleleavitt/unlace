__int64 __fastcall sub_9040(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // r12d
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  unsigned __int16 v7; // ax
  __int16 *v9; // rcx

  v3 = (a3 >> 13) & 0x1F;
  if ( (a3 & 0x38000) != 0 && (a3 & 0xFFC) == 0xF20 )
  {
    switch ( v3 )
    {
      case 6:
        v9 = (__int16 *)&dword_F40C;
        break;
      case 7:
        v9 = &word_F406;
        break;
      case 8:
        v9 = (__int16 *)byte_F400;
        break;
      case 16:
        v9 = word_F3FA;
        break;
      case 17:
        v9 = (__int16 *)&dword_F3F4;
        break;
      case 19:
        v9 = &word_F3EE;
        break;
      case 20:
        v9 = (__int16 *)byte_F3E8;
        break;
      default:
        return 0;
    }
    return sub_89B0(a1, a2, a3, (__int64)v9, (a3 & 0x1000) != 0);
  }
  else
  {
    v5 = a3 & 0x1000;
    v6 = (a3 >> 6) & 0x3F;
    if ( (unsigned int)sub_89B0(a1, a2, a3, (__int64)qword_F420 + 6 * v6, v5 >> 12) )
    {
      v7 = *(_WORD *)(a2 + 24);
      if ( v7 > 0x5Bu )
      {
        if ( ((v7 - 194) & 0xFFFD) == 0 )
LABEL_9:
          sub_7210(a2);
      }
      else if ( v7 > 9u )
      {
        switch ( *(_WORD *)(a2 + 24) )
        {
          case 0xA:
            if ( *(_BYTE *)(a2 + 32) != 4 )
              return 0;
            if ( v6 == 3 || ((a3 >> 23) & 0x1F) == 0 )
              return *(unsigned __int16 *)(a2 + 26);
            if ( ((a3 >> 23) & 0x1F) != 1 )
              return 0;
            *(_WORD *)(a2 + 24) = 94;
            sub_82E0(a1, a2, a2 + 80, a3, 29, v3, 0);
            break;
          case 0xB:
          case 0x11:
          case 0x12:
          case 0x36:
            *(_BYTE *)(a2 + 29) &= ~4u;
            goto LABEL_9;
          case 0x2B:
            *(_BYTE *)(a2 + 29) &= ~4u;
            if ( *(_BYTE *)(a2 + 32) != 4 )
              return 0;
            return *(unsigned __int16 *)(a2 + 26);
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3E:
            goto LABEL_9;
          case 0x54:
            sub_7250(a2);
            return *(unsigned __int16 *)(a2 + 26);
          case 0x5B:
            *(_BYTE *)(a2 + 29) &= ~4u;
            if ( !v5 )
              *(_WORD *)(a2 + 24) = 95;
            return *(unsigned __int16 *)(a2 + 26);
          default:
            return *(unsigned __int16 *)(a2 + 26);
        }
      }
      return *(unsigned __int16 *)(a2 + 26);
    }
    else
    {
      return 0;
    }
  }
}

