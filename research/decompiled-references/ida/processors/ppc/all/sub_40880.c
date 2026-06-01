__int64 __fastcall sub_40880(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // eax

  v3 = sub_4E2D0(a1);
  if ( v3 != 3 )
  {
    if ( v3 <= 3 )
    {
      if ( v3 - 1 <= 1 )
        return sub_406C0(a2, 10, 48, 4, a3);
    }
    else if ( v3 - 4 <= 5 )
    {
      return sub_406C0(a2, 10, 48, 4, a3);
    }
    if ( under_debugger )
      BUG();
    interr(10223);
  }
  return sub_406C0(a2, 10, 43, 2, a3);
}

