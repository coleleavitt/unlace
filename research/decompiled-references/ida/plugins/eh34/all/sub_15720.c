void __fastcall sub_15720(_QWORD *a1)
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
  _QWORD *v14; // [rsp+8h] [rbp-40h]

  v14 = a1;
  while ( v14 )
  {
    v1 = v14;
    v2 = v14;
    sub_15720(v14[3]);
    v3 = v14[13];
    v14 = (_QWORD *)v14[2];
    if ( v3 )
    {
      v1[14] = 0;
      qfree(v3);
    }
    v4 = v2[10];
    if ( v4 )
    {
      v5 = v2[11];
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
            v4 = v2[10];
          }
        }
      }
      v2[11] = 0;
      qfree(v4);
    }
    v13 = v2[7];
    if ( v13 )
    {
      v2[8] = 0;
      qfree(v13);
    }
    operator delete(v2, 0xB8u);
  }
}

