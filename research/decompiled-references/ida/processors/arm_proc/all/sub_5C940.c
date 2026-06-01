void __fastcall sub_5C940(
        __m128i *a1,
        __m128i *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, __int64),
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __m128i *i; // r13
  const __m128i *v10; // rbx
  __m128i *v11; // r14
  __m128i *v12; // rsi
  __m128i v13; // xmm0
  __int64 v14; // rdx
  __int32 v15; // eax
  __m128i *j; // r14
  __m128i v17; // xmm0
  __int64 v18; // rdx
  __int32 v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __m128i v24; // xmm0
  __int64 v25; // rdx
  __int32 v26; // eax
  __m128i v27; // xmm1
  char v28; // al
  __m128i v29; // xmm0
  __int64 v30; // rcx
  __int32 v31; // edx
  char v32; // al
  __m128i v33; // xmm1
  __m128i v34; // xmm1
  __m128i *v35; // [rsp+28h] [rbp-60h]

  v6 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 512 )
  {
    v7 = a3;
    for ( i = a2; v7; i = (__m128i *)v10 )
    {
      v10 = a1 + 2;
      --v7;
      v35 = i - 2;
      v11 = &a1[2 * (v6 >> 6)];
      v12 = i - 2;
      if ( (unsigned __int8)a4((__int64)a1[2].m128i_i64, (__int64)v11) )
      {
        if ( !(unsigned __int8)a4((__int64)v11, (__int64)v12) )
        {
          v28 = a4((__int64)a1[2].m128i_i64, (__int64)v35);
          v29 = _mm_loadu_si128(a1);
          v30 = a1[1].m128i_i64[0];
          v31 = a1[1].m128i_i32[2];
          if ( !v28 )
          {
            v33 = _mm_loadu_si128(a1 + 2);
            a1[2] = v29;
            *a1 = v33;
            v34 = _mm_loadu_si128(a1 + 3);
            a1[3].m128i_i64[0] = v30;
            a1[3].m128i_i32[2] = v31;
            a1[1] = v34;
            goto LABEL_6;
          }
LABEL_20:
          *a1 = _mm_loadu_si128(i - 2);
          a1[1] = _mm_loadu_si128(i - 1);
          i[-1].m128i_i64[0] = v30;
          i[-1].m128i_i32[2] = v31;
          i[-2] = v29;
          goto LABEL_6;
        }
        v13 = _mm_loadu_si128(a1);
        v14 = a1[1].m128i_i64[0];
        v15 = a1[1].m128i_i32[2];
        *a1 = _mm_loadu_si128(v11);
        a1[1] = _mm_loadu_si128(v11 + 1);
        v11[1].m128i_i64[0] = v14;
        v11[1].m128i_i32[2] = v15;
        *v11 = v13;
      }
      else
      {
        if ( !(unsigned __int8)a4((__int64)a1[2].m128i_i64, (__int64)v12) )
        {
          v32 = a4((__int64)v11, (__int64)v35);
          v29 = _mm_loadu_si128(a1);
          v30 = a1[1].m128i_i64[0];
          v31 = a1[1].m128i_i32[2];
          if ( !v32 )
          {
            *a1 = _mm_loadu_si128(v11);
            a1[1] = _mm_loadu_si128(v11 + 1);
            v11[1].m128i_i64[0] = v30;
            v11[1].m128i_i32[2] = v31;
            *v11 = v29;
            goto LABEL_6;
          }
          goto LABEL_20;
        }
        v24 = _mm_loadu_si128(a1);
        v25 = a1[1].m128i_i64[0];
        v26 = a1[1].m128i_i32[2];
        *a1 = _mm_loadu_si128(a1 + 2);
        v27 = _mm_loadu_si128(a1 + 3);
        a1[2] = v24;
        a1[3].m128i_i64[0] = v25;
        a1[3].m128i_i32[2] = v26;
        a1[1] = v27;
      }
LABEL_6:
      for ( j = i; ; *j = v17 )
      {
        while ( (unsigned __int8)a4((__int64)v10, (__int64)a1) )
          v10 += 2;
        do
          j -= 2;
        while ( (unsigned __int8)a4((__int64)a1, (__int64)j) );
        if ( v10 >= j )
          break;
        v17 = _mm_loadu_si128(v10);
        v10 += 2;
        v18 = v10[-1].m128i_i64[0];
        v19 = v10[-1].m128i_i32[2];
        v10[-2] = _mm_loadu_si128(j);
        v10[-1] = _mm_loadu_si128(j + 1);
        j[1].m128i_i64[0] = v18;
        j[1].m128i_i32[2] = v19;
      }
      v6 = (char *)v10 - (char *)a1;
      sub_5C940(v10, i, v7, a4);
      if ( (char *)v10 - (char *)a1 <= 512 )
        return;
    }
    sub_5C810(a1, i, (unsigned __int64)i, a4, a5, a6);
    while ( (char *)i - (char *)a1 > 32 )
    {
      i -= 2;
      v22 = (__int128)_mm_loadu_si128(i);
      *i = _mm_loadu_si128(a1);
      v23 = (__int128)_mm_loadu_si128(i + 1);
      i[1] = _mm_loadu_si128(a1 + 1);
      sub_5C5F0((__int64)a1, 0, ((char *)i - (char *)a1) >> 5, a4, v20, v21, v22, v23);
    }
  }
}

