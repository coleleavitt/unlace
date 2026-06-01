__int64 __fastcall sub_29DF0(int a1, __int64 a2, __int64 a3)
{
  if ( !a1 )
    return (int)callui(23);
  if ( a1 <= 0 )
  {
    verror();
    return sub_29E50(a2, a3);
  }
  else
  {
    callui(24);
    return 0;
  }
}

