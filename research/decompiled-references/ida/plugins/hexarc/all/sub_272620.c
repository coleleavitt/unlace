__int64 __fastcall sub_272620(unsigned __int64 **a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *a1 )
    {
      sub_272260(a1);
      if ( *a1 )
        qfree();
    }
    return qfree();
  }
  return result;
}

