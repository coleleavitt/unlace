__int64 __fastcall sub_8C80(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 81) = 4;
  *(_WORD *)(a2 + 46) = (a3 >> 4) & 0xF;
  *(_BYTE *)(a2 + 85) = 2;
  result = *(_QWORD *)(a1 + 16) & (a3 >> 10) & 0x3C;
  *(_WORD *)(a2 + 86) = (a3 >> 8) & 0xF;
  *(_QWORD *)(a2 + 96) = result;
  return result;
}
