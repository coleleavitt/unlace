__int64 __fastcall sub_7CF0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 5;
  *(_BYTE *)(a2 + 45) = 0;
  result = (a3 >> 8) & 0xF;
  *(_BYTE *)(a2 + 81) = 5;
  *(_QWORD *)(a2 + 48) = (unsigned int)result;
  *(_BYTE *)(a2 + 85) = 0;
  *(_QWORD *)(a2 + 88) = (unsigned __int8)a3 >> 4;
  return result;
}
