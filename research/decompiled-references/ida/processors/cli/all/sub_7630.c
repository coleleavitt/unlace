__int64 __fastcall sub_7630(__int64 a1, __int64 a2, unsigned int a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rsi
  __m128 v8; // xmm0
  unsigned __int8 *v9; // rbp
  __int64 v10; // r12
  __int64 v11; // rax
  void *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm0
  void *v18; // rdx
  __m128i v19; // xmm1
  unsigned __int8 *v20; // rsi
  unsigned __int64 v21; // xmm2_8
  __int64 v22; // rbp
  __int64 v23; // r12
  size_t v24; // r13
  __int64 v25; // rbp
  unsigned __int64 v26; // r12
  __int64 v27; // r13
  _BYTE *v28; // rsi
  __int64 v29; // rax
  int v30; // r8d
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  void *src; // [rsp+10h] [rbp-478h] BYREF
  __m128i v37; // [rsp+18h] [rbp-470h] BYREF
  unsigned __int8 *v38; // [rsp+30h] [rbp-458h] BYREF
  __m128i v39; // [rsp+38h] [rbp-450h] BYREF
  _BYTE v40[1032]; // [rsp+50h] [rbp-438h] BYREF
  unsigned __int64 v41; // [rsp+458h] [rbp-30h]

  v41 = __readfsqword(0x28u);
  v7 = *(_QWORD *)(a2 + 616);
  v37 = 0;
  src = nullptr;
  if ( (a3 & 0xFF000000) != 0x1B000000 )
  {
    sub_4E10((__int64 *)&v38, v7, a3);
    v8 = (__m128)_mm_loadu_si128(&v39);
    v9 = v38;
    v39 = 0;
    v38 = nullptr;
    v10 = v8.m128_u64[0];
    src = v9;
    v37 = (__m128i)v8;
    if ( v8.m128_u64[0] <= 1 )
    {
LABEL_3:
      v11 = v37.m128i_i64[1];
      goto LABEL_4;
    }
    v10 = v37.m128i_i64[0];
    if ( (unsigned __int8)is_ident(v9) )
    {
      v9 = (unsigned __int8 *)src;
      v11 = v37.m128i_i64[1];
      goto LABEL_4;
    }
    v13 = &unk_15584;
    v38 = nullptr;
    v39 = 0;
    if ( v37.m128i_i64[0] )
      v13 = src;
    idb_utf8(&v38, v13, 0xFFFFFFFFLL, 1);
    v17 = (__m128)_mm_loadu_si128(&v39);
    v18 = src;
    v19 = _mm_loadu_si128(&v37);
    v20 = v38;
    v21 = _mm_movehl_ps(a6, v17).m128_u64[0];
    v22 = v17.m128_u64[0];
    v38 = (unsigned __int8 *)src;
    src = v20;
    v37 = (__m128i)v17;
    v39 = v19;
    if ( v17.m128_u64[0] )
    {
      v23 = v17.m128_u64[0] + 1;
      v24 = v17.m128_u64[0] - 1;
      if ( v21 >= v17.m128_u64[0] + 1 )
        goto LABEL_12;
    }
    else
    {
      if ( v21 > 1 )
      {
        v37.m128i_i64[0] = 2;
        v20[1] = 0;
LABEL_14:
        *(_BYTE *)src = 39;
        v25 = v37.m128i_i64[0];
        if ( v37.m128i_i64[0] )
        {
          v26 = v37.m128i_i64[0] + 1;
          v27 = v37.m128i_i64[0];
          v25 = v37.m128i_i64[0] - 1;
        }
        else
        {
          v26 = 2;
          v27 = 1;
        }
        v28 = src;
        if ( v37.m128i_i64[1] < v26 )
        {
          src = (void *)qvector_reserve(&src, src, v26, 1);
          v28 = src;
        }
        v37.m128i_i64[0] = v26;
        v28[v27] = 0;
        *((_BYTE *)src + v25) = 39;
        if ( v38 )
        {
          v39.m128i_i64[0] = 0;
          qfree(v38, v28, v18, v14, v15, v16);
        }
        v9 = (unsigned __int8 *)src;
        v10 = v37.m128i_i64[0];
        goto LABEL_3;
      }
      v24 = 0;
      v23 = 2;
      v22 = 1;
    }
    src = (void *)qvector_reserve(&src, v20, v23, 1);
    v20 = (unsigned __int8 *)src;
LABEL_12:
    v37.m128i_i64[0] = v23;
    v20[v22] = 0;
    if ( v24 )
      memmove((char *)src + 1, src, v24);
    goto LABEL_14;
  }
  v38 = nullptr;
  v29 = netnode_supval(*(_QWORD *)(v7 + 144), a3, v40, 1024, 100);
  if ( v29 < 0 )
  {
    *(_QWORD *)a1 = 0;
    *(_OWORD *)(a1 + 8) = 0;
    return a1;
  }
  v38 = v40;
  v31 = sub_65F0(a2, (__int64 *)&src, &v38, (unsigned __int64)&v40[v29], v30);
  v9 = (unsigned __int8 *)src;
  if ( v31 || !src )
  {
    v11 = v37.m128i_i64[1];
  }
  else
  {
    v37.m128i_i64[0] = 0;
    qfree(src, &src, v32, v33, v34, v35);
    v11 = 0;
    v9 = nullptr;
  }
  v10 = v37.m128i_i64[0];
LABEL_4:
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v10;
  *(_QWORD *)(a1 + 16) = v11;
  return a1;
}

