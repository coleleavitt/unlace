void __fastcall std::vector<std::sub_match<char const*>>::operator=(__int64 *a1, const __m128i **a2)
{
  const __m128i *v2; // r8
  const __m128i *v3; // rdx
  char *v5; // r11
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  char *v9; // rax
  __m128i v10; // xmm0
  __int8 v11; // cl
  __int64 v12; // rax
  const __m128i *v13; // rdx
  signed __int64 v14; // r10
  __int64 v15; // rcx
  __int64 *i; // r9
  __m128i v17; // xmm0
  __int64 v18; // r10
  const __m128i *v19; // rax
  char *v20; // rsi
  __m128i v21; // xmm0
  __int8 v22; // di
  __m128i v23; // xmm0
  signed __int64 v24; // [rsp+0h] [rbp-38h]
  const __m128i *v25; // [rsp+8h] [rbp-30h]
  __int64 v26; // [rsp+8h] [rbp-30h]
  void *v27; // [rsp+10h] [rbp-28h]
  const __m128i *v28; // [rsp+20h] [rbp-18h]

  if ( a2 != (const __m128i **)a1 )
  {
    v2 = a2[1];
    v3 = *a2;
    v5 = (char *)*a1;
    v6 = (char *)v2 - (char *)v3;
    v7 = a1[2] - *a1;
    if ( v7 < (char *)v2 - (char *)v3 )
    {
      v28 = v3;
      v27 = (void *)*a1;
      v25 = v2;
      v24 = (char *)v2 - (char *)v3;
      v12 = operator new((char *)v2 - (char *)v3);
      v13 = v28;
      v14 = v24;
      v15 = v12;
      for ( i = a1; v25 != v13; *(_QWORD *)(v12 - 8) = v13[-1].m128i_i64[1] )
      {
        v17 = _mm_loadu_si128(v13);
        v13 = (const __m128i *)((char *)v13 + 24);
        v12 += 24;
        *(__m128i *)(v12 - 24) = v17;
      }
      if ( v27 )
      {
        v26 = v15;
        operator delete(v27, v7);
        i = a1;
        v15 = v26;
        v14 = v24;
      }
      v18 = v15 + v14;
      *i = v15;
      i[2] = v18;
      i[1] = v18;
    }
    else
    {
      v8 = a1[1];
      if ( v8 - (__int64)v5 >= v6 )
      {
        if ( v2 != v3 )
        {
          v9 = (char *)*a1;
          do
          {
            v10 = _mm_loadu_si128(v3);
            v11 = v3[1].m128i_i8[0];
            v3 = (const __m128i *)((char *)v3 + 24);
            v9 += 24;
            *(__m128i *)(v9 - 24) = v10;
            *(v9 - 8) = v11;
          }
          while ( v2 != v3 );
        }
LABEL_7:
        a1[1] = (__int64)&v5[v6];
        return;
      }
      v19 = (const __m128i *)((char *)v3 + v8 - (_QWORD)v5);
      v20 = (char *)*a1;
      if ( v3 == v19 )
        goto LABEL_18;
      do
      {
        v21 = _mm_loadu_si128(v3);
        v22 = v3[1].m128i_i8[0];
        v3 = (const __m128i *)((char *)v3 + 24);
        v20 += 24;
        *(__m128i *)(v20 - 24) = v21;
        *(v20 - 8) = v22;
      }
      while ( v19 != v3 );
      if ( v2 == v19 )
        goto LABEL_7;
      do
      {
        v23 = _mm_loadu_si128(v19);
        v8 += 24;
        v19 = (const __m128i *)((char *)v19 + 24);
        *(__m128i *)(v8 - 24) = v23;
        *(_QWORD *)(v8 - 8) = v19[-1].m128i_i64[1];
LABEL_18:
        ;
      }
      while ( v2 != v19 );
      a1[1] = (__int64)&v5[v6];
    }
  }
}

