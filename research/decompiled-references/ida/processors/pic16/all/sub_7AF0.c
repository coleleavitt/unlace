__int64 __fastcall sub_7AF0(__int64 a1)
{
  int v1; // eax
  char v2; // dl

  v1 = 130;
  if ( *(_BYTE *)(a1 + 1) != 4 )
    v1 = 0;
  v2 = *(_BYTE *)(a1 + 5);
  if ( !v2 )
    return v1 | 0x14u;
  if ( v2 == 1 )
    return v1 | 0x24u;
  if ( under_debugger )
    BUG();
  interr();
  return sub_7B30(10328);
}

