__int64 __fastcall sub_388C70(__int64 a1)
{
  __int64 v1; // rbp
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  _QWORD *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 i; // r12
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 j; // r12
  _QWORD *v16; // rax

  v1 = *(_QWORD *)(a1 + 1008);
  while ( 1 )
  {
    result = *(_QWORD *)(v1 + 48);
    if ( !result )
      break;
    v3 = 8 * result - 8;
    v4 = *(_QWORD *)(v1 + 40);
    do
      v5 = *(_QWORD *)(v4 + v3);
    while ( !v5 );
    sub_387A20(*(_QWORD *)(v4 + v3));
    sub_382400(v5);
    clear_tinfo_t();
    if ( *(_QWORD *)(v5 + 136) )
    {
      *(_QWORD *)(v5 + 144) = 0;
      qfree();
    }
    v6 = *(_QWORD *)(v5 + 32);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 104))-- == 1 )
      {
        v8 = *(_QWORD **)(v5 + 32);
        if ( v8 )
        {
          sub_2515F0(*(__int64 **)(v5 + 32));
          v9 = v8[23];
          if ( v9 )
          {
            v10 = v8[24];
            if ( v10 )
            {
              for ( i = 0; i != v10; ++i )
              {
                v12 = (_QWORD *)(v9 + 24 * i);
                if ( *v12 )
                {
                  v12[1] = 0;
                  qfree();
                  v9 = v8[23];
                }
              }
            }
            v8[24] = 0;
            qfree();
          }
          if ( v8[20] )
          {
            v8[21] = 0;
            qfree();
          }
          v13 = v8[16];
          if ( v13 )
          {
            v14 = v8[17];
            if ( v14 )
            {
              for ( j = 0; j != v14; ++j )
              {
                v16 = (_QWORD *)(v13 + 32 * j);
                if ( *v16 )
                {
                  v16[1] = 0;
                  qfree();
                  v13 = v8[16];
                }
              }
            }
            v8[17] = 0;
            qfree();
          }
          sub_24DCD0((__int64)(v8 + 2));
          j__qfree();
        }
      }
    }
    operator delete((void *)v5, 0xA8u);
  }
  return result;
}

