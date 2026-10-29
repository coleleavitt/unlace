__int64 __fastcall sub_6540(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 i; // r12
  _QWORD *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r12
  void *v9; // r15
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rsi
  __m128i v13; // xmm0
  __int64 v14; // rsi
  __m128i v15; // xmm0
  void *v16; // rdi
  const char *v17; // r14
  size_t v18; // rax
  size_t v19; // r13
  size_t v20; // r15
  __int64 v21; // r13
  void *v22; // r13
  size_t v23; // rbp
  void *v24; // r14
  __int64 v25; // rax
  void *v26; // r15
  void *v27; // rdi
  size_t v28; // r15
  __m128i v30; // [rsp+8h] [rbp-110h] BYREF
  __int64 v31; // [rsp+18h] [rbp-100h]
  int v32; // [rsp+24h] [rbp-F4h]
  _QWORD *v33; // [rsp+28h] [rbp-F0h]
  void *dest; // [rsp+30h] [rbp-E8h]
  __int128 v35; // [rsp+38h] [rbp-E0h]
  void *src; // [rsp+48h] [rbp-D0h]
  size_t n[2]; // [rsp+50h] [rbp-C8h]
  void *v38; // [rsp+60h] [rbp-B8h]
  __int128 v39; // [rsp+68h] [rbp-B0h]
  int v40; // [rsp+78h] [rbp-A0h]
  int v41; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v42; // [rsp+D8h] [rbp-40h]

  v3 = a1[23];
  v42 = __readfsqword(0x28u);
  if ( v3 )
  {
    v4 = a1[24];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 80 * i);
        if ( v6[6] )
        {
          v6[7] = 0;
          qfree();
        }
        if ( v6[3] )
        {
          v6[4] = 0;
          qfree();
        }
        if ( *v6 )
        {
          v6[1] = 0;
          qfree();
        }
        v3 = a1[23];
      }
    }
    a1[24] = 0;
    qfree();
    a1[23] = 0;
    a1[25] = 0;
  }
  if ( a2 )
  {
    v7 = a2[1];
    v8 = *a2;
    v33 = a1 + 23;
    v31 = v8 + 24 * v7;
    if ( v31 == v8 )
      return 1;
    while ( 1 )
    {
      dest = nullptr;
      src = nullptr;
      v38 = nullptr;
      v40 = 4;
      v35 = 0;
      *(_OWORD *)n = 0;
      v39 = 0;
      if ( *(_QWORD *)(v8 + 8)
        && (v17 = *(const char **)v8) != nullptr
        && (v18 = strlen(*(const char **)v8), (v19 = v18) != 0)
        && (v20 = v18 + 1,
            v38 = (void *)qvector_reserve(),
            *(_QWORD *)&v39 = v20,
            memmove(v38, v17, v19),
            *((_BYTE *)v38 + v19) = 0,
            v21 = v39,
            (unsigned __int64)v39 > 1) )
      {
        v26 = v38;
        v27 = dest;
        if ( *((_QWORD *)&v35 + 1) < (unsigned __int64)v39 )
        {
          dest = (void *)qvector_reserve();
          v27 = dest;
        }
        *(_QWORD *)&v35 = v21;
        memmove(v27, v26, v21 - 1);
        *((char *)dest + v21 - 1) = 0;
        v40 = 4;
        v30.m128i_i64[1] = v35;
        if ( (_QWORD)v35 )
        {
          v28 = v30.m128i_u64[1];
          v22 = (void *)qalloc_or_throw();
          memcpy(v22, dest, v28);
          goto LABEL_32;
        }
      }
      else
      {
        *(_QWORD *)&v35 = 0;
        v40 = 4;
      }
      v30.m128i_i64[1] = 0;
      v22 = nullptr;
LABEL_32:
      v23 = n[0];
      v24 = nullptr;
      if ( n[0] )
      {
        v24 = (void *)qalloc_or_throw();
        memcpy(v24, src, v23);
      }
      v9 = nullptr;
      v30.m128i_i64[0] = v39;
      if ( (_QWORD)v39 )
      {
        v9 = (void *)qalloc_or_throw();
        memcpy(v9, v38, v30.m128i_u64[0]);
      }
      v10 = v40;
      v11 = a1[24];
      v12 = a1[23];
      v41 = v40;
      if ( a1[25] < (unsigned __int64)(v11 + 1) )
      {
        v32 = v40;
        v25 = qvector_reserve();
        a1[23] = v25;
        v12 = v25;
        v10 = v32;
        v11 = a1[24];
      }
      v13 = _mm_loadl_epi64((const __m128i *)&v30.m128i_u64[1]);
      v14 = 80 * v11 + v12;
      *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v13, v13);
      *(_QWORD *)v14 = v22;
      *(__m128i *)(v14 + 32) = _mm_unpacklo_epi64((__m128i)v23, (__m128i)v23);
      v15 = _mm_loadl_epi64(&v30);
      *(_QWORD *)(v14 + 24) = v24;
      *(_QWORD *)(v14 + 48) = v9;
      v16 = v38;
      *(_DWORD *)(v14 + 72) = v10;
      *(__m128i *)(v14 + 56) = _mm_unpacklo_epi64(v15, v15);
      ++a1[24];
      if ( v16 )
      {
        *(_QWORD *)&v39 = 0;
        qfree();
      }
      if ( src )
      {
        n[0] = 0;
        qfree();
      }
      if ( dest )
      {
        *(_QWORD *)&v35 = 0;
        qfree();
      }
      v8 += 24;
      if ( v31 == v8 )
        return 1;
    }
  }
  return 0;
}

