unsigned __int64 __fastcall sub_208C0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbp
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 j; // rbp
  _QWORD *v9; // rax
  __int64 v10; // rbp
  void *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // r12
  __int64 k; // rbp
  __int64 v16; // rbp
  void *v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 m; // r12
  _QWORD *v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // r13
  __int64 n; // r12
  _QWORD *v25; // rbp
  __m128i v26; // xmm2
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  void *v29; // rdi
  void **v30; // rbp
  unsigned __int64 v31; // r12
  void *v32; // rdi
  __int64 v33; // rdi
  __int64 v34; // r14
  __int64 v35; // r13
  __int64 ii; // r12
  _QWORD *v37; // rbp
  _OWORD v39[2]; // [rsp+0h] [rbp-78h] BYREF
  _OWORD v40[2]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-30h]

  v41 = __readfsqword(0x28u);
  *(_QWORD *)a1 = off_69A88;
  sub_48BF0();
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
    sub_1C660(*(_QWORD **)(v10 + 24));
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
    sub_1C830(*(_QWORD **)(v16 + 24));
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
  sub_1B520(*(void **)(a1 + 400));
  sub_1BAB0(*(_QWORD **)(a1 + 352));
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
  v26 = _mm_loadu_si128((const __m128i *)(a1 + 184));
  v27 = _mm_loadu_si128((const __m128i *)(a1 + 136));
  v28 = _mm_loadu_si128((const __m128i *)(a1 + 152));
  v39[0] = _mm_loadu_si128((const __m128i *)(a1 + 168));
  v39[1] = v26;
  v40[0] = v27;
  v40[1] = v28;
  sub_1B440((__int64 *)v40, (__int64 *)v39);
  v29 = *(void **)(a1 + 120);
  if ( v29 )
  {
    v30 = *(void ***)(a1 + 160);
    v31 = *(_QWORD *)(a1 + 192) + 8LL;
    if ( (unsigned __int64)v30 < v31 )
    {
      do
      {
        v32 = *v30++;
        operator delete(v32, 0x1F8u);
      }
      while ( (unsigned __int64)v30 < v31 );
      v29 = *(void **)(a1 + 120);
    }
    operator delete(v29, 8LL * *(_QWORD *)(a1 + 128));
  }
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
  v33 = *(_QWORD *)(a1 + 48);
  if ( v33 )
  {
    v34 = *(_QWORD *)(a1 + 56);
    if ( v34 )
    {
      v35 = 0;
      for ( ii = 0; ii != v34; ++ii )
      {
        v37 = (_QWORD *)(v33 + v35);
        if ( *(_QWORD *)(v33 + v35 + 32) )
        {
          v37[5] = 0;
          qfree();
        }
        if ( v37[1] )
        {
          v37[2] = 0;
          qfree();
        }
        v33 = *(_QWORD *)(a1 + 48);
        v35 += 56;
      }
    }
    *(_QWORD *)(a1 + 56) = 0;
    qfree();
  }
  return v41 - __readfsqword(0x28u);
}

