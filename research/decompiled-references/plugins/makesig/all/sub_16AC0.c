__int64 __fastcall sub_16AC0(const char *a1, __int64 *a2)
{
  struct __jmp_buf_tag *v2; // rdi
  __int64 v3; // rax
  const char *v4; // rdx
  size_t v6; // rax
  __int64 v7; // rbp
  size_t v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 *v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rdi
  unsigned __int64 v22; // rdi
  __int64 v23; // rbp
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __m128i si128; // xmm0
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rbp
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r15
  size_t v34; // r14
  void *v35; // rax
  void *v36; // rbx
  __m128i v37; // xmm0
  __m128i v38; // xmm1
  unsigned __int64 v39; // rax
  void *v40; // rdi
  __m128i v43; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int64 v44; // [rsp+20h] [rbp-98h] BYREF
  __int128 v45; // [rsp+28h] [rbp-90h]
  void *v46; // [rsp+40h] [rbp-78h] BYREF
  __m128i v47; // [rsp+48h] [rbp-70h] BYREF
  __int64 v48; // [rsp+60h] [rbp-58h] BYREF
  __int128 v49; // [rsp+68h] [rbp-50h]
  unsigned __int64 v50; // [rsp+78h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  if ( !qword_20528 )
  {
    if ( a2 )
    {
      v27 = *a2;
      if ( (unsigned __int64)a2[2] <= 0x17 )
      {
        v29 = qvector_reserve(a2, v27, 24, 1);
        *a2 = v29;
        v27 = v29;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_1BB20);
      a2[1] = 24;
      *(__m128i *)v27 = si128;
      *(_QWORD *)(v27 + 15) = 0x64657A696C616974LL;
      *(_BYTE *)(*a2 + 23) = 0;
    }
    return 0;
  }
  byte_21850 = 1;
  *(_QWORD *)(sub_5840() + 8) = 0;
  v2 = (struct __jmp_buf_tag *)sub_5830();
  if ( _setjmp(v2) )
  {
    if ( a2 )
    {
      v3 = sub_5840();
      v4 = s1;
      if ( *(_QWORD *)(v3 + 8) )
        v4 = *(const char **)v3;
      sub_7750(a2, (__int64)"read pattern: %s", v4);
    }
    return 0;
  }
  v44 = 0;
  v46 = nullptr;
  v45 = 0;
  v47 = 0;
  if ( !a1 )
  {
    v10 = 0;
    v11 = 1;
LABEL_33:
    v12 = qvector_reserve(&v44, v10, v11, 24);
    v44 = v12;
    v9 = v45;
    goto LABEL_12;
  }
  v6 = strlen(a1);
  v7 = v6 + 1;
  v8 = v6;
  v46 = (void *)qvector_reserve(&v46, 0, v6 + 1, 1);
  v47.m128i_i64[0] = v7;
  memmove(v46, a1, v8);
  *((_BYTE *)v46 + v8) = 0;
  v9 = v45;
  v10 = v44;
  v11 = v45 + 1;
  if ( (unsigned __int64)&v46 >= v44 && (unsigned __int64)&v46 < v44 + 24LL * *((_QWORD *)&v45 + 1) )
  {
    v36 = v46;
    v37 = _mm_loadl_epi64(&v47);
    v46 = nullptr;
    v38 = _mm_loadl_epi64((const __m128i *)&v47.m128i_u64[1]);
    v47 = 0;
    if ( *((_QWORD *)&v45 + 1) < v11 )
    {
      v43.m128i_i64[1] = v38.m128i_i64[0];
      v43.m128i_i64[0] = v37.m128i_i64[0];
      v44 = qvector_reserve(&v44, v44, v45 + 1, 24);
      v9 = v45;
      v10 = v44;
      v38 = _mm_loadl_epi64((const __m128i *)&v43.m128i_u64[1]);
      v37 = _mm_loadl_epi64(&v43);
    }
    v39 = v10 + 24 * v9;
    *(_QWORD *)v39 = v36;
    v40 = v46;
    *(__m128i *)(v39 + 8) = _mm_unpacklo_epi64(v37, v38);
    v15 = v45 + 1;
    *(_QWORD *)&v45 = v45 + 1;
    if ( v40 )
    {
      v47.m128i_i64[0] = 0;
      qfree(v40);
      v15 = v45;
    }
    goto LABEL_13;
  }
  if ( *((_QWORD *)&v45 + 1) < v11 )
    goto LABEL_33;
  v12 = v44;
LABEL_12:
  v13 = v12 + 24 * v9;
  v14 = v46;
  *(__m128i *)(v13 + 8) = _mm_loadu_si128(&v47);
  *(_QWORD *)v13 = v14;
  v15 = v45 + 1;
  *(_QWORD *)&v45 = v45 + 1;
LABEL_13:
  v16 = qword_20528;
  v48 = 0;
  v49 = 0;
  if ( v15 )
  {
    v48 = qalloc_or_throw(24 * v15);
    v30 = v48;
    v31 = 0;
    *((_QWORD *)&v49 + 1) = v15;
    do
    {
      v32 = v44;
      *(_QWORD *)v30 = 0;
      *(_OWORD *)(v30 + 8) = 0;
      v33 = v32 + 24 * v31;
      v34 = *(_QWORD *)(v33 + 8);
      if ( v34 )
      {
        v35 = (void *)qalloc_or_throw(*(_QWORD *)(v33 + 8));
        *(_QWORD *)v30 = v35;
        *(_QWORD *)(v30 + 16) = v34;
        memcpy(v35, *(const void **)v33, v34);
        *(_QWORD *)(v30 + 8) = v34;
      }
      ++v31;
      v30 += 24;
    }
    while ( v31 != v15 );
    *(_QWORD *)&v49 = v31;
  }
  sub_14FE0(&v48, nullptr, v16);
  v17 = v48;
  if ( v48 )
  {
    v18 = v49;
    v19 = (__int64 *)v48;
    v20 = 0;
    if ( (_QWORD)v49 )
    {
      do
      {
        v21 = *v19;
        if ( *v19 )
        {
          v19[1] = 0;
          qfree(v21);
        }
        ++v20;
        v19 += 3;
      }
      while ( v18 != v20 );
    }
    *(_QWORD *)&v49 = 0;
    qfree(v17);
  }
  v22 = v44;
  if ( v44 )
  {
    v23 = v45;
    if ( (_QWORD)v45 )
    {
      v24 = 0;
      do
      {
        v25 = (__int64 *)(v22 + 24 * v24);
        v26 = *v25;
        if ( *v25 )
        {
          v25[1] = 0;
          qfree(v26);
        }
        ++v24;
        v22 = v44;
      }
      while ( v23 != v24 );
    }
    *(_QWORD *)&v45 = 0;
    qfree(v22);
  }
  return 1;
}
