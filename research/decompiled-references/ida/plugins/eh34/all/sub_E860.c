void __fastcall sub_E860(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  void *v4; // rdi
  void *v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  void *v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 i; // r12
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 j; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // rdi
  __int64 v25; // rbx
  void *v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi

  *(_QWORD *)a1 = &off_8B918;
  v2 = *(_QWORD *)(a1 + 1216);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1224) = 0;
    qfree(v2);
  }
  v3 = *(_QWORD **)(a1 + 1168);
  while ( v3 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    operator delete(v4, 0x18u);
  }
  memset(*(void **)(a1 + 1152), 0, 8LL * *(_QWORD *)(a1 + 1160));
  v5 = *(void **)(a1 + 1152);
  *(_QWORD *)(a1 + 1176) = 0;
  *(_QWORD *)(a1 + 1168) = 0;
  v6 = *(_QWORD *)(a1 + 1160);
  if ( v5 != (void *)(a1 + 1200) )
  {
    v6 *= 8LL;
    operator delete(v5, v6);
  }
  v7 = *(_QWORD *)(a1 + 1120);
  while ( v7 )
  {
    v8 = (void *)v7;
    sub_E4C0(*(_QWORD **)(v7 + 24));
    v7 = *(_QWORD *)(v7 + 16);
    sub_E270((__int64)v8 + 40);
    v6 = 480;
    operator delete(v8, 0x1E0u);
  }
  v9 = *(_QWORD *)(a1 + 1080);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 1088) = 0;
    qfree(v9);
  }
  v10 = *(_QWORD *)(a1 + 1048);
  while ( v10 )
  {
    v11 = (_QWORD *)v10;
    sub_DAA0(*(_QWORD **)(v10 + 24));
    v12 = *(_QWORD *)(v10 + 64);
    v10 = *(_QWORD *)(v10 + 16);
    if ( v12 )
    {
      v11[9] = 0;
      qfree(v12);
    }
    v6 = 88;
    operator delete(v11, 0x58u);
  }
  sub_E270(a1 + 592);
  v13 = *(_QWORD *)(a1 + 504);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 512) = 0;
    qfree(v13);
  }
  v14 = *(_QWORD *)(a1 + 480);
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 488);
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = v14 + 40 * i;
        v18 = *(_QWORD *)(v17 + 16);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v17 + 24);
          if ( v19 )
          {
            for ( j = 0; j != v19; ++j )
            {
              v21 = v18 + 72 * j;
              v22 = *(_QWORD *)(v21 + 32);
              if ( v22 )
              {
                *(_QWORD *)(v21 + 40) = 0;
                qfree(v22);
                v18 = *(_QWORD *)(v17 + 16);
              }
            }
          }
          *(_QWORD *)(v17 + 24) = 0;
          qfree(v18);
          v14 = *(_QWORD *)(a1 + 480);
        }
      }
    }
    *(_QWORD *)(a1 + 488) = 0;
    qfree(v14);
  }
  v23 = *(_QWORD *)(a1 + 456);
  if ( v23 )
  {
    *(_QWORD *)(a1 + 464) = 0;
    qfree(v23);
  }
  v24 = *(_QWORD *)(a1 + 344);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 352) = 0;
    qfree(v24);
  }
  *(_QWORD *)a1 = &unk_8C9D8;
  sub_5F670(a1, v6);
  v25 = *(_QWORD *)(a1 + 240);
  while ( v25 )
  {
    sub_CAB0(*(_QWORD **)(v25 + 24));
    v26 = (void *)v25;
    v25 = *(_QWORD *)(v25 + 16);
    operator delete(v26, 0x28u);
  }
  v27 = *(_QWORD *)(a1 + 192);
  if ( v27 )
  {
    *(_QWORD *)(a1 + 200) = 0;
    qfree(v27);
  }
  if ( *(_BYTE *)(a1 + 168) )
  {
    v28 = *(_QWORD *)(a1 + 144);
    *(_BYTE *)(a1 + 168) = 0;
    if ( v28 )
    {
      *(_QWORD *)(a1 + 152) = 0;
      qfree(v28);
    }
  }
}

