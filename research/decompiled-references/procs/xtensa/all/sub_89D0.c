__int64 __fastcall sub_89D0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  unsigned int v5; // edx
  unsigned __int16 v6; // cx
  __int64 v7; // rax
  __int64 result; // rax

  v3 = a3 >> 6;
  v4 = v3 & 0x3FFFF;
  if ( (v3 & 0x20000) != 0 )
    v4 = v3 | 0xFFFC0000;
  v5 = v4;
  v6 = *(_WORD *)(a2 + 24);
  if ( v6 <= 0x25u )
  {
    v7 = 0;
    if ( v6 > 0x21u )
      v7 = (*(_DWORD *)(a2 + 16) & 0xFFFFFFFC) + 4 * v5 + 4;
  }
  else
  {
    v7 = 0;
    if ( v6 == 49 )
      v7 = v5 + (unsigned int)*(_QWORD *)(a2 + 16) + 4;
  }
  *(_BYTE *)(a2 + 41) = 7;
  *(_BYTE *)(a2 + 45) = 0;
  result = *(_QWORD *)(a1 + 16) & v7;
  *(_QWORD *)(a2 + 56) = result;
  return result;
}
