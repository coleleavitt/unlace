_QWORD *__fastcall sub_6A3B0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r12
  _QWORD *v4; // r15
  _QWORD *result; // rax
  size_t v6; // r13
  _QWORD *v7; // r14
  const char *v8; // rax
  _QWORD *v9; // rbp
  const char *v10; // rsi
  const char *v11; // rdi
  int v12; // eax
  _QWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rsi
  const char *v16; // rsi
  const char *v17; // rdi
  __int64 v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rbp
  void *v22; // rdi
  const char *v23; // rsi
  const char *v24; // rax
  _QWORD *v25; // [rsp+8h] [rbp-50h]
  char *s2; // [rsp+10h] [rbp-48h]
  const char *v27; // [rsp+18h] [rbp-40h]

  v2 = a1 + 32;
  v4 = sub_69B10((__int64)(a1 + 32), a2);
  result = v4 + 7;
  if ( v4 != a1 + 33 )
    return result;
  s2 = nullptr;
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
  {
    s2 = (char *)qalloc_or_throw();
    memcpy(s2, *(const void **)a2, v6);
  }
  v7 = (_QWORD *)a1[34];
  if ( !v7 )
  {
    v9 = v4;
    goto LABEL_24;
  }
  v8 = src;
  if ( v6 )
    v8 = s2;
  v9 = v4;
  v27 = v8;
  while ( 1 )
  {
    v14 = v7[5];
    if ( !v6 )
      break;
    if ( v14 )
      goto LABEL_18;
    v25 = v7;
    v10 = s2;
    v11 = src;
LABEL_11:
    v12 = strcmp(v11, v10);
    v13 = (_QWORD *)v7[2];
    v7 = (_QWORD *)v7[3];
    if ( v12 >= 0 )
    {
      v9 = v25;
      v7 = v13;
    }
    if ( !v7 )
      goto LABEL_20;
  }
  if ( v14 )
  {
LABEL_18:
    v11 = (const char *)v7[4];
    v10 = v27;
    v25 = v7;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v15 = v7[2];
    if ( !v15 )
      break;
    v9 = v7;
    v7 = (_QWORD *)v7[2];
    if ( *(_QWORD *)(v15 + 40) )
      goto LABEL_18;
  }
  v9 = v7;
LABEL_20:
  if ( v4 == v9 )
    goto LABEL_24;
  if ( v9[5] )
  {
    v16 = (const char *)v9[4];
    v17 = src;
    if ( !v6 )
      goto LABEL_23;
    goto LABEL_30;
  }
  v16 = src;
  if ( !v6 )
    goto LABEL_31;
LABEL_30:
  v17 = s2;
LABEL_23:
  if ( strcmp(v17, v16) >= 0 )
  {
LABEL_31:
    result = v9 + 7;
    if ( s2 )
    {
      qfree();
      return v9 + 7;
    }
    return result;
  }
LABEL_24:
  v18 = operator new(0x58u);
  *(_QWORD *)(v18 + 56) = 0;
  *(_QWORD *)(v18 + 32) = s2;
  *(_QWORD *)(v18 + 80) = 0;
  *(__m128i *)(v18 + 40) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
  *(_OWORD *)(v18 + 64) = 0;
  v19 = sub_6A1F0(v2, v9, v18 + 32);
  v21 = v19;
  if ( v20 )
  {
    if ( v4 != (_QWORD *)v20 && !v19 )
    {
      v23 = src;
      if ( *(_QWORD *)(v20 + 40) )
        v23 = *(const char **)(v20 + 32);
      v24 = src;
      if ( v6 )
        v24 = s2;
      strcmp(v24, v23);
    }
    std::_Rb_tree_insert_and_rebalance();
    ++a1[37];
    return (_QWORD *)(v18 + 56);
  }
  result = v19 + 7;
  if ( v18 )
  {
    if ( s2 )
    {
      *(_QWORD *)(v18 + 40) = 0;
      qfree();
    }
    v22 = (void *)v18;
    v18 = (__int64)v21;
    operator delete(v22, 0x58u);
    return (_QWORD *)(v18 + 56);
  }
  return result;
}

