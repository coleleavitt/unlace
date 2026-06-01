__int64 __fastcall sub_7EA0(__int64 a1, __int64 a2, unsigned int a3)
{
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 0;
  *(_WORD *)(a2 + 46) = (unsigned __int16)a3 >> 12;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 0;
  *(_WORD *)(a2 + 86) = (a3 >> 8) & 0xF;
  *(_BYTE *)(a2 + 121) = 5;
  *(_BYTE *)(a2 + 125) = 0;
  *(_QWORD *)(a2 + 128) = (char)(((unsigned __int8)a3 >> 4) + 7);
  return (a3 >> 8) & 0xF;
}
