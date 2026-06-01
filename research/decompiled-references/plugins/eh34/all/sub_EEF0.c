void __fastcall sub_EEF0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rbp
  void *v10; // rdi
  __int64 v11; // rbp
  void *v12; // rdi
  __int64 v13; // rbp
  _QWORD *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rdi

  v2 = *(_QWORD *)(a1 + 520);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 528);
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = v4 + v2;
        ++v5;
        v4 += 56;
        sub_4C1A0(v6);
        v2 = *(_QWORD *)(a1 + 520);
      }
      while ( v3 != v5 );
    }
    *(_QWORD *)(a1 + 528) = 0;
    qfree(v2);
  }
  sub_CA40(*(void **)(a1 + 488));
  qfree(*(_QWORD *)(a1 + 448));
  qfree(*(_QWORD *)(a1 + 432));
  qfree(*(_QWORD *)(a1 + 416));
  qfree(*(_QWORD *)(a1 + 400));
  qfree(*(_QWORD *)(a1 + 384));
  qfree(*(_QWORD *)(a1 + 368));
  qfree(*(_QWORD *)(a1 + 352));
  qfree(*(_QWORD *)(a1 + 336));
  qfree(*(_QWORD *)(a1 + 320));
  qfree(*(_QWORD *)(a1 + 304));
  qfree(*(_QWORD *)(a1 + 288));
  qfree(*(_QWORD *)(a1 + 272));
  v7 = *(_QWORD *)(a1 + 248);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree(v7);
  }
  v8 = *(_QWORD *)(a1 + 224);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 232) = 0;
    qfree(v8);
  }
  v9 = *(_QWORD *)(a1 + 192);
  while ( v9 )
  {
    sub_D4B0(*(_QWORD **)(v9 + 24));
    v10 = (void *)v9;
    v9 = *(_QWORD *)(v9 + 16);
    operator delete(v10, 0x28u);
  }
  v11 = *(_QWORD *)(a1 + 144);
  while ( v11 )
  {
    sub_D4B0(*(_QWORD **)(v11 + 24));
    v12 = (void *)v11;
    v11 = *(_QWORD *)(v11 + 16);
    operator delete(v12, 0x28u);
  }
  v13 = *(_QWORD *)(a1 + 96);
  while ( v13 )
  {
    v14 = (_QWORD *)v13;
    sub_D1F0(*(_QWORD **)(v13 + 24));
    v15 = *(_QWORD *)(v13 + 40);
    v13 = *(_QWORD *)(v13 + 16);
    if ( v15 )
    {
      v14[6] = 0;
      qfree(v15);
    }
    operator delete(v14, 0x40u);
  }
  v16 = *(_QWORD *)(a1 + 48);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 56);
    if ( v17 )
    {
      v18 = 0;
      v19 = 0;
      do
      {
        v20 = v18 + v16;
        ++v19;
        v18 += 56;
        sub_4C1A0(v20);
        v16 = *(_QWORD *)(a1 + 48);
      }
      while ( v17 != v19 );
    }
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v16);
  }
}
