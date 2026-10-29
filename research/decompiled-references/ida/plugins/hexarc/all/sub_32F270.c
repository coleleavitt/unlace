unsigned __int64 sub_32F270(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // r15
  __int64 v5; // r14
  __int64 v6; // r13
  size_t v7; // rbp
  __int64 v8; // r12
  const char *v9; // rsi
  const char *v10; // rdi
  void *v12; // r13
  __int64 v13; // rax
  const char *v14; // rax
  const char *v15; // [rsp+0h] [rbp-148h]
  __int64 v16; // [rsp+8h] [rbp-140h]
  void *src; // [rsp+20h] [rbp-128h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-120h]
  gcc_va_list va; // [rsp+40h] [rbp-108h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-F0h]

  va_start(va, a3);
  v3 = a2;
  v20 = __readfsqword(0x28u);
  src = nullptr;
  *(_OWORD *)n = 0;
  sub_65220((__int64 *)&src);
  if ( a2 == -1 )
    v3 = a1[5];
  v5 = a1[92];
  v6 = a1[91];
  v7 = n[0];
  v16 = v6;
  v8 = v6 + 40 * v5;
  if ( v6 == v8 )
    goto LABEL_19;
  v15 = (const char *)src;
  while ( 1 )
  {
    if ( v3 != *(_QWORD *)v6 || *(_DWORD *)(v6 + 8) != 58 )
      goto LABEL_7;
    if ( *(_QWORD *)(v6 + 24) )
    {
      v9 = *(const char **)(v6 + 16);
      v10 = s1;
      if ( !v7 )
        goto LABEL_6;
    }
    else
    {
      if ( !v7 )
      {
        if ( v8 == v6 )
          goto LABEL_22;
        goto LABEL_15;
      }
      v9 = s1;
    }
    v10 = v15;
LABEL_6:
    if ( !strcmp(v10, v9) )
      break;
LABEL_7:
    v6 += 40;
    if ( v8 == v6 )
      goto LABEL_19;
  }
  if ( v8 != v6 )
    goto LABEL_15;
LABEL_19:
  if ( v7 )
  {
    v12 = (void *)qalloc_or_throw();
    memcpy(v12, src, v7);
    v5 = a1[92];
    v16 = a1[91];
    if ( a1[93] < (unsigned __int64)(v5 + 1) )
      goto LABEL_21;
  }
  else
  {
LABEL_22:
    v12 = nullptr;
    if ( a1[93] < (unsigned __int64)(v5 + 1) )
    {
LABEL_21:
      v16 = qvector_reserve();
      v5 = a1[92];
      a1[91] = v16;
    }
  }
  v13 = v16 + 40 * v5;
  *(_QWORD *)v13 = v3;
  *(_DWORD *)(v13 + 8) = 58;
  *(_QWORD *)(v13 + 16) = v12;
  *(__m128i *)(v13 + 24) = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  v14 = (const char *)src;
  ++a1[92];
  v15 = v14;
LABEL_15:
  if ( v15 )
  {
    n[0] = 0;
    qfree();
  }
  return v20 - __readfsqword(0x28u);
}

