void __fastcall std::vector<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>::operator=(
        __int64 *a1,
        const __m128i **a2)
{
  const __m128i *v2; // r8
  const __m128i *v3; // rdx
  char *v5; // r11
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  const __m128i *v12; // rdx
  signed __int64 v13; // r10
  __int64 v14; // rcx
  __int64 *i; // r9
  __m128i v16; // xmm0
  __int64 v17; // r10
  const __m128i *v18; // rax
  char *v19; // rcx
  __int64 v20; // rdi
  __m128i v21; // xmm0
  signed __int64 v22; // [rsp+0h] [rbp-38h]
  const __m128i *v23; // [rsp+8h] [rbp-30h]
  __int64 v24; // [rsp+8h] [rbp-30h]
  void *v25; // [rsp+10h] [rbp-28h]
  const __m128i *v26; // [rsp+20h] [rbp-18h]

  if ( a2 != (const __m128i **)a1 )
  {
    v2 = a2[1];
    v3 = *a2;
    v5 = (char *)*a1;
    v6 = (char *)v2 - (char *)v3;
    v7 = a1[2] - *a1;
    if ( v7 < (char *)v2 - (char *)v3 )
    {
      v26 = v3;
      v25 = (void *)*a1;
      v23 = v2;
      v22 = (char *)v2 - (char *)v3;
      v11 = operator new((char *)v2 - (char *)v3);
      v12 = v26;
      v13 = v22;
      v14 = v11;
      for ( i = a1; v23 != v12; *(_QWORD *)(v11 - 8) = v12[-1].m128i_i64[1] )
      {
        v16 = _mm_loadu_si128(v12);
        v12 = (const __m128i *)((char *)v12 + 24);
        v11 += 24;
        *(__m128i *)(v11 - 24) = v16;
      }
      if ( v25 )
      {
        v24 = v14;
        operator delete(v25, v7);
        i = a1;
        v14 = v24;
        v13 = v22;
      }
      v17 = v14 + v13;
      *i = v14;
      i[2] = v17;
      i[1] = v17;
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
            v10 = v3->m128i_i64[0];
            v3 = (const __m128i *)((char *)v3 + 24);
            v9 += 24;
            *((_QWORD *)v9 - 3) = v10;
            *((_QWORD *)v9 - 2) = v3[-1].m128i_i64[0];
            *(v9 - 8) = v3[-1].m128i_i8[8];
          }
          while ( v2 != v3 );
        }
LABEL_7:
        a1[1] = (__int64)&v5[v6];
        return;
      }
      v18 = (const __m128i *)((char *)v3 + v8 - (_QWORD)v5);
      v19 = (char *)*a1;
      if ( v3 == v18 )
        goto LABEL_18;
      do
      {
        v20 = v3->m128i_i64[0];
        v3 = (const __m128i *)((char *)v3 + 24);
        v19 += 24;
        *((_QWORD *)v19 - 3) = v20;
        *((_QWORD *)v19 - 2) = v3[-1].m128i_i64[0];
        *(v19 - 8) = v3[-1].m128i_i8[8];
      }
      while ( v18 != v3 );
      if ( v2 == v18 )
        goto LABEL_7;
      do
      {
        v21 = _mm_loadu_si128(v18);
        v8 += 24;
        v18 = (const __m128i *)((char *)v18 + 24);
        *(__m128i *)(v8 - 24) = v21;
        *(_QWORD *)(v8 - 8) = v18[-1].m128i_i64[1];
LABEL_18:
        ;
      }
      while ( v2 != v18 );
      a1[1] = (__int64)&v5[v6];
    }
  }
}

