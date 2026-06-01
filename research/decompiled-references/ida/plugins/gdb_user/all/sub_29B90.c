void __fastcall sub_29B90(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r15
  __int64 j; // rbx
  _QWORD *v9; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 80 * i);
        v6 = v5[7];
        if ( v6 )
        {
          v7 = v5[8];
          if ( v7 )
          {
            for ( j = 0; j != v7; ++j )
            {
              v9 = (_QWORD *)(v6 + 32 * j);
              if ( *v9 )
              {
                v9[1] = 0;
                qfree();
                v6 = v5[7];
              }
            }
          }
          v5[8] = 0;
          qfree();
        }
        if ( v5[4] )
        {
          v5[5] = 0;
          qfree();
        }
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
        }
        v2 = *a1;
      }
    }
    a1[1] = 0;
    qfree();
  }
}

