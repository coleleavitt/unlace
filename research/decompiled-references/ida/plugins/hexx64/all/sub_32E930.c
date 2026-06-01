bool __fastcall sub_32E930(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        double a7)
{
  char v10; // dl
  bool result; // al

  if ( a5 >= a6 )
    return 0;
  if ( a4 < a5 || a6 < a4 )
  {
    if ( !under_debugger )
      sub_383060(0xC8C7u, a7);
    BUG();
  }
  v10 = sub_32E840(a1, a2, a3, a4, a6, 0);
  result = 1;
  if ( v10 != 2 )
    return (unsigned __int8)sub_32E840(a1, a2, a3, a5, a4, 1) == 2;
  return result;
}

