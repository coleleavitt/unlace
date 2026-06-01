__int64 __fastcall sub_8760(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ecx
  __int64 result; // rax

  v3 = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(a2 + 41) = 1;
  *(_BYTE *)(a2 + 45) = 0;
  *(_BYTE *)(a2 + 81) = 2;
  *(_WORD *)(a2 + 46) = (a3 >> 4) & 0xF;
  *(_BYTE *)(a2 + 85) = 2;
  result = *(_QWORD *)(a1 + 16) & (((v3 + 3) & 0xFFFFFFFC) + ((a3 >> 6) & 0x3FFFC | 0xFFFC0000));
  *(_QWORD *)(a2 + 96) = result;
  return result;
}

