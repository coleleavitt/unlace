unsigned __int64 *__fastcall sub_3B2480(__m128i *a1, unsigned __int64 *a2, unsigned __int64 *a3, const __m128i **a4)
{
  unsigned __int64 *v6; // rsi
  unsigned __int64 *result; // rax
  unsigned __int64 v8; // r10
  unsigned __int64 *v9; // r11
  unsigned __int64 *j; // rbp
  char v11; // dl
  __int64 v12; // rax
  __m128i v13; // xmm1
  char v14; // dl
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rsi
  unsigned __int64 *v17; // rsi
  unsigned __int64 *v18; // r11
  unsigned __int64 *i; // rbp
  unsigned __int64 v20; // rbp
  __int64 v21; // r12
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rbp
  __int64 v24; // r12
  unsigned __int64 v25; // r13
  _QWORD *exception; // rax
  const __m128i **v27; // [rsp+8h] [rbp-30h]

  v6 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v27 = a4;
    v12 = qalloc();
    v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
    if ( !v12 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v12 + 16) = 0;
    *(_OWORD *)(v12 + 32) = 0;
    *(_QWORD *)v12 = v12 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_OWORD *)(v12 + 48) = 0;
    *(__m128i *)(v12 + 8) = v13;
    a1->m128i_i64[0] = v12;
    sub_3B0AF0((unsigned __int64 *)a1);
    v6 = (unsigned __int64 *)a1->m128i_i64[0];
    a4 = v27;
    goto LABEL_17;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_17:
    v11 = 1;
    return (unsigned __int64 *)sub_3B2300(a1, v6, v11, a4);
  }
  result = a3;
  if ( !a3 )
    goto LABEL_21;
  if ( v6 == a3 )
  {
    result = (unsigned __int64 *)a3[2];
    if ( (*(_BYTE *)result & 2) == 0 )
    {
      if ( result[3] < *a2 )
        goto LABEL_57;
      if ( result[3] != *a2 )
        goto LABEL_21;
      if ( result )
        return result;
    }
    result = (unsigned __int64 *)a1->m128i_i64[0];
    v11 = 1;
    goto LABEL_40;
  }
  v8 = *a2;
  if ( a3[3] >= *a2 )
  {
    if ( a3[3] == *a2 )
      return result;
    if ( (*a3 & 2) != 0 )
    {
      v18 = a3;
    }
    else
    {
      v18 = (unsigned __int64 *)a3[1];
      if ( (*(_BYTE *)v18 & 2) != 0 )
      {
        v23 = *a3 & 0xFFFFFFFFFFFFFFFCLL;
        v24 = *(_QWORD *)v23;
        if ( (*(_QWORD *)v23 & 2) != 0 )
        {
          v11 = 1;
          if ( v6 == (unsigned __int64 *)v23 )
            goto LABEL_40;
          v11 = 1;
          if ( *(_QWORD *)(v23 + 24) < v8 )
            goto LABEL_40;
          goto LABEL_21;
        }
        if ( a3 == *(unsigned __int64 **)(v23 + 8) )
        {
          while ( 1 )
          {
            v25 = v23;
            v18 = (unsigned __int64 *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
            v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v24 & 2) != 0 )
              break;
            v23 = (unsigned __int64)v18;
            if ( v25 != v18[1] )
              goto LABEL_62;
          }
        }
        else
        {
LABEL_62:
          v18 = (unsigned __int64 *)v23;
        }
        if ( v6 == v18 )
          goto LABEL_64;
      }
      else
      {
        for ( i = (unsigned __int64 *)v18[2]; (*(_BYTE *)i & 2) == 0; i = (unsigned __int64 *)i[2] )
          v18 = i;
        if ( v6 == v18 )
          goto LABEL_21;
      }
    }
    if ( v18[3] >= v8 )
      goto LABEL_21;
    if ( (*(_BYTE *)a3[1] & 2) == 0 )
    {
      if ( (*(_BYTE *)v18[2] & 2) != 0 )
      {
        result = v18;
        v11 = 0;
        goto LABEL_40;
      }
      goto LABEL_21;
    }
LABEL_64:
    v11 = 1;
    goto LABEL_40;
  }
  if ( (*a3 & 2) != 0 )
  {
    v9 = a3;
  }
  else
  {
    v9 = (unsigned __int64 *)a3[2];
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v20 = *a3 & 0xFFFFFFFFFFFFFFFCLL;
      v21 = *(_QWORD *)v20;
      if ( (*(_QWORD *)v20 & 2) != 0 )
      {
        v11 = 0;
        if ( v6 == (unsigned __int64 *)v20 )
          goto LABEL_40;
        if ( v8 >= *(_QWORD *)(v20 + 24) )
          goto LABEL_21;
        goto LABEL_57;
      }
      if ( *(unsigned __int64 **)(v20 + 16) == a3 )
      {
        while ( 1 )
        {
          v22 = v20;
          v9 = (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
          v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v21 & 2) != 0 )
            break;
          v20 = (unsigned __int64)v9;
          if ( v9[2] != v22 )
            goto LABEL_55;
        }
      }
      else
      {
LABEL_55:
        v9 = (unsigned __int64 *)v20;
      }
      if ( v6 == v9 )
        goto LABEL_57;
    }
    else
    {
      for ( j = (unsigned __int64 *)v9[1]; (*(_BYTE *)j & 2) == 0; j = (unsigned __int64 *)j[1] )
        v9 = j;
      if ( v6 == v9 )
        goto LABEL_21;
    }
  }
  if ( v8 < v9[3] )
  {
    if ( (*(_BYTE *)a3[2] & 2) == 0 )
    {
      if ( (*(_BYTE *)v9[1] & 2) != 0 )
      {
        result = v9;
        v11 = 1;
LABEL_40:
        v6 = result;
        return (unsigned __int64 *)sub_3B2300(a1, v6, v11, a4);
      }
      goto LABEL_21;
    }
LABEL_57:
    v11 = 0;
    goto LABEL_40;
  }
LABEL_21:
  v14 = 1;
  result = (unsigned __int64 *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)result & 2) != 0 )
    return (unsigned __int64 *)sub_3B2300(a1, v6, v14, a4);
  v15 = *a2;
  while ( 1 )
  {
    v16 = result[3];
    if ( v15 >= v16 )
      break;
    v17 = (unsigned __int64 *)result[1];
    v14 = 1;
LABEL_28:
    if ( (*(_BYTE *)v17 & 2) != 0 )
      goto LABEL_29;
    result = v17;
  }
  if ( v16 < v15 )
  {
    v17 = (unsigned __int64 *)result[2];
    v14 = 0;
    goto LABEL_28;
  }
  if ( !result )
  {
LABEL_29:
    v6 = result;
    return (unsigned __int64 *)sub_3B2300(a1, v6, v14, a4);
  }
  return result;
}

