__int64 *__fastcall sub_32C2C0(__int64 *a1, __int64 a2, int a3, char a4, double a5)
{
  if ( a4 )
  {
    sub_32C080(a1, *(_QWORD *)(a2 + 96), a3);
    if ( !*(_BYTE *)a1 )
    {
      if ( !under_debugger )
        sub_383060(0xC5C8u, a5);
      BUG();
    }
  }
  else
  {
    sub_3299B0(a1, a2, a3);
  }
  copy_tinfo_t();
  copy_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  copy_tinfo_t();
  create_tinfo();
  clear_tinfo_t();
  clear_tinfo_t();
  clear_tinfo_t();
  return a1;
}

