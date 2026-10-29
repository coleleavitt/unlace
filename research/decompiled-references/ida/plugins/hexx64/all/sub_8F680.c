unsigned __int64 __fastcall sub_8F680(__int64 a1, int a2, const char *a3)
{
  _QWORD *v3; // rdi
  _QWORD *exception; // rdi
  unsigned __int8 v5; // al
  size_t v7; // rbp
  _BYTE *v9; // rsi
  size_t v10; // r15
  __int64 v11; // r13
  size_t v12; // r14
  const char *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  __m128i v21; // xmm0
  void *v22; // rax
  unsigned __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __int64 v26; // rdi
  void *v28; // rax
  size_t v29; // rdx
  size_t v30; // rcx
  unsigned __int64 v31; // rbx
  char v32; // dl
  _BYTE *v33; // rax
  size_t v34; // rax
  unsigned __int64 v35; // rax
  char v36; // dl
  char v37; // bp
  size_t v38; // rdx
  _BYTE *v39; // rsi
  __int64 v40; // rbp
  size_t v41; // r12
  _QWORD *v42; // rbx
  unsigned __int64 v43; // rbp
  size_t v44; // r13
  __int64 v45; // r12
  size_t v46; // r14
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rax
  __m128i v50; // xmm1
  __int64 v51; // rax
  const __m128i *v52; // [rsp+8h] [rbp-90h] BYREF
  void *src; // [rsp+10h] [rbp-88h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-80h]
  int v55; // [rsp+30h] [rbp-68h] BYREF
  void *v56; // [rsp+38h] [rbp-60h]
  __m128i v57; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v58; // [rsp+58h] [rbp-40h]

  v5 = *(_BYTE *)(a1 + 52);
  v58 = __readfsqword(0x28u);
  if ( (a3 == nullptr) | v5 ^ 1 )
    return v58 - __readfsqword(0x28u);
  v7 = a2;
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( a2 )
  {
    if ( a2 == -1 )
    {
      v28 = nullptr;
    }
    else
    {
      v28 = (void *)qvector_reserve((__int64)&src, 0, a2 + 1LL, 1);
      v29 = n[0];
      src = v28;
      if ( n[0] < a2 + 1LL )
      {
        do
        {
          v30 = v29;
          *((_BYTE *)v28 + v29++) = 32;
          v28 = src;
        }
        while ( a2 != v30 );
      }
      n[0] = a2 + 1LL;
    }
    *((_BYTE *)v28 + a2) = 0;
    v34 = strlen(a3);
    v7 = n[0];
    v9 = src;
    v10 = v34;
    if ( n[0] )
    {
      v7 = n[0] - 1;
      v12 = v34 + n[0] - 1;
    }
    else
    {
      v12 = v34;
    }
    v11 = v12 + 1;
    if ( n[1] >= v12 + 1 )
      goto LABEL_5;
  }
  else
  {
    v9 = nullptr;
    v10 = strlen(a3);
    v11 = v10 + 1;
    v12 = v10;
  }
  src = (void *)qvector_reserve((__int64)&src, (__int64)v9, v11, 1);
  v9 = src;
LABEL_5:
  n[0] = v11;
  v9[v12] = 0;
  v13 = a3;
  memmove((char *)src + v7, a3, v10);
  v16 = n[0];
  if ( n[0] > 1 )
  {
    v13 = (const char *)src;
    tag_remove();
    v16 = n[0];
  }
  v17 = *(_QWORD *)(a1 + 8);
  v56 = nullptr;
  v57 = 0;
  v55 = v17;
  if ( v16 )
  {
    v56 = (void *)qalloc_or_throw(v16, (__int64)v13, v14, v15);
    v57.m128i_i64[1] = v16;
    memcpy(v56, src, v16);
    v57.m128i_i64[0] = v16;
  }
  v18 = *(unsigned __int64 **)(a1 + 24);
  v52 = (const __m128i *)&v55;
  if ( !v18 )
  {
    v49 = qalloc();
    v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)(unsigned __int64)v49);
    if ( !v49 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v49 + 48) = 0;
    *(_OWORD *)(v49 + 16) = 0;
    *(_OWORD *)(v49 + 32) = 0;
    *(__m128i *)(v49 + 8) = v50;
    *(_QWORD *)v49 = v49 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 24) = v49;
    *(_QWORD *)v49 = v49 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v49 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 24) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(a1 + 24),
                                                 (__m128i)*(unsigned __int64 *)(a1 + 24));
    **(_QWORD **)(a1 + 24) &= ~1uLL;
    **(_QWORD **)(a1 + 24) |= 2uLL;
    v18 = *(unsigned __int64 **)(a1 + 24);
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(a1 + 32) )
  {
LABEL_11:
    v19 = qalloc();
    v20 = v19;
    if ( !v19 )
    {
      v3 = __cxa_allocate_exception(8u);
      *v3 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)v19 = 0;
    *(_OWORD *)(v19 + 16) = 0;
    *(_DWORD *)(v19 + 24) = v55;
    v21 = _mm_load_si128(&v57);
    v22 = v56;
    v56 = nullptr;
    *(__m128i *)(v20 + 40) = v21;
    v57 = 0;
    *(_QWORD *)(v20 + 32) = v22;
    v23 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v20 & 1LL;
    *(_QWORD *)v20 = v23;
    v24 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
    *(_QWORD *)v20 = v23 | 1;
    *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(v24, v24);
    if ( *(unsigned __int64 **)(a1 + 24) == v18 )
    {
      *v18 = v20 & 0xFFFFFFFFFFFFFFFCLL | *v18 & 3;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = v20;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) = v20;
      v48 = *(_QWORD *)v20 & 2LL;
      *(_QWORD *)v20 &= ~1uLL;
      *(_QWORD *)v20 = v48 | *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFFCLL;
    }
    else
    {
      v18[1] = v20;
      v25 = *(_QWORD *)(a1 + 24);
      if ( *(unsigned __int64 **)(v25 + 8) == v18 )
        *(_QWORD *)(v25 + 8) = v20;
      sub_8F240((_QWORD *)(a1 + 24), (__int64 *)v20);
    }
    v26 = (__int64)v56;
    ++*(_QWORD *)(a1 + 32);
    if ( v26 )
    {
      v57.m128i_i64[0] = 0;
      qfree(v26);
    }
    goto LABEL_18;
  }
  v31 = *v18 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v31 & 2) != 0 )
  {
    v32 = 1;
LABEL_37:
    v35 = sub_8F510((__m128i *)(a1 + 24), v18, v32, &v52);
    v37 = v36;
    v31 = v35;
    if ( v56 )
    {
      v57.m128i_i64[0] = 0;
      qfree((__int64)v56);
    }
    if ( !v37 )
      goto LABEL_46;
    goto LABEL_18;
  }
  v32 = 1;
  while ( 1 )
  {
    if ( v55 < *(_DWORD *)(v31 + 24) )
    {
      v33 = *(_BYTE **)(v31 + 8);
      v32 = 1;
      goto LABEL_29;
    }
    if ( v55 <= *(_DWORD *)(v31 + 24) )
      break;
    v33 = *(_BYTE **)(v31 + 16);
    v32 = 0;
LABEL_29:
    if ( (*v33 & 2) != 0 )
      goto LABEL_30;
    v31 = (unsigned __int64)v33;
  }
  if ( !v31 )
  {
LABEL_30:
    v18 = (unsigned __int64 *)v31;
    goto LABEL_37;
  }
  if ( v56 )
  {
    v57.m128i_i64[0] = 0;
    qfree((__int64)v56);
  }
LABEL_46:
  v38 = n[0];
  v39 = src;
  if ( !n[0] )
  {
    if ( n[1] > 1 )
    {
      n[0] = 2;
      *((_BYTE *)src + 1) = 0;
      goto LABEL_50;
    }
    v41 = 0;
    v40 = 2;
LABEL_64:
    src = (void *)qvector_reserve((__int64)&src, (__int64)src, v40, 1);
    v39 = src;
    v38 = v41 + 1;
    goto LABEL_48;
  }
  v40 = n[0] + 1;
  v41 = n[0] - 1;
  if ( n[1] < n[0] + 1 )
    goto LABEL_64;
LABEL_48:
  n[0] = v40;
  v39[v38] = 0;
  if ( v41 )
    memmove((char *)src + 1, src, v41);
LABEL_50:
  v42 = (_QWORD *)(v31 + 24);
  *(_BYTE *)src = 10;
  v43 = n[0];
  if ( n[0] )
  {
    v44 = n[0] - 1;
    if ( n[0] != 1 )
    {
      v45 = v42[2];
      v46 = n[0] - 1;
      if ( v45 )
      {
        --v45;
        v46 = v44 + v45;
        v43 = n[0] + v45;
      }
      v47 = v42[1];
      if ( v42[3] < v43 )
      {
        v51 = qvector_reserve((__int64)(v42 + 1), v47, v43, 1);
        v42[1] = v51;
        v47 = v51;
      }
      v42[2] = v43;
      *(_BYTE *)(v47 + v46) = 0;
      memcpy((void *)(v45 + v42[1]), src, v44);
    }
  }
LABEL_18:
  if ( src )
  {
    n[0] = 0;
    qfree((__int64)src);
  }
  return v58 - __readfsqword(0x28u);
}

