_BOOL8 __fastcall sub_63050(__int64 a1)
{
  int v1; // edx
  _BOOL8 result; // rax

  v1 = *(_DWORD *)(a1 + 28);
  result = 1;
  if ( (v1 & 0x24000) == 0 )
  {
    result = 0;
    if ( (v1 & 0x10000) != 0 )
      return (*(_BYTE *)(a1 + 273) & 2) == 0;
  }
  return result;
}
