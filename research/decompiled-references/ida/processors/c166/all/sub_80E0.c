__int64 sub_80E0()
{
  if ( (get_flags_ex() & 0xF00000) == 0x800000 && get_enum_id() != -1 )
  {
    if ( (unsigned __int8)get_type_by_tid() )
      get_tinfo_details();
    clear_tinfo_t();
  }
  return 0;
}

