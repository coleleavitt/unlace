unsigned __int64 __fastcall sub_78990(__int64 a1, const char *a2, char a3)
{
  const char *v3; // rbx
  size_t v4; // rax
  size_t v5; // r12
  size_t v6; // rbp
  const char *v7; // rbx
  char v8; // al
  size_t v9; // rbx
  char *v10; // r15
  __int64 v11; // rbp
  const char *v12; // r13
  char *i; // r14
  const char *v14; // rsi
  const char *v15; // rdi
  void *v17; // rbp
  char *v18; // rsi
  char *v19; // r12
  void *v20; // rbp
  char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v25; // [rsp+8h] [rbp-68h]
  void *src; // [rsp+18h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+20h] [rbp-50h]
  unsigned __int64 v29; // [rsp+30h] [rbp-40h]

  v3 = a2;
  v29 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    src = (void *)qvector_reserve(&src, 0, v4 + 1, 1);
    n[0] = v5;
    memmove(src, a2, v6);
    *((_BYTE *)src + v6) = 0;
    v3 = (const char *)src;
  }
  if ( *v3 )
  {
    v7 = &v3[strlen(v3)];
    v8 = *(v7 - 1);
    if ( v8 == 47 || v8 == 92 )
      *((_BYTE *)v7 - 1) = 0;
  }
  v9 = n[0];
  v10 = *(char **)a1;
  v25 = *(_QWORD *)(a1 + 8);
  v11 = *(_QWORD *)a1 + 24 * v25;
  if ( *(_QWORD *)a1 != v11 )
  {
    v12 = (const char *)src;
    for ( i = *(char **)a1; (char *)v11 != i; i += 24 )
    {
      if ( *((_QWORD *)i + 1) )
      {
        v14 = *(const char **)i;
        v15 = ::src;
        if ( !v9 )
          goto LABEL_9;
      }
      else
      {
        if ( !v9 )
        {
          if ( i != (char *)v11 )
            goto LABEL_17;
          if ( !a3 )
            goto LABEL_34;
LABEL_28:
          v18 = v10;
          v19 = nullptr;
          v17 = nullptr;
          goto LABEL_24;
        }
        v14 = ::src;
      }
      v15 = v12;
LABEL_9:
      if ( !strcmp(v15, v14) )
      {
        if ( i != (char *)v11 )
          goto LABEL_17;
        break;
      }
    }
  }
  if ( a3 )
  {
    if ( !v9 )
      goto LABEL_28;
    v17 = (void *)qalloc_or_throw(v9);
    memcpy(v17, src, v9);
    v18 = *(char **)a1;
    v25 = *(_QWORD *)(a1 + 8);
    v19 = &v10[-*(_QWORD *)a1];
LABEL_24:
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v25 + 1) )
    {
      v23 = qvector_reserve(a1, v18, v25 + 1, 24);
      *(_QWORD *)a1 = v23;
      v10 = &v19[v23];
      v25 = *(_QWORD *)(a1 + 8);
    }
    memmove(v10 + 24, v10, 24 * v25 - (_QWORD)v19);
    *(_QWORD *)v10 = v17;
    v12 = (const char *)src;
    *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
    ++*(_QWORD *)(a1 + 8);
  }
  else
  {
    if ( v9 )
    {
      v20 = (void *)qalloc_or_throw(v9);
      memcpy(v20, src, v9);
      v10 = *(char **)a1;
      v25 = *(_QWORD *)(a1 + 8);
    }
    else
    {
LABEL_34:
      v20 = nullptr;
    }
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v25 + 1) )
    {
      v22 = qvector_reserve(a1, v10, v25 + 1, 24);
      *(_QWORD *)a1 = v22;
      v10 = (char *)v22;
      v25 = *(_QWORD *)(a1 + 8);
    }
    v21 = &v10[24 * v25];
    *(_QWORD *)v21 = v20;
    v12 = (const char *)src;
    *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
    ++*(_QWORD *)(a1 + 8);
  }
LABEL_17:
  if ( v12 )
  {
    n[0] = 0;
    qfree(v12);
  }
  return v29 - __readfsqword(0x28u);
}
