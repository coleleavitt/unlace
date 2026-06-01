__int64 __fastcall sub_6010(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, const char *a4, const char *a5)
{
  if ( a2 >= a3 )
  {
    sub_4640((__int64)"Error in definition of segment %s %s", a5, a4);
    return 0;
  }
  if ( !strcmp(a5, "CODE") )
  {
    sub_52D0();
  }
  else
  {
    if ( strcmp(a5, "DATA") )
      return 0;
    stristr();
    sub_52D0();
  }
  return 1;
}

