_QWORD *__fastcall sub_332C40(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 v8; // r12
  __int64 i; // rbp
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdi
  char *v13; // rbp
  _QWORD *v14; // rax
  char v15; // dl
  _BYTE *v16; // rax
  _BYTE *v17; // r15
  size_t v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // r12
  __int64 v21; // rsi
  __m128i v22; // xmm0
  __int64 v23; // rax
  int v24; // ecx
  char *v25; // r15
  void *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  size_t v30; // r14
  void *v31; // rax
  void *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  size_t v35; // r14
  __int64 v36; // rsi
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // r13
  __int64 v41; // r12
  __int64 v42; // rbx
  __int64 v43; // rdx
  __m128i v44; // xmm0
  __int64 v45; // rdi
  bool v47; // [rsp+Fh] [rbp-99h]
  __m128i n; // [rsp+10h] [rbp-98h] BYREF
  void *v49; // [rsp+20h] [rbp-88h]
  int v50; // [rsp+28h] [rbp-80h]
  int v51; // [rsp+2Ch] [rbp-7Ch]
  int v52; // [rsp+30h] [rbp-78h]
  int v53; // [rsp+34h] [rbp-74h]
  __int64 v54; // [rsp+38h] [rbp-70h]
  __int64 *v55; // [rsp+40h] [rbp-68h]
  _DWORD *v56; // [rsp+48h] [rbp-60h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  __int128 v58; // [rsp+58h] [rbp-50h]
  unsigned __int64 v59; // [rsp+68h] [rbp-40h]

  v5 = *(_DWORD **)(a1 + 216);
  v52 = a3;
  v6 = *a4;
  v59 = __readfsqword(0x28u);
  v7 = a4;
  v56 = v5;
  if ( v6 )
  {
    v8 = a4[1];
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = (__int64 *)(v6 + 32 * i);
        v11 = *v10;
        if ( *v10 )
        {
          v10[1] = 0;
          qfree(v11);
          v6 = *v7;
        }
      }
    }
    v7[1] = 0;
    qfree(v6);
    *v7 = 0;
    v7[2] = 0;
  }
  v12 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(a2 + 8) )
    return sub_1CE9E0(v12);
  v13 = *(char **)a2;
  v53 = v56[145];
  v14 = sub_1CE9E0(v12);
  v47 = 0;
  v15 = *v13;
  if ( v14 && *((_DWORD *)v14 + 16) == v56[147] )
  {
    v53 = v56[147];
    v47 = 1;
    v52 = -1;
  }
  if ( v15 )
  {
    v50 = 0;
    do
    {
      do
        v16 = (_BYTE *)tag_skipcodes();
      while ( *v16 != 10 && *v16 );
      ++v50;
      v17 = v16;
      src = nullptr;
      v58 = 0;
      v18 = v16 - v13;
      if ( v16 == v13 )
        goto LABEL_18;
      v27 = nullptr;
      if ( v18 != -1 )
      {
        src = (void *)qvector_reserve((__int64)&src, 0, v18 + 1, 1);
        v27 = src;
      }
      *(_QWORD *)&v58 = v18 + 1;
      memmove(v27, v13, v18);
      *((_BYTE *)src + v18) = 0;
      n.m128i_i64[0] = v58;
      if ( (_QWORD)v58 )
      {
        v30 = n.m128i_i64[0];
        v31 = (void *)qalloc_or_throw(n.m128i_i64[0], (__int64)v13, v28, v29);
        v32 = src;
        n.m128i_i64[1] = (__int64)v31;
        memcpy(v31, src, v30);
        if ( src )
        {
          *(_QWORD *)&v58 = 0;
          qfree((__int64)src);
        }
        if ( v47 )
          v51 = v53;
        else
          v51 = -1;
        v35 = n.m128i_i64[0];
        v49 = (void *)qalloc_or_throw(n.m128i_i64[0], (__int64)v32, v33, v34);
        memcpy(v49, (const void *)n.m128i_i64[1], v35);
        goto LABEL_20;
      }
      if ( !src )
      {
LABEL_18:
        if ( v47 )
          goto LABEL_41;
      }
      else
      {
        qfree((__int64)src);
        if ( v47 )
        {
LABEL_41:
          n = 0u;
          v51 = v53;
          v49 = nullptr;
          goto LABEL_20;
        }
      }
      v51 = -1;
      n = 0u;
      v49 = nullptr;
LABEL_20:
      v19 = v7[1];
      v20 = v7[2];
      if ( v20 < v19 + 1 )
      {
        v36 = qvector_reserve((__int64)v7, 0, v19 + 1, 32);
        v37 = v7[1];
        v38 = v7[2];
        v7[2] = v20;
        v39 = *v7;
        v54 = v38;
        v40 = v37 - 1;
        if ( v40 >= 0 )
        {
          v55 = v7;
          v41 = v36;
          v42 = v40;
          do
          {
            v43 = *(_QWORD *)v39;
            v44 = _mm_loadu_si128((const __m128i *)(v39 + 8));
            *(_QWORD *)v39 = 0;
            *(_QWORD *)(v39 + 16) = 0;
            *(_QWORD *)v41 = v43;
            *(__m128i *)(v41 + 8) = v44;
            *(_BYTE *)(v41 + 24) = *(_BYTE *)(v39 + 24);
            *(_DWORD *)(v41 + 28) = *(_DWORD *)(v39 + 28);
            v45 = *(_QWORD *)v39;
            if ( *(_QWORD *)v39 )
            {
              *(_QWORD *)(v39 + 8) = 0;
              qfree(v45);
            }
            v39 += 32;
            v41 += 32;
          }
          while ( v42-- != 0 );
          v7 = v55;
          v39 = *v55;
        }
        v55 = (__int64 *)v36;
        qfree(v39);
        v21 = (__int64)v55;
        v7[2] = v54;
        v19 = v7[1];
        *v7 = v21;
      }
      else
      {
        v21 = *v7;
      }
      v22 = _mm_loadl_epi64(&n);
      v23 = v21 + 32 * v19;
      *(_QWORD *)v23 = v49;
      v24 = v51;
      *(_BYTE *)(v23 + 24) = 1;
      *(_DWORD *)(v23 + 28) = v24;
      *(__m128i *)(v23 + 8) = _mm_unpacklo_epi64(v22, v22);
      ++v7[1];
      if ( !v47 )
        v47 = *(_BYTE *)tag_skipcodes() == 123;
      v25 = &v17[-(*v17 == 0) + 1];
      v13 = v25;
      if ( v52 == v50 )
        v53 = v56[146];
      if ( n.m128i_i64[1] )
        qfree(n.m128i_i64[1]);
    }
    while ( *v25 );
  }
  return (_QWORD *)(v59 - __readfsqword(0x28u));
}

