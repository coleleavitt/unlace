__int64 __fastcall sub_32C700(__int64 a1, _DWORD a2, char a3)
{
  unsigned int v4; // ebp

  v4 = 0;
  if ( *(_DWORD *)(a1 + 84) == get_tinfo_size() )
  {
    get_tinfo_property();
    if ( a3 == ((get_tinfo_property() & 0x40) != 0) || !a3 && (set_tinfo_property(), (get_tinfo_property() & 0x40) != 0) )
    {
      v4 = 0;
    }
    else
    {
      copy_tinfo_t();
      copy_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      v4 = 1;
      clear_tinfo_t();
    }
    clear_tinfo_t();
  }
  return v4;
}

