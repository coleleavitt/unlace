__int64 __fastcall sub_7450(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  char v4; // dl
  __int16 v5; // di
  __int16 v6; // ax
  __int16 v7; // cx
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 1;
  *(_WORD *)(a2 + 24) = 6;
  *(_WORD *)(a2 + 46) = 47;
  v4 = (a4 & 1) + 7;
  v5 = a4 >> 13;
  v6 = (a4 >> 11) & 1;
  *(_BYTE *)(a2 + 32) = v4;
  *(_BYTE *)(a2 + 45) = 2;
  v7 = (a4 >> 7) & 7;
  result = (unsigned __int16)(v5 | v6);
  *(_BYTE *)(a2 + 81) = 5;
  *(_BYTE *)(a2 + 85) = 2;
  *(_QWORD *)(a2 + 88) = result;
  *(_BYTE *)(a2 + 121) = 1;
  *(_BYTE *)(a2 + 125) = 2;
  if ( v4 == 8 )
    v7 += 32;
  else
    *(_BYTE *)(a2 + 29) |= 4u;
  *(_WORD *)(a2 + 126) = v7;
  return result;
}

