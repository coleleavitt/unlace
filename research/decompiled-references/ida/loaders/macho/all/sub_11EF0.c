__int64 __fastcall sub_11EF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // eax
  unsigned int v4; // edx

  if ( (*(_BYTE *)(a2 + 52) & 8) == 0 || !*(_DWORD *)(a2 + 28) )
    return 0;
  v3 = *(_DWORD *)(a2 + 32);
  if ( v3 > 0x3000 || (v4 = *(_DWORD *)(a2 + 36) + v3, result = 0, v4 > 0x3000) )
  {
    *(_DWORD *)(a1 + 8) = 1;
    return 1;
  }
  return result;
}

