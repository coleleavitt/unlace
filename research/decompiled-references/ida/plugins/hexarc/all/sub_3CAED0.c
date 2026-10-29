unsigned __int64 *__fastcall sub_3CAED0(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  _QWORD *v5; // rax
  unsigned __int64 *result; // rax
  unsigned __int64 v7; // rbx
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 *v11; // rdi

  v2 = a1[14];
  if ( v2 )
  {
    v3 = a1[15];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + 24 * i);
        if ( *v5 )
        {
          v5[1] = 0;
          qfree();
          v2 = a1[14];
        }
      }
    }
    a1[15] = 0;
    qfree();
    a1[14] = 0;
    a1[16] = 0;
  }
  if ( a1[17] )
  {
    a1[18] = 0;
    qfree();
    a1[17] = 0;
    a1[19] = 0;
  }
  result = (unsigned __int64 *)a1[20];
  if ( !result )
    goto LABEL_22;
  v7 = *result;
  if ( !a1[21] )
  {
    *result = *result & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(a1[20] + 8LL) = _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)a1[20],
                                   (__m128i)(unsigned __int64)a1[20]);
    *(_QWORD *)a1[20] &= ~1uLL;
    result = (unsigned __int64 *)a1[20];
    *result |= 2u;
    return result;
  }
  v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
  v9 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v9 & 2) == 0 )
  {
    v10 = (__int64 *)v8[1];
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v11 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_24;
    }
    else
    {
      sub_3C7E00(v10);
      v11 = (__int64 *)v8[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
        goto LABEL_17;
    }
    sub_3C7E00(v11);
LABEL_17:
    v9 = *v8;
    if ( (*v8 & 2) != 0 )
    {
LABEL_18:
      if ( v7 > 3 )
        qfree();
      result = (unsigned __int64 *)a1[20];
      v7 = *result;
      goto LABEL_21;
    }
LABEL_24:
    *v8 = v9 | 2;
    goto LABEL_18;
  }
LABEL_21:
  *result = v7 & 3 | (unsigned __int64)result & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[20] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1[20], (__m128i)(unsigned __int64)a1[20]);
  *(_QWORD *)a1[20] &= ~1uLL;
  result = (unsigned __int64 *)a1[20];
  *result |= 2u;
LABEL_22:
  a1[21] = 0;
  return result;
}

