__int64 __fastcall sub_11930(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // eax

  if ( a3 == 1 )
    return 0;
  v4 = sub_188A0(a1 + 952);
  switch ( a3 )
  {
    case 2:
      return (v4 >> 1) & 1;
    case 8:
      return (v4 >> 2) & 1;
    case 4:
      return (v4 >> 3) & 1;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_119A0(671);
}

