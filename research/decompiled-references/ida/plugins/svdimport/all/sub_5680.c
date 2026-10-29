void __fastcall sub_5680(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi

  v2 = a1[11];
  *a1 = &off_1B988;
  while ( v2 )
  {
    sub_53B0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = a1[5];
  if ( v4 )
  {
    v5 = a1[6];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 80 * i);
        if ( v7[6] )
        {
          v7[7] = 0;
          qfree();
        }
        if ( v7[3] )
        {
          v7[4] = 0;
          qfree();
        }
        if ( *v7 )
        {
          v7[1] = 0;
          qfree();
        }
        v4 = a1[5];
      }
    }
    a1[6] = 0;
    qfree();
  }
  v8 = a1[2];
  *a1 = &unk_1BCE8;
  if ( v8 )
  {
    a1[3] = 0;
    qfree();
  }
  operator delete(a1, 0x78u);
}

