__int64 __fastcall sub_8820(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  *(_BYTE *)(a2 + 44) &= ~8u;
  result = a3 >> 4;
  *(_BYTE *)(a2 + 41) = 5;
  *(_BYTE *)(a2 + 45) = 0;
  *(_QWORD *)(a2 + 48) = (unsigned __int8)result;
  *(_DWORD *)(a2 + 28) = 2;
  *(_BYTE *)(a2 + 33) = result;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 0;
  *(_WORD *)(a2 + 86) = (unsigned __int16)a3 >> 12;
  return result;
}

