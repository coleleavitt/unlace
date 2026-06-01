__int64 __fastcall sub_32350(__int64 a1, __int64 a2)
{
  size_t v3; // rbx
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // rdx
  __int64 v6; // rbp
  size_t v7; // rbx
  size_t v8; // r15
  __int64 v9; // rax
  size_t v10; // rdx
  char *v11; // rbx
  const char *v12; // r13
  bool v13; // zf
  const char *v14; // rbp
  const char *v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rbp
  const char *v19; // rdi
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 result; // rax
  __int64 v23; // r14
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rbx
  size_t v27; // rax
  size_t v28; // r13
  size_t v29; // r14
  __int64 v30; // [rsp+0h] [rbp-68h]
  __int64 v31; // [rsp+8h] [rbp-60h]
  __int64 v32; // [rsp+10h] [rbp-58h]
  __m128i v33; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v3 = strlen((const char *)(a2 + 1));
  v4 = v3;
  if ( v3 <= 1 )
  {
    result = 0;
    if ( *(_BYTE *)(a2 + v3) != 59 )
      return result;
  }
  if ( !a1 )
    return 1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree();
    *(_QWORD *)a1 = 0;
    v5 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = v3 - 1;
  v8 = v7;
  if ( v6 )
  {
    --v6;
    v9 = 0;
    v8 = v7 + v6;
    v4 = v7 + v6 + 1;
    if ( v5 >= v4 )
      goto LABEL_7;
LABEL_33:
    v9 = qvector_reserve();
    *(_QWORD *)a1 = v9;
    goto LABEL_7;
  }
  v9 = 0;
  if ( v5 < v4 )
    goto LABEL_33;
LABEL_7:
  *(_QWORD *)(a1 + 8) = v4;
  v10 = v7;
  v11 = nullptr;
  *(_BYTE *)(v9 + v8) = 0;
  v12 = nptr;
  memmove((void *)(v6 + *(_QWORD *)a1), (const void *)(a2 + 1), v10);
  v13 = *(_QWORD *)(a1 + 8) == 0;
  v32 = 0;
  v33 = 0;
  if ( !v13 )
  {
    v12 = *(const char **)a1;
    v11 = strchr(*(const char **)a1, 47);
  }
  v14 = v12;
  v15 = nullptr;
  while ( v11 )
  {
    if ( v11 != v14 )
    {
      v23 = v33.m128i_i64[0];
      v24 = v11 - v14;
      if ( v33.m128i_i64[0] )
      {
        v23 = v33.m128i_i64[0] - 1;
        v24 = v11 - v14 + v33.m128i_i64[0] - 1;
      }
      v25 = v24 + 1;
      if ( v33.m128i_i64[1] < (unsigned __int64)(v24 + 1) )
      {
        v31 = v24;
        v30 = v24 + 1;
        v32 = qvector_reserve();
        v24 = v31;
        v15 = (const char *)v32;
        v25 = v30;
      }
      v33.m128i_i64[0] = v25;
      v15[v24] = 0;
      memmove((void *)(v23 + v32), v14, v11 - v14);
      v15 = (const char *)v32;
    }
    v18 = v33.m128i_i64[0];
    if ( v33.m128i_i64[0] )
    {
      v16 = v33.m128i_i64[0] + 1;
      v17 = v33.m128i_i64[0];
      v18 = v33.m128i_i64[0] - 1;
      if ( v33.m128i_i64[1] >= (unsigned __int64)(v33.m128i_i64[0] + 1) )
        goto LABEL_11;
    }
    else
    {
      v16 = 2;
      v17 = 1;
      if ( v33.m128i_i64[1] >= 2uLL )
        goto LABEL_11;
    }
    v32 = qvector_reserve();
    v15 = (const char *)v32;
LABEL_11:
    v33.m128i_i64[0] = v16;
    v15[v17] = 0;
    *(_BYTE *)(v32 + v18) = 46;
    v14 = v11 + 1;
    v15 = (const char *)v32;
    v11 = strchr(v11 + 1, 47);
  }
  if ( v14 == v12 )
  {
    v19 = v15;
  }
  else
  {
    if ( *v14 && v14 )
    {
      v26 = v33.m128i_i64[0];
      v27 = strlen(v14);
      v28 = v27;
      v29 = v27;
      if ( v33.m128i_i64[0] )
      {
        v26 = v33.m128i_i64[0] - 1;
        v29 = v27 + v33.m128i_i64[0] - 1;
      }
      if ( v33.m128i_i64[1] < v29 + 1 )
      {
        v32 = qvector_reserve();
        v15 = (const char *)v32;
      }
      v33.m128i_i64[0] = v29 + 1;
      v15[v29] = 0;
      memmove((void *)(v32 + v26), v14, v28);
      v15 = (const char *)v32;
    }
    v19 = *(const char **)a1;
    v20 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v15;
    v21 = _mm_loadu_si128(&v33);
    v33.m128i_i64[1] = v20;
    *(__m128i *)(a1 + 8) = v21;
  }
  if ( v19 )
  {
    v33.m128i_i64[0] = 0;
    qfree();
  }
  return 1;
}

