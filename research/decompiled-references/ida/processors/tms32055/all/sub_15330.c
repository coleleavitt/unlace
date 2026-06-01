void __fastcall sub_15330(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbp
  __int64 i; // r15
  _QWORD *v9; // r13
  __int64 v10; // [rsp+0h] [rbp-48h]
  __int64 v11; // [rsp+8h] [rbp-40h]

  *a1 = &off_38508;
  if ( a1[13] )
  {
    a1[14] = 0;
    qfree();
  }
  v2 = a1[7];
  *a1 = &off_384A0;
  if ( v2 )
  {
    a1[8] = 0;
    qfree();
  }
  v3 = a1[4];
  if ( v3 )
  {
    v11 = a1[5];
    if ( v11 )
    {
      v10 = 0;
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
              v9 = (_QWORD *)(v6 + 48 * i);
              if ( v9[3] )
              {
                v9[4] = 0;
                qfree();
              }
              if ( *v9 )
              {
                v9[1] = 0;
                qfree();
              }
              v6 = v5[7];
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
        if ( v5[1] )
        {
          v5[2] = 0;
          qfree();
        }
        ++v10;
        v3 = a1[4];
        v4 += 88;
      }
      while ( v11 != v10 );
    }
    a1[5] = 0;
    qfree();
  }
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  operator delete(a1, 0x80u);
}

