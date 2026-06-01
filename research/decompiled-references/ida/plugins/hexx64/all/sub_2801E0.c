__int64 __fastcall sub_2801E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 tinfo_size; // r14
  unsigned int v5; // ebx
  unsigned __int64 v7; // r14

  copy_tinfo_t();
  copy_tinfo_t();
  while ( (get_tinfo_property() & 0xF) == 0xA )
  {
    if ( (get_tinfo_property() & 0xF) != 0xA )
      goto LABEL_7;
    tinfo_size = get_tinfo_size();
    if ( tinfo_size != get_tinfo_size() )
      goto LABEL_7;
    get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
  }
  if ( (get_tinfo_property() & 0xF) != 0xC || (get_tinfo_property() & 0xF) != 0xC || (v5 = compare_tinfo(), !(_BYTE)v5) )
  {
LABEL_7:
    v5 = 1;
    goto LABEL_8;
  }
  get_tinfo_property();
  if ( (get_tinfo_property() & 0x3F) != 1 )
  {
    get_tinfo_property();
    if ( (get_tinfo_property() & 0x3F) != 1 )
    {
      v7 = (int)get_tinfo_size();
      if ( v7 >= get_tinfo_size() )
      {
LABEL_18:
        v5 = 0;
        goto LABEL_19;
      }
      if ( a3 )
      {
        if ( (get_tinfo_property() & 0x3F) != 1 )
        {
          LOBYTE(v5) = v7 < get_tinfo_size();
          goto LABEL_19;
        }
        goto LABEL_18;
      }
    }
LABEL_19:
    clear_tinfo_t();
    goto LABEL_13;
  }
  v5 = 0;
LABEL_13:
  clear_tinfo_t();
LABEL_8:
  clear_tinfo_t();
  clear_tinfo_t();
  return v5;
}

