__int64 __fastcall sub_7C20(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  switch ( a2 % 5 )
  {
    case 0:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 26;
      *(_BYTE *)(a3 + 5) = 0;
      result = 26;
      break;
    case 1:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 27;
      *(_BYTE *)(a3 + 5) = 0;
      result = 27;
      break;
    case 2:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 28;
      *(_BYTE *)(a3 + 5) = 0;
      result = 28;
      break;
    case 3:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 29;
      *(_BYTE *)(a3 + 5) = 0;
      result = 29;
      break;
    case 4:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 31;
      *(_BYTE *)(a3 + 5) = 0;
      result = 31;
      break;
  }
  return result;
}

