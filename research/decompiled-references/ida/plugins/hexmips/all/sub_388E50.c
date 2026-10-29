unsigned __int64 sub_388E50()
{
  unsigned __int64 v1; // [rsp+98h] [rbp-40h]

  v1 = __readfsqword(0x28u);
  copy_tinfo_t();
  while ( (get_tinfo_property() & 0xF) == 0xA )
  {
    get_tinfo_property();
    if ( !(unsigned int)lexcompare_tinfo() )
    {
      clear_tinfo_t();
      break;
    }
    clear_tinfo_t();
  }
  copy_tinfo_t();
  clear_tinfo_t();
  if ( (unsigned __int8)get_tinfo_details() )
    dump_func_type_data();
  cleanup_argloc();
  clear_tinfo_t();
  return v1 - __readfsqword(0x28u);
}

