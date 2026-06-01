unsigned __int64 __fastcall sub_14AB0(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // r14
  _QWORD *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // rbx
  void *v14; // rdi

  *a1 = off_45578;
  a1[175] = 0;
  a1[119] = 0;
  a1[166] = 0;
  if ( a1[180] )
  {
    a1[181] = 0;
    qfree();
  }
  if ( a1[177] )
  {
    a1[178] = 0;
    qfree();
  }
  v2 = a1[171];
  while ( v2 )
  {
    sub_12720(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  if ( a1[163] )
  {
    a1[164] = 0;
    qfree();
  }
  if ( a1[160] )
  {
    a1[161] = 0;
    qfree();
  }
  if ( a1[157] )
  {
    a1[158] = 0;
    qfree();
  }
  v4 = a1[153];
  while ( v4 )
  {
    v5 = (_QWORD *)v4;
    sub_12030(*(_QWORD **)(v4 + 24));
    v6 = *(_QWORD *)(v4 + 72);
    v4 = *(_QWORD *)(v4 + 16);
    if ( v6 )
    {
      v5[10] = 0;
      qfree();
    }
    operator delete(v5, 0x60u);
  }
  v7 = a1[147];
  while ( v7 )
  {
    v8 = (_QWORD *)v7;
    sub_12E30(*(_QWORD **)(v7 + 24));
    v9 = *(_QWORD *)(v7 + 176);
    v7 = *(_QWORD *)(v7 + 16);
    if ( v9 )
    {
      v8[23] = 0;
      qfree();
    }
    if ( v8[19] )
    {
      v8[20] = 0;
      qfree();
    }
    v10 = v8[15];
    while ( v10 )
    {
      v11 = (_QWORD *)v10;
      sub_122F0(*(_QWORD **)(v10 + 24));
      v12 = *(_QWORD *)(v10 + 40);
      v10 = *(_QWORD *)(v10 + 16);
      if ( v12 )
      {
        v11[6] = 0;
        qfree();
      }
      operator delete(v11, 0x40u);
    }
    if ( v8[10] )
    {
      v8[11] = 0;
      qfree();
    }
    if ( v8[7] )
    {
      v8[8] = 0;
      qfree();
    }
    operator delete(v8, 0xD0u);
  }
  v13 = a1[141];
  while ( v13 )
  {
    sub_12720(*(_QWORD **)(v13 + 24));
    v14 = (void *)v13;
    v13 = *(_QWORD *)(v13 + 16);
    operator delete(v14, 0x28u);
  }
  if ( a1[136] )
  {
    a1[137] = 0;
    qfree();
  }
  if ( a1[133] )
  {
    a1[134] = 0;
    qfree();
  }
  if ( a1[130] )
  {
    a1[131] = 0;
    qfree();
  }
  if ( a1[127] )
  {
    a1[128] = 0;
    qfree();
  }
  *a1 = off_45AB0;
  return sub_145A0((__int64)a1);
}

