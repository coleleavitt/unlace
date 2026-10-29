bool __fastcall sub_273820(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rdi
  char tinfo_property; // r12
  __int64 v5; // rdi
  char v6; // r12
  unsigned __int64 tinfo_size; // r12

  v3 = *a2;
  if ( (unsigned __int8)*a2 && ((v3 & 0xE) != 0 || (v3 & 0x30) == 0) )
  {
    get_tinfo_property();
    tinfo_property = get_tinfo_property();
    clear_tinfo_t();
    v5 = *a1;
    if ( (tinfo_property & 0x3F) != 0x30 )
    {
      if ( !(_BYTE)v5 || (v5 & 0xE) == 0 && (v5 & 0x30) != 0 )
        return 1;
      get_tinfo_property();
      v6 = get_tinfo_property();
      clear_tinfo_t();
      if ( (v6 & 0x3F) == 0x30 )
        return 1;
    }
  }
  if ( (get_tinfo_property() & 0x2F) == 0xD )
    return 0;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
    return 1;
  if ( (get_tinfo_property() & 0xF) == 0xB )
    return 0;
  if ( (get_tinfo_property() & 0xF) == 0xB )
    return 1;
  if ( (get_tinfo_property() & 0xF) == 9 )
    return 0;
  if ( (get_tinfo_property() & 0xF) == 9 )
    return 1;
  tinfo_size = get_tinfo_size();
  if ( get_tinfo_size() < tinfo_size )
    return 1;
  if ( !(unsigned int)get_tinfo_property() )
    return 0;
  return (unsigned int)get_tinfo_property() == 0;
}

