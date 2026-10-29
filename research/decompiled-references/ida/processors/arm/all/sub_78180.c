__int64 __fastcall sub_78180(__int64 a1)
{
  unsigned int v1; // r12d
  __int64 tinfo_size; // rbp

  *(_DWORD *)(a1 + 8) |= 2u;
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    v1 = -1;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      visit_subtypes();
      v1 = -1;
      clear_tinfo_t();
    }
    clear_tinfo_t();
  }
  else
  {
    if ( (get_tinfo_property() & 0x3F) == 0x1D )
      *(_BYTE *)(a1 + 28) = 1;
    v1 = ((get_tinfo_property() & 0x2F) == 13) - 1;
    if ( (get_tinfo_property() & 0xF) == 9 || get_tinfo_property() )
    {
      if ( *(_DWORD *)(a1 + 24) )
      {
        if ( (get_tinfo_property() & 0xF) == 9 && (unsigned int)lexcompare_tinfo() )
          return v1;
        tinfo_size = get_tinfo_size();
        if ( get_tinfo_size() != tinfo_size )
          return v1;
      }
      else
      {
        copy_tinfo_t();
      }
      ++*(_DWORD *)(a1 + 24);
      v1 = 0;
      *(_DWORD *)(a1 + 8) |= 1u;
    }
  }
  return v1;
}
