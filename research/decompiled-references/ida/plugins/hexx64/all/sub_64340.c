__int64 __fastcall sub_64340(__int64 *a1, int a2, double a3)
{
  _QWORD *v3; // rcx

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC48Au, a3);
    BUG();
  }
  if ( a2 >= (unsigned __int64)a1[1] )
    return 0;
  v3 = (_QWORD *)(*a1 + 8LL * (a2 >> 6));
  if ( ((1LL << a2) & *v3) == 0 )
    return 0;
  *v3 &= ~(1LL << a2);
  sub_64300(a1);
  return 1;
}

