__int64 __fastcall sub_60140(__int64 *a1, int a2)
{
  _QWORD *v2; // rcx

  if ( a2 < 0 )
  {
    if ( !under_debugger )
      sub_37E160(50314);
    BUG();
  }
  if ( a2 >= (unsigned __int64)a1[1] )
    return 0;
  v2 = (_QWORD *)(*a1 + 8LL * (a2 >> 6));
  if ( ((1LL << a2) & *v2) == 0 )
    return 0;
  *v2 &= ~(1LL << a2);
  sub_60100(a1);
  return 1;
}

