__int64 __fastcall sub_86B0(__int64 a1, __int64 a2, unsigned int a3)
{
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 81) = 1;
  *(_WORD *)(a2 + 46) = (a3 >> 4) & 0xF;
  *(_BYTE *)(a2 + 85) = 0;
  *(_BYTE *)(a2 + 121) = 5;
  *(_WORD *)(a2 + 86) = (a3 >> 8) & 0xF;
  *(_BYTE *)(a2 + 125) = 2;
  *(_QWORD *)(a2 + 128) = SBYTE2(a3) << 8;
  return (a3 >> 8) & 0xF;
}

