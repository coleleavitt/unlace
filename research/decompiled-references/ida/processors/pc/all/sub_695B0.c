__int64 __fastcall sub_695B0(__int64 a1, __int64 a2, __int64 a3)
{
  int flags; // eax
  unsigned __int64 v6; // [rsp+8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  if ( !a1 || !getseg() )
    return v6 - __readfsqword(0x28u);
  flags = get_flags_ex();
  if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x60000000 && a2 == get_item_end() - a1 )
  {
    get_strid();
    if ( (unsigned __int8)get_type_by_tid() && (get_tinfo_property() & 0x3F) == 0xD && a3 == get_tinfo_tid() )
    {
      clear_tinfo_t();
      return v6 - __readfsqword(0x28u);
    }
    clear_tinfo_t();
  }
  return create_data();
}
