__int64 __fastcall sub_8B60(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edx
  __int64 result; // rax
  unsigned __int16 v6; // cx
  unsigned int v7; // esi
  unsigned int v8; // ecx
  bool v9; // zf
  __int64 v10; // rdx

  v4 = a3 >> 12;
  *(_BYTE *)(a2 + 41) = 1;
  result = a2;
  *(_BYTE *)(a2 + 45) = 0;
  *(_WORD *)(a2 + 46) = (a3 >> 8) & 0xF;
  v6 = v4 & 0xFFF;
  if ( *(_WORD *)(a2 + 24) == 43 )
  {
    *(_BYTE *)(a2 + 81) = 5;
    *(_BYTE *)(a2 + 85) = 1;
    *(_QWORD *)(a2 + 88) = (8 * v6) & 0x7FF8;
  }
  else
  {
    v7 = v6;
    v8 = *(_DWORD *)&v6 | 0xFFFFF000;
    v9 = (v4 & 0x800) == 0;
    v10 = *(_QWORD *)(result + 16);
    if ( v9 )
      v8 = v7;
    *(_BYTE *)(result + 81) = 7;
    *(_BYTE *)(result + 85) = 0;
    *(_QWORD *)(result + 96) = *(_QWORD *)(a1 + 16) & (v8 + (unsigned int)v10 + 4);
  }
  return result;
}

