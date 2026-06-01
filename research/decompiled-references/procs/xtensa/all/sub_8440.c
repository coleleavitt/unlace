__int64 __fastcall sub_8440(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v4; // si
  int v5; // eax
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 0;
  *(_WORD *)(a2 + 46) = (a3 >> 4) & 0xF;
  v4 = *(_WORD *)(a2 + 24);
  LOWORD(v5) = (unsigned __int16)a3 >> 12;
  if ( v4 == 330 || v4 == 335 )
  {
    v5 = -4 * (unsigned __int8)((v5 ^ 0xF) + 1);
  }
  else
  {
    v5 = (unsigned __int8)v5;
    if ( v4 == 121 )
      v5 = 4 * (unsigned __int8)v5;
  }
  *(_BYTE *)(a2 + 81) = 4;
  *(_BYTE *)(a2 + 85) = 2;
  result = *(_DWORD *)(a1 + 16) & (unsigned int)v5;
  *(_QWORD *)(a2 + 96) = (unsigned int)result;
  *(_WORD *)(a2 + 86) = (a3 >> 8) & 0xF;
  return result;
}
