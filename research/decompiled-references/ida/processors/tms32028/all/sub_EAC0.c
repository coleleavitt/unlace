__int64 __fastcall sub_EAC0(__int64 a1, __int64 a2)
{
  _UNKNOWN *__ptr32 (**v2)[8]; // rax

  *(_WORD *)(a1 + 250) = get_wide_byte();
  *(_WORD *)(a2 + 26) = 2;
  v2 = &off_1F0A0;
  while ( (*(_BYTE *)(a1 + 250) & *(_BYTE *)v2) != *((_BYTE *)v2 + 1) )
  {
    v2 += 5;
    if ( v2 == &off_1F140 )
      return 0;
  }
  return ((__int64 (__fastcall *)(__int64, __int64, _UNKNOWN *__ptr32 (**)[8]))v2[1])(a1, a2, v2 + 1);
}

