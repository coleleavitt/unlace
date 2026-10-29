void __fastcall sub_3621A0(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 **v7; // r15
  __int64 v8; // rbx
  _QWORD *v9; // r12
  __int64 *v10; // rdx
  __int64 *v11; // rcx
  __int64 *v13; // rbp
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 i; // r14
  __int64 *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 j; // r14
  __int64 *v23; // rdx
  __int64 v24; // rdi
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+10h] [rbp-48h]
  __int64 v29; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 < a2 )
  {
    v5 = qvector_reserve(a1, 0, a2, 8);
    v6 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v3;
    v7 = *(__int64 ***)a1;
    v28 = v5;
    v29 = v6;
    v8 = *(_QWORD *)(a1 + 8) - 1LL;
    if ( v8 >= 0 )
    {
      v9 = (_QWORD *)v5;
      do
      {
        v10 = *v7;
        *v9 = *v7;
        if ( v10 )
          ++*((_DWORD *)v10 + 26);
        v11 = *v7;
        if ( *v7 )
        {
          if ( (*((_DWORD *)v11 + 26))-- == 1 )
          {
            v13 = *v7;
            if ( *v7 )
            {
              sub_258970(*v7);
              v14 = v13[23];
              if ( v14 )
              {
                v15 = v13[24];
                if ( v15 )
                {
                  for ( i = 0; i != v15; ++i )
                  {
                    v17 = (__int64 *)(v14 + 24 * i);
                    v18 = *v17;
                    if ( *v17 )
                    {
                      v17[1] = 0;
                      v26 = v15;
                      qfree(v18);
                      v14 = v13[23];
                      v15 = v26;
                    }
                  }
                }
                v13[24] = 0;
                qfree(v14);
              }
              v19 = v13[20];
              if ( v19 )
              {
                v13[21] = 0;
                qfree(v19);
              }
              v20 = v13[16];
              if ( v20 )
              {
                v21 = v13[17];
                if ( v21 )
                {
                  for ( j = 0; j != v21; ++j )
                  {
                    v23 = (__int64 *)(v20 + 32 * j);
                    v24 = *v23;
                    if ( *v23 )
                    {
                      v23[1] = 0;
                      v27 = v21;
                      qfree(v24);
                      v20 = v13[16];
                      v21 = v27;
                    }
                  }
                }
                v13[17] = 0;
                qfree(v20);
              }
              sub_255050((__int64)(v13 + 2), a3);
              j__qfree((__int64)v13);
            }
          }
        }
        ++v7;
        ++v9;
      }
      while ( v8-- != 0 );
      v7 = *(__int64 ***)a1;
    }
    qfree((__int64)v7);
    *(_QWORD *)a1 = v28;
    *(_QWORD *)(a1 + 16) = v29;
  }
}

