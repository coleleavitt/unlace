__int64 __fastcall sub_390570(__int64 a1, double a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  _QWORD *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 i; // r12
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 j; // r12
  __int64 *v20; // rax
  __int64 v21; // rdi

  v2 = *(_QWORD *)(a1 + 1008);
  while ( 1 )
  {
    result = *(_QWORD *)(v2 + 48);
    if ( !result )
      break;
    v4 = 8 * result - 8;
    v5 = *(_QWORD *)(v2 + 40);
    do
      v6 = *(_QWORD *)(v5 + v4);
    while ( !v6 );
    sub_38F320(*(_QWORD *)(v5 + v4), a2);
    sub_389D00(v6);
    clear_tinfo_t();
    v7 = *(_QWORD *)(v6 + 136);
    if ( v7 )
    {
      *(_QWORD *)(v6 + 144) = 0;
      qfree(v7);
    }
    v8 = *(_QWORD *)(v6 + 32);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 104))-- == 1 )
      {
        v10 = *(_QWORD **)(v6 + 32);
        if ( v10 )
        {
          sub_258970(*(__int64 **)(v6 + 32));
          v11 = v10[23];
          if ( v11 )
          {
            v12 = v10[24];
            if ( v12 )
            {
              for ( i = 0; i != v12; ++i )
              {
                v14 = (__int64 *)(v11 + 24 * i);
                v15 = *v14;
                if ( *v14 )
                {
                  v14[1] = 0;
                  qfree(v15);
                  v11 = v10[23];
                }
              }
            }
            v10[24] = 0;
            qfree(v11);
          }
          v16 = v10[20];
          if ( v16 )
          {
            v10[21] = 0;
            qfree(v16);
          }
          v17 = v10[16];
          if ( v17 )
          {
            v18 = v10[17];
            if ( v18 )
            {
              for ( j = 0; j != v18; ++j )
              {
                v20 = (__int64 *)(v17 + 32 * j);
                v21 = *v20;
                if ( *v20 )
                {
                  v20[1] = 0;
                  qfree(v21);
                  v17 = v10[16];
                }
              }
            }
            v10[17] = 0;
            qfree(v17);
          }
          sub_255050((__int64)(v10 + 2), a2);
          j__qfree((__int64)v10);
        }
      }
    }
    operator delete((void *)v6, 0xA8u);
  }
  return result;
}

