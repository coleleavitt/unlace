__int64 __fastcall sub_64440(__int64 *a1, int a2, int a3, double a4)
{
  int v4; // r10d
  int v5; // r9d
  unsigned int v6; // esi
  __int64 v7; // r11
  _QWORD *v8; // rax

  v4 = a2 + a3;
  if ( a2 + a3 >= (unsigned __int64)a1[1] )
    return sub_643C0(a1, a2, a4);
  v5 = a2;
  v6 = 0;
  v7 = 1;
  if ( a3 - 1 < 0 )
    return 0;
  do
  {
    if ( v5 < 0 )
    {
      if ( !under_debugger )
        sub_383060(0xC48Au, a4);
      BUG();
    }
    if ( (unsigned int)v5 < (unsigned __int64)a1[1] )
    {
      v8 = (_QWORD *)(*a1 + 8LL * (v5 >> 6));
      if ( (*v8 & (v7 << v5)) != 0 )
      {
        *v8 &= ~(v7 << v5);
        sub_64300(a1);
        v6 = 1;
      }
    }
    ++v5;
  }
  while ( v4 != v5 );
  return v6;
}

