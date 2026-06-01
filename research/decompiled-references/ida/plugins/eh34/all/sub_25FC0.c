__int64 __fastcall sub_25FC0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  void *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 i; // rbp
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 j; // rbp
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 k; // rbp
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rbp
  void *v20; // rdi
  _QWORD *v21; // rbp
  void *v22; // rdi
  __int64 v23; // rbp
  void *v24; // rdi

  *(_QWORD *)(a1 + 8) = 0;
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 40) = 0;
  }
  v3 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 48) = 0;
  while ( v3 )
  {
    sub_25BC0(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x28u);
  }
  v5 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = a1 + 72;
  *(_QWORD *)(a1 + 96) = a1 + 72;
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 112) = -2;
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 136);
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = i;
        qfree(*(_QWORD *)(v5 + 16 * v8));
        v5 = *(_QWORD *)(a1 + 128);
      }
    }
    *(_QWORD *)(a1 + 136) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 128) = 0;
    *(_QWORD *)(a1 + 144) = 0;
  }
  v9 = *(_QWORD *)(a1 + 152);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 160);
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = j;
        qfree(*(_QWORD *)(v9 + 16 * v12));
        v9 = *(_QWORD *)(a1 + 152);
      }
    }
    *(_QWORD *)(a1 + 160) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 152) = 0;
    *(_QWORD *)(a1 + 168) = 0;
  }
  v13 = *(_QWORD *)(a1 + 176);
  if ( v13 )
  {
    v14 = *(_QWORD *)(a1 + 184);
    if ( v14 )
    {
      for ( k = 0; k != v14; ++k )
      {
        v16 = k;
        qfree(*(_QWORD *)(v13 + 16 * v16));
        v13 = *(_QWORD *)(a1 + 176);
      }
    }
    *(_QWORD *)(a1 + 184) = 0;
    qfree(v13);
    *(_QWORD *)(a1 + 176) = 0;
    *(_QWORD *)(a1 + 192) = 0;
  }
  v17 = *(_QWORD *)(a1 + 200);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 208) = 0;
    qfree(v17);
    *(_QWORD *)(a1 + 200) = 0;
    *(_QWORD *)(a1 + 216) = 0;
  }
  v18 = *(_QWORD *)(a1 + 240);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v18);
    *(_QWORD *)(a1 + 240) = 0;
    *(_QWORD *)(a1 + 256) = 0;
  }
  v19 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 264) = 0;
  while ( v19 )
  {
    sub_259F0(*(_QWORD **)(v19 + 24));
    v20 = (void *)v19;
    v19 = *(_QWORD *)(v19 + 16);
    operator delete(v20, 0x30u);
  }
  v21 = *(_QWORD **)(a1 + 344);
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = a1 + 288;
  *(_QWORD *)(a1 + 312) = a1 + 288;
  *(_QWORD *)(a1 + 320) = 0;
  while ( v21 )
  {
    v22 = v21;
    v21 = (_QWORD *)*v21;
    operator delete(v22, 0x18u);
  }
  memset(*(void **)(a1 + 328), 0, 8LL * *(_QWORD *)(a1 + 336));
  v23 = *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  while ( v23 )
  {
    sub_25BC0(*(_QWORD **)(v23 + 24));
    v24 = (void *)v23;
    v23 = *(_QWORD *)(v23 + 16);
    operator delete(v24, 0x28u);
  }
  *(_QWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = a1 + 392;
  *(_QWORD *)(a1 + 416) = a1 + 392;
  *(_QWORD *)(a1 + 424) = 0;
  *(_WORD *)(a1 + 432) = 0;
  return 0;
}

