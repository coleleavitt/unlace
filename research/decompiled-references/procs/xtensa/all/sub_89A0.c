__int64 __fastcall sub_89A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 0;
  result = (unsigned __int8)a3 >> 4;
  *(_BYTE *)(a2 + 81) = 1;
  *(_WORD *)(a2 + 46) = result;
  *(_BYTE *)(a2 + 85) = 0;
  *(_WORD *)(a2 + 86) = (a3 >> 8) & 0xF;
  return result;
}
