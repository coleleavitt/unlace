__int64 __fastcall sub_5AB0(__int64 a1)
{
  int v1; // edx

  v1 = 64;
  if ( (*(_DWORD *)(a1 + 28) & 0x10) == 0 )
    v1 = (*(_DWORD *)(a1 + 28) & 8) == 0 ? 16 : 32;
  return v1 | ((*(_DWORD *)(a1 + 28) & 4) == 0 ? 128 : 132);
}

