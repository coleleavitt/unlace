__int64 __fastcall sub_20720(__int64 a1)
{
  unsigned __int16 v2; // di
  __int64 v4; // rcx

  if ( *(_DWORD *)(a1 + 16) )
  {
    v2 = **(_WORD **)(a1 + 8);
    if ( v2 == 76 )
      return sub_202E0(a1, 3);
    if ( v2 == 91 )
      return sub_207A0(a1);
    if ( v2 > 0xFFu )
      return 0;
  }
  else
  {
    LOBYTE(v2) = 0;
  }
  if ( sub_1F6F0(v2, 0) )
    return sub_1F940(v4);
  else
    return 0;
}

