__int64 __fastcall sub_1E6A0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  switch ( a2 )
  {
    case 1u:
      *(_WORD *)(a1 + 24) = 263;
      break;
    case 2u:
      *(_WORD *)(a1 + 24) = 265;
      break;
    case 3u:
      *(_WORD *)(a1 + 24) = 266;
      break;
    case 4u:
      *(_WORD *)(a1 + 24) = 264;
      break;
    case 0x10u:
      *(_WORD *)(a1 + 24) = 1101;
      break;
    default:
      result = ~a2;
      if ( (~(_BYTE)a2 & 0xF0) != 0 )
      {
        result = 2;
        *(_WORD *)(a1 + 24) = 2;
        if ( a2 )
        {
          *(_BYTE *)(a1 + 41) = 5;
          *(_BYTE *)(a1 + 45) = 2;
          *(_QWORD *)(a1 + 48) = (int)a2;
          *(_BYTE *)(a1 + 73) = 0;
          *(_QWORD *)(a1 + 64) = 0;
        }
      }
      else
      {
        *(_BYTE *)(a1 + 41) = 5;
        *(_WORD *)(a1 + 24) = 287;
        *(_BYTE *)(a1 + 45) = 2;
        *(_QWORD *)(a1 + 48) = a2 & 0xF;
        *(_BYTE *)(a1 + 73) = 0;
        *(_QWORD *)(a1 + 64) = 0;
      }
      break;
  }
  return result;
}
