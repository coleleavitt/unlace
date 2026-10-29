__int64 __fastcall sub_8D40(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // ecx
  __int16 v5; // dx
  unsigned __int16 v6; // cx
  signed int v7; // esi
  signed int v8; // ecx

  *(_BYTE *)(a2 + 41) = 1;
  result = a2;
  *(_BYTE *)(a2 + 45) = 0;
  *(_WORD *)(a2 + 46) = (a3 >> 4) & 0xF;
  v4 = HIWORD(a3);
  if ( *(_WORD *)(a2 + 24) == 69 )
  {
    v5 = a3 & 0xF00;
    *(_BYTE *)(a2 + 81) = 5;
    v6 = v5 | (unsigned __int8)v4;
    *(_BYTE *)(a2 + 85) = 2;
    v7 = v6;
    v8 = *(_DWORD *)&v6 | 0xFFFFF000;
    if ( (v5 & 0x800) == 0 )
      v8 = v7;
    *(_QWORD *)(result + 88) = v8;
  }
  else
  {
    *(_BYTE *)(a2 + 81) = 1;
    *(_BYTE *)(a2 + 85) = 0;
    *(_WORD *)(a2 + 86) = (a3 >> 8) & 0xF;
    *(_BYTE *)(a2 + 121) = 5;
    *(_BYTE *)(a2 + 125) = 2;
    *(_QWORD *)(a2 + 128) = SBYTE2(a3);
  }
  return result;
}

