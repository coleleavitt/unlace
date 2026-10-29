__int64 __fastcall sub_A460(__int64 a1)
{
  char v1; // al
  char v2; // al

  v1 = *(_BYTE *)(a1 + 1);
  if ( v1 == 5 )
    return 0;
  if ( v1 == 4 )
  {
    v2 = *(_BYTE *)(a1 + 34);
    if ( !v2 )
      return 150;
    if ( v2 == 1 )
      return 166;
  }
  else
  {
    if ( under_debugger )
      goto LABEL_12;
    interr();
  }
  if ( under_debugger )
LABEL_12:
    BUG();
  interr();
  return sub_A4E0(10104);
}

