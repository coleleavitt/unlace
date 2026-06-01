__int64 __fastcall sub_3EE6F0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx

  *a1 = &unk_4BECB0;
  a1[2] = 0;
  if ( a1[19] )
  {
    a1[20] = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v2 = a1[11];
  if ( v2 )
  {
    v3 = a1[12];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 80 * i);
        clear_tinfo_t();
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
        cleanup_argloc();
        v2 = a1[11];
      }
    }
    a1[12] = 0;
    qfree();
  }
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  return qfree();
}

