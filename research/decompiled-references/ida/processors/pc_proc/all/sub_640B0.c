bool __fastcall sub_640B0(__int64 a1)
{
  int v1; // edx
  bool result; // al

  v1 = *(_DWORD *)(a1 + 28) & 0x818;
  result = v1 == 2056 || v1 == 0;
  if ( !result && v1 == 2064 )
    return (*(_BYTE *)(a1 + 33) & 8) == 0;
  return result;
}

