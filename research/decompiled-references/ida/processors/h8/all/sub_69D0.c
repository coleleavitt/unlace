__int64 __fastcall sub_69D0(__int64 a1, unsigned __int8 a2)
{
  __int64 result; // rax

  switch ( a2 >> 4 )
  {
    case 8:
      *(_BYTE *)(a1 + 73) |= 1u;
      *(_WORD *)(a1 + 24) = 92;
      *(_BYTE *)(a1 + 45) = 0;
      result = 1;
      break;
    case 9:
      *(_BYTE *)(a1 + 73) |= 2u;
      *(_WORD *)(a1 + 24) = 92;
      *(_BYTE *)(a1 + 45) = 0;
      result = 1;
      break;
    case 10:
      *(_BYTE *)(a1 + 73) |= 1u;
      *(_WORD *)(a1 + 24) = 93;
      *(_BYTE *)(a1 + 45) = 1;
      result = 1;
      break;
    case 11:
      *(_BYTE *)(a1 + 73) |= 2u;
      *(_WORD *)(a1 + 24) = 93;
      *(_BYTE *)(a1 + 45) = 1;
      result = 1;
      break;
    case 12:
      *(_BYTE *)(a1 + 73) |= 1u;
      *(_WORD *)(a1 + 24) = 94;
      *(_BYTE *)(a1 + 45) = 2;
      result = 1;
      break;
    case 13:
      *(_BYTE *)(a1 + 73) |= 2u;
      *(_WORD *)(a1 + 24) = 94;
      *(_BYTE *)(a1 + 45) = 2;
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

