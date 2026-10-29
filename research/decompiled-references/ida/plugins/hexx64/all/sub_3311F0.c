unsigned __int64 sub_3311F0(_QWORD *a1, unsigned __int64 a2, unsigned int a3, ...)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  const char *v9; // rsi
  unsigned __int64 v10; // r14
  size_t v11; // rax
  __int64 v12; // rdx
  size_t v13; // rbp
  size_t v14; // rbx
  __int64 v15; // rcx
  const char *v16; // r12
  __int64 v17; // rbx
  const char *v18; // rdi
  void *v19; // rbx
  __int64 v20; // rax
  const char *v21; // rax
  size_t v22; // rbp
  void *v23; // rax
  const char *v24; // [rsp+8h] [rbp-550h]
  __int64 v25; // [rsp+10h] [rbp-548h]
  __int64 v26; // [rsp+18h] [rbp-540h]
  void *src; // [rsp+30h] [rbp-528h] BYREF
  __int128 v28; // [rsp+38h] [rbp-520h]
  gcc_va_list va; // [rsp+48h] [rbp-510h] BYREF
  char s[1032]; // [rsp+60h] [rbp-4F8h] BYREF
  unsigned __int64 v31; // [rsp+468h] [rbp-F0h]
  __int64 v32; // [rsp+488h] [rbp-D0h]
  __int128 v33; // [rsp+4A0h] [rbp-B8h]

  va_start(va, a3);
  v32 = va_arg(va, _QWORD);
  *(double *)&v33 = va_arg(va, double);
  va_end(va);
  v31 = __readfsqword(0x28u);
  if ( a3 > 0x39 )
  {
    if ( !under_debugger )
      sub_383060(0xC5ECu, *(double *)&v33);
    BUG();
  }
  v6 = (unsigned __int64)a3 >> 3;
  v7 = a3 & 7;
  *((_BYTE *)a1 + v6 + 752) |= 1 << v7;
  LODWORD(v6) = *(unsigned __int8 *)(a1[187] + v6 + 608);
  if ( !_bittest((const int *)&v6, v7) )
    return v31 - __readfsqword(0x28u);
  v9 = (_BYTE *)(&stru_3F0 + 16);
  va_start(va, a3);
  qvsnprintf();
  src = nullptr;
  v28 = 0;
  if ( a2 == -1 )
  {
    v10 = a1[5];
  }
  else
  {
    v9 = (const char *)a2;
    v10 = sub_330F80(a1, a2);
  }
  v11 = strlen(s);
  v13 = v11;
  v14 = v11;
  if ( v11 )
  {
    v22 = v11 + 1;
    v23 = (void *)qvector_reserve((__int64)&src, 0, v11 + 1, 1);
    *(_QWORD *)&v28 = v22;
    src = v23;
    memmove(v23, s, v14);
    *((_BYTE *)src + v14) = 0;
    v9 = (const char *)a1[91];
    v13 = v28;
    v26 = a1[92];
    v16 = &v9[40 * v26];
    v25 = (__int64)v9;
    if ( v9 == v16 )
      goto LABEL_27;
  }
  else
  {
    v15 = a1[91];
    v26 = a1[92];
    v16 = (const char *)(v15 + 40 * v26);
    v25 = v15;
    if ( (const char *)v15 == v16 )
      goto LABEL_22;
  }
  v17 = v25;
  v24 = (const char *)src;
  while ( 1 )
  {
    if ( *(_QWORD *)v17 != v10 || *(_DWORD *)(v17 + 8) != a3 )
      goto LABEL_11;
    if ( *(_QWORD *)(v17 + 24) )
    {
      v9 = *(const char **)(v17 + 16);
      v18 = s1;
      if ( !v13 )
        goto LABEL_10;
    }
    else
    {
      if ( !v13 )
      {
        if ( v16 == (const char *)v17 )
          goto LABEL_22;
        goto LABEL_20;
      }
      v9 = s1;
    }
    v18 = v24;
LABEL_10:
    if ( !strcmp(v18, v9) )
      break;
LABEL_11:
    v17 += 40;
    if ( v16 == (const char *)v17 )
      goto LABEL_27;
  }
  if ( v16 != (const char *)v17 )
    goto LABEL_20;
LABEL_27:
  if ( v13 )
  {
    v19 = (void *)qalloc_or_throw(v13, (__int64)v9, v12, v15);
    memcpy(v19, src, v13);
    v26 = a1[92];
    v25 = a1[91];
    goto LABEL_23;
  }
LABEL_22:
  v19 = nullptr;
LABEL_23:
  if ( a1[93] < (unsigned __int64)(v26 + 1) )
  {
    v25 = qvector_reserve((__int64)(a1 + 91), v25, v26 + 1, 40);
    a1[91] = v25;
    v26 = a1[92];
  }
  v20 = v25 + 40 * v26;
  *(_QWORD *)v20 = v10;
  *(_DWORD *)(v20 + 8) = a3;
  *(_QWORD *)(v20 + 16) = v19;
  *(__m128i *)(v20 + 24) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
  v21 = (const char *)src;
  ++a1[92];
  v24 = v21;
LABEL_20:
  if ( v24 )
  {
    *(_QWORD *)&v28 = 0;
    qfree((__int64)v24);
  }
  return v31 - __readfsqword(0x28u);
}

