__int64 __fastcall sub_A970(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  if ( !a5 || a5 == get_error_string() )
  {
    if ( a3 == 1 )
      *__errno_location() = a4;
    else
      set_error_data();
  }
  else
  {
    set_error_string();
  }
  qstrerror();
  return sub_9FF0((__int64)"AUTOHIDE NONE\n%a: %s");
}

