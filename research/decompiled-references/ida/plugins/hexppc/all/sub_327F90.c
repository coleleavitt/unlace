__int64 *__fastcall sub_327F90(__int64 *a1, __int64 a2, int a3, char a4)
{
  if ( a4 )
  {
    sub_327D50(a1, *(_QWORD *)(a2 + 96), a3);
    if ( !*(_BYTE *)a1 )
    {
      if ( !under_debugger )
        sub_37EEE0(50632);
      BUG();
    }
  }
  else
  {
    sub_325830(a1, a2, a3);
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

