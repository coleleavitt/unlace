void __fastcall sub_3DC0(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // r13
  __int64 i; // rbp
  __int64 *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rbx
  _QWORD *v15; // rbp
  __int64 v16; // rdi

  v2 = (void *)a1[1];
  if ( v2 )
  {
    free(v2);
    a1[1] = 0;
  }
  v3 = a1[36];
  *a1 = 0;
  if ( v3 )
  {
    a1[37] = 0;
    qfree(v3);
  }
  v4 = a1[33];
  if ( v4 )
  {
    a1[34] = 0;
    qfree(v4);
  }
  v5 = a1[30];
  if ( v5 )
  {
    a1[31] = 0;
    qfree(v5);
  }
  v6 = a1[27];
  if ( v6 )
  {
    a1[28] = 0;
    qfree(v6);
  }
  v7 = a1[24];
  if ( v7 )
  {
    a1[25] = 0;
    qfree(v7);
  }
  v8 = a1[21];
  if ( v8 )
  {
    v9 = a1[22];
    if ( v9 )
    {
      for ( i = 0; i != v9; ++i )
      {
        v11 = (__int64 *)(v8 + 48 * i);
        v12 = v11[3];
        if ( v12 )
        {
          v11[4] = 0;
          qfree(v12);
        }
        v13 = *v11;
        if ( *v11 )
        {
          v11[1] = 0;
          qfree(v13);
        }
        v8 = a1[21];
      }
    }
    a1[22] = 0;
    qfree(v8);
  }
  v14 = a1[17];
  while ( v14 )
  {
    v15 = (_QWORD *)v14;
    sub_35D0(*(_QWORD **)(v14 + 24));
    v16 = *(_QWORD *)(v14 + 40);
    v14 = *(_QWORD *)(v14 + 16);
    if ( v16 )
    {
      v15[6] = 0;
      qfree(v16);
    }
    operator delete(v15, 0x40u);
  }
}

