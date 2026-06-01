__int64 __fastcall sub_9C50(__int64 *a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rcx
  char v4; // al

  v2 = *(_WORD *)(a2 + 24);
  if ( v2 > 0x9Eu )
  {
    v3 = -2;
    if ( v2 == 265 )
      goto LABEL_10;
    v3 = 2;
    if ( v2 == 266 )
      goto LABEL_10;
    goto LABEL_6;
  }
  if ( v2 <= 0x5Bu )
  {
    v3 = -1;
    if ( v2 == 68 )
      goto LABEL_10;
LABEL_6:
    v3 = 0;
    if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x5000000000400LL )
    {
      v4 = *(_BYTE *)(a2 + 72);
      if ( (v4 & 3) != 0 )
      {
        v3 = -*(_QWORD *)(a2 + 56);
        if ( (v4 & 0x10) == 0 )
          v3 = *(_QWORD *)(a2 + 56);
      }
    }
    goto LABEL_10;
  }
  switch ( *(_WORD *)(a2 + 24) )
  {
    case 0x5C:
    case 0x99:
    case 0x9A:
    case 0x9B:
      v3 = 1;
      break;
    case 0x79:
      v3 = 0;
      if ( (*(_QWORD *)(a2 + 40) & 0xFFFF00000000FF00LL) == 0x5000000000400LL )
        v3 = *(_QWORD *)(a2 + 56);
      break;
    case 0x93:
    case 0x94:
    case 0x95:
      v3 = -1;
      break;
    case 0x96:
    case 0x97:
    case 0x98:
      v3 = -2;
      break;
    case 0x9C:
    case 0x9D:
    case 0x9E:
      v3 = 2;
      break;
    default:
      goto LABEL_6;
  }
LABEL_10:
  *a1 = v3;
  return 1;
}

