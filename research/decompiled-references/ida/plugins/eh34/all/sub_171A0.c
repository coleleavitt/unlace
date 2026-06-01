void __fastcall sub_171A0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // r12
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // r13
  __int64 i; // rbp
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 j; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  _QWORD *v15; // [rsp+8h] [rbp-40h]

  v15 = a1;
  while ( v15 )
  {
    v1 = v15;
    v2 = v15;
    sub_171A0(v15[3]);
    v15 = (_QWORD *)v15[2];
    qfree(v1[97]);
    sub_E270((__int64)(v1 + 42));
    v3 = v1[31];
    if ( v3 )
    {
      v1[32] = 0;
      qfree(v3);
    }
    v4 = v2[28];
    if ( v4 )
    {
      v5 = v2[29];
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
            v4 = v2[28];
          }
        }
      }
      v2[29] = 0;
      qfree(v4);
    }
    v13 = v2[25];
    if ( v13 )
    {
      v2[26] = 0;
      qfree(v13);
    }
    v14 = v2[11];
    if ( v14 )
    {
      v2[12] = 0;
      qfree(v14);
    }
    operator delete(v2, 0x318u);
  }
}

