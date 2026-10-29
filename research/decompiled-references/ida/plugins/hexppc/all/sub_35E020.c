void __fastcall sub_35E020(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 **v5; // r15
  __int64 v6; // rbx
  _QWORD *v7; // r12
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  __int64 *v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 i; // r14
  _QWORD *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 j; // r14
  _QWORD *v19; // rdx
  __int64 v21; // [rsp+8h] [rbp-50h]
  __int64 v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+10h] [rbp-48h]
  __int64 v24; // [rsp+18h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 < a2 )
  {
    v3 = qvector_reserve();
    v4 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = v2;
    v5 = *(__int64 ***)a1;
    v23 = v3;
    v24 = v4;
    v6 = *(_QWORD *)(a1 + 8) - 1LL;
    if ( v6 >= 0 )
    {
      v7 = (_QWORD *)v3;
      do
      {
        v8 = *v5;
        *v7 = *v5;
        if ( v8 )
          ++*((_DWORD *)v8 + 26);
        v9 = *v5;
        if ( *v5 )
        {
          if ( (*((_DWORD *)v9 + 26))-- == 1 )
          {
            v11 = *v5;
            if ( *v5 )
            {
              sub_254CF0(*v5);
              v12 = v11[23];
              if ( v12 )
              {
                v13 = v11[24];
                if ( v13 )
                {
                  for ( i = 0; i != v13; ++i )
                  {
                    v15 = (_QWORD *)(v12 + 24 * i);
                    if ( *v15 )
                    {
                      v15[1] = 0;
                      v21 = v13;
                      qfree();
                      v12 = v11[23];
                      v13 = v21;
                    }
                  }
                }
                v11[24] = 0;
                qfree();
              }
              if ( v11[20] )
              {
                v11[21] = 0;
                qfree();
              }
              v16 = v11[16];
              if ( v16 )
              {
                v17 = v11[17];
                if ( v17 )
                {
                  for ( j = 0; j != v17; ++j )
                  {
                    v19 = (_QWORD *)(v16 + 32 * j);
                    if ( *v19 )
                    {
                      v19[1] = 0;
                      v22 = v17;
                      qfree();
                      v16 = v11[16];
                      v17 = v22;
                    }
                  }
                }
                v11[17] = 0;
                qfree();
              }
              sub_2513D0((__int64)(v11 + 2));
              j__qfree();
            }
          }
        }
        ++v5;
        ++v7;
      }
      while ( v6-- != 0 );
    }
    qfree();
    *(_QWORD *)a1 = v23;
    *(_QWORD *)(a1 + 16) = v24;
  }
}

