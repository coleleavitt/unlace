__int64 __fastcall sub_8B20(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 1;
  v4 = *(_QWORD *)(a2 + 16) + SBYTE2(a3);
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 81) = 7;
  result = ((a3 >> 8) & 0xF) + 37;
  *(_BYTE *)(a2 + 85) = 0;
  *(_WORD *)(a2 + 46) = result;
  *(_QWORD *)(a2 + 96) = *(_QWORD *)(a1 + 16) & (v4 + 4);
  return result;
}
