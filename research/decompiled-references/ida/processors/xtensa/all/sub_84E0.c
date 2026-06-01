__int64 __fastcall sub_84E0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 v3; // al
  __int64 v4; // rdx
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 81) = 1;
  *(_WORD *)(a2 + 46) = (a3 >> 8) & 0xF;
  v3 = a3;
  v4 = *(_QWORD *)(a2 + 16) + SBYTE2(a3);
  *(_BYTE *)(a2 + 85) = 0;
  result = v3 >> 4;
  *(_BYTE *)(a2 + 121) = 7;
  *(_WORD *)(a2 + 86) = result;
  *(_BYTE *)(a2 + 125) = 0;
  *(_QWORD *)(a2 + 136) = *(_QWORD *)(a1 + 16) & (v4 + 4);
  return result;
}

