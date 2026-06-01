__int64 __fastcall sub_F0A0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 *v3; // rdx

  *(_WORD *)(a1 + 250) = get_wide_byte();
  *(_WORD *)(a2 + 26) = 2;
  v2 = *(_BYTE *)(a1 + 251);
  if ( v2 <= 0xFu )
  {
    v3 = &off_1F8E0;
  }
  else
  {
    v3 = (__int64 *)&off_1F908;
    if ( (v2 & 0xF0) != 0x10 )
      return 0;
  }
  return sub_CD30((unsigned __int8 *)a1, a2, (__int64)(v3 + 1));
}

