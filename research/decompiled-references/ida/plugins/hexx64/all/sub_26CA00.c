__int64 __fastcall sub_26CA00(__int64 a1)
{
  copy_tinfo_t();
  *(_DWORD *)(a1 + 444) = 0;
  if ( (get_tinfo_property() & 0xF) == 0xA )
  {
    get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    if ( sub_32DA30((_QWORD *)(a1 + 136)) )
    {
      copy_tinfo_t();
      clear_tinfo_t();
    }
    *(_DWORD *)(a1 + 444) = 1;
  }
  else if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    *(_DWORD *)(a1 + 444) |= 2u;
  }
  if ( (unsigned int)verify_tinfo() )
    return 0xFFFFFFFFLL;
  else
    return get_tinfo_size();
}

