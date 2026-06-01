__int64 sub_E7D60()
{
  unsigned int v0; // eax
  unsigned int strlit; // ebx
  __int16 flags; // ax
  __int16 tinfo_property; // [rsp+8h] [rbp-50h]

  v0 = is_spec_ea();
  if ( (_BYTE)v0 )
    return 0;
  strlit = v0;
  tinfo_property = get_tinfo_property();
  if ( (get_tinfo_property() & 0x1F) == 0x12 )
  {
    flags = get_flags_ex();
    if ( (flags & 0x600) != 0 )
    {
      if ( (flags & 0xC000) == 0x4000 )
      {
LABEL_10:
        clear_tinfo_t();
        return strlit;
      }
      if ( !(unsigned __int8)get_tinfo() || !(unsigned __int8)compare_tinfo() )
      {
        clear_tinfo_t();
        goto LABEL_10;
      }
      clear_tinfo_t();
    }
    strlit = create_strlit();
    if ( (_BYTE)strlit )
    {
      if ( (get_tinfo_property() & 0x40) != 0 )
      {
        copy_tinfo_t();
        create_tinfo();
        clear_tinfo_t();
        set_tinfo();
      }
      goto LABEL_10;
    }
  }
  else if ( (tinfo_property & 0x100) != 0 )
  {
    get_tinfo_pdata();
  }
  clear_tinfo_t();
  return 0;
}

