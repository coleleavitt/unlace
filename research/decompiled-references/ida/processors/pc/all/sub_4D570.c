__int64 __fastcall sub_4D570(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // ax

  v2 = 0;
  if ( *(_BYTE *)(a1 + 1) == *(_BYTE *)(a2 + 1) )
  {
    switch ( *(_BYTE *)(a1 + 1) )
    {
      case 1:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
        LOBYTE(v2) = *(_WORD *)(a1 + 6) == *(_WORD *)(a2 + 6);
        break;
      case 2:
        v2 = 0;
        if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
        {
          v6 = *(_WORD *)(a1 + 26);
          if ( v6 == *(_WORD *)(a2 + 26) && (v6 != -1 || *(_WORD *)(a1 + 24) == *(_WORD *)(a2 + 24)) )
            goto LABEL_14;
        }
        break;
      case 3:
        goto LABEL_13;
      case 4:
        v2 = 0;
        if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
        {
          v5 = *(_WORD *)(a1 + 26);
          if ( v5 == *(_WORD *)(a2 + 26) && (v5 != -1 || *(_WORD *)(a1 + 24) == *(_WORD *)(a2 + 24)) )
          {
LABEL_13:
            v2 = 0;
            if ( *(_WORD *)(a1 + 6) == *(_WORD *)(a2 + 6) )
LABEL_14:
              LOBYTE(v2) = *(_WORD *)(a1 + 32) == *(_WORD *)(a2 + 32);
          }
        }
        break;
      case 5:
        LOBYTE(v2) = *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
        break;
      case 6:
      case 7:
        v2 = 0;
        if ( *(_QWORD *)(a1 + 16) == *(_QWORD *)(a2 + 16) )
        {
          v4 = *(_WORD *)(a1 + 26);
          if ( v4 == *(_WORD *)(a2 + 26) )
          {
            v2 = 1;
            if ( v4 == -1 )
              LOBYTE(v2) = *(_WORD *)(a1 + 24) == *(_WORD *)(a2 + 24);
          }
        }
        break;
      default:
        v2 = 1;
        break;
    }
  }
  return v2;
}
