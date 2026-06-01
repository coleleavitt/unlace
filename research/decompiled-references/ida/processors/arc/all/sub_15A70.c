void __fastcall sub_15A70(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 i; // r15
  __int64 *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // [rsp+0h] [rbp-48h]
  __int64 v16; // [rsp+8h] [rbp-40h]

  *a1 = &off_29378;
  v2 = a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
  }
  v3 = a1[4];
  if ( v3 )
  {
    v16 = a1[5];
    if ( v16 )
    {
      v15 = 0;
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v3 + v4);
        v6 = *(_QWORD *)(v3 + v4 + 56);
        if ( v6 )
        {
          v7 = v5[8];
          if ( v7 )
          {
            for ( i = 0; i != v7; ++i )
            {
              v9 = (__int64 *)(v6 + 48 * i);
              v10 = v9[3];
              if ( v10 )
              {
                v9[4] = 0;
                qfree(v10);
              }
              v11 = *v9;
              if ( *v9 )
              {
                v9[1] = 0;
                qfree(v11);
              }
              v6 = v5[7];
            }
          }
          v5[8] = 0;
          qfree(v6);
        }
        v12 = v5[4];
        if ( v12 )
        {
          v5[5] = 0;
          qfree(v12);
        }
        v13 = v5[1];
        if ( v13 )
        {
          v5[2] = 0;
          qfree(v13);
        }
        ++v15;
        v3 = a1[4];
        v4 += 88;
      }
      while ( v16 != v15 );
    }
    a1[5] = 0;
    qfree(v3);
  }
  v14 = a1[1];
  if ( v14 )
  {
    a1[2] = 0;
    qfree(v14);
  }
  operator delete(a1, 0x60u);
}

