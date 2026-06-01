unsigned __int64 __fastcall sub_8F0C0(__int64 a1, int a2, const char *a3)
{
  _QWORD *v3; // rdi
  _QWORD *exception; // rdi
  unsigned __int8 v5; // al
  size_t v7; // rbp
  size_t v9; // r15
  size_t v10; // r13
  size_t v11; // r14
  _BYTE *v12; // rsi
  size_t v13; // r12
  __int64 v14; // rax
  unsigned __int64 *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rsi
  __m128i v18; // xmm0
  void *v19; // rax
  unsigned __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rax
  void *v23; // rdi
  void *v25; // rax
  size_t v26; // rdx
  size_t v27; // rcx
  unsigned __int64 v28; // rbx
  char v29; // dl
  _BYTE *v30; // rax
  __int64 v31; // rax
  char v32; // dl
  char v33; // bp
  size_t v34; // rdx
  _BYTE *v35; // rsi
  size_t v36; // rbp
  size_t v37; // r12
  _QWORD *v38; // rbx
  size_t v39; // rbp
  size_t v40; // r13
  __int64 v41; // r12
  size_t v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rax
  __m128i v46; // xmm1
  __int64 v47; // rax
  const __m128i *v48; // [rsp+8h] [rbp-90h] BYREF
  void *src; // [rsp+10h] [rbp-88h]
  size_t n[3]; // [rsp+18h] [rbp-80h]
  int v51; // [rsp+30h] [rbp-68h] BYREF
  void *v52; // [rsp+38h] [rbp-60h]
  __m128i v53; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v54; // [rsp+58h] [rbp-40h]

  v5 = *(_BYTE *)(a1 + 52);
  v54 = __readfsqword(0x28u);
  if ( (a3 == nullptr) | v5 ^ 1 )
    return v54 - __readfsqword(0x28u);
  v7 = a2;
  src = nullptr;
  *(_OWORD *)n = 0;
  if ( a2 )
  {
    if ( a2 == -1 )
    {
      v25 = nullptr;
    }
    else
    {
      v25 = (void *)qvector_reserve();
      v26 = n[0];
      src = v25;
      if ( n[0] < a2 + 1LL )
      {
        do
        {
          v27 = v26;
          *((_BYTE *)v25 + v26++) = 32;
          v25 = src;
        }
        while ( a2 != v27 );
      }
      n[0] = a2 + 1LL;
    }
    *((_BYTE *)v25 + a2) = 0;
    v7 = n[0];
    v12 = src;
    v9 = strlen(a3);
    if ( n[0] )
    {
      v7 = n[0] - 1;
      v11 = v9 + n[0] - 1;
    }
    else
    {
      v11 = v9;
    }
    v10 = v11 + 1;
    if ( n[1] >= v11 + 1 )
      goto LABEL_5;
  }
  else
  {
    v9 = strlen(a3);
    v10 = v9 + 1;
    v11 = v9;
  }
  src = (void *)qvector_reserve();
  v12 = src;
LABEL_5:
  n[0] = v10;
  v12[v11] = 0;
  memmove((char *)src + v7, a3, v9);
  v13 = n[0];
  if ( n[0] > 1 )
  {
    tag_remove();
    v13 = n[0];
  }
  v14 = *(_QWORD *)(a1 + 8);
  v52 = nullptr;
  v53 = 0;
  v51 = v14;
  if ( v13 )
  {
    v52 = (void *)qalloc_or_throw();
    v53.m128i_i64[1] = v13;
    memcpy(v52, src, v13);
    v53.m128i_i64[0] = v13;
  }
  v15 = *(unsigned __int64 **)(a1 + 24);
  v48 = (const __m128i *)&v51;
  if ( !v15 )
  {
    v45 = qalloc();
    v46 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v45, (__m128i)(unsigned __int64)v45);
    if ( !v45 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v45 + 48) = 0;
    *(_OWORD *)(v45 + 16) = 0;
    *(_OWORD *)(v45 + 32) = 0;
    *(__m128i *)(v45 + 8) = v46;
    *(_QWORD *)v45 = v45 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(a1 + 24) = v45;
    *(_QWORD *)v45 = v45 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v45 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 24) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(a1 + 24),
                                                 (__m128i)*(unsigned __int64 *)(a1 + 24));
    **(_QWORD **)(a1 + 24) &= ~1uLL;
    **(_QWORD **)(a1 + 24) |= 2uLL;
    v15 = *(unsigned __int64 **)(a1 + 24);
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(a1 + 32) )
  {
LABEL_11:
    v16 = qalloc();
    v17 = v16;
    if ( !v16 )
    {
      v3 = __cxa_allocate_exception(8u);
      *v3 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)v16 = 0;
    *(_OWORD *)(v16 + 16) = 0;
    *(_DWORD *)(v16 + 24) = v51;
    v18 = _mm_load_si128(&v53);
    v19 = v52;
    v52 = nullptr;
    *(__m128i *)(v17 + 40) = v18;
    v53 = 0;
    *(_QWORD *)(v17 + 32) = v19;
    v20 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v17 & 1LL;
    *(_QWORD *)v17 = v20;
    v21 = _mm_loadl_epi64((const __m128i *)(a1 + 24));
    *(_QWORD *)v17 = v20 | 1;
    *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v21, v21);
    if ( *(unsigned __int64 **)(a1 + 24) == v15 )
    {
      *v15 = v17 & 0xFFFFFFFFFFFFFFFCLL | *v15 & 3;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = v17;
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) = v17;
      v44 = *(_QWORD *)v17 & 2LL;
      *(_QWORD *)v17 &= ~1uLL;
      *(_QWORD *)v17 = v44 | *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFFCLL;
    }
    else
    {
      v15[1] = v17;
      v22 = *(_QWORD *)(a1 + 24);
      if ( *(unsigned __int64 **)(v22 + 8) == v15 )
        *(_QWORD *)(v22 + 8) = v17;
      sub_8EC80((_QWORD *)(a1 + 24), (__int64 *)v17);
    }
    v23 = v52;
    ++*(_QWORD *)(a1 + 32);
    if ( v23 )
    {
      v53.m128i_i64[0] = 0;
      qfree();
    }
    goto LABEL_18;
  }
  v28 = *v15 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v28 & 2) != 0 )
  {
    v29 = 1;
LABEL_37:
    v31 = sub_8EF50((__m128i *)(a1 + 24), v15, v29, &v48);
    v33 = v32;
    v28 = v31;
    if ( v52 )
    {
      v53.m128i_i64[0] = 0;
      qfree();
    }
    if ( !v33 )
      goto LABEL_46;
    goto LABEL_18;
  }
  v29 = 1;
  while ( 1 )
  {
    if ( v51 < *(_DWORD *)(v28 + 24) )
    {
      v30 = *(_BYTE **)(v28 + 8);
      v29 = 1;
      goto LABEL_29;
    }
    if ( v51 <= *(_DWORD *)(v28 + 24) )
      break;
    v30 = *(_BYTE **)(v28 + 16);
    v29 = 0;
LABEL_29:
    if ( (*v30 & 2) != 0 )
      goto LABEL_30;
    v28 = (unsigned __int64)v30;
  }
  if ( !v28 )
  {
LABEL_30:
    v15 = (unsigned __int64 *)v28;
    goto LABEL_37;
  }
  if ( v52 )
  {
    v53.m128i_i64[0] = 0;
    qfree();
  }
LABEL_46:
  v34 = n[0];
  v35 = src;
  if ( !n[0] )
  {
    if ( n[1] > 1 )
    {
      n[0] = 2;
      *((_BYTE *)src + 1) = 0;
      goto LABEL_50;
    }
    v37 = 0;
    v36 = 2;
LABEL_64:
    src = (void *)qvector_reserve();
    v35 = src;
    v34 = v37 + 1;
    goto LABEL_48;
  }
  v36 = n[0] + 1;
  v37 = n[0] - 1;
  if ( n[1] < n[0] + 1 )
    goto LABEL_64;
LABEL_48:
  n[0] = v36;
  v35[v34] = 0;
  if ( v37 )
    memmove((char *)src + 1, src, v37);
LABEL_50:
  v38 = (_QWORD *)(v28 + 24);
  *(_BYTE *)src = 10;
  v39 = n[0];
  if ( n[0] )
  {
    v40 = n[0] - 1;
    if ( n[0] != 1 )
    {
      v41 = v38[2];
      v42 = n[0] - 1;
      if ( v41 )
      {
        --v41;
        v42 = v40 + v41;
        v39 = n[0] + v41;
      }
      v43 = v38[1];
      if ( v38[3] < v39 )
      {
        v47 = qvector_reserve();
        v38[1] = v47;
        v43 = v47;
      }
      v38[2] = v39;
      *(_BYTE *)(v43 + v42) = 0;
      memcpy((void *)(v41 + v38[1]), src, v40);
    }
  }
LABEL_18:
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v54 - __readfsqword(0x28u);
}

