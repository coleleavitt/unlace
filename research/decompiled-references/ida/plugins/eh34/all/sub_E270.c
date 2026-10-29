void __fastcall sub_E270(__int64 a1)
{
  __int64 v1; // rbp
  void *v3; // rdi
  _QWORD *v4; // rbp
  void *v5; // rdi
  void *v6; // rdi
  __int64 v7; // rbp
  void *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 i; // rbp
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r12
  __int64 j; // rbp
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 k; // rbp
  __int64 v22; // rax
  __int64 v23; // rbp
  void *v24; // rdi
  __int64 v25; // rdi

  v1 = *(_QWORD *)(a1 + 400);
  while ( v1 )
  {
    sub_DD60(*(_QWORD **)(v1 + 24));
    v3 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = *(_QWORD **)(a1 + 344);
  while ( v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    operator delete(v5, 0x18u);
  }
  memset(*(void **)(a1 + 328), 0, 8LL * *(_QWORD *)(a1 + 336));
  v6 = *(void **)(a1 + 328);
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  if ( v6 != (void *)(a1 + 376) )
    operator delete(v6, 8LL * *(_QWORD *)(a1 + 336));
  v7 = *(_QWORD *)(a1 + 296);
  while ( v7 )
  {
    sub_D020(*(_QWORD **)(v7 + 24));
    v8 = (void *)v7;
    v7 = *(_QWORD *)(v7 + 16);
    operator delete(v8, 0x30u);
  }
  v9 = *(_QWORD *)(a1 + 240);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v9);
  }
  v10 = *(_QWORD *)(a1 + 200);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v10);
  }
  v11 = *(_QWORD *)(a1 + 176);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 184);
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
      {
        v14 = i;
        qfree(*(_QWORD *)(v11 + 16 * v14));
        v11 = *(_QWORD *)(a1 + 176);
      }
    }
    *(_QWORD *)(a1 + 184) = 0;
    qfree(v11);
  }
  v15 = *(_QWORD *)(a1 + 152);
  if ( v15 )
  {
    v16 = *(_QWORD *)(a1 + 160);
    if ( v16 )
    {
      for ( j = 0; j != v16; ++j )
      {
        v18 = j;
        qfree(*(_QWORD *)(v15 + 16 * v18));
        v15 = *(_QWORD *)(a1 + 152);
      }
    }
    *(_QWORD *)(a1 + 160) = 0;
    qfree(v15);
  }
  v19 = *(_QWORD *)(a1 + 128);
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 136);
    if ( v20 )
    {
      for ( k = 0; k != v20; ++k )
      {
        v22 = k;
        qfree(*(_QWORD *)(v19 + 16 * v22));
        v19 = *(_QWORD *)(a1 + 128);
      }
    }
    *(_QWORD *)(a1 + 136) = 0;
    qfree(v19);
  }
  v23 = *(_QWORD *)(a1 + 80);
  while ( v23 )
  {
    sub_DD60(*(_QWORD **)(v23 + 24));
    v24 = (void *)v23;
    v23 = *(_QWORD *)(v23 + 16);
    operator delete(v24, 0x28u);
  }
  v25 = *(_QWORD *)(a1 + 24);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v25);
  }
}

