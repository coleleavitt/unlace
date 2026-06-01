__int64 __fastcall sub_7C00(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  switch ( a2 & 3 )
  {
    case 0:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 25;
      *(_BYTE *)(a3 + 5) = 0;
      result = 25;
      break;
    case 1:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 26;
      *(_BYTE *)(a3 + 5) = 0;
      result = 26;
      break;
    case 2:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 27;
      *(_BYTE *)(a3 + 5) = 0;
      result = 27;
      break;
    case 3:
      *(_BYTE *)(a3 + 1) = 1;
      *(_WORD *)(a3 + 6) = 34;
      *(_BYTE *)(a3 + 5) = 0;
      result = 34;
      break;
  }
  return result;
}

