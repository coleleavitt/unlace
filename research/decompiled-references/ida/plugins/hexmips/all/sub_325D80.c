_QWORD *__fastcall sub_325D80(_QWORD *a1, __int64 a2)
{
  *a1 = 0;
  if ( !a2 )
  {
    if ( !under_debugger )
      sub_37E160(52645);
    BUG();
  }
  get_type_ordinal();
  get_idati();
  create_tinfo();
  return a1;
}

