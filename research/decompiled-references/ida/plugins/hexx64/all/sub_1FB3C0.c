__int64 __fastcall sub_1FB3C0(__m128i *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  signed __int64 v6; // r14
  int *i; // r12
  __m128i v9; // xmm0
  __int32 *v10; // rdi
  __m128i *v11; // rbx
  __int32 v12; // eax
  __int32 v13; // esi
  int v14; // ecx
  __int64 v15; // xmm1_8
  int v16; // edx
  int v17; // esi
  __m128i *j; // rax
  __int64 k; // rbx
  int v20; // ecx

  result = a2 - (char *)a1;
  if ( a2 - (char *)a1 > 64 )
  {
    v4 = result >> 3;
    v5 = a3;
    v6 = (a2 - (char *)a1) >> 2;
    for ( i = (int *)a2; v5; v6 = ((char *)v11 - (char *)a1) >> 2 )
    {
      v9 = _mm_loadl_epi64(a1);
      v10 = &a1->m128i_i32[v4];
      --v5;
      v11 = (__m128i *)((char *)a1->m128i_i64 + 4);
      v12 = *v10;
      v13 = *(i - 1);
      v14 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v9, 229));
      v15 = _mm_shuffle_epi32(v9, 225).m128i_u64[0];
      v16 = _mm_cvtsi128_si32(v9);
      if ( v14 >= *v10 )
      {
        if ( v14 >= v13 )
        {
          if ( v12 >= v13 )
          {
LABEL_25:
            a1->m128i_i32[0] = v12;
            *v10 = v16;
            v16 = a1->m128i_i32[1];
            v14 = a1->m128i_i32[0];
            v17 = *(i - 1);
            goto LABEL_7;
          }
LABEL_16:
          a1->m128i_i32[0] = v13;
          v17 = v16;
          *(i - 1) = v16;
          v14 = a1->m128i_i32[0];
          v16 = a1->m128i_i32[1];
          goto LABEL_7;
        }
      }
      else
      {
        if ( v12 < v13 )
          goto LABEL_25;
        if ( v14 < v13 )
          goto LABEL_16;
      }
      a1->m128i_i64[0] = v15;
      v17 = *(i - 1);
LABEL_7:
      j = (__m128i *)i;
      while ( 1 )
      {
        while ( v16 < v14 )
        {
          v16 = v11->m128i_i32[1];
          v11 = (__m128i *)((char *)v11 + 4);
        }
        for ( j = (__m128i *)((char *)j - 4); v17 > v14; j = (__m128i *)((char *)j - 4) )
          v17 = j[-1].m128i_i32[3];
        if ( v11 >= j )
          break;
        v11->m128i_i32[0] = v17;
        v11 = (__m128i *)((char *)v11 + 4);
        v17 = j[-1].m128i_i32[3];
        j->m128i_i32[0] = v16;
        v16 = v11->m128i_i32[0];
        v14 = a1->m128i_i32[0];
      }
      sub_1FB3C0(v11, i, v5);
      result = (char *)v11 - (char *)a1;
      if ( (char *)v11 - (char *)a1 <= 64 )
        return result;
      i = (int *)v11;
      v4 = result >> 3;
    }
    for ( k = v4 - 1; ; --k )
    {
      sub_1FB180((__int64)a1, k, v6, a1->m128i_i32[k]);
      if ( !k )
        break;
    }
    for ( result = (char *)i - (char *)a1;
          (char *)i - (char *)a1 > 4;
          result = sub_1FB180((__int64)a1, 0, ((char *)i - (char *)a1) >> 2, v20) )
    {
      v20 = *--i;
      *i = a1->m128i_i32[0];
    }
  }
  return result;
}

