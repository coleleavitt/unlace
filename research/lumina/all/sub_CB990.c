__int64 __fastcall sub_CB990(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 116);
  if ( !*(_DWORD *)(a1 + 112) )
  {
    if ( (*(_BYTE *)(a1 + 30) & 0x10) != 0 )
    {
      BYTE1(result) |= 0x10u;
      *(_DWORD *)(a1 + 116) = result;
    }
    *(_DWORD *)(a1 + 112) = 4096;
  }
  return result;
}
