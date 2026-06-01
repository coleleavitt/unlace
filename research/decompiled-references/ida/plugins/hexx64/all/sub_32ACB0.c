_QWORD *__fastcall sub_32ACB0(_QWORD *a1, __int64 a2, double a3)
{
  *a1 = 0;
  if ( !a2 )
  {
    if ( !under_debugger )
      sub_383060(0xCDA5u, a3);
    BUG();
  }
  get_type_ordinal();
  get_idati();
  create_tinfo();
  return a1;
}

