__int64 __fastcall sub_24350(int a1, __int64 a2, __int64 a3)
{
  if ( !a1 )
    return (int)callui(23, a2, a3, &callui);
  if ( a1 <= 0 )
  {
    verror();
    return sub_243B0(a2, a3);
  }
  else
  {
    callui(24, 2, a2, a3);
    return 0;
  }
}

