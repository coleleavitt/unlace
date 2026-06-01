char __fastcall sub_141C0(__int64 a1, __int64 a2)
{
  char v2; // al
  char result; // al

  v2 = *(_BYTE *)(a2 + 1);
  if ( v2 == 4 )
    goto LABEL_4;
  if ( v2 != 2 )
  {
    if ( v2 == 3 )
      goto LABEL_4;
    return 0;
  }
  if ( !*(_BYTE *)(a2 + 32) )
    return 0;
LABEL_4:
  result = sub_13F20(a1, a2, 5);
  if ( !result )
    return sub_13F20(a1, a2, 4);
  return result;
}

