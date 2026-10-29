bool __fastcall sub_29A570(__int64 *a1)
{
  __int64 v1; // rdi
  char tinfo_property; // bl

  v1 = *a1;
  if ( !(_BYTE)v1 || (v1 & 0xE) == 0 && (v1 & 0x30) != 0 )
    return 0;
  get_tinfo_property();
  tinfo_property = get_tinfo_property();
  clear_tinfo_t();
  return (tinfo_property & 0x3F) != 48;
}

