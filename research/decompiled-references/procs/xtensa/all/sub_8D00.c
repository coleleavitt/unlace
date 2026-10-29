__int64 __fastcall sub_8D00(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 81) = 7;
  *(_WORD *)(a2 + 46) = (a3 >> 8) & 0xF;
  *(_BYTE *)(a2 + 85) = 0;
  result = *(_QWORD *)(a1 + 16)
         & (((unsigned __int8)a3 & 0x30u | ((unsigned __int16)a3 >> 12)) + *(_QWORD *)(a2 + 16) + 4LL);
  *(_QWORD *)(a2 + 96) = result;
  return result;
}
