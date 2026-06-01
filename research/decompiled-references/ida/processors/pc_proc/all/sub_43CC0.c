void __fastcall sub_43CC0(__m128i *a1, __int64 *a2, __int64 a3, __int64 (__fastcall *a4)(__int64, __int64))
{
  __int64 v4; // r13
  __int64 *i; // r14
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rbx
  const __m128i *v11; // rbx
  __m128i *v12; // r13
  __int64 *v13; // rsi
  __m128i v14; // xmm0
  __int64 *j; // r13
  __m128i v16; // xmm0
  __int64 v17; // rcx
  __int64 v18; // r8
  __m128i v19; // xmm0
  char v20; // al
  __m128i v21; // xmm0
  char v22; // al
  __m128i v23; // xmm0
  __int64 *v24; // [rsp+8h] [rbp-B0h]

  v4 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
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
      v24 = i - 2;
      v13 = i - 2;
      if ( (unsigned __int8)a4((__int64)a1[1].m128i_i64, (__int64)v12) )
      {
        if ( (unsigned __int8)a4((__int64)v12, (__int64)v13) )
        {
          v14 = _mm_loadu_si128(a1);
          a1->m128i_i64[0] = v12->m128i_i64[0];
          a1->m128i_i32[2] = v12->m128i_i32[2];
          v12->m128i_i64[0] = v14.m128i_i64[0];
          v12->m128i_i32[2] = v14.m128i_i32[2];
        }
        else
        {
          v20 = a4((__int64)a1[1].m128i_i64, (__int64)v24);
          v21 = _mm_loadu_si128(a1);
          if ( v20 )
          {
            a1->m128i_i64[0] = *(i - 2);
            a1->m128i_i32[2] = *((_DWORD *)i - 2);
            *(i - 2) = v21.m128i_i64[0];
            *((_DWORD *)i - 2) = v21.m128i_i32[2];
          }
          else
          {
            a1->m128i_i64[0] = a1[1].m128i_i64[0];
            a1->m128i_i32[2] = a1[1].m128i_i32[2];
            a1[1].m128i_i64[0] = v21.m128i_i64[0];
            a1[1].m128i_i32[2] = v21.m128i_i32[2];
          }
        }
      }
      else if ( (unsigned __int8)a4((__int64)a1[1].m128i_i64, (__int64)v13) )
      {
        v19 = _mm_loadu_si128(a1);
        a1->m128i_i64[0] = a1[1].m128i_i64[0];
        a1->m128i_i32[2] = a1[1].m128i_i32[2];
        a1[1].m128i_i64[0] = v19.m128i_i64[0];
        a1[1].m128i_i32[2] = v19.m128i_i32[2];
      }
      else
      {
        v22 = a4((__int64)v12, (__int64)v24);
        v23 = _mm_loadu_si128(a1);
        if ( v22 )
        {
          a1->m128i_i64[0] = *(i - 2);
          a1->m128i_i32[2] = *((_DWORD *)i - 2);
          *(i - 2) = v23.m128i_i64[0];
          *((_DWORD *)i - 2) = v23.m128i_i32[2];
        }
        else
        {
          a1->m128i_i64[0] = v12->m128i_i64[0];
          a1->m128i_i32[2] = v12->m128i_i32[2];
          v12->m128i_i64[0] = v23.m128i_i64[0];
          v12->m128i_i32[2] = v23.m128i_i32[2];
        }
      }
      for ( j = i; ; *((_DWORD *)j + 2) = v16.m128i_i32[2] )
      {
        while ( (unsigned __int8)a4((__int64)v11, (__int64)a1) )
          ++v11;
        do
          j -= 2;
        while ( (unsigned __int8)a4((__int64)a1, (__int64)j) );
        if ( v11 >= (const __m128i *)j )
          break;
        v16 = _mm_loadu_si128(v11++);
        v11[-1].m128i_i64[0] = *j;
        v11[-1].m128i_i32[2] = *((_DWORD *)j + 2);
        *j = v16.m128i_i64[0];
      }
      v4 = (char *)v11 - (char *)a1;
      sub_43CC0(v11, i, a3, a4);
      if ( (char *)v11 - (char *)a1 <= 256 )
        return;
    }
    do
    {
      --v9;
      sub_43AD0((__int64)a1, v9, v10, a1[v9].m128i_i64[0], a1[v9].m128i_i64[1], a4);
    }
    while ( v9 );
    while ( (char *)i - (char *)a1 > 16 )
    {
      i -= 2;
      v17 = *i;
      v18 = i[1];
      *i = a1->m128i_i64[0];
      *((_DWORD *)i + 2) = a1->m128i_i32[2];
      sub_43AD0((__int64)a1, 0, ((char *)i - (char *)a1) >> 4, v17, v18, a4);
    }
  }
}

