void __fastcall sub_21B60(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rdi
  void *v5; // rdi
  _QWORD *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  _QWORD *v9; // rbx
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // rbx
  void *v13; // rdi
  __int64 v14; // rbx
  _QWORD *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rbx
  void *v18; // rdi
  __int64 v19; // rbx
  void *v20; // rdi
  __int64 v21; // rbx
  void *v22; // rdi

  v2 = *(_QWORD **)(a1 + 488);
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    v4 = v3[2];
    if ( v4 )
    {
      v3[3] = 0;
      qfree(v4);
    }
    operator delete(v3, 0x38u);
  }
  memset(*(void **)(a1 + 472), 0, 8LL * *(_QWORD *)(a1 + 480));
  v5 = *(void **)(a1 + 472);
  *(_QWORD *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 488) = 0;
  if ( v5 != (void *)(a1 + 520) )
    operator delete(v5, 8LL * *(_QWORD *)(a1 + 480));
  v6 = *(_QWORD **)(a1 + 432);
  while ( v6 )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    operator delete(v7, 0x18u);
  }
  memset(*(void **)(a1 + 416), 0, 8LL * *(_QWORD *)(a1 + 424));
  v8 = *(void **)(a1 + 416);
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  if ( v8 != (void *)(a1 + 464) )
    operator delete(v8, 8LL * *(_QWORD *)(a1 + 424));
  v9 = *(_QWORD **)(a1 + 376);
  while ( v9 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    operator delete(v10, 0x10u);
  }
  memset(*(void **)(a1 + 360), 0, 8LL * *(_QWORD *)(a1 + 368));
  v11 = *(void **)(a1 + 360);
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  if ( v11 != (void *)(a1 + 408) )
    operator delete(v11, 8LL * *(_QWORD *)(a1 + 368));
  v12 = *(_QWORD *)(a1 + 328);
  while ( v12 )
  {
    sub_21470(*(_QWORD **)(v12 + 24));
    v13 = (void *)v12;
    v12 = *(_QWORD *)(v12 + 16);
    operator delete(v13, 0x30u);
  }
  sub_21170(*(_QWORD **)(a1 + 280));
  v14 = *(_QWORD *)(a1 + 232);
  while ( v14 )
  {
    v15 = (_QWORD *)v14;
    sub_21640(*(_QWORD **)(v14 + 24));
    v16 = *(_QWORD *)(v14 + 48);
    v14 = *(_QWORD *)(v14 + 16);
    if ( v16 )
    {
      v15[7] = 0;
      qfree(v16);
    }
    operator delete(v15, 0x90u);
  }
  v17 = *(_QWORD *)(a1 + 184);
  while ( v17 )
  {
    sub_212A0(*(_QWORD **)(v17 + 24));
    v18 = (void *)v17;
    v17 = *(_QWORD *)(v17 + 16);
    operator delete(v18, 0x40u);
  }
  v19 = *(_QWORD *)(a1 + 136);
  while ( v19 )
  {
    sub_21470(*(_QWORD **)(v19 + 24));
    v20 = (void *)v19;
    v19 = *(_QWORD *)(v19 + 16);
    operator delete(v20, 0x30u);
  }
  v21 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 16) = off_8BAC8;
  while ( v21 )
  {
    sub_21900(*(_QWORD **)(v21 + 24));
    v22 = (void *)v21;
    v21 = *(_QWORD *)(v21 + 16);
    operator delete(v22, 0x30u);
  }
}
