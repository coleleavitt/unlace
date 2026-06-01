__int64 __fastcall sub_7550(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int16 v4; // di
  char v5; // r8
  __int64 result; // rax

  v4 = a4 >> 13;
  v5 = 0;
  if ( (a4 & 1) != 0 )
  {
    v4 += 32;
    v5 = 1;
  }
  *(_WORD *)(a2 + 24) = (a4 & 0x800) == 0 ? 2 : 69;
  *(_BYTE *)(a2 + 32) = (a4 & 1) + 7;
  result = (a4 >> 7) & 7;
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 2;
  if ( ((a4 & 0x1000) != 0) != v5 )
    result = (unsigned int)(result + 32);
  *(_WORD *)(a2 + 46) = v4;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 2;
  *(_WORD *)(a2 + 86) = result;
  *(_BYTE *)(a2 + 121) = 1;
  *(_BYTE *)(a2 + 125) = 2;
  *(_WORD *)(a2 + 126) = v4;
  return result;
}

