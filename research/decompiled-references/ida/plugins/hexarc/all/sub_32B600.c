_QWORD *__fastcall sub_32B600(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _DWORD *v4; // rax
  __int64 *v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // r12
  __int64 i; // rbp
  __int64 *v9; // rax
  __int64 v10; // rdi
  char *v11; // rbp
  _QWORD *v12; // rax
  char v13; // dl
  _BYTE *v14; // rax
  _BYTE *v15; // r15
  size_t v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  _QWORD *v19; // rsi
  __m128i v20; // xmm0
  _QWORD *v21; // rax
  int v22; // ecx
  char *v23; // r15
  void *v25; // rdi
  size_t v26; // r14
  size_t v27; // r14
  __int64 v28; // rsi
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 *v31; // r14
  __int64 v32; // r13
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 v35; // rdx
  __m128i v36; // xmm0
  bool v38; // [rsp+Fh] [rbp-99h]
  __m128i n; // [rsp+10h] [rbp-98h] BYREF
  void *v40; // [rsp+20h] [rbp-88h]
  int v41; // [rsp+28h] [rbp-80h]
  int v42; // [rsp+2Ch] [rbp-7Ch]
  int v43; // [rsp+30h] [rbp-78h]
  int v44; // [rsp+34h] [rbp-74h]
  __int64 v45; // [rsp+38h] [rbp-70h]
  _QWORD *v46; // [rsp+40h] [rbp-68h]
  _DWORD *v47; // [rsp+48h] [rbp-60h]
  void *src; // [rsp+50h] [rbp-58h]
  __int128 v49; // [rsp+58h] [rbp-50h]
  unsigned __int64 v50; // [rsp+68h] [rbp-40h]

  v4 = *(_DWORD **)(a1 + 216);
  v43 = a3;
  v5 = (__int64 *)*a4;
  v50 = __readfsqword(0x28u);
  v6 = a4;
  v47 = v4;
  if ( v5 )
  {
    v7 = a4[1];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = &v5[4 * i];
        if ( *v9 )
        {
          v9[1] = 0;
          qfree();
          v5 = (__int64 *)*v6;
        }
      }
    }
    v6[1] = 0;
    qfree();
    *v6 = 0;
    v6[2] = 0;
  }
  v10 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(a2 + 8) )
    return sub_1C8060(v10);
  v11 = *(char **)a2;
  v44 = v47[145];
  v12 = sub_1C8060(v10);
  v38 = 0;
  v13 = *v11;
  if ( v12 && *((_DWORD *)v12 + 16) == v47[147] )
  {
    v44 = v47[147];
    v38 = 1;
    v43 = -1;
  }
  if ( v13 )
  {
    v41 = 0;
    do
    {
      do
        v14 = (_BYTE *)tag_skipcodes();
      while ( *v14 != 10 && *v14 );
      ++v41;
      v15 = v14;
      src = nullptr;
      v49 = 0;
      v16 = v14 - v11;
      if ( v14 == v11 )
        goto LABEL_18;
      v25 = nullptr;
      if ( v16 != -1 )
      {
        src = (void *)qvector_reserve();
        v25 = src;
      }
      *(_QWORD *)&v49 = v16 + 1;
      memmove(v25, v11, v16);
      *((_BYTE *)src + v16) = 0;
      n.m128i_i64[0] = v49;
      if ( (_QWORD)v49 )
      {
        v26 = n.m128i_i64[0];
        n.m128i_i64[1] = qalloc_or_throw();
        memcpy((void *)n.m128i_i64[1], src, v26);
        if ( src )
        {
          *(_QWORD *)&v49 = 0;
          qfree();
        }
        if ( v38 )
          v42 = v44;
        else
          v42 = -1;
        v27 = n.m128i_i64[0];
        v40 = (void *)qalloc_or_throw();
        memcpy(v40, (const void *)n.m128i_i64[1], v27);
        goto LABEL_20;
      }
      if ( !src )
      {
LABEL_18:
        if ( v38 )
          goto LABEL_41;
      }
      else
      {
        qfree();
        if ( v38 )
        {
LABEL_41:
          n = 0u;
          v42 = v44;
          v40 = nullptr;
          goto LABEL_20;
        }
      }
      v42 = -1;
      n = 0u;
      v40 = nullptr;
LABEL_20:
      v17 = v6[1];
      v18 = v6[2];
      if ( v18 < v17 + 1 )
      {
        v28 = qvector_reserve();
        v29 = v6[1];
        v30 = v6[2];
        v6[2] = v18;
        v31 = (__int64 *)*v6;
        v45 = v30;
        v32 = v29 - 1;
        if ( v32 >= 0 )
        {
          v46 = v6;
          v33 = v28;
          v34 = v32;
          do
          {
            v35 = *v31;
            v36 = _mm_loadu_si128((const __m128i *)(v31 + 1));
            *v31 = 0;
            v31[2] = 0;
            *(_QWORD *)v33 = v35;
            *(__m128i *)(v33 + 8) = v36;
            *(_BYTE *)(v33 + 24) = *((_BYTE *)v31 + 24);
            *(_DWORD *)(v33 + 28) = *((_DWORD *)v31 + 7);
            if ( *v31 )
            {
              v31[1] = 0;
              qfree();
            }
            v31 += 4;
            v33 += 32;
          }
          while ( v34-- != 0 );
          v6 = v46;
        }
        v46 = (_QWORD *)v28;
        qfree();
        v19 = v46;
        v6[2] = v45;
        v17 = v6[1];
        *v6 = v19;
      }
      else
      {
        v19 = (_QWORD *)*v6;
      }
      v20 = _mm_loadl_epi64(&n);
      v21 = &v19[4 * v17];
      *v21 = v40;
      v22 = v42;
      *((_BYTE *)v21 + 24) = 1;
      *((_DWORD *)v21 + 7) = v22;
      *(__m128i *)(v21 + 1) = _mm_unpacklo_epi64(v20, v20);
      ++v6[1];
      if ( !v38 )
        v38 = *(_BYTE *)tag_skipcodes() == 123;
      v23 = &v15[-(*v15 == 0) + 1];
      v11 = v23;
      if ( v43 == v41 )
        v44 = v47[146];
      if ( n.m128i_i64[1] )
        qfree();
    }
    while ( *v23 );
  }
  return (_QWORD *)(v50 - __readfsqword(0x28u));
}

