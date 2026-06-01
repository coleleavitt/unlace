void __fastcall sub_2178C0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbp
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 j; // rbp

  *a1 = &off_4B21B0;
  clear_tinfo_t();
  cleanup_argloc();
  v1 = a1[12];
  if ( v1 )
  {
    v2 = a1[13];
    if ( v2 )
    {
      for ( i = 0; i != v2; ++i )
      {
        v4 = (_QWORD *)(v1 + 32 * i);
        if ( *v4 )
        {
          v4[1] = 0;
          qfree();
          v1 = a1[12];
        }
      }
    }
    a1[13] = 0;
    qfree();
  }
  if ( a1[8] )
  {
    a1[9] = 0;
    qfree();
  }
  qfree();
  v5 = a1[3];
  if ( v5 )
  {
    v6 = a1[4];
    if ( v6 )
    {
      v7 = 0;
      for ( j = 0; j != v6; ++j )
      {
        if ( *(_QWORD *)(v5 + v7) )
        {
          *(_QWORD *)(v5 + v7 + 8) = 0;
          qfree();
          v5 = a1[3];
        }
        v7 += 56;
      }
    }
    a1[4] = 0;
    qfree();
  }
  operator delete(a1, 0xA0u);
}

