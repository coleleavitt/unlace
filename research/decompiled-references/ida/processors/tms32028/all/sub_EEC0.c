__int64 __fastcall sub_EEC0(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 *v3; // rdx

  *(_WORD *)(a1 + 250) = get_wide_byte();
  *(_WORD *)(a2 + 26) = 2;
  v2 = *(_BYTE *)(a1 + 251);
  if ( v2 <= 3u )
  {
    v3 = &qword_1F720;
  }
  else
  {
    v3 = &qword_1F748;
    if ( (v2 & 0xFC) != 4 )
      return 0;
  }
  return sub_CD30((unsigned __int8 *)a1, a2, (__int64)(v3 + 1));
}

