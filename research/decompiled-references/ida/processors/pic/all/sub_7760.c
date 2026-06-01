__int64 __fastcall sub_7760(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 5);
  if ( !v1 )
    return 16;
  if ( v1 == 1 )
    return 32;
  if ( under_debugger )
    BUG();
  interr();
  return sub_77A0(249);
}

