void __fastcall sub_660E0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 i; // r13
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rbx
  void *v11; // rdi
  __int64 v12; // rbx
  void *v13; // rdi
  __int64 v14; // rbx
  void *v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi

  *a1 = &off_8C4B0;
  v2 = a1[60];
  if ( v2 )
  {
    v3 = a1[61];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = *(_QWORD *)(v2 + v4 + 48);
        if ( v6 )
        {
          do
          {
            v7 = (_QWORD *)v6;
            sub_65640(*(_QWORD **)(v6 + 24));
            v8 = *(_QWORD *)(v6 + 64);
            v6 = *(_QWORD *)(v6 + 16);
            if ( v8 )
            {
              v7[9] = 0;
              qfree(v8);
            }
            operator delete(v7, 0x58u);
          }
          while ( v6 );
          v2 = a1[60];
        }
        v4 += 88;
      }
    }
    a1[61] = 0;
    qfree(v2);
  }
  v9 = a1[56];
  if ( v9 )
  {
    a1[57] = 0;
    qfree(v9);
  }
  v10 = a1[52];
  while ( v10 )
  {
    sub_651B0(*(_QWORD **)(v10 + 24));
    v11 = (void *)v10;
    v10 = *(_QWORD *)(v10 + 16);
    operator delete(v11, 0x28u);
  }
  sub_65BB0((_QWORD *)a1[46]);
  v12 = a1[40];
  while ( v12 )
  {
    sub_651B0(*(_QWORD **)(v12 + 24));
    v13 = (void *)v12;
    v12 = *(_QWORD *)(v12 + 16);
    operator delete(v13, 0x28u);
  }
  *a1 = &unk_8C9D8;
  sub_5F670((__int64)a1);
  v14 = a1[30];
  while ( v14 )
  {
    sub_651B0(*(_QWORD **)(v14 + 24));
    v15 = (void *)v14;
    v14 = *(_QWORD *)(v14 + 16);
    operator delete(v15, 0x28u);
  }
  v16 = a1[24];
  if ( v16 )
  {
    a1[25] = 0;
    qfree(v16);
  }
  if ( *((_BYTE *)a1 + 168) )
  {
    v17 = a1[18];
    *((_BYTE *)a1 + 168) = 0;
    if ( v17 )
    {
      a1[19] = 0;
      qfree(v17);
    }
  }
  operator delete(a1, 0x208u);
}

