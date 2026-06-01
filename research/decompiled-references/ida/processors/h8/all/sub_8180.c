char __fastcall sub_8180(__int64 a1, __int64 a2, char a3, signed __int8 a4, char a5, unsigned __int16 a6)
{
  char result; // al
  __int16 v7; // dx

  switch ( a3 )
  {
    case 9:
      if ( (a5 & 2) == 0 )
        goto LABEL_2;
      *(_DWORD *)(a1 + 28) = 2;
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_5;
    case 10:
      v7 = 3;
      goto LABEL_13;
    case 14:
      if ( (a5 & 1) == 0 )
        goto LABEL_2;
      *(_DWORD *)(a1 + 28) = 1;
      *(_WORD *)(a1 + 24) = 3;
      goto LABEL_5;
    case 25:
      if ( (a5 & 2) == 0 )
        goto LABEL_2;
      *(_DWORD *)(a1 + 28) = 2;
      *(_WORD *)(a1 + 24) = 82;
      goto LABEL_5;
    case 26:
      v7 = 82;
LABEL_13:
      *(_WORD *)(a1 + 24) = v7;
      if ( (a5 & 4) == 0 || a4 >= 0 )
        goto LABEL_2;
      *(_DWORD *)(a1 + 28) = 3;
      result = sub_7A80(a1, a2, a4 & 0x7F, a6, 0);
      break;
    case 30:
      if ( (a5 & 1) == 0 )
        goto LABEL_2;
      *(_DWORD *)(a1 + 28) = 1;
      *(_WORD *)(a1 + 24) = 82;
LABEL_5:
      result = sub_7A80(a1, a2, a4, a6, 0);
      break;
    default:
LABEL_2:
      result = 0;
      break;
  }
  return result;
}

