__int64 __fastcall sub_1C8E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // cx

  v3 = word_544A0[a3 & 0x3F];
  if ( v3 )
  {
    *(_WORD *)(a2 + 24) = v3;
    *(_BYTE *)(a2 + 74) = 1;
    *(_BYTE *)(a2 + 81) = 9;
    *(_WORD *)(a2 + 46) = (a3 >> 6) & 0x1F;
    *(_BYTE *)(a2 + 85) = 2;
    *(_BYTE *)(a2 + 114) = 1;
    *(_WORD *)(a2 + 86) = (a3 >> 11) & 0x1F;
    *(_BYTE *)(a2 + 121) = 9;
    *(_BYTE *)(a2 + 152) = (a3 >> 21) & 0xF;
    *(_WORD *)(a2 + 126) = BYTE2(a3) & 0x1F;
    *(_WORD *)(a2 + 153) = 262;
    *(_BYTE *)(a2 + 125) = 2;
    *(_WORD *)(a2 + 72) = 1791;
    *(_WORD *)(a2 + 112) = 1791;
    *(_BYTE *)(a2 + 45) = 2;
    *(_BYTE *)(a2 + 41) = 9;
  }
  else
  {
    *(_BYTE *)(a2 + 45) = 2;
    *(_QWORD *)(a2 + 48) = a3 & 0x1FFFFFF;
    *(_BYTE *)(a2 + 41) = 5;
  }
  return 1;
}

