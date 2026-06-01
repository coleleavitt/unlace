unsigned __int64 __fastcall sub_54C10(__int64 a1)
{
  __int64 v2; // rbp
  _QWORD *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rbp
  void *v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 i; // r12
  _QWORD *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 j; // rbp
  __int64 v15; // rax
  __int64 v16; // rbp
  void *v17; // rdi
  __int64 v18; // rbp
  _QWORD *v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 k; // rbp
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // r12
  __int64 m; // rbp
  __int64 v28; // rax

  *(_QWORD *)a1 = off_996C0;
  sub_52B00(a1);
  if ( *(_QWORD *)(a1 + 1688) )
    term_process();
  v2 = *(_QWORD *)(a1 + 1648);
  *(_QWORD *)(a1 + 1688) = 0;
  *(_QWORD *)(a1 + 880) = 0;
  *(_OWORD *)(a1 + 864) = 0;
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_4A600(*(_QWORD **)(v2 + 24));
    v4 = *(_QWORD *)(v2 + 40);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[6] = 0;
      qfree();
    }
    operator delete(v3, 0x48u);
  }
  if ( *(_QWORD *)(a1 + 1608) )
  {
    *(_QWORD *)(a1 + 1616) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1568) )
  {
    *(_QWORD *)(a1 + 1576) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1536) )
  {
    *(_QWORD *)(a1 + 1544) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1512) )
  {
    *(_QWORD *)(a1 + 1520) = 0;
    qfree();
  }
  v5 = *(_QWORD *)(a1 + 1464);
  while ( v5 )
  {
    sub_4A260(*(_QWORD **)(v5 + 24));
    v6 = (void *)v5;
    v5 = *(_QWORD *)(v5 + 16);
    operator delete(v6, 0x28u);
  }
  sub_48DD0(*(void **)(a1 + 1416));
  v7 = *(_QWORD *)(a1 + 1376);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 1384);
    if ( v8 )
    {
      v9 = 0;
      for ( i = 0; i != v8; ++i )
      {
        v11 = (_QWORD *)(v7 + v9);
        if ( *(_QWORD *)(v7 + v9 + 80) )
        {
          v11[11] = 0;
          qfree();
        }
        if ( v11[7] )
        {
          v11[8] = 0;
          qfree();
        }
        if ( *v11 )
        {
          v11[1] = 0;
          qfree();
        }
        v7 = *(_QWORD *)(a1 + 1376);
        v9 += 112;
      }
    }
    *(_QWORD *)(a1 + 1384) = 0;
    qfree();
  }
  v12 = *(_QWORD *)(a1 + 1336);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 1344);
    if ( v13 )
    {
      for ( j = 0; j != v13; ++j )
      {
        v15 = v12 + 32 * j;
        if ( *(_QWORD *)(v15 + 8) )
        {
          *(_QWORD *)(v15 + 16) = 0;
          qfree();
          v12 = *(_QWORD *)(a1 + 1336);
        }
      }
    }
    *(_QWORD *)(a1 + 1344) = 0;
    qfree();
  }
  v16 = *(_QWORD *)(a1 + 1304);
  while ( v16 )
  {
    sub_4A430(*(_QWORD **)(v16 + 24));
    v17 = (void *)v16;
    v16 = *(_QWORD *)(v16 + 16);
    operator delete(v17, 0x28u);
  }
  v18 = *(_QWORD *)(a1 + 1256);
  while ( v18 )
  {
    v19 = (_QWORD *)v18;
    sub_4AD30(*(_QWORD **)(v18 + 24));
    v20 = *(_QWORD *)(v18 + 32);
    v18 = *(_QWORD *)(v18 + 16);
    if ( v20 )
    {
      v19[5] = 0;
      qfree();
    }
    operator delete(v19, 0x40u);
  }
  v21 = *(_QWORD *)(a1 + 1216);
  if ( v21 )
  {
    v22 = *(_QWORD *)(a1 + 1224);
    if ( v22 )
    {
      for ( k = 0; k != v22; ++k )
      {
        v24 = v21 + 48 * k;
        if ( *(_QWORD *)(v24 + 16) )
        {
          *(_QWORD *)(v24 + 24) = 0;
          qfree();
          v21 = *(_QWORD *)(a1 + 1216);
        }
      }
    }
    *(_QWORD *)(a1 + 1224) = 0;
    qfree();
  }
  v25 = *(_QWORD *)(a1 + 1128);
  if ( v25 )
  {
    v26 = *(_QWORD *)(a1 + 1136);
    if ( v26 )
    {
      for ( m = 0; m != v26; ++m )
      {
        v28 = 9 * m;
        sub_30730((_QWORD *)(16 * v28 + v25));
        v25 = *(_QWORD *)(a1 + 1128);
      }
    }
    *(_QWORD *)(a1 + 1136) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1104) )
  {
    *(_QWORD *)(a1 + 1112) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1080) )
  {
    *(_QWORD *)(a1 + 1088) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1056) )
  {
    *(_QWORD *)(a1 + 1064) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1032) )
  {
    *(_QWORD *)(a1 + 1040) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1000) )
  {
    *(_QWORD *)(a1 + 1008) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 976) )
  {
    *(_QWORD *)(a1 + 984) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 888) )
  {
    *(_QWORD *)(a1 + 896) = 0;
    qfree();
  }
  return sub_4CF40(a1);
}

