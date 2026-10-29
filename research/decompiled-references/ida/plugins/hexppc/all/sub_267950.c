unsigned __int64 __fastcall sub_267950(__int64 a1, char a2)
{
  unsigned __int64 v3; // [rsp+38h] [rbp-40h]

  v3 = __readfsqword(0x28u);
  if ( a2 )
  {
    copy_tinfo_t();
    copy_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
    if ( !(unsigned __int8)get_tinfo_details() )
    {
      if ( !under_debugger )
        sub_37EEE0(52681);
      BUG();
    }
    create_tinfo();
    clear_tinfo_t();
    clear_tinfo_t();
    clear_tinfo_t();
  }
  return v3 - __readfsqword(0x28u);
}

