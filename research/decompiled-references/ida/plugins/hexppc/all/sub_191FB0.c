unsigned __int64 __fastcall sub_191FB0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+58h] [rbp-40h]

  v3 = __readfsqword(0x28u);
  copy_tinfo_t();
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    if ( (unsigned __int8)get_tinfo_details() )
    {
      copy_tinfo_t();
      copy_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      clear_tinfo_t();
      clear_tinfo_t();
    }
    clear_tinfo_t();
  }
  *(_DWORD *)(a2 + 4) = get_tinfo_size();
  return v3 - __readfsqword(0x28u);
}

