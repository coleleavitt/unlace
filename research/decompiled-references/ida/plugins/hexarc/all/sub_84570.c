unsigned __int64 *__fastcall sub_84570(__m128i *a1, unsigned __int64 *a2, __int64 a3)
{
  _QWORD *exception; // rdi
  unsigned __int64 *v6; // rsi
  __int64 v7; // rax
  unsigned __int64 *v8; // rbp
  unsigned __int64 v10; // rdx
  unsigned __int64 j; // rcx
  char v12; // dl
  char v13; // dl
  char v14; // al
  unsigned __int64 v15; // rcx
  unsigned __int64 *v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 i; // rcx
  __int64 v19; // rax
  __m128i v20; // xmm0
  unsigned __int64 *v21; // rcx
  unsigned __int64 v22; // rdi
  unsigned __int64 *v23; // r8
  unsigned __int64 *v24; // rcx
  unsigned __int64 v25; // rdi
  unsigned __int64 *v26; // r8
  _QWORD *v27; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v28[9]; // [rsp+10h] [rbp-48h] BYREF

  v28[3] = __readfsqword(0x28u);
  v28[0] = a3;
  v28[1] = 0;
  copy_tinfo_t();
  v6 = (unsigned __int64 *)a1->m128i_i64[0];
  v27 = v28;
  if ( !v6 )
  {
    v19 = qalloc();
    v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
    if ( !v19 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v19 + 32) = 0;
    *(_OWORD *)(v19 + 16) = 0;
    *(__m128i *)(v19 + 8) = v20;
    *(_QWORD *)v19 = v19 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v19;
    *(_QWORD *)v19 = v19 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v19 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v6 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v7 = sub_843F0(a1, v6, 1, &v27);
LABEL_4:
    v8 = (unsigned __int64 *)v7;
    goto LABEL_5;
  }
  v8 = a2;
  if ( !a2 )
    goto LABEL_20;
  if ( v6 == a2 )
  {
    v8 = (unsigned __int64 *)a2[2];
    if ( (*(_BYTE *)v8 & 2) == 0 )
    {
      if ( v8[3] < v28[0] )
        goto LABEL_57;
      if ( v8[3] != v28[0] )
        goto LABEL_20;
      if ( v8 )
        goto LABEL_5;
    }
    v8 = v6;
    v12 = 1;
    goto LABEL_39;
  }
  if ( a2[3] >= v28[0] )
  {
    if ( a2[3] == v28[0] )
      goto LABEL_5;
    if ( (*a2 & 2) != 0 )
    {
      v17 = (unsigned __int64)a2;
    }
    else
    {
      v17 = a2[1];
      if ( (*(_BYTE *)v17 & 2) != 0 )
      {
        v24 = (unsigned __int64 *)(*a2 & 0xFFFFFFFFFFFFFFFCLL);
        v25 = *v24;
        if ( (*v24 & 2) != 0 )
        {
          v12 = 1;
          if ( v6 == v24 )
            goto LABEL_39;
          v12 = 1;
          if ( v24[3] < v28[0] )
            goto LABEL_39;
          goto LABEL_20;
        }
        if ( (unsigned __int64 *)v24[1] == a2 )
        {
          while ( 1 )
          {
            v26 = v24;
            v17 = v25 & 0xFFFFFFFFFFFFFFFCLL;
            v25 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v25 & 2) != 0 )
              break;
            v24 = (unsigned __int64 *)v17;
            if ( *(unsigned __int64 **)(v17 + 8) != v26 )
              goto LABEL_62;
          }
        }
        else
        {
LABEL_62:
          v17 = (unsigned __int64)v24;
        }
        if ( v6 == (unsigned __int64 *)v17 )
          goto LABEL_64;
      }
      else
      {
        for ( i = *(_QWORD *)(v17 + 16); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 16) )
          v17 = i;
        if ( v6 == (unsigned __int64 *)v17 )
          goto LABEL_20;
      }
    }
    if ( *(_QWORD *)(v17 + 24) >= v28[0] )
      goto LABEL_20;
    if ( (*(_BYTE *)a2[1] & 2) == 0 )
    {
      if ( (**(_BYTE **)(v17 + 16) & 2) != 0 )
      {
        v8 = (unsigned __int64 *)v17;
        v12 = 0;
        goto LABEL_39;
      }
      goto LABEL_20;
    }
LABEL_64:
    v12 = 1;
    goto LABEL_39;
  }
  if ( (*a2 & 2) != 0 )
  {
    v10 = (unsigned __int64)a2;
  }
  else
  {
    v10 = a2[2];
    if ( (*(_BYTE *)v10 & 2) != 0 )
    {
      v21 = (unsigned __int64 *)(*a2 & 0xFFFFFFFFFFFFFFFCLL);
      v22 = *v21;
      if ( (*v21 & 2) != 0 )
      {
        v12 = 0;
        if ( v6 == v21 )
          goto LABEL_39;
        if ( v28[0] >= v21[3] )
          goto LABEL_20;
        goto LABEL_57;
      }
      if ( a2 == (unsigned __int64 *)v21[2] )
      {
        while ( 1 )
        {
          v23 = v21;
          v10 = v22 & 0xFFFFFFFFFFFFFFFCLL;
          v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v22 & 2) != 0 )
            break;
          v21 = (unsigned __int64 *)v10;
          if ( v23 != *(unsigned __int64 **)(v10 + 16) )
            goto LABEL_55;
        }
      }
      else
      {
LABEL_55:
        v10 = (unsigned __int64)v21;
      }
      if ( v6 == (unsigned __int64 *)v10 )
        goto LABEL_57;
    }
    else
    {
      for ( j = *(_QWORD *)(v10 + 8); (*(_BYTE *)j & 2) == 0; j = *(_QWORD *)(j + 8) )
        v10 = j;
      if ( v6 == (unsigned __int64 *)v10 )
        goto LABEL_20;
    }
  }
  if ( v28[0] < *(_QWORD *)(v10 + 24) )
  {
    if ( (*(_BYTE *)a2[2] & 2) == 0 )
    {
      if ( (**(_BYTE **)(v10 + 8) & 2) != 0 )
      {
        v8 = (unsigned __int64 *)v10;
        v12 = 1;
LABEL_39:
        v7 = sub_843F0(a1, v8, v12, &v27);
        goto LABEL_4;
      }
      goto LABEL_20;
    }
LABEL_57:
    v12 = 0;
    goto LABEL_39;
  }
LABEL_20:
  v8 = (unsigned __int64 *)(*v6 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (*(_BYTE *)v8 & 2) != 0 )
  {
    v13 = 1;
LABEL_22:
    v7 = sub_843F0(a1, v6, v13, &v27);
    goto LABEL_4;
  }
  v14 = 1;
  while ( 1 )
  {
    v15 = v8[3];
    if ( v28[0] >= v15 )
      break;
    v16 = (unsigned __int64 *)v8[1];
    v14 = 1;
LABEL_27:
    if ( (*(_BYTE *)v16 & 2) != 0 )
      goto LABEL_28;
    v8 = v16;
  }
  if ( v15 < v28[0] )
  {
    v16 = (unsigned __int64 *)v8[2];
    v14 = 0;
    goto LABEL_27;
  }
  if ( !v8 )
  {
LABEL_28:
    v13 = v14;
    v6 = v8;
    goto LABEL_22;
  }
LABEL_5:
  clear_tinfo_t();
  return v8;
}

