void __fastcall sub_81480(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 i; // rbp
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r13
  const char *v15; // rbp
  __int64 v16; // rbp
  __int128 v17; // xmm0
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rdx
  size_t v21; // r15
  void *v22; // rax
  const void **v23; // [rsp+0h] [rbp-48h]
  __int64 v24; // [rsp+8h] [rbp-40h]

  v3 = a2[1];
  if ( v3 )
  {
    v16 = 0;
    v17 = 0;
    v24 = qalloc_or_throw(24 * v3);
    v18 = v24;
    do
    {
      while ( 1 )
      {
        v19 = *a2;
        *(_QWORD *)v18 = 0;
        *(_OWORD *)(v18 + 8) = v17;
        v20 = v19 + 24 * v16;
        v21 = *(_QWORD *)(v20 + 8);
        if ( v21 )
          break;
        ++v16;
        v18 += 24;
        if ( v3 == v16 )
          goto LABEL_30;
      }
      v23 = (const void **)v20;
      ++v16;
      v18 += 24;
      v22 = (void *)qalloc_or_throw(*(_QWORD *)(v20 + 8));
      *(_QWORD *)(v18 - 8) = v21;
      *(_QWORD *)(v18 - 24) = v22;
      memcpy(v22, *v23, v21);
      *(_QWORD *)(v18 - 16) = v21;
      v17 = 0;
    }
    while ( v3 != v16 );
LABEL_30:
    v4 = *(_QWORD *)(a1 + 328);
    v5 = (int)v3;
    if ( !v4 )
      goto LABEL_10;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 328);
    if ( !v4 )
    {
      *(_OWORD *)(a1 + 336) = 0;
      return;
    }
    v24 = 0;
    v5 = 0;
  }
  v6 = *(_QWORD *)(a1 + 336);
  if ( v6 )
  {
    for ( i = 0; i != v6; ++i )
    {
      v8 = (__int64 *)(v4 + 24 * i);
      v9 = *v8;
      if ( *v8 )
      {
        v8[1] = 0;
        qfree(v9);
        v4 = *(_QWORD *)(a1 + 328);
      }
    }
  }
  *(_QWORD *)(a1 + 336) = 0;
  qfree(v4);
LABEL_10:
  v10 = v24;
  *(_QWORD *)(a1 + 328) = v24;
  *(__m128i *)(a1 + 336) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( (int)v5 > 0 )
  {
    while ( *(_DWORD *)(*(_QWORD *)v10 + 8LL) )
    {
      v10 += 24;
      if ( v24 + 24 * v5 == v10 )
        return;
    }
    if ( v10 )
    {
      if ( *(_DWORD *)(*(_QWORD *)v10 + 16LL) )
      {
        v11 = *(_QWORD *)(a1 + 112);
        if ( (int)v11 > 0 )
        {
          v12 = *(_QWORD *)(a1 + 104);
          v13 = v12 + 16;
          v14 = v12 + 120LL * (unsigned int)(v11 - 1) + 136;
          do
          {
            if ( *(_QWORD *)(v13 + 8) )
            {
              v15 = *(const char **)v13;
              if ( !strcmp(*(const char **)v13, ".debug_info") )
              {
                *(_QWORD *)(a1 + 152) = *(_QWORD *)(v13 + 32);
              }
              else if ( !strcmp(v15, ".debug_types") )
              {
                *(_QWORD *)(a1 + 160) = *(_QWORD *)(v13 + 32);
              }
            }
            v13 += 120;
          }
          while ( v14 != v13 );
        }
      }
    }
  }
}
