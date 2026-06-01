_QWORD *__fastcall sub_328210(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  char tinfo; // bp

  if ( (unsigned __int8)*a3 && (get_tinfo_property() & 0xF) != 0xE )
  {
    copy_tinfo_t();
    copy_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    copy_tinfo_t();
    tinfo = create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    if ( !tinfo )
    {
      if ( !under_debugger )
        sub_37EEE0(51632);
      BUG();
    }
    *a1 = 0;
    copy_tinfo_t();
    clear_tinfo_t();
  }
  else
  {
    *a1 = 0;
    copy_tinfo_t();
  }
  return a1;
}

