void __fastcall sub_8120(void *a1)
{
  void *v1; // r14
  _QWORD *v2; // r12
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 i; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_8120(*((void **)v1 + 3));
      v3 = *((_QWORD *)v1 + 7);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v4 = v2[8];
        if ( v4 )
        {
          v5 = 0;
          for ( i = 0; i != v4; ++i )
          {
            v7 = (__int64 *)(v3 + v5);
            v8 = *(_QWORD *)(v3 + v5 + 24);
            if ( v8 )
            {
              v7[4] = 0;
              qfree(v8);
            }
            v9 = *v7;
            if ( *v7 )
            {
              v7[1] = 0;
              qfree(v9);
            }
            v3 = v2[7];
            v5 += 56;
          }
        }
        v2[8] = 0;
        qfree(v3);
      }
      v10 = v2[4];
      if ( v10 )
      {
        v2[5] = 0;
        qfree(v10);
      }
      operator delete(v2, 0x50u);
    }
    while ( v1 );
  }
}

