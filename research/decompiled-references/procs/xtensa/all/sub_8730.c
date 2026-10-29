__int64 __fastcall sub_8730(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 4;
  *(_BYTE *)(a2 + 45) = 2;
  result = *(_QWORD *)(a1 + 16) & (a3 >> 14) & 0x3FC;
  *(_WORD *)(a2 + 46) = (a3 >> 8) & 0xF;
  *(_QWORD *)(a2 + 56) = result;
  return result;
}
