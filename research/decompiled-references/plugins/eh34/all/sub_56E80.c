void __fastcall sub_56E80(__m128i *src, __m128i *a2)
{
  __m128i *i; // rbx
  __m128i v3; // xmm0
  int v4; // ecx
  __int8 *v5; // rax
  __int8 *v6; // rdx
  __int64 v7; // [rsp+0h] [rbp-30h]

  if ( src != a2 )
  {
    for ( i = (__m128i *)&src->m128i_u64[1]; a2 != i; src->m128i_i64[0] = v3.m128i_i64[0] )
    {
      while ( 1 )
      {
        v3 = _mm_loadl_epi64(i);
        v4 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v3, 229));
        if ( src->m128i_i32[1] < v4 )
          break;
        v5 = &i[-1].m128i_i8[8];
        if ( i[-1].m128i_i32[3] >= v4 )
        {
          i->m128i_i64[0] = v3.m128i_i64[0];
        }
        else
        {
          do
          {
            *((_QWORD *)v5 + 1) = *(_QWORD *)v5;
            v6 = v5;
            v5 -= 8;
          }
          while ( v4 > *((_DWORD *)v5 + 1) );
          *(_QWORD *)v6 = v3.m128i_i64[0];
        }
        i = (__m128i *)((char *)i + 8);
        if ( a2 == i )
          return;
      }
      if ( (char *)i - (char *)src <= 8 )
      {
        if ( (char *)i - (char *)src == 8 )
          i->m128i_i64[0] = src->m128i_i64[0];
      }
      else
      {
        v7 = v3.m128i_i64[0];
        memmove(&src->m128i_u64[1], src, (char *)i - (char *)src);
        v3.m128i_i64[0] = v7;
      }
      i = (__m128i *)((char *)i + 8);
    }
  }
}
