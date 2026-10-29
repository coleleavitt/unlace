unsigned __int64 __fastcall sub_11D40(_QWORD *a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rax
  unsigned int *v8; // rbx
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rbp
  _BYTE *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  size_t v18; // r8
  __int64 v19; // r14
  unsigned int v20; // r15d
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  void *v24; // r14
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  __int64 v27; // r14
  unsigned __int64 v28; // r14
  __int64 v29; // r15
  __int64 v30; // r9
  __int64 v31; // rsi
  __int64 *v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rdi
  __int64 v35; // rdx
  __m128i v37; // [rsp+0h] [rbp-E8h] BYREF
  size_t v38; // [rsp+18h] [rbp-D0h]
  __int64 v39; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v41; // [rsp+38h] [rbp-B0h] BYREF
  void *src; // [rsp+50h] [rbp-98h] BYREF
  __m128i v43; // [rsp+58h] [rbp-90h]
  __int64 v44; // [rsp+70h] [rbp-78h] BYREF
  __int128 v45; // [rsp+78h] [rbp-70h]
  void *v46; // [rsp+90h] [rbp-58h] BYREF
  __m128i v47; // [rsp+98h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+A8h] [rbp-40h]

  v6 = a1[26];
  v48 = __readfsqword(0x28u);
  v8 = (unsigned int *)(v6 + 8 * a5);
  sub_8BF0(*a2, (__int64)"%x", *v8);
  sub_8BF0(*a2 + 3, (__int64)"%x", *v8 + 2 * *((unsigned __int16 *)v8 + 2));
  v40 = 0;
  v41 = 0;
  v9 = (_QWORD *)a1[23];
  v39 = 0;
  v10 = *v8;
  v11 = sub_F0E0(v9, v10, &v39);
  if ( v11 <= 0 )
  {
    if ( under_debugger )
      BUG();
    v21 = 10186;
    interr(10186);
LABEL_32:
    sub_100C0(v21, v10, v23);
  }
  v12 = v39;
  v13 = 0;
  v14 = 8LL * v11;
  do
  {
    while ( *(_DWORD *)(v12 + v13 + 4) != a1[24] )
    {
      v13 += 8;
      if ( v13 == v14 )
        goto LABEL_26;
    }
    v10 = 0;
    v43 = 0;
    src = nullptr;
    v15 = (_BYTE *)qvector_reserve(&src, 0, 4, 1);
    src = v15;
    v43.m128i_i64[0] = 4;
    *(_WORD *)v15 = 28257;
    v15[2] = 121;
    *((_BYTE *)src + 3) = 0;
    if ( *(_DWORD *)(v13 + v39) != -1 )
    {
      v19 = a1[23];
      v10 = a1[24];
      v44 = 0;
      v45 = 0;
      v20 = *(_DWORD *)(v13 + v39);
      v21 = v19 + 120;
      v22 = (unsigned int)sub_C5C0(v19 + 120, v10) - 1;
      if ( v22 >= *(_QWORD *)(v19 + 176) )
        goto LABEL_32;
      sub_C8C0((__int64)&v44, *(_QWORD *)(*(_QWORD *)(v19 + 168) + 8 * v22), v20, 0x55u);
      v10 = (unsigned __int64)&v44;
      sub_C1C0(&v46, (__int64)&v44);
      v24 = v46;
      v46 = nullptr;
      v25 = _mm_loadu_si128(&v47);
      v47 = 0;
      if ( src )
      {
        v37 = v25;
        v43.m128i_i64[0] = 0;
        qfree(src, (const char *)&v44);
        v26 = _mm_load_si128(&v37);
        src = v24;
        v43 = v26;
        if ( v46 )
        {
          v47.m128i_i64[0] = 0;
          qfree(v46, (const char *)&v44);
        }
      }
      else
      {
        src = v24;
        v43 = v25;
      }
      if ( v44 )
      {
        *(_QWORD *)&v45 = 0;
        qfree(v44, (const char *)&v44);
      }
    }
    v27 = v41.m128i_i64[0];
    if ( v41.m128i_i64[0] > 1uLL )
    {
      v10 = v40;
      if ( v41.m128i_i64[1] < (unsigned __int64)(v41.m128i_i64[0] + 1) )
      {
        v40 = qvector_reserve(&v40, v40, v41.m128i_i64[0] + 1, 1);
        v10 = v40;
      }
      v41.m128i_i64[0] = v27 + 1;
      *(_BYTE *)(v10 + v27 - 1) = 32;
      *(_BYTE *)(v40 + v27) = 0;
    }
    v28 = v43.m128i_i64[0];
    if ( v43.m128i_i64[0] )
    {
      v18 = v43.m128i_i64[0] - 1;
      if ( v43.m128i_i64[0] != 1 )
      {
        v29 = v41.m128i_i64[0];
        v30 = v43.m128i_i64[0] - 1;
        if ( v41.m128i_i64[0] )
        {
          v29 = v41.m128i_i64[0] - 1;
          v30 = v18 + v41.m128i_i64[0] - 1;
          v28 = v43.m128i_i64[0] + v41.m128i_i64[0] - 1;
        }
        v31 = v40;
        if ( v41.m128i_i64[1] < v28 )
        {
          v37.m128i_i64[0] = v30;
          v38 = v43.m128i_i64[0] - 1;
          v40 = qvector_reserve(&v40, v40, v28, 1);
          v18 = v38;
          v31 = v40;
          v30 = v37.m128i_i64[0];
        }
        v41.m128i_i64[0] = v28;
        *(_BYTE *)(v31 + v30) = 0;
        v10 = (unsigned __int64)src;
        memcpy((void *)(v29 + v40), src, v18);
      }
    }
    if ( src )
    {
      v43.m128i_i64[0] = 0;
      qfree(src, (const char *)v10, v16, v17, v18);
    }
    v13 += 8;
    v12 = v39;
  }
  while ( v13 != v14 );
LABEL_26:
  qfree(v12, (const char *)v10);
  v32 = *a2;
  v33 = _mm_loadu_si128(&v41);
  v34 = (*a2)[6];
  v35 = (*a2)[8];
  v32[6] = v40;
  *(__m128i *)(v32 + 7) = v33;
  v40 = v34;
  v41.m128i_i64[1] = v35;
  if ( v34 )
  {
    v41.m128i_i64[0] = 0;
    qfree(v34, (const char *)v10);
  }
  return v48 - __readfsqword(0x28u);
}

