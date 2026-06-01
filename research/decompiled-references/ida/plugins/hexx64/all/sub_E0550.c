bool __fastcall sub_E0550(_QWORD *a1, char a2)
{
  if ( !(unsigned __int8)*a1 )
    return 0;
  if ( a2 )
  {
    if ( (get_tinfo_property() & 0xF) != 0xA )
      return 0;
    get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
  }
  return (get_tinfo_property() & 0xF) == 12;
}

