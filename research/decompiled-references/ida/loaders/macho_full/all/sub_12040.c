unsigned __int64 __fastcall sub_12040(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // [rsp+58h] [rbp-40h]

  v5 = __readfsqword(0x28u);
  if ( get_name_ea() != -1 )
  {
    if ( (unsigned __int8)get_tinfo() )
    {
      if ( a3 )
      {
        get_tinfo_property();
        if ( (get_tinfo_property() & 0xF) != 0xC )
        {
          clear_tinfo_t();
          copy_tinfo_t();
          copy_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
          copy_tinfo_t();
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
        }
        clear_tinfo_t();
      }
      get_aflags();
      apply_tinfo();
      clear_tinfo_t();
    }
    else
    {
      clear_tinfo_t();
    }
  }
  return v5 - __readfsqword(0x28u);
}

