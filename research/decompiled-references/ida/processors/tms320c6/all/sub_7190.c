__int64 __fastcall sub_7190(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 10;
  *(_WORD *)(a2 + 24) = 203;
  *(_BYTE *)(a2 + 45) = 2;
  result = (32 * (_BYTE)a4) & 0x20 | (a4 >> 11) & 0x18 | (a4 >> 7) & 7u;
  *(_QWORD *)(a2 + 48) = (int)result;
  return result;
}

