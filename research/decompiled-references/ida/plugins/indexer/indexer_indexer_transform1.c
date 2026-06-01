_QWORD *__fastcall sub_43F4E0(_QWORD *a1, char *a2, char *a3)
{
  char *v4; // rbp
  __m128i *v5; // r13
  __m128i *v6; // r15
  signed __int64 v7; // rdx
  __int64 v8; // rax
  char *v9; // r12
  char *v10; // rbx
  char *v11; // rax
  __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  char *v15; // rax
  char *v16; // rbp
  unsigned __int64 v17; // rbx
  char *v18; // rcx
  char *v19; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  bool v23; // cf
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r12
  __m128i *v26; // r8
  _QWORD *v27; // rax
  __m128i *v28; // rdx
  const __m128i *v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rcx
  unsigned __int64 v32; // r13
  __m128i *v33; // rbx
  __m128i *v34; // rdi
  __m128i *v35; // [rsp+8h] [rbp-70h]
  __m128i *v37; // [rsp+18h] [rbp-60h]

  if ( a3 == a2 )
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
    return a1;
  }
  v4 = a2;
  v5 = 0;
  v6 = 0;
  v35 = 0;
  do
  {
    v7 = a3 - v4;
    v8 = (a3 - v4) >> 2;
    if ( v8 > 0 )
    {
      v9 = &v4[4 * v8];
      v10 = v4;
      while ( !(unsigned __int8)sub_437B00((unsigned int)*v10) )
      {
        if ( (unsigned __int8)sub_437B00((unsigned int)v10[1]) )
        {
          ++v10;
          goto LABEL_10;
        }
        if ( (unsigned __int8)sub_437B00((unsigned int)v10[2]) )
        {
          v10 += 2;
          goto LABEL_10;
        }
        if ( (unsigned __int8)sub_437B00((unsigned int)v10[3]) )
        {
          v10 += 3;
          goto LABEL_10;
        }
        v10 += 4;
        if ( v10 == v9 )
        {
          v7 = a3 - v10;
          goto LABEL_28;
        }
      }
      goto LABEL_10;
    }
    v10 = v4;
LABEL_28:
    if ( v7 == 2 )
      goto LABEL_37;
    if ( v7 == 3 )
    {
      if ( (unsigned __int8)sub_437B00((unsigned int)*v10) )
        goto LABEL_10;
      ++v10;
LABEL_37:
      if ( (unsigned __int8)sub_437B00((unsigned int)*v10) )
        goto LABEL_10;
      ++v10;
      goto LABEL_39;
    }
    if ( v7 != 1 )
    {
      if ( a3 == v4 )
        break;
LABEL_32:
      if ( v35 != v5 )
      {
        v5->m128i_i64[1] = (__int64)a3;
        v5 = (__m128i *)((char *)v5 + 24);
        v5[-2].m128i_i64[1] = (__int64)v4;
        v5[-1].m128i_i64[1] = a3 - v4;
        if ( v6 != v5 )
          goto LABEL_16;
LABEL_34:
        v16 = 0;
        v18 = 0;
        v19 = 0;
        v17 = (char *)v35 - (char *)v6;
        goto LABEL_21;
      }
      v10 = a3;
      goto LABEL_43;
    }
LABEL_39:
    if ( !(unsigned __int8)sub_437B00((unsigned int)*v10) )
    {
      if ( a3 == v4 )
        break;
      goto LABEL_32;
    }
LABEL_10:
    if ( v10 == v4 )
      goto LABEL_13;
    if ( v35 != v5 )
    {
      v5->m128i_i64[0] = (__int64)v4;
      v5 = (__m128i *)((char *)v5 + 24);
      v5[-1].m128i_i64[0] = (__int64)v10;
      v11 = (char *)(v10 - v4);
      v4 = v10;
      v5[-1].m128i_i64[1] = (__int64)v11;
      goto LABEL_13;
    }
LABEL_43:
    v21 = 0xAAAAAAAAAAAAAAABLL * (((char *)v5 - (char *)v6) >> 3);
    if ( v21 == 0x555555555555555LL )
      std::__throw_length_error("vector::_M_realloc_append");
    v22 = 1;
    if ( v21 )
      v22 = 0xAAAAAAAAAAAAAAABLL * (((char *)v5 - (char *)v6) >> 3);
    v23 = __CFADD__(v22, v21);
    v24 = v22 - 0x5555555555555555LL * (((char *)v5 - (char *)v6) >> 3);
    if ( v23 )
    {
      v25 = 0x7FFFFFFFFFFFFFF8LL;
    }
    else
    {
      if ( v24 > 0x555555555555555LL )
        v24 = 0x555555555555555LL;
      v25 = 24 * v24;
    }
    v26 = (__m128i *)operator new(v25);
    v27 = (__int64 *)((char *)v26->m128i_i64 + (char *)v5 - (char *)v6);
    *v27 = v4;
    v27[1] = v10;
    v27[2] = v10 - v4;
    if ( v6 == v5 )
    {
      v32 = (unsigned __int64)v26;
    }
    else
    {
      v28 = v26;
      v29 = v6;
      do
      {
        v30 = _mm_loadu_si128(v29);
        v31 = v29[1].m128i_i64[0];
        v29 = (const __m128i *)((char *)v29 + 24);
        v28 = (__m128i *)((char *)v28 + 24);
        *(__m128i *)((char *)v28 - 24) = v30;
        v28[-1].m128i_i64[1] = v31;
      }
      while ( v29 != v5 );
      v32 = (unsigned __int64)&v26[1].m128i_u64[((unsigned __int64)((char *)&v29[-2].m128i_u64[1] - (char *)v6) >> 3)
                                              + 1];
    }
    v5 = (__m128i *)(v32 + 24);
    if ( v6 )
    {
      v37 = v26;
      operator delete(v6, (char *)v35 - (char *)v6);
      v26 = v37;
    }
    v4 = v10;
    v6 = v26;
    v35 = (__m128i *)((char *)v26 + v25);
LABEL_13:
    if ( a3 == v4 )
      break;
    ++v4;
  }
  while ( v4 != a3 );
  if ( v6 == v5 )
    goto LABEL_34;
LABEL_16:
  v12 = (char *)v5 - (char *)v6;
  v13 = 0xAAAAAAAAAAAAAAABLL * (((char *)v5 - (char *)v6) >> 3);
  v14 = -2;
  if ( v13 )
  {
    _BitScanReverse64(&v13, v13);
    v14 = 2LL * (int)v13;
  }
  sub_43A740(v6, v5, v14);
  if ( v12 > 384 )
  {
    v33 = v6 + 24;
    sub_439310(v6);
    if ( v5 != &v6[24] )
    {
      do
      {
        v34 = v33;
        v33 = (__m128i *)((char *)v33 + 24);
        sub_438B20(v34, &v6[24]);
      }
      while ( v5 != v33 );
    }
  }
  else
  {
    sub_439310(v6);
    if ( (unsigned __int64)v12 > 0x7FFFFFFFFFFFFFF8LL )
      sub_2EBB38(v6, v5);
  }
  v15 = (char *)operator new((char *)v5 - (char *)v6);
  v16 = &v15[v12];
  v17 = (char *)v35 - (char *)v6;
  v18 = (char *)memcpy(v15, v6, 8 * ((unsigned __int64)((char *)&v5[-2].m128i_u64[1] - (char *)v6) >> 3) + 24);
  v19 = &v18[8 * ((unsigned __int64)((char *)&v5[-2].m128i_u64[1] - (char *)v6) >> 3) + 24];
LABEL_21:
  *a1 = v18;
  a1[1] = v19;
  a1[2] = v16;
  if ( v6 )
    operator delete(v6, v17);
  return a1;
}
