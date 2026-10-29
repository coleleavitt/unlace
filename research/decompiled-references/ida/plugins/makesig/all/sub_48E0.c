__int64 *__fastcall sub_48E0(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  size_t v4; // rbp
  __int64 v5; // rbx
  __int64 **v6; // r15
  const char *v7; // rsi
  const char *v8; // rdi
  __int64 *v9; // rax
  __int64 *result; // rax
  void *v11; // rbx
  __m128i *v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-50h]
  __int64 v15; // [rsp+18h] [rbp-40h]

  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 16);
  v15 = *a1;
  v13 = a1[1];
  v5 = *a1 + 32 * v13;
  if ( *a1 != v5 )
  {
    v6 = (__int64 **)*a1;
    while ( 1 )
    {
      v9 = v6[2];
      if ( v4 )
        break;
      v7 = s1;
      if ( v9 )
        goto LABEL_4;
LABEL_9:
      result = *v6;
      if ( (__int64 *)v3 == *v6 )
        return result;
      if ( (unsigned __int64)result < v3 )
      {
        *v6 = (__int64 *)v3;
        return result;
      }
LABEL_6:
      v6 += 4;
      if ( (__int64 **)v5 == v6 )
        goto LABEL_13;
    }
    v7 = *(const char **)(a2 + 8);
    v8 = s1;
    if ( v9 )
LABEL_4:
      v8 = (const char *)v6[1];
    if ( strcmp(v8, v7) )
      goto LABEL_6;
    goto LABEL_9;
  }
LABEL_13:
  v11 = nullptr;
  if ( v4 )
  {
    v11 = (void *)qalloc_or_throw(v4);
    memcpy(v11, *(const void **)(a2 + 8), v4);
    v13 = a1[1];
    v15 = *a1;
  }
  if ( a1[2] < (unsigned __int64)(v13 + 1) )
  {
    v15 = qvector_reserve(a1, v15, v13 + 1, 32);
    *a1 = v15;
    v13 = a1[1];
  }
  v12 = (__m128i *)(32 * v13 + v15);
  v12->m128i_i64[0] = v3;
  v12->m128i_i64[1] = (__int64)v11;
  v12[1] = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  ++a1[1];
  return a1;
}

