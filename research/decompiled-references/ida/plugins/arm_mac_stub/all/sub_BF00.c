void __fastcall sub_BF00(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 i; // r13
  __int64 *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 j; // rbx
  __int64 v10; // rax
  _QWORD *v11; // [rsp+8h] [rbp-40h]

  v11 = a1;
  while ( v11 )
  {
    v1 = v11;
    v2 = v11;
    sub_BF00(v11[3]);
    v11 = (_QWORD *)v11[2];
    v3 = v1[5];
    if ( v3 )
    {
      v4 = v1[6];
      if ( v4 )
      {
        for ( i = 0; i != v4; ++i )
        {
          v6 = (__int64 *)(v3 + 48 * i);
          v7 = *v6;
          if ( *v6 )
          {
            v8 = v6[1];
            if ( v8 )
            {
              for ( j = 0; j != v8; ++j )
              {
                v10 = v7 + 32 * j;
                if ( *(int *)v10 >= -1 )
                {
                  if ( *(_QWORD *)(v10 + 8) )
                  {
                    *(_QWORD *)(v10 + 16) = 0;
                    qfree();
                    v7 = *v6;
                  }
                }
              }
            }
            v6[1] = 0;
            qfree();
            v3 = v2[5];
          }
        }
      }
      v2[6] = 0;
      qfree();
    }
    operator delete(v2, 0x40u);
  }
}

