bool __fastcall sub_11DA00(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( (*(_BYTE *)(a1 + 4) & 0x10) != 0 && *(_BYTE *)(a1 + 32) && *(_DWORD *)a1 != 2 )
    return (unsigned int)(*(_DWORD *)a1 - 65) > 1;
  return result;
}

