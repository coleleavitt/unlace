__int64 sub_58FA0()
{
  copy_tinfo_t();
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
  }
  clear_tinfo_t();
  return 0;
}
