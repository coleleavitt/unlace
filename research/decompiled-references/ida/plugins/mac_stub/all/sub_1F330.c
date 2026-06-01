unsigned __int64 __fastcall sub_1F330(__int64 *a1)
{
  __int64 v1; // r12
  __int64 v3; // r13
  _QWORD *v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // r12
  _QWORD *v8; // rbx
  bool v9; // zf
  __int64 v10; // rbx
  void *v11; // rdi
  __int64 v12; // rax
  unsigned __int64 (__fastcall *v13)(__int64 *); // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 i; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r12
  __int64 j; // rbx
  _QWORD *v22; // rax

  v1 = 0;
  v3 = a1[58];
  a1[74] = 0;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)(a1[57] + 80 * v1);
      if ( v4[5] )
      {
        v4[6] = 0;
        qfree();
      }
      if ( v4[2] )
      {
        v4[3] = 0;
        qfree();
      }
      ++v1;
    }
    while ( v3 != v1 );
  }
  v5 = a1[7];
  v6 = 0;
  v7 = 0;
  a1[58] = 0;
  if ( v5 )
  {
    do
    {
      v8 = (_QWORD *)(v6 + a1[6]);
      if ( v8[4] )
      {
        v8[5] = 0;
        qfree();
      }
      if ( v8[1] )
      {
        v8[2] = 0;
        qfree();
      }
      ++v7;
      v6 += 56;
    }
    while ( v5 != v7 );
  }
  v9 = a1[10] == 0;
  a1[7] = 0;
  if ( !v9 )
    sub_1D380(a1);
  if ( a1[54] )
  {
    a1[55] = 0;
    qfree();
    a1[54] = 0;
    a1[56] = 0;
  }
  sub_1D510((void *)a1[50]);
  v10 = a1[78];
  a1[50] = 0;
  a1[51] = (__int64)(a1 + 49);
  a1[52] = (__int64)(a1 + 49);
  a1[53] = 0;
  while ( v10 )
  {
    sub_1E370(*(_QWORD **)(v10 + 24));
    v11 = (void *)v10;
    v10 = *(_QWORD *)(v10 + 16);
    operator delete(v11, 0x50u);
  }
  a1[78] = 0;
  a1[79] = (__int64)(a1 + 77);
  a1[80] = (__int64)(a1 + 77);
  v12 = *a1;
  a1[81] = 0;
  *((_DWORD *)a1 + 164) = 0;
  *((_BYTE *)a1 + 861) = 0;
  v13 = *(unsigned __int64 (__fastcall **)(__int64 *))(v12 + 600);
  if ( v13 != sub_1B580 )
    return v13(a1);
  v14 = a1[83];
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    if ( a1[84] )
    {
      a1[85] = 0;
      qfree();
      a1[84] = 0;
      a1[86] = 0;
    }
    v15 = a1[87];
    if ( v15 )
    {
      v16 = a1[88];
      if ( v16 )
      {
        for ( i = 0; i != v16; ++i )
        {
          v18 = (_QWORD *)(v15 + 24 * i);
          if ( *v18 )
          {
            v18[1] = 0;
            qfree();
            v15 = a1[87];
          }
        }
      }
      a1[88] = 0;
      qfree();
      a1[87] = 0;
      a1[89] = 0;
    }
    if ( a1[90] )
    {
      a1[91] = 0;
      qfree();
      a1[90] = 0;
      a1[92] = 0;
    }
    v19 = a1[93];
    if ( v19 )
    {
      v20 = a1[94];
      if ( v20 )
      {
        for ( j = 0; j != v20; ++j )
        {
          v22 = (_QWORD *)(v19 + 24 * j);
          if ( *v22 )
          {
            v22[1] = 0;
            qfree();
            v19 = a1[93];
          }
        }
      }
      a1[94] = 0;
      qfree();
      a1[93] = 0;
      a1[95] = 0;
    }
  }
  a1[83] = 0;
  return sub_101D0(0);
}

