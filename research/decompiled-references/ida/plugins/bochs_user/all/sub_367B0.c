unsigned __int64 __fastcall sub_367B0(__int64 a1)
{
  size_t v2; // rax
  size_t v3; // r12
  size_t v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbp
  void *v7; // r13
  __int64 i; // r15
  const char *v9; // rsi
  const char *v10; // rdi
  void *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // [rsp+0h] [rbp-478h]
  __int64 v15; // [rsp+8h] [rbp-470h]
  void *src; // [rsp+10h] [rbp-468h]
  char s[1032]; // [rsp+30h] [rbp-448h] BYREF
  unsigned __int64 v18; // [rsp+438h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  qstrncpy();
  qstrlwr();
  v2 = strlen(s);
  v3 = v2 + 1;
  v4 = v2;
  src = (void *)qvector_reserve();
  memmove(src, s, v4);
  *((_BYTE *)src + v4) = 0;
  v5 = *(_QWORD *)(a1 + 900);
  v15 = *(_QWORD *)(a1 + 908);
  v6 = v5 + 24 * v15;
  v14 = v5;
  if ( v5 != v6 )
  {
    v7 = src;
    for ( i = *(_QWORD *)(a1 + 900); v6 != i; i += 24 )
    {
      if ( *(_QWORD *)(i + 8) )
      {
        v9 = *(const char **)i;
        v10 = s1;
        if ( !v3 )
          goto LABEL_4;
      }
      else
      {
        if ( !v3 )
        {
          if ( i == v6 )
            goto LABEL_17;
          goto LABEL_11;
        }
        v9 = s1;
      }
      v10 = (const char *)src;
LABEL_4:
      if ( !strcmp(v10, v9) )
      {
        if ( i != v6 )
          goto LABEL_11;
        break;
      }
    }
  }
  if ( v3 )
  {
    v12 = (void *)qalloc_or_throw();
    memcpy(v12, src, v3);
    v15 = *(_QWORD *)(a1 + 908);
    v14 = *(_QWORD *)(a1 + 900);
  }
  else
  {
LABEL_17:
    v12 = nullptr;
  }
  if ( *(_QWORD *)(a1 + 916) < (unsigned __int64)(v15 + 1) )
  {
    v14 = qvector_reserve();
    *(_QWORD *)(a1 + 900) = v14;
    v15 = *(_QWORD *)(a1 + 908);
  }
  v13 = v14 + 24 * v15;
  *(_QWORD *)v13 = v12;
  v7 = src;
  *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  ++*(_QWORD *)(a1 + 908);
LABEL_11:
  if ( v7 )
    qfree();
  return v18 - __readfsqword(0x28u);
}

