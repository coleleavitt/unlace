__int64 __fastcall sub_31870(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = *(_WORD *)(a1 + 40);
  if ( v2 == 206 )
    goto LABEL_6;
  if ( v2 > 0xCEu )
  {
    if ( v2 != 346 && v2 != 1193 && v2 != 281 )
      return 0;
    goto LABEL_14;
  }
  if ( v2 == 118 )
    goto LABEL_14;
  if ( v2 <= 0x76u )
  {
    if ( v2 != 48 && v2 != 88 )
      return 0;
LABEL_14:
    v3 = a1 + 96;
    v4 = a1 + 56;
    return set_moved_jpt(a1, v4, v3, a2, 10, 10);
  }
  if ( v2 == 184 )
  {
LABEL_6:
    v3 = a1 + 56;
    v4 = a1 + 96;
    return set_moved_jpt(a1, v4, v3, a2, 10, 10);
  }
  return 0;
}

