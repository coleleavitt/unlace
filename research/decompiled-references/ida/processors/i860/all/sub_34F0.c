__int16 __fastcall sub_34F0(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned __int16 v6; // ax

  v2 = *(_DWORD *)(a1 + 124);
  if ( (v2 & 0x1E0) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 124) & 0x1F;
    switch ( v2 )
    {
      case 1:
        *(_WORD *)(a2 + 24) = 44;
        break;
      case 2:
        *(_WORD *)(a2 + 24) = 17;
        v2 = *(_DWORD *)(a1 + 124);
        *(_BYTE *)(a2 + 41) = 1;
        LOWORD(v2) = (unsigned __int16)v2 >> 11;
        *(_BYTE *)(a2 + 45) = 9;
        *(_WORD *)(a2 + 46) = v2;
        break;
      case 4:
        *(_WORD *)(a2 + 24) = 38;
        break;
      case 7:
        *(_WORD *)(a2 + 24) = 77;
        break;
      case 8:
        if ( (*(_BYTE *)(a1 + 120) & 2) != 0 )
        {
          LOWORD(v2) = 43;
          goto LABEL_13;
        }
        break;
      case 9:
        if ( (*(_BYTE *)(a1 + 120) & 2) != 0 )
        {
          *(_WORD *)(a2 + 24) = 73;
          v6 = *(_WORD *)(a1 + 124);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = v6 >> 11;
          v4 = *(_DWORD *)(a1 + 124) >> 21;
          goto LABEL_14;
        }
        break;
      case 10:
        LOWORD(v2) = 42;
        if ( (*(_BYTE *)(a1 + 120) & 2) != 0 )
        {
LABEL_13:
          *(_WORD *)(a2 + 24) = v2;
          v4 = *(_DWORD *)(a1 + 124);
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (v4 >> 21) & 0x1F;
          LOWORD(v4) = *(_WORD *)(a1 + 126);
LABEL_14:
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v4 & 0x1F;
          v5 = *(_DWORD *)(a1 + 124);
          v2 = (v5 >> 9) & 1;
          if ( (v5 & 0x400) != 0 )
            LOWORD(v2) = 2;
          *(_BYTE *)(a2 + 45) = v2;
          *(_BYTE *)(a2 + 85) = v2;
        }
        break;
      case 11:
        if ( (*(_BYTE *)(a1 + 120) & 2) != 0 )
        {
          *(_WORD *)(a2 + 24) = 66;
          v3 = *(_DWORD *)(a1 + 124);
          *(_BYTE *)(a2 + 41) = 1;
          v2 = (v3 >> 21) & 0x1F;
          *(_WORD *)(a2 + 46) = v2;
        }
        break;
      default:
        return v2;
    }
  }
  return v2;
}

