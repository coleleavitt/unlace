__int64 __fastcall sub_A5E0(double a1, __int64 a2, const char *a3, int a4, int a5, __int64 a6)
{
  if ( !a6 || a6 == get_error_string() )
  {
    if ( a4 == 1 )
      *__errno_location() = a5;
    else
      set_error_data();
  }
  else
  {
    set_error_string();
  }
  qstrerror();
  return sub_9E10((__int64)"AUTOHIDE NONE\n%a: %s", a1, a3);
}

