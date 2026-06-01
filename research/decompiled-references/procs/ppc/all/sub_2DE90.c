__int64 __fastcall sub_2DE90(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 result; // rax
  int v4; // edx

  v2 = *(_WORD *)(a2 + 24);
  if ( (v2 & 0xFFFD) != 0x9E9 )
    return *(unsigned __int16 *)(a2 + 26);
  v4 = *(_DWORD *)(a2 + 28);
  if ( (v4 & 0x10) == 0 )
    return *(unsigned __int16 *)(a2 + 26);
  if ( v2 == 2537 )
  {
    *(_WORD *)(a2 + 24) = 2536;
  }
  else if ( v2 == 2539 )
  {
    *(_WORD *)(a2 + 24) = 2538;
  }
  result = *(unsigned __int16 *)(a2 + 26);
  *(_DWORD *)(a2 + 28) = v4 ^ 0x10;
  return result;
}
