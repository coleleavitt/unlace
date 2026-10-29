__int64 __fastcall sub_8930(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)result == 344 )
  {
    *(_BYTE *)(a2 + 41) = 5;
    *(_BYTE *)(a2 + 45) = 0;
    *(_QWORD *)(a2 + 48) = ((a3 >> 9) & 0xF) - 5;
    result = ((a3 >> 9) & 0xF) - 5;
  }
  else
  {
    if ( (_WORD)result != 346 )
      return result;
    *(_BYTE *)(a2 + 41) = 5;
    *(_BYTE *)(a2 + 45) = 0;
    result = (a3 >> 12) & 7;
    *(_QWORD *)(a2 + 48) = result;
  }
  *(_BYTE *)(a2 + 44) &= ~8u;
  *(_DWORD *)(a2 + 28) = 64;
  *(_BYTE *)(a2 + 33) = result;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 0;
  *(_WORD *)(a2 + 86) = (unsigned __int8)a3 >> 4;
  return result;
}
