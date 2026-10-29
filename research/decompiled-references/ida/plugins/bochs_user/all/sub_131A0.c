__int64 __fastcall sub_131A0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx

  v2 = a1[57];
  if ( v2 )
  {
    v3 = a1[58];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 80 * i);
        if ( v5[5] )
        {
          v5[6] = 0;
          qfree();
        }
        if ( v5[2] )
        {
          v5[3] = 0;
          qfree();
        }
        v2 = a1[57];
      }
    }
    a1[58] = 0;
    qfree();
    a1[57] = 0;
    a1[59] = 0;
  }
  return 1;
}

