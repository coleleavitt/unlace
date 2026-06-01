void __fastcall sub_1D9C0(__m128i *a1, __int64 *a2, __int64 a3, __int64 (__fastcall *a4)(__int64, __int64))
{
  __int64 v4; // r13
  __int64 *i; // r14
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rbx
  __m128i *v11; // rbx
  __m128i *v12; // r13
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int32 v15; // eax
  __m128i *j; // r13
  __int64 v17; // rdx
  __int32 v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  __m128i v21; // xmm0
  __int32 v22; // eax
  char v23; // al
  __int64 v24; // rcx
  __int32 v25; // edx
  char v26; // al
  __m128i v27; // xmm0
  __int64 *v28; // [rsp+8h] [rbp-40h]

  v4 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 256 )
    return;
  for ( i = a2; ; i = (__int64 *)v11 )
  {
    v8 = v4;
    v9 = v4 >> 5;
    v10 = v8 >> 4;
    if ( !a3 )
      break;
    v11 = a1 + 1;
    --a3;
    v12 = &a1[v9];
    v28 = i - 2;
    v13 = i - 2;
    if ( (unsigned __int8)a4((__int64)a1[1].m128i_i64, (__int64)v12) )
    {
      if ( !(unsigned __int8)a4((__int64)v12, (__int64)v13) )
      {
        v23 = a4((__int64)a1[1].m128i_i64, (__int64)v28);
        v24 = a1->m128i_i64[0];
        v25 = a1->m128i_i32[2];
        if ( !v23 )
        {
          v27 = _mm_loadu_si128(a1 + 1);
          a1[1].m128i_i64[0] = v24;
          a1[1].m128i_i32[2] = v25;
          *a1 = v27;
          goto LABEL_7;
        }
LABEL_22:
        *a1 = _mm_loadu_si128((const __m128i *)i - 1);
        *(i - 2) = v24;
        *((_DWORD *)i - 2) = v25;
        goto LABEL_7;
      }
      v14 = a1->m128i_i64[0];
      v15 = a1->m128i_i32[2];
      *a1 = _mm_loadu_si128(v12);
      v12->m128i_i64[0] = v14;
      v12->m128i_i32[2] = v15;
    }
    else
    {
      if ( !(unsigned __int8)a4((__int64)a1[1].m128i_i64, (__int64)v13) )
      {
        v26 = a4((__int64)v12, (__int64)v28);
        v24 = a1->m128i_i64[0];
        v25 = a1->m128i_i32[2];
        if ( !v26 )
        {
          *a1 = _mm_loadu_si128(v12);
          v12->m128i_i64[0] = v24;
          v12->m128i_i32[2] = v25;
          goto LABEL_7;
        }
        goto LABEL_22;
      }
      v21 = _mm_loadu_si128(a1 + 1);
      v22 = a1->m128i_i32[2];
      a1[1].m128i_i64[0] = a1->m128i_i64[0];
      a1[1].m128i_i32[2] = v22;
      *a1 = v21;
    }
LABEL_7:
    for ( j = (__m128i *)i; ; j->m128i_i32[2] = v18 )
    {
      while ( (unsigned __int8)a4((__int64)v11, (__int64)a1) )
        ++v11;
      do
        --j;
      while ( (unsigned __int8)a4((__int64)a1, (__int64)j) );
      if ( v11 >= j )
        break;
      v17 = v11->m128i_i64[0];
      v18 = v11->m128i_i32[2];
      ++v11;
      v11[-1] = _mm_loadu_si128(j);
      j->m128i_i64[0] = v17;
    }
    v4 = (char *)v11 - (char *)a1;
    sub_1D9C0(v11, i, a3, a4);
    if ( (char *)v11 - (char *)a1 <= 256 )
      return;
  }
  do
  {
    --v9;
    sub_1D7D0((__int64)a1, v9, v10, a1[v9].m128i_i64[0], a1[v9].m128i_i64[1], a4);
  }
  while ( v9 );
  while ( (char *)i - (char *)a1 > 16 )
  {
    i -= 2;
    v19 = *i;
    v20 = i[1];
    *(__m128i *)i = _mm_loadu_si128(a1);
    sub_1D7D0((__int64)a1, 0, ((char *)i - (char *)a1) >> 4, v19, v20, a4);
  }
}

