__int64 __fastcall sub_42480(__int64 *a1, unsigned int a2)
{
  int v4; // r12d
  char *v5; // r13
  char *v6; // rax
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __int64 v9; // rax
  char *v10; // r14
  char *v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  const void *v14; // r14
  size_t v15; // rax
  size_t v16; // r13
  const void *v17; // r13
  void *v18; // rax
  char *v19; // rdi
  __int64 v20; // r15
  char *haystack; // [rsp+0h] [rbp-88h] BYREF
  __m128i v22; // [rsp+8h] [rbp-80h] BYREF
  __int64 v23; // [rsp+20h] [rbp-68h] BYREF
  char *v24; // [rsp+28h] [rbp-60h]
  __m128i v25; // [rsp+30h] [rbp-58h] BYREF
  int v26; // [rsp+40h] [rbp-48h]
  unsigned __int64 v27; // [rsp+48h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( !(_BYTE)a2 )
    return 0;
  v4 = getinf(5);
  if ( v4 == 11 )
    goto LABEL_14;
  if ( !dbg )
    return 0;
  haystack = nullptr;
  v23 = 0x800000028LL;
  v24 = nullptr;
  v26 = -1;
  v22 = 0;
  v25 = 0;
  if ( (unsigned int)sub_29F00(dbg, 6, &v23) )
  {
    v5 = haystack;
    v6 = v24;
    v7 = _mm_loadu_si128(&v22);
    v8 = _mm_load_si128(&v25);
    v24 = haystack;
    haystack = v6;
    v9 = v25.m128i_i64[0];
    v22 = v8;
    v25 = v7;
  }
  else
  {
    v14 = *(const void **)(dbg + 8);
    if ( !v14 || (v15 = strlen(*(const char **)(dbg + 8)), (v16 = v15) == 0) )
    {
      v22.m128i_i64[0] = 0;
      v5 = v24;
      goto LABEL_20;
    }
    v19 = haystack;
    v20 = v15 + 1;
    if ( v22.m128i_i64[1] < v15 + 1 )
    {
      haystack = (char *)qvector_reserve(&haystack, haystack, v15 + 1, 1);
      v19 = haystack;
    }
    v22.m128i_i64[0] = v20;
    memmove(v19, v14, v16);
    haystack[v16] = 0;
    v9 = v22.m128i_i64[0];
    v5 = v24;
  }
  if ( !v9 || (v10 = haystack, (v11 = strstr(haystack, "win32")) == nullptr) || v11 - v10 == -1 )
  {
LABEL_20:
    if ( v4 )
    {
      if ( v5 )
      {
        v25.m128i_i64[0] = 0;
        qfree(v5);
      }
      if ( haystack )
      {
        v22.m128i_i64[0] = 0;
        qfree(haystack);
      }
      return 0;
    }
    if ( !v5 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( v5 )
  {
LABEL_11:
    v25.m128i_i64[0] = 0;
    qfree(v5);
LABEL_12:
    if ( haystack )
    {
      v22.m128i_i64[0] = 0;
      qfree(haystack);
    }
    goto LABEL_14;
  }
  if ( v10 )
  {
    v22.m128i_i64[0] = 0;
    qfree(v10);
  }
LABEL_14:
  sub_421C0(a1[5]);
  v12 = a1[5];
  v13 = *(_QWORD *)(v12 + 128);
  if ( v13 <= 1 )
  {
    a1[13] = 0;
    return a2;
  }
  if ( a1 + 12 == (__int64 *)(v12 + 120) )
    return a2;
  v17 = *(const void **)(v12 + 120);
  v18 = (void *)a1[12];
  if ( a1[14] < v13 )
  {
    v18 = (void *)qvector_reserve(a1 + 12, a1[12], v13, 1);
    a1[12] = (__int64)v18;
  }
  a1[13] = v13;
  memmove(v18, v17, v13 - 1);
  *(_BYTE *)(a1[12] + v13 - 1) = 0;
  return a2;
}
