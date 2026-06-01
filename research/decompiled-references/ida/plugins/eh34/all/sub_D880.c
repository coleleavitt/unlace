__int64 __fastcall sub_D880(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  void *v4; // rdi
  __int64 v5; // rbp
  void *v6; // rdi
  __int64 v7; // rbp
  void *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 i; // rbp
  __int64 *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 j; // rbp
  __int64 *v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 (__fastcall *hexdsp)(__int64, _QWORD *); // rax

  *a1 = off_8B798;
  qfree(a1[56]);
  v3 = a1[52];
  while ( v3 )
  {
    sub_CC80(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    a2 = 56;
    operator delete(v4, 0x38u);
  }
  v5 = a1[46];
  while ( v5 )
  {
    sub_CE50(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    a2 = 48;
    operator delete(v6, 0x30u);
  }
  v7 = a1[40];
  while ( v7 )
  {
    sub_D4B0(*(_QWORD **)(v7 + 24));
    v8 = (void *)v7;
    v7 = *(_QWORD *)(v7 + 16);
    a2 = 40;
    operator delete(v8, 0x28u);
  }
  v9 = a1[35];
  if ( v9 )
  {
    a1[36] = 0;
    qfree(v9);
  }
  qfree(a1[31]);
  qfree(a1[29]);
  qfree(a1[27]);
  v10 = a1[19];
  *a1 = off_8B6D8;
  if ( v10 )
  {
    a1[20] = 0;
    qfree(v10);
  }
  v11 = a1[15];
  if ( v11 )
  {
    a1[16] = 0;
    qfree(v11);
  }
  v12 = a1[12];
  if ( v12 )
  {
    a1[13] = 0;
    qfree(v12);
  }
  v13 = a1[9];
  if ( v13 )
  {
    v14 = a1[10];
    if ( v14 )
    {
      for ( i = 0; i != v14; ++i )
      {
        v16 = (__int64 *)(v13 + 24 * i);
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v17);
          v13 = a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v13);
  }
  v18 = a1[6];
  if ( v18 )
  {
    v19 = a1[7];
    if ( v19 )
    {
      for ( j = 0; j != v19; ++j )
      {
        v21 = (__int64 *)(v18 + 24 * j);
        v22 = *v21;
        if ( *v21 )
        {
          v21[1] = 0;
          qfree(v22);
          v18 = a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree(v18);
  }
  v23 = a1[1];
  *a1 = &unk_8C6B0;
  if ( v23 )
  {
    a1[2] = 0;
    qfree(v23);
  }
  hexdsp = (__int64 (__fastcall *)(__int64, _QWORD *))get_hexdsp(v23, a2);
  return hexdsp(130, a1);
}

