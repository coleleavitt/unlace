__int64 __fastcall sub_275B0(int a1, __int64 a2, __int64 a3)
{
  if ( !a1 )
    return (int)callui(23, a2, a3);
  if ( a1 <= 0 )
  {
    verror();
    return sub_27610(a2, a3);
  }
  else
  {
    callui(24, 2, a2);
    return 0;
  }
}

