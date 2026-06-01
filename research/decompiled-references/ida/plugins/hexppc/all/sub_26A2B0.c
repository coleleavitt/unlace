_QWORD *__fastcall sub_26A2B0(_QWORD *a1)
{
  *a1 = 0;
  copy_tinfo_t();
  copy_tinfo_t();
  copy_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  if ( (unsigned __int8)get_tinfo_details() && (get_tinfo_property() & 0xF) == 0xB )
  {
    get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    create_tinfo();
  }
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  return a1;
}

