__int64 __fastcall sub_2745E0(unsigned __int64 **a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *a1 )
    {
      sub_274220(a1);
      if ( *a1 )
        qfree();
    }
    return qfree();
  }
  return result;
}

