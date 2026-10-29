unsigned __int64 __fastcall sub_3E44A0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  char *v4; // rbx
  const char *v5; // r13
  const char *v6; // rbp
  const char *v7; // rsi
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 v13; // rdx
  const char *v14; // rdi
  __int64 v15; // rax
  __m128i v16; // xmm0
  const void *v18; // r13
  char *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rbx
  size_t v22; // rax
  size_t v23; // r13
  size_t v24; // r14
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-68h]
  __int64 v27; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+10h] [rbp-58h]
  __m128i v29; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( v3 <= 1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      v28 = 0;
      v29 = 0;
      goto LABEL_4;
    }
    v18 = *(const void **)a2;
    v19 = *(char **)a1;
    if ( *(_QWORD *)(a1 + 16) < v3 )
    {
      v25 = qvector_reserve();
      *(_QWORD *)a1 = v25;
      v19 = (char *)v25;
    }
    *(_QWORD *)(a1 + 8) = v3;
    memmove(v19, v18, v3 - 1);
    *(_BYTE *)(*(_QWORD *)a1 + v3 - 1) = 0;
  }
  v20 = *(_QWORD *)(a1 + 8);
  v28 = 0;
  v29 = 0;
  if ( v20 )
  {
    v5 = *(const char **)a1;
    v4 = strchr(*(const char **)a1, 10);
    goto LABEL_5;
  }
LABEL_4:
  v4 = nullptr;
  v5 = s1;
LABEL_5:
  v6 = v5;
  v7 = nullptr;
  while ( v4 )
  {
    if ( v4 != v6 )
    {
      v11 = v29.m128i_i64[0];
      v12 = v4 - v6;
      if ( v29.m128i_i64[0] )
      {
        v11 = v29.m128i_i64[0] - 1;
        v12 = v4 - v6 + v29.m128i_i64[0] - 1;
      }
      v13 = v12 + 1;
      if ( v29.m128i_i64[1] < (unsigned __int64)(v12 + 1) )
      {
        v27 = v12;
        v26 = v12 + 1;
        v28 = qvector_reserve();
        v12 = v27;
        v7 = (const char *)v28;
        v13 = v26;
      }
      v29.m128i_i64[0] = v13;
      v7[v12] = 0;
      memmove((void *)(v11 + v28), v6, v4 - v6);
      v7 = (const char *)v28;
    }
    v10 = v29.m128i_i64[0];
    if ( v29.m128i_i64[0] )
    {
      v8 = v29.m128i_i64[0] + 1;
      v9 = v29.m128i_i64[0] + 2;
      v10 = v29.m128i_i64[0] - 1;
      if ( v29.m128i_i64[1] >= (unsigned __int64)(v29.m128i_i64[0] + 2) )
        goto LABEL_7;
    }
    else
    {
      v9 = 3;
      v8 = 2;
      if ( v29.m128i_i64[1] >= 3uLL )
        goto LABEL_7;
    }
    v28 = qvector_reserve();
    v7 = (const char *)v28;
LABEL_7:
    v29.m128i_i64[0] = v9;
    v7[v8] = 0;
    *(_WORD *)(v28 + v10) = 28252;
    v6 = v4 + 1;
    v7 = (const char *)v28;
    v4 = strchr(v4 + 1, 10);
  }
  if ( v6 == v5 )
  {
    v14 = v7;
  }
  else
  {
    if ( *v6 && v6 )
    {
      v21 = v29.m128i_i64[0];
      v22 = strlen(v6);
      v23 = v22;
      v24 = v22;
      if ( v29.m128i_i64[0] )
      {
        v21 = v29.m128i_i64[0] - 1;
        v24 = v22 + v29.m128i_i64[0] - 1;
      }
      if ( v29.m128i_i64[1] < v24 + 1 )
      {
        v28 = qvector_reserve();
        v7 = (const char *)v28;
      }
      v29.m128i_i64[0] = v24 + 1;
      v7[v24] = 0;
      memmove((void *)(v28 + v21), v6, v23);
      v7 = (const char *)v28;
    }
    v14 = *(const char **)a1;
    v15 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v7;
    v16 = _mm_loadu_si128(&v29);
    v29.m128i_i64[1] = v15;
    *(__m128i *)(a1 + 8) = v16;
  }
  if ( v14 )
  {
    v29.m128i_i64[0] = 0;
    qfree();
  }
  return v30 - __readfsqword(0x28u);
}

