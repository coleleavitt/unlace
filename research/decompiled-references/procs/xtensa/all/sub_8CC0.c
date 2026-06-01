__int64 __fastcall sub_8CC0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  char v4; // dl
  int v5; // ecx
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 81) = 5;
  *(_WORD *)(a2 + 46) = (a3 >> 8) & 0xF;
  v3 = a3;
  v4 = a3 & 0x70;
  *(_BYTE *)(a2 + 85) = 2;
  LOBYTE(v3) = v4 | (v3 >> 12) & 0xF;
  v5 = (unsigned __int8)v3;
  LODWORD(result) = v3 | 0xFFFFFF80;
  if ( (~v4 & 0x60) != 0 )
    LODWORD(result) = v5;
  result = (int)result;
  *(_QWORD *)(a2 + 88) = (int)result;
  return result;
}
