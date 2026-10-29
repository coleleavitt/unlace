__int64 __fastcall sub_1CB030(_QWORD *a1)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  __m128i v5; // [rsp+0h] [rbp-58h]

  v5 = 0;
  if ( *a1 )
  {
    if ( (unsigned __int8)func_tail_iterator_set() )
      goto LABEL_3;
    return 1;
  }
  else
  {
    v3 = a1[1];
    v4 = v3 + 16LL * a1[2];
    v5 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v4);
    if ( v3 == v4 )
    {
      return 1;
    }
    else
    {
LABEL_3:
      while ( auto_wait_range() != -1 )
      {
        if ( !v5.m128i_i64[0] )
          return 1;
        v5.m128i_i64[0] += 16;
        if ( v5.m128i_i64[0] == v5.m128i_i64[1] )
          return 1;
      }
      return 0;
    }
  }
}

