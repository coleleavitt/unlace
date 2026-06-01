__int64 __fastcall sub_275D20(unsigned __int64 **a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *a1 )
    {
      sub_275960(a1);
      if ( *a1 )
        qfree();
    }
    return qfree();
  }
  return result;
}

