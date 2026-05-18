__int64 __fastcall sub_D7590(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 112);
  if ( !(_DWORD)result )
  {
    if ( (*(_BYTE *)(a1 + 30) & 0x10) != 0 )
      *(_DWORD *)(a1 + 116) |= 0x1000u;
    *(_DWORD *)(a1 + 112) = 4096;
    return 4096;
  }
  return result;
}
