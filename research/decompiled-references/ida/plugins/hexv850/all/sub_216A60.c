__int64 __fastcall sub_216A60(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r12
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  size_t v13; // r12
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 *v16; // r15
  __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rsi
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __int64 v23; // rax
  void *v24; // [rsp+0h] [rbp-68h]
  __m128i v25; // [rsp+8h] [rbp-60h] BYREF
  __int64 v26; // [rsp+18h] [rbp-50h]
  __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)(a3 + 8);
  v24 = nullptr;
  v25.m128i_i64[0] = v4;
  if ( v4 )
  {
    v13 = 4 * v4;
    v24 = (void *)qalloc_or_throw();
    memcpy(v24, *(const void **)a3, v13);
  }
  v5 = a1[5];
  v26 = *(_QWORD *)(a3 + 24);
  v25.m128i_i8[15] = *(_BYTE *)(a3 + 32);
  v27 = *(_QWORD *)(a3 + 40);
  v25.m128i_i8[14] = *(_BYTE *)(a3 + 48);
  v6 = a1[4];
  if ( v5 < v6 + 1 )
  {
    v7 = qvector_reserve();
    v14 = a1[4];
    v15 = a1[5];
    a1[5] = v5;
    v16 = (__int64 *)a1[3];
    v28 = v15;
    v17 = v14 - 1;
    if ( v17 >= 0 )
    {
      v18 = v7;
      do
      {
        v19 = *v16;
        v20 = _mm_loadu_si128((const __m128i *)(v16 + 1));
        *v16 = 0;
        v16[2] = 0;
        *(_QWORD *)v18 = v19;
        *(__m128i *)(v18 + 8) = v20;
        v21 = _mm_loadu_si128((const __m128i *)(v16 + 3));
        *(_QWORD *)(v18 + 40) = v16[5];
        LOBYTE(v19) = *((_BYTE *)v16 + 48);
        *(__m128i *)(v18 + 24) = v21;
        *(_BYTE *)(v18 + 48) = v19;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree();
        }
        v16 += 7;
        v18 += 56;
      }
      while ( v17-- != 0 );
    }
    qfree();
    v23 = v28;
    a1[3] = v7;
    a1[5] = v23;
    v6 = a1[4];
  }
  else
  {
    v7 = a1[3];
  }
  v8 = _mm_loadl_epi64(&v25);
  v9 = v7 + 56 * v6;
  *(_QWORD *)v9 = v24;
  v10 = v26;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v8, v8);
  *(_QWORD *)(v9 + 24) = v10;
  *(_BYTE *)(v9 + 32) = v25.m128i_i8[15];
  *(_QWORD *)(v9 + 40) = v27;
  *(_BYTE *)(v9 + 48) = v25.m128i_i8[14];
  v11 = a1[2];
  ++a1[4];
  sub_FF1A0(a3, v11, (__int64)(a1 + 6));
  return 0;
}

