__int64 __fastcall xref_chooser_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  __int64 *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 j; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 v15; // rdi

  *a1 = xref_chooser_t___vtable;
  v3 = a1[30];
  if ( v3 )
  {
    a1[31] = 0;
    qfree(v3, a2);
  }
  v4 = a1[27];
  if ( v4 )
  {
    v5 = a1[28];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)(v4 + 24 * i);
        v8 = *v7;
        if ( *v7 )
        {
          v9 = v7[1];
          if ( v9 )
          {
            for ( j = 0; j != v9; ++j )
            {
              v11 = (__int64 *)(v8 + 24 * j);
              v12 = *v11;
              if ( *v11 )
              {
                v11[1] = 0;
                qfree(v12, a2);
                v8 = *v7;
              }
            }
          }
          v7[1] = 0;
          qfree(v8, a2);
          v4 = a1[27];
        }
      }
    }
    a1[28] = 0;
    qfree(v4, a2);
  }
  v13 = a1[24];
  if ( v13 )
  {
    a1[25] = 0;
    qfree(v13, a2);
  }
  v14 = a1 + 19;
  *a1 = &unk_4D520;
  do
  {
    v15 = *v14;
    if ( *v14 )
    {
      v14[1] = 0;
      qfree(v15, a2);
    }
    v14 -= 3;
  }
  while ( a1 + 7 != v14 );
  return qfree(a1, a2);
}

