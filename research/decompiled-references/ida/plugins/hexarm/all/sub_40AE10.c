__int64 __fastcall sub_40AE10(__int64 a1, __int64 a2, __int64 a3, char a4, int a5)
{
  unsigned int tinfo_details; // ebp

  sub_40A9D0(a1, a4, a5);
  copy_tinfo_t();
  tinfo_details = get_tinfo_details();
  if ( (_BYTE)tinfo_details )
  {
    if ( a5 < 0 )
    {
      if ( !under_debugger )
        sub_3835A0(0xC7B2u, 0.0);
      BUG();
    }
    return 0;
  }
  return tinfo_details;
}

