__int64 __fastcall sub_3670C0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  __int64 v5; // rbx
  void *v6; // rdi
  _QWORD *v7; // rbx

  *a1 = off_4B8D78;
  if ( a1[27] )
  {
    a1[28] = 0;
    qfree();
  }
  v2 = a1[24];
  if ( v2 )
  {
    v3 = a1[25];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        clear_tinfo_t();
        v5 = *(_QWORD *)(v2 + (i << 6) + 16);
        while ( v5 )
        {
          sub_366950(*(_QWORD **)(v5 + 24));
          v6 = (void *)v5;
          v5 = *(_QWORD *)(v5 + 16);
          operator delete(v6, 0x28u);
        }
        v2 = a1[24];
      }
    }
    a1[25] = 0;
    qfree();
  }
  v7 = a1 + 19;
  *a1 = &unk_4BDC88;
  do
  {
    if ( *v7 )
    {
      v7[1] = 0;
      qfree();
    }
    v7 -= 3;
  }
  while ( a1 + 7 != v7 );
  return qfree();
}

