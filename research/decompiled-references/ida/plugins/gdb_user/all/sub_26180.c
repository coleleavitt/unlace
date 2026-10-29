__int64 __fastcall sub_26180(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rbx
  void *v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 j; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 k; // rbx
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  __int64 result; // rax
  _QWORD *m; // rbp

  v2 = *(_QWORD *)(a1 + 1216);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 1224);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = v2 + 48 * i;
        if ( *(_QWORD *)(v5 + 16) )
        {
          *(_QWORD *)(v5 + 24) = 0;
          qfree();
          v2 = *(_QWORD *)(a1 + 1216);
        }
      }
    }
    *(_QWORD *)(a1 + 1224) = 0;
    qfree();
    *(_QWORD *)(a1 + 1216) = 0;
    *(_QWORD *)(a1 + 1232) = 0;
  }
  v6 = *(_QWORD *)(a1 + 1256);
  while ( v6 )
  {
    v7 = (_QWORD *)v6;
    sub_1E530(*(_QWORD **)(v6 + 24));
    v8 = *(_QWORD *)(v6 + 32);
    v6 = *(_QWORD *)(v6 + 16);
    if ( v8 )
    {
      v7[5] = 0;
      qfree();
    }
    operator delete(v7, 0x40u);
  }
  v9 = *(_QWORD *)(a1 + 1304);
  *(_QWORD *)(a1 + 1256) = 0;
  *(_QWORD *)(a1 + 1264) = a1 + 1248;
  *(_QWORD *)(a1 + 1272) = a1 + 1248;
  *(_QWORD *)(a1 + 1280) = 0;
  while ( v9 )
  {
    sub_1DC30(*(_QWORD **)(v9 + 24));
    v10 = (void *)v9;
    v9 = *(_QWORD *)(v9 + 16);
    operator delete(v10, 0x28u);
  }
  v11 = *(_QWORD *)(a1 + 672);
  *(_QWORD *)(a1 + 1304) = 0;
  *(_QWORD *)(a1 + 1312) = a1 + 1296;
  *(_QWORD *)(a1 + 1320) = a1 + 1296;
  *(_QWORD *)(a1 + 1328) = 0;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 680) = 0;
    qfree();
    *(_QWORD *)(a1 + 672) = 0;
    *(_QWORD *)(a1 + 688) = 0;
  }
  v12 = *(_QWORD *)(a1 + 696);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 704);
    if ( v13 )
    {
      for ( j = 0; j != v13; ++j )
      {
        v15 = (_QWORD *)(v12 + 24 * j);
        if ( *v15 )
        {
          v15[1] = 0;
          qfree();
          v12 = *(_QWORD *)(a1 + 696);
        }
      }
    }
    *(_QWORD *)(a1 + 704) = 0;
    qfree();
    *(_QWORD *)(a1 + 696) = 0;
    *(_QWORD *)(a1 + 712) = 0;
  }
  if ( *(_QWORD *)(a1 + 720) )
  {
    *(_QWORD *)(a1 + 728) = 0;
    qfree();
    *(_QWORD *)(a1 + 720) = 0;
    *(_QWORD *)(a1 + 736) = 0;
  }
  v16 = *(_QWORD *)(a1 + 744);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 752);
    if ( v17 )
    {
      for ( k = 0; k != v17; ++k )
      {
        v19 = (_QWORD *)(v16 + 24 * k);
        if ( *v19 )
        {
          v19[1] = 0;
          qfree();
          v16 = *(_QWORD *)(a1 + 744);
        }
      }
    }
    *(_QWORD *)(a1 + 752) = 0;
    qfree();
    *(_QWORD *)(a1 + 744) = 0;
    *(_QWORD *)(a1 + 760) = 0;
  }
  v20 = *(_QWORD **)(a1 + 1376);
  *(_DWORD *)(a1 + 788) = -1;
  *(_DWORD *)(a1 + 1192) = -1;
  *(_QWORD *)(a1 + 780) = -1;
  *(_QWORD *)(a1 + 1184) = -1;
  result = *(_QWORD *)(a1 + 1384);
  for ( m = &v20[14 * result]; v20 != m; v20 += 14 )
  {
    if ( v20[7] )
    {
      v20[8] = 0;
      result = qfree();
      v20[7] = 0;
      v20[9] = 0;
    }
    if ( v20[10] )
    {
      v20[11] = 0;
      result = qfree();
      v20[10] = 0;
      v20[12] = 0;
    }
    v20[13] = 0;
  }
  return result;
}

