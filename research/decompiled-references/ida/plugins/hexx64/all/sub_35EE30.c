void __fastcall sub_35EE30(__int64 a1, double a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rdx
  __int64 *v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 i; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 j; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree(v3);
  }
  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( (*((_DWORD *)v4 + 26))-- == 1 )
    {
      v6 = *(__int64 **)a1;
      if ( *(_QWORD *)a1 )
      {
        sub_258970(*(__int64 **)a1);
        v7 = v6[23];
        if ( v7 )
        {
          v8 = v6[24];
          if ( v8 )
          {
            for ( i = 0; i != v8; ++i )
            {
              v10 = (__int64 *)(v7 + 24 * i);
              v11 = *v10;
              if ( *v10 )
              {
                v10[1] = 0;
                qfree(v11);
                v7 = v6[23];
              }
            }
          }
          v6[24] = 0;
          qfree(v7);
        }
        v12 = v6[20];
        if ( v12 )
        {
          v6[21] = 0;
          qfree(v12);
        }
        v13 = v6[16];
        if ( v13 )
        {
          v14 = v6[17];
          if ( v14 )
          {
            for ( j = 0; j != v14; ++j )
            {
              v16 = (__int64 *)(v13 + 32 * j);
              v17 = *v16;
              if ( *v16 )
              {
                v16[1] = 0;
                qfree(v17);
                v13 = v6[16];
              }
            }
          }
          v6[17] = 0;
          qfree(v13);
        }
        sub_255050((__int64)(v6 + 2), a2);
        j__qfree((__int64)v6);
      }
    }
  }
}

