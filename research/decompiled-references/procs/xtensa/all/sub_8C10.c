__int64 __fastcall sub_8C10(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // ax
  unsigned __int8 v4; // dl
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 0;
  *(_WORD *)(a2 + 46) = (unsigned __int16)a3 >> 12;
  *(_BYTE *)(a2 + 81) = 1;
  v3 = (a3 >> 8) & 0xF;
  v4 = (unsigned __int8)a3 >> 4;
  *(_BYTE *)(a2 + 85) = 0;
  *(_WORD *)(a2 + 86) = v3;
  result = v4;
  if ( !v4 )
    result = -1;
  *(_BYTE *)(a2 + 121) = 5;
  *(_BYTE *)(a2 + 125) = 2;
  *(_QWORD *)(a2 + 128) = result;
  return result;
}
