__int64 __fastcall sub_1FA80(__int64 a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  __int64 result; // rax
  unsigned int v7; // edx

  v1 = *(_DWORD *)(a1 + 28);
  v2 = (v1 & 1) == 0 ? 3 : 67;
  v3 = v2;
  if ( (v1 & 2) != 0 )
  {
    LOBYTE(v3) = ((*(_DWORD *)(a1 + 28) & 1) == 0 ? 3 : 67) | 0x80;
    v2 = v3;
  }
  v4 = v2;
  if ( (v1 & 4) != 0 )
  {
    BYTE1(v4) = BYTE1(v2) | 1;
    v2 = v4;
  }
  v5 = *(_DWORD *)(a1 + 32);
  result = v2 | (4 * (v5 & 1u));
  v7 = v2 | (4 * (v5 & 1)) | 8;
  if ( (v5 & 2) != 0 )
    result = v7;
  if ( (v5 & 4) != 0 )
    result = (unsigned int)result | 0x10;
  if ( (v5 & 8) != 0 )
    return (unsigned int)result | 0x20;
  return result;
}
