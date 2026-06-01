__int64 __fastcall sub_4E00(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rdi

  *a1 = off_1BAC8;
  v2 = a1[23];
  if ( v2 )
  {
    v3 = a1[24];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 80 * i);
        if ( v5[6] )
        {
          v5[7] = 0;
          qfree();
        }
        if ( v5[3] )
        {
          v5[4] = 0;
          qfree();
        }
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
        }
        v2 = a1[23];
      }
    }
    a1[24] = 0;
    qfree();
  }
  v6 = a1 + 22;
  *a1 = &unk_1BC90;
  do
  {
    v7 = *(v6 - 3);
    v6 -= 3;
    if ( v7 )
    {
      v6[1] = 0;
      qfree();
    }
  }
  while ( a1 + 10 != v6 );
  return qfree();
}

