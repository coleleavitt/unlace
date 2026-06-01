signed __int64 __fastcall sub_358D10(__m128i *a1, __m128i *a2, __int64 a3)
{
  signed __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  __m128i *i; // r12
  __int32 v9; // r8d
  __m128i *v10; // rax
  __m128i *v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int64 *v15; // rdx
  __m128i v16; // xmm0
  unsigned __int64 *v17; // rsi
  __m128i *v18; // rax
  unsigned __int64 j; // rcx
  unsigned __int64 *v20; // rsi
  __int32 v21; // ecx
  __int64 k; // rbx
  _QWORD *v23; // rcx
  __int64 v24; // r8

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 256 )
  {
    v4 = result >> 5;
    v5 = a3;
    v6 = a2 - a1;
    for ( i = a2; v5; v6 = v11 - a1 )
    {
      v9 = a1->m128i_i32[2];
      --v5;
      v10 = &a1[v4];
      v11 = a1 + 1;
      v12 = *(_QWORD *)a1[1].m128i_i64[0];
      v13 = *(_QWORD *)v10->m128i_i64[0];
      v14 = *(_QWORD *)i[-1].m128i_i64[0];
      v15 = (unsigned __int64 *)a1->m128i_i64[0];
      if ( v12 >= v13 )
      {
        if ( v12 >= v14 )
        {
          if ( v13 >= v14 )
          {
LABEL_25:
            *a1 = _mm_loadu_si128(v10);
            v10->m128i_i64[0] = (__int64)v15;
            v10->m128i_i32[2] = v9;
            v15 = (unsigned __int64 *)a1[1].m128i_i64[0];
            v17 = (unsigned __int64 *)i[-1].m128i_i64[0];
            goto LABEL_7;
          }
LABEL_16:
          v17 = (unsigned __int64 *)a1->m128i_i64[0];
          *a1 = _mm_loadu_si128(i - 1);
          i[-1].m128i_i64[0] = (__int64)v15;
          i[-1].m128i_i32[2] = v9;
          v15 = (unsigned __int64 *)a1[1].m128i_i64[0];
          goto LABEL_7;
        }
      }
      else
      {
        if ( v13 < v14 )
          goto LABEL_25;
        if ( v12 < v14 )
          goto LABEL_16;
      }
      v16 = _mm_loadu_si128(a1 + 1);
      a1[1].m128i_i64[0] = (__int64)v15;
      a1[1].m128i_i32[2] = v9;
      *a1 = v16;
      v17 = (unsigned __int64 *)i[-1].m128i_i64[0];
LABEL_7:
      v18 = i;
      while ( 1 )
      {
        for ( j = *(_QWORD *)a1->m128i_i64[0]; *v15 < j; ++v11 )
          v15 = (unsigned __int64 *)v11[1].m128i_i64[0];
        --v18;
        if ( j < *v17 )
        {
          do
          {
            v20 = (unsigned __int64 *)v18[-1].m128i_i64[0];
            --v18;
          }
          while ( j < *v20 );
        }
        if ( v11 >= v18 )
          break;
        v21 = v11->m128i_i32[2];
        ++v11;
        v11[-1] = _mm_loadu_si128(v18);
        v17 = (unsigned __int64 *)v18[-1].m128i_i64[0];
        v18->m128i_i64[0] = (__int64)v15;
        v18->m128i_i32[2] = v21;
        v15 = (unsigned __int64 *)v11->m128i_i64[0];
      }
      sub_358D10(v11, i, v5);
      result = (char *)v11 - (char *)a1;
      if ( (char *)v11 - (char *)a1 <= 256 )
        return result;
      i = v11;
      v4 = result >> 5;
    }
    for ( k = v4 - 1; ; --k )
    {
      sub_358AA0((__int64)a1, k, v6, (_QWORD *)a1[k].m128i_i64[0], a1[k].m128i_i64[1]);
      if ( !k )
        break;
    }
    for ( result = (char *)i - (char *)a1;
          (char *)i - (char *)a1 > 16;
          result = (signed __int64)sub_358AA0((__int64)a1, 0, i - a1, v23, v24) )
    {
      --i;
      v23 = (_QWORD *)i->m128i_i64[0];
      v24 = i->m128i_i64[1];
      *i = _mm_loadu_si128(a1);
    }
  }
  return result;
}

