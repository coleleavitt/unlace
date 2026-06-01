__int64 __fastcall sub_E9E0(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 *v3; // rdx

  *((_WORD *)a1 + 125) = get_wide_byte();
  *(_WORD *)(a2 + 26) = 2;
  v2 = a1[250];
  if ( v2 <= 0x3Fu )
  {
    v3 = (__int64 *)&off_1EFE0;
  }
  else
  {
    v3 = &qword_1F008;
    if ( (v2 & 0xC0) != 0x40 )
      return 0;
  }
  return sub_CD30(a1, a2, (__int64)(v3 + 1));
}

