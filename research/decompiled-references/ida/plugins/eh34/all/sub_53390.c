void __fastcall sub_53390(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // r12
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 j; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi

  if ( *((_BYTE *)a1 + 144) )
  {
    v2 = *a1;
    if ( v2 )
    {
      a1[1] = 0;
      qfree(v2);
    }
  }
  else
  {
    v3 = a1[8];
    if ( v3 )
    {
      a1[9] = 0;
      qfree(v3);
    }
    v4 = a1[5];
    if ( v4 )
    {
      v5 = a1[6];
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v7 = v4 + 40 * i;
          v8 = *(_QWORD *)(v7 + 16);
          if ( v8 )
          {
            v9 = *(_QWORD *)(v7 + 24);
            if ( v9 )
            {
              for ( j = 0; j != v9; ++j )
              {
                v11 = v8 + 72 * j;
                v12 = *(_QWORD *)(v11 + 32);
                if ( v12 )
                {
                  *(_QWORD *)(v11 + 40) = 0;
                  qfree(v12);
                  v8 = *(_QWORD *)(v7 + 16);
                }
              }
            }
            *(_QWORD *)(v7 + 24) = 0;
            qfree(v8);
            v4 = a1[5];
          }
        }
      }
      a1[6] = 0;
      qfree(v4);
    }
    v13 = a1[2];
    if ( v13 )
    {
      a1[3] = 0;
      qfree(v13);
    }
  }
}

