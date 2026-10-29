void __fastcall sub_3C60(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rdi

  if ( a1[21] )
  {
    a1[22] = 0;
    ((void (*)(void))qfree)();
  }
  if ( a1[18] )
  {
    a1[19] = 0;
    ((void (*)(void))qfree)();
  }
  if ( a1[15] )
  {
    a1[16] = 0;
    ((void (*)(void))qfree)();
  }
  if ( a1[12] )
  {
    a1[13] = 0;
    ((void (*)(void))qfree)();
  }
  if ( a1[9] )
  {
    a1[10] = 0;
    ((void (*)(void))qfree)();
  }
  v2 = a1[6];
  if ( v2 )
  {
    v3 = a1[7];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 48 * i);
        if ( v5[3] )
        {
          v5[4] = 0;
          ((void (*)(void))qfree)();
        }
        if ( *v5 )
        {
          v5[1] = 0;
          ((void (*)(void))qfree)();
        }
        v2 = a1[6];
      }
    }
    a1[7] = 0;
    qfree(v2);
  }
  v6 = a1[2];
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_35D0(*(_QWORD **)(v6 + 24));
    v8 = *(_QWORD *)(v6 + 40);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[6] = 0;
      qfree(v8);
    }
    operator delete(v7, 0x40u);
  }
}

