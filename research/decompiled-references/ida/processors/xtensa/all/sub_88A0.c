__int64 __fastcall sub_88A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)result == 343 )
  {
    *(_BYTE *)(a2 + 44) &= ~8u;
    *(_BYTE *)(a2 + 41) = 5;
    result = (a3 >> 9) & 0xF;
    *(_BYTE *)(a2 + 45) = 0;
    *(_DWORD *)(a2 + 28) = 64;
    *(_QWORD *)(a2 + 48) = (unsigned int)(result - 5);
    *(_BYTE *)(a2 + 33) = ((a3 >> 9) & 0xF) - 5;
    *(_BYTE *)(a2 + 81) = 1;
    *(_BYTE *)(a2 + 85) = 0;
    *(_WORD *)(a2 + 86) = (unsigned __int8)a3 >> 4;
  }
  else if ( (_WORD)result == 345 )
  {
    *(_BYTE *)(a2 + 44) &= ~8u;
    *(_BYTE *)(a2 + 41) = 5;
    result = (a3 >> 8) & 7;
    *(_BYTE *)(a2 + 45) = 0;
    *(_DWORD *)(a2 + 28) = 64;
    *(_QWORD *)(a2 + 48) = (unsigned int)result;
    *(_BYTE *)(a2 + 33) = BYTE1(a3) & 7;
    *(_BYTE *)(a2 + 81) = 1;
    *(_BYTE *)(a2 + 85) = 0;
    *(_WORD *)(a2 + 86) = (unsigned __int16)a3 >> 12;
  }
  return result;
}

