unsigned __int64 *__fastcall sub_122C0(__int64 *a1, const __m128i *a2)
{
  char *v4; // rdx
  char v5; // r10
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  unsigned __int64 *result; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  __m128i v16[2]; // [rsp+0h] [rbp-28h] BYREF

  v4 = (char *)a1[1];
  if ( !v4 )
  {
    v11 = 0;
    v12 = 1;
LABEL_19:
    v14 = *a1;
    v16[0] = _mm_loadu_si128(a2);
    if ( a1[2] < v12 )
    {
      v15 = qvector_reserve();
      *a1 = v15;
      v14 = v15;
    }
    result = (unsigned __int64 *)memmove((void *)(v14 + v11 + 16), (const void *)(v14 + v11), 16 * a1[1] - v11);
    *(__m128i *)(v14 + v11) = _mm_load_si128(v16);
    ++a1[1];
    return result;
  }
  v5 = 0;
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v8 = a2->m128i_i64[0];
      result = (unsigned __int64 *)(16 * v6 + *a1);
      v10 = result[1];
      if ( v10 >= a2->m128i_i64[0] )
        break;
      v4 = (char *)a1[1];
      if ( ++v6 >= (unsigned __int64)v4 )
        goto LABEL_13;
    }
    v7 = a2->m128i_u64[1];
    if ( v7 < *result )
      break;
    if ( v8 < *result )
    {
      *result = v8;
      v7 = a2->m128i_u64[1];
    }
    if ( v10 < v7 )
      result[1] = v7;
    if ( v6 )
    {
      v13 = *a1 + 16 * (v6 - 1);
      if ( *(_QWORD *)(v13 + 8) >= *result )
      {
        *(_QWORD *)(v13 + 8) = result[1];
        memmove((void *)(16 * v6 + *a1), (const void *)(16 * v6 + *a1 + 16), 16 * a1[1] - 16 - 16 * v6);
        result = (unsigned __int64 *)a1[1];
        v5 = 1;
        v4 = (char *)result - 1;
        a1[1] = (__int64)result - 1;
      }
      else
      {
        v4 = (char *)a1[1];
        ++v6;
        v5 = 1;
      }
    }
    else
    {
      v4 = (char *)a1[1];
      v6 = 1;
      v5 = 1;
    }
  }
  while ( v6 < (unsigned __int64)v4 );
LABEL_13:
  v11 = 16 * v6;
  v12 = (unsigned __int64)(v4 + 1);
  if ( !v5 )
    goto LABEL_19;
  return result;
}

