__int64 __fastcall sub_87A0(__int64 a1, __int64 a2, __int16 a3)
{
  *(_BYTE *)(a2 + 33) = HIBYTE(a3);
  *(_BYTE *)(a2 + 44) &= ~8u;
  *(_BYTE *)(a2 + 41) = 5;
  *(_BYTE *)(a2 + 45) = 0;
  *(_QWORD *)(a2 + 48) = HIBYTE(a3);
  *(_DWORD *)(a2 + 28) = 1;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 0;
  *(_WORD *)(a2 + 86) = (unsigned __int8)a3 >> 4;
  return HIBYTE(a3);
}
