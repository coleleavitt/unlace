unsigned __int64 __fastcall sub_362040(__int64 a1, __m128 a2, double a3)
{
  __int64 v3; // rax
  const char **v4; // r15
  __int64 v5; // r12
  __m128i *v6; // rbx
  __int64 *v7; // rdx
  __int64 *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 i; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 j; // rbp
  _QWORD *v17; // rax
  __int64 v19; // r15
  __int64 v20; // r14
  __m128i *v21; // rbx
  __int32 v22; // eax
  __m128i v23; // xmm0
  __int32 v24; // eax
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 v28; // rax
  size_t v29; // r13
  void *v30; // rax
  __m128i *v31; // rbp
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  const __m128i *v34; // rbx
  __m128i *v35; // [rsp+8h] [rbp-C0h]
  __int64 v36; // [rsp+10h] [rbp-B8h]
  __int64 v37; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v38; // [rsp+88h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 192);
  v35 = nullptr;
  v36 = v3;
  if ( v3 )
  {
    v19 = 0;
    v37 = 15 * v3;
    v20 = 0;
    v35 = (__m128i *)qalloc_or_throw();
    v21 = v35;
    do
    {
      v27 = v19 + *(_QWORD *)(a1 + 184);
      v28 = *(_QWORD *)v27;
      v21->m128i_i64[0] = *(_QWORD *)v27;
      if ( v28 )
        ++*(_DWORD *)(v28 + 104);
      a3 = 0.0;
      v21->m128i_i64[1] = 0;
      v21[1] = 0;
      v29 = *(_QWORD *)(v27 + 16);
      if ( v29 )
      {
        v30 = (void *)qalloc_or_throw();
        v21->m128i_i64[1] = (__int64)v30;
        v21[1].m128i_i64[1] = v29;
        memcpy(v30, *(const void **)(v27 + 8), v29);
        v21[1].m128i_i64[0] = v29;
      }
      v22 = *(_DWORD *)(v27 + 96);
      ++v20;
      v19 += 120;
      v21 = (__m128i *)((char *)v21 + 120);
      *(__m128i *)((char *)v21 - 88) = _mm_loadu_si128((const __m128i *)(v27 + 32));
      v23 = _mm_loadu_si128((const __m128i *)(v27 + 48));
      v21[-2].m128i_i32[2] = v22;
      v24 = *(_DWORD *)(v27 + 100);
      *(__m128i *)((char *)v21 - 72) = v23;
      v25 = _mm_loadu_si128((const __m128i *)(v27 + 64));
      v21[-2].m128i_i32[3] = v24;
      v26 = *(_QWORD *)(v27 + 104);
      *(__m128i *)((char *)v21 - 56) = v25;
      a2 = (__m128)_mm_loadu_si128((const __m128i *)(v27 + 80));
      v21[-1].m128i_i64[0] = v26;
      LODWORD(v26) = *(_DWORD *)(v27 + 112);
      *(__m128 *)((char *)v21 - 40) = a2;
      v21[-1].m128i_i32[2] = v26;
    }
    while ( v36 != v20 );
    v31 = (__m128i *)((char *)v35 + v37 * 8);
    if ( &v35->m128i_i8[v37 * 8] != (__int8 *)v35 )
    {
      v32 = 0xEEEEEEEEEEEEEEEFLL * ((v37 * 8) >> 3);
      if ( v32 )
      {
        _BitScanReverse64(&v33, v32);
        sub_3615A0((__int64)v35, (__int64)&v35->m128i_i64[v37], 2LL * (int)v33);
        if ( v37 > 240 )
        {
          v34 = v35 + 120;
          sub_35BDA0(v35, v35 + 120);
          do
          {
            sub_35B770(v34);
            v34 = (const __m128i *)((char *)v34 + 120);
          }
          while ( v31 != v34 );
          goto LABEL_2;
        }
      }
      else
      {
        sub_3615A0((__int64)v35, (__int64)&v35->m128i_i64[v37], -2);
      }
      sub_35BDA0(v35, v31);
    }
  }
LABEL_2:
  sub_69660((__int64)"     Address          Size          Time\n---------------- ---------------- --------\n");
  v4 = (const char **)&v35[2];
  do
  {
    qsnprintf();
    sub_69660((__int64)"%08a %08a %s\n", *(double *)a2.m128_u64, a3, *v4);
    v4 += 15;
  }
  while ( v4 != (const char **)&v35[242] );
  if ( v35 )
  {
    v5 = 0;
    if ( v36 )
    {
      v6 = v35;
      do
      {
        if ( v6->m128i_i64[1] )
        {
          v6[1].m128i_i64[0] = 0;
          qfree();
        }
        v7 = (__int64 *)v6->m128i_i64[0];
        if ( v6->m128i_i64[0] )
        {
          if ( (*((_DWORD *)v7 + 26))-- == 1 )
          {
            v9 = (__int64 *)v6->m128i_i64[0];
            if ( v6->m128i_i64[0] )
            {
              sub_254CF0((__int64 *)v6->m128i_i64[0]);
              v10 = v9[23];
              if ( v10 )
              {
                v11 = v9[24];
                if ( v11 )
                {
                  for ( i = 0; i != v11; ++i )
                  {
                    v13 = (_QWORD *)(v10 + 24 * i);
                    if ( *v13 )
                    {
                      v13[1] = 0;
                      qfree();
                      v10 = v9[23];
                    }
                  }
                }
                v9[24] = 0;
                qfree();
              }
              if ( v9[20] )
              {
                v9[21] = 0;
                qfree();
              }
              v14 = v9[16];
              if ( v14 )
              {
                v15 = v9[17];
                if ( v15 )
                {
                  for ( j = 0; j != v15; ++j )
                  {
                    v17 = (_QWORD *)(v14 + 32 * j);
                    if ( *v17 )
                    {
                      v17[1] = 0;
                      qfree();
                      v14 = v9[16];
                    }
                  }
                }
                v9[17] = 0;
                qfree();
              }
              sub_2513D0((__int64)(v9 + 2));
              j__qfree();
            }
          }
        }
        ++v5;
        v6 = (__m128i *)((char *)v6 + 120);
      }
      while ( v36 != v5 );
    }
    qfree();
  }
  return v38 - __readfsqword(0x28u);
}

