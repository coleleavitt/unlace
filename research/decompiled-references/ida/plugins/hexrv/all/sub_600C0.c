__int64 __fastcall sub_600C0(__int64 *a1, int a2, int a3)
{
  int v3; // r10d
  int v4; // r9d
  unsigned int v5; // esi
  __int64 v6; // r11
  _QWORD *v7; // rax

  v3 = a2 + a3;
  if ( a2 + a3 >= (unsigned __int64)a1[1] )
    return sub_60040(a1, a2);
  v4 = a2;
  v5 = 0;
  v6 = 1;
  if ( a3 - 1 < 0 )
    return 0;
  do
  {
    if ( v4 < 0 )
    {
      if ( !under_debugger )
        sub_37DDE0(50314);
      BUG();
    }
    if ( (unsigned int)v4 < (unsigned __int64)a1[1] )
    {
      v7 = (_QWORD *)(*a1 + 8LL * (v4 >> 6));
      if ( (*v7 & (v6 << v4)) != 0 )
      {
        *v7 &= ~(v6 << v4);
        sub_5FF80(a1);
        v5 = 1;
      }
    }
    ++v4;
  }
  while ( v3 != v4 );
  return v5;
}

