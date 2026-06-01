void __fastcall sub_66490(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 j; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi

  qfree(a1[92]);
  sub_E270((__int64)(a1 + 37));
  v2 = a1[26];
  if ( v2 )
  {
    a1[27] = 0;
    qfree(v2);
  }
  v3 = a1[23];
  if ( v3 )
  {
    v4 = a1[24];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 40 * i;
        v7 = *(_QWORD *)(v6 + 16);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v6 + 24);
          if ( v8 )
          {
            for ( j = 0; j != v8; ++j )
            {
              v10 = v7 + 72 * j;
              v11 = *(_QWORD *)(v10 + 32);
              if ( v11 )
              {
                *(_QWORD *)(v10 + 40) = 0;
                qfree(v11);
                v7 = *(_QWORD *)(v6 + 16);
              }
            }
          }
          *(_QWORD *)(v6 + 24) = 0;
          qfree(v7);
          v3 = a1[23];
        }
      }
    }
    a1[24] = 0;
    qfree(v3);
  }
  v12 = a1[20];
  if ( v12 )
  {
    a1[21] = 0;
    qfree(v12);
  }
  v13 = a1[6];
  if ( v13 )
  {
    a1[7] = 0;
    qfree(v13);
  }
}
