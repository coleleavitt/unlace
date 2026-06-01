void __fastcall sub_3A42B0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r12
  __int64 i; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 j; // rbx
  _QWORD *v8; // rax

  if ( a1 )
  {
    sub_2540F0(a1);
    v1 = a1[23];
    if ( v1 )
    {
      v2 = a1[24];
      if ( v2 )
      {
        for ( i = 0; i != v2; ++i )
        {
          v4 = (_QWORD *)(v1 + 24 * i);
          if ( *v4 )
          {
            v4[1] = 0;
            qfree();
            v1 = a1[23];
          }
        }
      }
      a1[24] = 0;
      qfree();
    }
    if ( a1[20] )
    {
      a1[21] = 0;
      qfree();
    }
    v5 = a1[16];
    if ( v5 )
    {
      v6 = a1[17];
      if ( v6 )
      {
        for ( j = 0; j != v6; ++j )
        {
          v8 = (_QWORD *)(v5 + 32 * j);
          if ( *v8 )
          {
            v8[1] = 0;
            qfree();
            v5 = a1[16];
          }
        }
      }
      a1[17] = 0;
      qfree();
    }
    sub_2507D0((__int64)(a1 + 2));
    j__qfree();
  }
}

