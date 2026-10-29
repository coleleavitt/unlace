void *__fastcall sub_197D0(__int64 a1)
{
  __int64 v1; // rbp
  void *v3; // rdi
  __int64 v4; // rbp
  void *v5; // rdi
  __int64 v6; // rbp
  _QWORD *v7; // r12
  __int64 v8; // rdi
  _QWORD *v9; // rdi
  __int64 v10; // rbp
  void *v11; // rdi
  _QWORD *v12; // rbp
  void *v13; // rdi
  _QWORD *v14; // rbp
  void *v15; // rdi
  _QWORD *v16; // rbp
  _QWORD *v17; // r12
  __int64 v18; // rdi
  void *result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  while ( v1 )
  {
    sub_192E0(*(_QWORD **)(v1 + 24));
    v3 = (void *)v1;
    v1 = *(_QWORD *)(v1 + 16);
    operator delete(v3, 0x30u);
  }
  v4 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  *(_QWORD *)(a1 + 32) = a1 + 8;
  *(_QWORD *)(a1 + 40) = 0;
  while ( v4 )
  {
    sub_19110(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x40u);
  }
  v6 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = a1 + 56;
  *(_QWORD *)(a1 + 80) = a1 + 56;
  *(_QWORD *)(a1 + 88) = 0;
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_194B0(*(_QWORD **)(v6 + 24));
    v8 = *(_QWORD *)(v6 + 48);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[7] = 0;
      qfree(v8);
    }
    operator delete(v7, 0x90u);
  }
  *(_QWORD *)(a1 + 112) = 0;
  v9 = *(_QWORD **)(a1 + 160);
  *(_QWORD *)(a1 + 120) = a1 + 104;
  *(_QWORD *)(a1 + 128) = a1 + 104;
  *(_QWORD *)(a1 + 136) = 0;
  sub_18FE0(v9);
  v10 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = a1 + 152;
  *(_QWORD *)(a1 + 176) = a1 + 152;
  *(_QWORD *)(a1 + 184) = 0;
  while ( v10 )
  {
    sub_192E0(*(_QWORD **)(v10 + 24));
    v11 = (void *)v10;
    v10 = *(_QWORD *)(v10 + 16);
    operator delete(v11, 0x30u);
  }
  v12 = *(_QWORD **)(a1 + 256);
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = a1 + 200;
  *(_QWORD *)(a1 + 224) = a1 + 200;
  *(_QWORD *)(a1 + 232) = 0;
  while ( v12 )
  {
    v13 = v12;
    v12 = (_QWORD *)*v12;
    operator delete(v13, 0x10u);
  }
  memset(*(void **)(a1 + 240), 0, 8LL * *(_QWORD *)(a1 + 248));
  v14 = *(_QWORD **)(a1 + 312);
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  while ( v14 )
  {
    v15 = v14;
    v14 = (_QWORD *)*v14;
    operator delete(v15, 0x18u);
  }
  memset(*(void **)(a1 + 296), 0, 8LL * *(_QWORD *)(a1 + 304));
  v16 = *(_QWORD **)(a1 + 368);
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  while ( v16 )
  {
    v17 = v16;
    v16 = (_QWORD *)*v16;
    v18 = v17[2];
    if ( v18 )
    {
      v17[3] = 0;
      qfree(v18);
    }
    operator delete(v17, 0x38u);
  }
  result = memset(*(void **)(a1 + 352), 0, 8LL * *(_QWORD *)(a1 + 360));
  *(_QWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 368) = 0;
  return result;
}

