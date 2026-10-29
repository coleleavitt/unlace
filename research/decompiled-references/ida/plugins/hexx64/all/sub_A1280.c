char __fastcall sub_A1280(int a1, __int64 a2, char a3)
{
  char result; // al

  if ( (a3 & 0x80) == 0 )
    *(_DWORD *)(a2 + 4) &= ~0x80u;
  result = sub_11D5D0(a2, a1);
  if ( *(_BYTE *)(a2 + 32) )
  {
    if ( (*(_BYTE *)(a2 + 33) & 4) != 0 )
    {
      result = sub_11CAD0(*(_DWORD *)(a2 + 36));
      if ( !result )
        *(_BYTE *)(a2 + 33) &= ~4u;
    }
  }
  if ( *(_BYTE *)(a2 + 48) )
  {
    if ( (*(_BYTE *)(a2 + 49) & 4) != 0 )
    {
      result = sub_11CAD0(*(_DWORD *)(a2 + 52));
      if ( !result )
        *(_BYTE *)(a2 + 49) &= ~4u;
    }
  }
  if ( *(_BYTE *)(a2 + 64) && (*(_BYTE *)(a2 + 65) & 4) != 0 )
  {
    result = sub_11CAD0(*(_DWORD *)(a2 + 68));
    if ( !result )
      *(_BYTE *)(a2 + 65) &= ~4u;
  }
  return result;
}

