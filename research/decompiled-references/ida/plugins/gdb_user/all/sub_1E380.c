void __fastcall sub_1E380(void **a1)
{
  void **v1; // r13
  void **v2; // r12
  void *v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_1E380(v1[3]);
      v3 = v1[33];
      v1 = (void **)v1[2];
      sub_1B980(v3);
      v4 = v2[27];
      while ( v4 )
      {
        v5 = v4;
        sub_1E0C0((_QWORD *)v4[3]);
        v6 = v4[4];
        v4 = (_QWORD *)v4[2];
        if ( v6 )
        {
          v5[5] = 0;
          qfree();
        }
        operator delete(v5, 0x38u);
      }
      if ( v2[22] )
      {
        v2[23] = nullptr;
        qfree();
      }
      if ( v2[19] )
      {
        v2[20] = nullptr;
        qfree();
      }
      if ( v2[16] )
      {
        v2[17] = nullptr;
        qfree();
      }
      sub_1BA40(v2[12]);
      if ( v2[7] )
      {
        v2[8] = nullptr;
        qfree();
      }
      if ( v2[4] )
      {
        v2[5] = nullptr;
        qfree();
      }
      operator delete(v2, 0x128u);
    }
    while ( v1 );
  }
}

