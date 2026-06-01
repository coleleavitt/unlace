unsigned __int64 __fastcall sub_3E53D0(__int64 a1, const char *a2, const char *a3)
{
  size_t v4; // r14
  const char *v5; // r15
  __int64 v6; // rbp
  size_t v7; // rax
  __int64 v8; // r8
  size_t v9; // r15
  size_t v10; // r10
  __int64 v11; // rdx
  char *v12; // rax
  char *v13; // rbx
  size_t v14; // r10
  __int64 v15; // r9
  size_t v16; // r11
  __int64 v17; // rdx
  __m128i v18; // xmm0
  char *v19; // rdi
  __int64 v20; // rax
  __int64 v22; // rbx
  size_t v23; // rax
  size_t v24; // r12
  size_t v25; // r13
  char *haystack; // [rsp+0h] [rbp-90h]
  __int64 v27; // [rsp+8h] [rbp-88h]
  __int64 v28; // [rsp+8h] [rbp-88h]
  __int64 v29; // [rsp+10h] [rbp-80h]
  size_t v30; // [rsp+10h] [rbp-80h]
  size_t v31; // [rsp+18h] [rbp-78h]
  __int64 v32; // [rsp+18h] [rbp-78h]
  size_t v34; // [rsp+30h] [rbp-60h]
  __int64 v35; // [rsp+38h] [rbp-58h]
  __m128i v36; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+50h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v36 = 0;
  v35 = 0;
  v4 = strlen(a2);
  haystack = (char *)s1;
  if ( *(_QWORD *)(a1 + 8) )
    haystack = *(char **)a1;
  v5 = haystack;
  v6 = 0;
  while ( 1 )
  {
    v12 = strstr(v5, a2);
    v13 = v12;
    if ( !v12 )
      break;
    v14 = v12 - v5;
    if ( v12 != v5 )
    {
      v15 = v36.m128i_i64[0];
      v16 = v12 - v5;
      if ( v36.m128i_i64[0] )
      {
        v15 = v36.m128i_i64[0] - 1;
        v16 = v14 + v36.m128i_i64[0] - 1;
      }
      v17 = v16 + 1;
      if ( v36.m128i_i64[1] < v16 + 1 )
      {
        v34 = v16;
        v32 = v15;
        v30 = v12 - v5;
        v28 = v16 + 1;
        v35 = qvector_reserve();
        v16 = v34;
        v6 = v35;
        v15 = v32;
        v14 = v30;
        v17 = v28;
      }
      v36.m128i_i64[0] = v17;
      *(_BYTE *)(v6 + v16) = 0;
      memmove((void *)(v15 + v35), v5, v14);
      v6 = v35;
    }
    if ( a3 )
    {
      v7 = strlen(a3);
      v8 = v36.m128i_i64[0];
      v9 = v7;
      v10 = v7;
      if ( v36.m128i_i64[0] )
      {
        v8 = v36.m128i_i64[0] - 1;
        v10 = v7 + v36.m128i_i64[0] - 1;
      }
      v11 = v10 + 1;
      if ( v36.m128i_i64[1] < v10 + 1 )
      {
        v31 = v10;
        v29 = v8;
        v27 = v10 + 1;
        v35 = qvector_reserve();
        v10 = v31;
        v6 = v35;
        v8 = v29;
        v11 = v27;
      }
      v36.m128i_i64[0] = v11;
      *(_BYTE *)(v6 + v10) = 0;
      memmove((void *)(v8 + v35), a3, v9);
      v6 = v35;
    }
    v5 = &v13[v4];
  }
  if ( v5 == haystack )
  {
    v19 = (char *)v6;
  }
  else
  {
    if ( *v5 && v5 )
    {
      v22 = v36.m128i_i64[0];
      v23 = strlen(v5);
      v24 = v23;
      v25 = v23;
      if ( v36.m128i_i64[0] )
      {
        v22 = v36.m128i_i64[0] - 1;
        v25 = v23 + v36.m128i_i64[0] - 1;
      }
      if ( v36.m128i_i64[1] < v25 + 1 )
      {
        v35 = qvector_reserve();
        v6 = v35;
      }
      v36.m128i_i64[0] = v25 + 1;
      *(_BYTE *)(v6 + v25) = 0;
      memmove((void *)(v35 + v22), v5, v24);
      v6 = v35;
    }
    v18 = _mm_loadu_si128(&v36);
    v19 = *(char **)a1;
    v20 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)a1 = v6;
    *(__m128i *)(a1 + 8) = v18;
    v36.m128i_i64[1] = v20;
  }
  if ( v19 )
  {
    v36.m128i_i64[0] = 0;
    qfree();
  }
  return v37 - __readfsqword(0x28u);
}

