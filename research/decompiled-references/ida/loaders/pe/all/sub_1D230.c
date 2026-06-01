unsigned __int64 __fastcall sub_1D230(__int64 *a1)
{
  bool v1; // cc
  const char *v3; // r13
  char *v4; // rbx
  const char *v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v17; // rbx
  size_t v18; // rax
  size_t v19; // r13
  size_t v20; // r14
  bool v21; // zf
  __int64 v22; // [rsp+0h] [rbp-68h]
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  __m128i v25; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-40h]

  v1 = (unsigned __int64)a1[1] <= 1;
  v26 = __readfsqword(0x28u);
  if ( v1 )
  {
    v4 = 0;
    v3 = s1;
    ++dword_349E8;
    sub_174B0(a1);
    v21 = a1[1] == 0;
    v24 = 0;
    v25 = 0;
    if ( v21 )
      goto LABEL_4;
  }
  else
  {
    v24 = 0;
    v25 = 0;
  }
  v3 = (const char *)*a1;
  v4 = strchr((const char *)*a1, 37);
LABEL_4:
  v5 = v3;
  v6 = 0;
  while ( v4 )
  {
    if ( v4 != v5 )
    {
      v10 = v25.m128i_i64[0];
      v11 = v4 - v5;
      if ( v25.m128i_i64[0] )
      {
        v10 = v25.m128i_i64[0] - 1;
        v11 = v4 - v5 + v25.m128i_i64[0] - 1;
      }
      v12 = v11 + 1;
      if ( v25.m128i_i64[1] < (unsigned __int64)(v11 + 1) )
      {
        v23 = v11;
        v22 = v11 + 1;
        v24 = qvector_reserve();
        v11 = v23;
        v6 = v24;
        v12 = v22;
      }
      v25.m128i_i64[0] = v12;
      *(_BYTE *)(v6 + v11) = 0;
      memmove((void *)(v10 + v24), v5, v4 - v5);
      v6 = v24;
    }
    v9 = v25.m128i_i64[0];
    if ( v25.m128i_i64[0] )
    {
      v7 = v25.m128i_i64[0] + 1;
      v8 = v25.m128i_i64[0];
      v9 = v25.m128i_i64[0] - 1;
      if ( v25.m128i_i64[1] >= (unsigned __int64)(v25.m128i_i64[0] + 1) )
        goto LABEL_6;
    }
    else
    {
      v7 = 2;
      v8 = 1;
      if ( v25.m128i_i64[1] >= 2uLL )
        goto LABEL_6;
    }
    v24 = qvector_reserve();
    v6 = v24;
LABEL_6:
    v25.m128i_i64[0] = v7;
    *(_BYTE *)(v6 + v8) = 0;
    *(_BYTE *)(v24 + v9) = 95;
    v5 = v4 + 1;
    v6 = v24;
    v4 = strchr(v4 + 1, 37);
  }
  if ( v5 == v3 )
  {
    v13 = v6;
  }
  else
  {
    if ( *v5 && v5 )
    {
      v17 = v25.m128i_i64[0];
      v18 = strlen(v5);
      v19 = v18;
      v20 = v18;
      if ( v25.m128i_i64[0] )
      {
        v17 = v25.m128i_i64[0] - 1;
        v20 = v18 + v25.m128i_i64[0] - 1;
      }
      if ( v25.m128i_i64[1] < v20 + 1 )
      {
        v24 = qvector_reserve();
        v6 = v24;
      }
      v25.m128i_i64[0] = v20 + 1;
      *(_BYTE *)(v6 + v20) = 0;
      memmove((void *)(v24 + v17), v5, v19);
      v6 = v24;
    }
    v13 = *a1;
    v14 = a1[2];
    *a1 = v6;
    v15 = _mm_loadu_si128(&v25);
    v25.m128i_i64[1] = v14;
    *(__m128i *)(a1 + 1) = v15;
  }
  if ( v13 )
  {
    v25.m128i_i64[0] = 0;
    qfree();
  }
  return v26 - __readfsqword(0x28u);
}
