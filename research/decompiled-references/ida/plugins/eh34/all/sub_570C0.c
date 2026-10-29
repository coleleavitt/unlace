__int64 __fastcall sub_570C0(__m128i *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r14
  unsigned __int64 *i; // r12
  __int8 *v9; // rsi
  __int32 v10; // ecx
  unsigned int *v11; // rbx
  __m128i v12; // xmm0
  __int32 v13; // eax
  __int32 v14; // edi
  signed int v15; // edx
  __int64 v16; // rax
  signed int v17; // esi
  unsigned __int64 *v18; // rax
  signed int j; // ecx
  __m128i v20; // xmm0
  __int64 k; // rbx
  unsigned __int64 v22; // rcx

  result = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 128 )
  {
    v4 = result >> 4;
    v5 = a3;
    v6 = ((char *)a2 - (char *)a1) >> 3;
    for ( i = a2; v5; v6 = ((char *)v11 - (char *)a1) >> 3 )
    {
      v9 = &a1->m128i_i8[8 * v4];
      v10 = a1->m128i_i32[3];
      --v5;
      v11 = &a1->m128i_u32[2];
      v12 = _mm_loadl_epi64(a1);
      v13 = *((_DWORD *)v9 + 1);
      v14 = *((_DWORD *)i - 1);
      v15 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v12, 229));
      if ( v10 <= v13 )
      {
        if ( v10 <= v14 )
        {
          if ( v13 <= v14 )
          {
LABEL_25:
            a1->m128i_i64[0] = *(_QWORD *)v9;
            *(_QWORD *)v9 = v12.m128i_i64[0];
            v15 = a1->m128i_i32[3];
            v17 = *((_DWORD *)i - 1);
            goto LABEL_7;
          }
LABEL_16:
          v17 = v15;
          a1->m128i_i64[0] = *(i - 1);
          *(i - 1) = v12.m128i_i64[0];
          v15 = a1->m128i_i32[3];
          goto LABEL_7;
        }
      }
      else
      {
        if ( v13 > v14 )
          goto LABEL_25;
        if ( v10 > v14 )
          goto LABEL_16;
      }
      v16 = a1->m128i_i64[1];
      a1->m128i_i64[1] = v12.m128i_i64[0];
      a1->m128i_i64[0] = v16;
      v17 = *((_DWORD *)i - 1);
LABEL_7:
      v18 = i;
      while ( 1 )
      {
        for ( j = a1->m128i_i32[1]; j < v15; v11 += 2 )
          v15 = v11[3];
        --v18;
        if ( j > v17 )
        {
          do
            --v18;
          while ( j > *((_DWORD *)v18 + 1) );
        }
        if ( v11 >= (unsigned int *)v18 )
          break;
        v20 = _mm_cvtsi32_si128(*v11);
        v11 += 2;
        *((_QWORD *)v11 - 1) = *v18;
        v17 = *((_DWORD *)v18 - 1);
        *v18 = _mm_unpacklo_epi32(v20, _mm_cvtsi32_si128(v15)).m128i_u64[0];
        v15 = v11[1];
      }
      sub_570C0(v11, i, v5);
      result = (char *)v11 - (char *)a1;
      if ( (char *)v11 - (char *)a1 <= 128 )
        return result;
      i = (unsigned __int64 *)v11;
      v4 = result >> 4;
    }
    for ( k = v4 - 1; ; --k )
    {
      sub_56D00((__int64)a1, k, v6, a1->m128i_u64[k]);
      if ( !k )
        break;
    }
    for ( result = (char *)i - (char *)a1;
          (char *)i - (char *)a1 > 8;
          result = sub_56D00((__int64)a1, 0, ((char *)i - (char *)a1) >> 3, v22) )
    {
      v22 = *--i;
      *i = a1->m128i_i64[0];
    }
  }
  return result;
}

