__int64 __fastcall sub_210D0(__int64 a1, __int64 a2)
{
  __int64 tinfo_tid; // rbp

  if ( a2 )
  {
    get_idati();
    create_tinfo();
  }
  if ( (unsigned __int8)get_tinfo_property() )
    tinfo_tid = get_tinfo_tid();
  else
    tinfo_tid = -1;
  clear_tinfo_t();
  return tinfo_tid;
}

