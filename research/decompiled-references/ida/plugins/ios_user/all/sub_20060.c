void __fastcall sub_20060(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 j; // rbx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  void *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 k; // rbx
  __int64 v16; // rbx
  void *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 m; // r12
  _QWORD *v21; // rbx
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 n; // r12
  _QWORD *v25; // rbx
  __int64 v26; // r14
  __int64 v27; // r13
  __int64 *v28; // r12
  __int64 v29; // r15
  __int64 v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 v33; // r13
  __int64 jj; // r12
  _QWORD *v35; // rbx
  unsigned __int64 ii; // [rsp+0h] [rbp-58h]
  __int64 v37; // [rsp+8h] [rbp-50h]
  __int64 v38; // [rsp+10h] [rbp-48h]
  __int64 v39; // [rsp+18h] [rbp-40h]

  *(_QWORD *)a1 = off_8DA88;
  sub_66180();
  if ( *(_QWORD *)(a1 + 832) )
  {
    *(_QWORD *)(a1 + 840) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 808) )
  {
    *(_QWORD *)(a1 + 816) = 0;
    qfree();
  }
  v2 = *(_QWORD *)(a1 + 744);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 752);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = *(_QWORD *)(a1 + 744);
        }
      }
    }
    *(_QWORD *)(a1 + 752) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 720) )
  {
    *(_QWORD *)(a1 + 728) = 0;
    qfree();
  }
  v6 = *(_QWORD *)(a1 + 696);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 704);
    if ( v7 )
    {
      for ( j = 0; j != v7; ++j )
      {
        v9 = (_QWORD *)(v6 + 24 * j);
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v6 = *(_QWORD *)(a1 + 696);
        }
      }
    }
    *(_QWORD *)(a1 + 704) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 672) )
  {
    *(_QWORD *)(a1 + 680) = 0;
    qfree();
  }
  v10 = *(_QWORD *)(a1 + 624);
  while ( v10 )
  {
    sub_1A110(*(_QWORD **)(v10 + 24));
    v11 = (void *)v10;
    v10 = *(_QWORD *)(v10 + 16);
    operator delete(v11, 0x50u);
  }
  if ( *(_QWORD *)(a1 + 584) )
  {
    *(_QWORD *)(a1 + 592) = 0;
    qfree();
  }
  v12 = *(_QWORD *)(a1 + 560);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 568);
    if ( v13 )
    {
      v14 = 0;
      for ( k = 0; k != v13; ++k )
      {
        if ( *(_QWORD *)(v12 + v14 + 8) )
        {
          *(_QWORD *)(v12 + v14 + 16) = 0;
          qfree();
          v12 = *(_QWORD *)(a1 + 560);
        }
        v14 += 56;
      }
    }
    *(_QWORD *)(a1 + 568) = 0;
    qfree();
  }
  v16 = *(_QWORD *)(a1 + 528);
  while ( v16 )
  {
    sub_1A3F0(*(_QWORD **)(v16 + 24));
    v17 = (void *)v16;
    v16 = *(_QWORD *)(v16 + 16);
    operator delete(v17, 0x40u);
  }
  if ( *(_QWORD *)(a1 + 488) )
  {
    *(_QWORD *)(a1 + 496) = 0;
    qfree();
  }
  v18 = *(_QWORD *)(a1 + 456);
  if ( v18 )
  {
    v19 = *(_QWORD *)(a1 + 464);
    if ( v19 )
    {
      for ( m = 0; m != v19; ++m )
      {
        v21 = (_QWORD *)(v18 + 80 * m);
        if ( v21[5] )
        {
          v21[6] = 0;
          qfree();
        }
        if ( v21[2] )
        {
          v21[3] = 0;
          qfree();
        }
        v18 = *(_QWORD *)(a1 + 456);
      }
    }
    *(_QWORD *)(a1 + 464) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 432) )
  {
    *(_QWORD *)(a1 + 440) = 0;
    qfree();
  }
  sub_18C60(*(void **)(a1 + 400));
  sub_18F60(*(_QWORD **)(a1 + 352));
  v22 = *(_QWORD *)(a1 + 312);
  if ( v22 )
  {
    v23 = *(_QWORD *)(a1 + 320);
    if ( v23 )
    {
      for ( n = 0; n != v23; ++n )
      {
        v25 = (_QWORD *)(v22 + (n << 6));
        if ( v25[5] )
        {
          v25[6] = 0;
          qfree();
        }
        if ( v25[1] )
        {
          v25[2] = 0;
          qfree();
        }
        v22 = *(_QWORD *)(a1 + 312);
      }
    }
    *(_QWORD *)(a1 + 320) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 280) )
  {
    *(_QWORD *)(a1 + 288) = 0;
    qfree();
  }
  free_debug_event();
  v26 = *(_QWORD *)(a1 + 176);
  v27 = *(_QWORD *)(a1 + 136);
  v38 = *(_QWORD *)(a1 + 152);
  v37 = *(_QWORD *)(a1 + 168);
  v28 = (__int64 *)(*(_QWORD *)(a1 + 160) + 8LL);
  v39 = *(_QWORD *)(a1 + 160);
  for ( ii = *(_QWORD *)(a1 + 192); (unsigned __int64)v28 < ii; ++v28 )
  {
    v29 = *v28;
    v30 = *v28 + 504;
    do
    {
      v29 += 72;
      free_debug_event();
    }
    while ( v30 != v29 );
  }
  if ( ii == v39 )
  {
    while ( v37 != v27 )
    {
      v27 += 72;
      free_debug_event();
    }
  }
  else
  {
    if ( v27 == v38 )
      goto LABEL_69;
    do
    {
      v27 += 72;
      free_debug_event();
    }
    while ( v38 != v27 );
    while ( v37 != v26 )
    {
      v26 += 72;
      free_debug_event();
LABEL_69:
      ;
    }
  }
  sub_1FEE0(a1 + 120);
  if ( *(_QWORD *)(a1 + 96) )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 72) )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree();
  }
  v31 = *(_QWORD *)(a1 + 48);
  if ( v31 )
  {
    v32 = *(_QWORD *)(a1 + 56);
    if ( v32 )
    {
      v33 = 0;
      for ( jj = 0; jj != v32; ++jj )
      {
        v35 = (_QWORD *)(v31 + v33);
        if ( *(_QWORD *)(v31 + v33 + 32) )
        {
          v35[5] = 0;
          qfree();
        }
        if ( v35[1] )
        {
          v35[2] = 0;
          qfree();
        }
        v31 = *(_QWORD *)(a1 + 48);
        v33 += 56;
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    qfree();
  }
}

