__int64 __fastcall sub_275120(unsigned __int64 **a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *a1 )
    {
      sub_274D60(a1);
      if ( *a1 )
        qfree();
    }
    return qfree();
  }
  return result;
}

