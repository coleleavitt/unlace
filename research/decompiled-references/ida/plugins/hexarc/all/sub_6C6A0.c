__int64 __fastcall sub_6C6A0(__int64 a1, __m128i *a2, unsigned int a3, signed int a4, signed int a5, signed int a6)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *exception; // rax
  __int64 *v15; // rcx
  unsigned __int64 v16; // rdi
  __int64 v17; // r9
  int v18; // eax
  char v19; // si
  __int64 v20; // r10
  __int64 v21; // rdx
  int v22; // edx
  unsigned int v23; // r8d
  signed int *v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r14
  _DWORD *v29; // rdi
  __int64 v30; // rdx
  char v31; // al
  __int64 *v32; // rdi
  __int64 v33; // rdx
  signed int *v34; // rcx
  signed int *v35; // rax
  __m128i v36; // xmm3
  unsigned __int64 v37; // rbp
  __int64 v38; // rax
  unsigned __int64 v39; // rsi
  __m128i v40; // xmm5
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 *v44; // r14
  __int64 v45; // rax
  __int64 v46; // rsi
  char v47; // r12
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __m128i v50; // xmm6
  __m128i v51; // xmm0
  _BYTE *v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdx
  __m128i v59; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v60; // [rsp+1Ch] [rbp-3Ch]

  if ( a5 == a3 )
  {
    v15 = (__int64 *)(*(_QWORD *)(a1 + 48) + 24LL * a5);
    v16 = v15[1];
    if ( !v16 )
      return 0;
    v17 = *v15;
    v18 = 0;
    v19 = 0;
    v20 = -1;
    v21 = 0;
    do
    {
      while ( 1 )
      {
        v22 = *(_DWORD *)(v17 + 4 * v21);
        if ( a4 == v22 )
          break;
        ++v18;
        v19 |= v22 == a6;
        v21 = v18;
        if ( v18 >= v16 )
          goto LABEL_7;
      }
      v20 = v18++;
      v21 = v18;
    }
    while ( v18 < v16 );
LABEL_7:
    v59.m128i_i64[0] = (__int64)v15;
    if ( (_DWORD)v20 == -1 )
      return 0;
    v23 = 1;
    if ( a4 != a6 )
    {
      v24 = (signed int *)(v17 + 4 * v20);
      if ( v19 )
      {
        memmove((void *)(v17 + 4 * v20), v24 + 1, 4 * (v16 - v20) - 4);
        v23 = 2;
        --*(_QWORD *)(v59.m128i_i64[0] + 8);
      }
      else
      {
        *v24 = a6;
        v25 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24LL * a6);
        v26 = v25[1];
        v27 = *v25;
        if ( v25[2] < (unsigned __int64)(v26 + 1) )
        {
          v59.m128i_i64[0] = *(_QWORD *)(a1 + 72) + 24LL * a6;
          v27 = qvector_reserve();
          *v25 = v27;
          v26 = v25[1];
        }
        *(_DWORD *)(v27 + 4 * v26) = a3;
        v23 = 1;
        ++v25[1];
      }
      v28 = *(_QWORD *)(a1 + 72) + 24LL * a4;
      v29 = *(_DWORD **)v28;
      v30 = *(_QWORD *)v28 + 4LL * *(_QWORD *)(v28 + 8);
      if ( *(_QWORD *)v28 != v30 )
      {
        while ( *v29 != a3 )
        {
          if ( (_DWORD *)v30 == ++v29 )
            goto LABEL_24;
        }
        if ( (_DWORD *)v30 != v29 )
        {
          v59.m128i_i32[0] = v23;
          memmove(v29, v29 + 1, v30 - (_QWORD)v29 - 4);
          --*(_QWORD *)(v28 + 8);
          v23 = v59.m128i_i32[0];
        }
      }
    }
  }
  else
  {
    v31 = sub_66DA0(a1, a3, a4);
    v32 = (__int64 *)(*(_QWORD *)(a1 + 48) + 24LL * a5);
    v23 = v31 == 0 ? 3 : 1;
    v33 = v32[1];
    v34 = (signed int *)(*v32 + 4 * v33);
    if ( (signed int *)*v32 == v34 )
      goto LABEL_35;
    v35 = (signed int *)*v32;
    while ( a6 != *v35 )
    {
      if ( v34 == ++v35 )
        goto LABEL_35;
    }
    if ( v34 == v35 )
    {
LABEL_35:
      if ( v32[2] < (unsigned __int64)(v33 + 1) )
      {
        v60 = v23;
        v59.m128i_i64[0] = (__int64)v32;
        v57 = qvector_reserve();
        v23 = v60;
        v58 = v32[1];
        *v32 = v57;
        v34 = (signed int *)(v57 + 4 * v58);
      }
      *v34 = a6;
      ++v32[1];
      v44 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24LL * a6);
      v45 = v44[1];
      v46 = *v44;
      if ( v44[2] < (unsigned __int64)(v45 + 1) )
      {
        v59.m128i_i32[0] = v23;
        v56 = qvector_reserve();
        v23 = v59.m128i_i32[0];
        *v44 = v56;
        v46 = v56;
        v45 = v44[1];
      }
      *(_DWORD *)(v46 + 4 * v45) = a5;
      ++v44[1];
    }
  }
LABEL_24:
  if ( !a2 )
    return v23;
  v36 = _mm_cvtsi32_si128(a4);
  v37 = a2->m128i_i64[0];
  v59 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5), _mm_cvtsi32_si128(a6)),
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(a3), v36));
  if ( !v37 )
  {
    v60 = v23;
    v54 = qalloc();
    v55 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v54, (__m128i)(unsigned __int64)v54);
    if ( !v54 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v23 = v60;
    *(_QWORD *)(v54 + 32) = 0;
    *(_OWORD *)(v54 + 16) = 0;
    *(__m128i *)(v54 + 8) = v55;
    *(_QWORD *)v54 = v54 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a2->m128i_i64[0] = v54;
    *(_QWORD *)v54 = v54 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v54 & 3LL;
    *(__m128i *)(a2->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a2->m128i_u64[0], (__m128i)a2->m128i_u64[0]);
    *(_QWORD *)a2->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a2->m128i_i64[0] |= 2uLL;
    v37 = a2->m128i_i64[0];
LABEL_27:
    v60 = v23;
    v38 = qalloc();
    v39 = v38;
    if ( !v38 )
    {
      v7 = __cxa_allocate_exception(8u);
      *v7 = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(v7, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    v40 = _mm_load_si128(&v59);
    v23 = v60;
    *(_OWORD *)(v38 + 16) = 0;
    *(_OWORD *)v38 = 0;
    *(__m128i *)(v38 + 24) = v40;
    *(_QWORD *)v38 = v37 & 0xFFFFFFFFFFFFFFFCLL;
    v41 = _mm_loadl_epi64(a2);
    *(_QWORD *)v38 = v37 & 0xFFFFFFFFFFFFFFFCLL | 1;
    *(__m128i *)(v38 + 8) = _mm_unpacklo_epi64(v41, v41);
    if ( a2->m128i_i64[0] != v37 )
    {
      *(_QWORD *)(v37 + 8) = v38;
      v42 = a2->m128i_i64[0];
      if ( *(_QWORD *)(a2->m128i_i64[0] + 8) == v37 )
        goto LABEL_45;
      goto LABEL_30;
    }
    goto LABEL_52;
  }
  if ( !a2->m128i_i64[1] )
    goto LABEL_27;
  v47 = 1;
  v48 = *(_QWORD *)v37 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v48 & 2) != 0 )
    goto LABEL_41;
  while ( 1 )
  {
    if ( a5 < *(_DWORD *)(v48 + 24) )
    {
LABEL_46:
      v52 = *(_BYTE **)(v48 + 8);
      v47 = 1;
      goto LABEL_47;
    }
    if ( a5 == *(_DWORD *)(v48 + 24) )
    {
      if ( a6 < *(_DWORD *)(v48 + 28) )
        goto LABEL_46;
      if ( a6 <= *(_DWORD *)(v48 + 28) )
        break;
    }
    v52 = *(_BYTE **)(v48 + 16);
    v47 = 0;
LABEL_47:
    if ( (*v52 & 2) != 0 )
    {
      v37 = v48;
      goto LABEL_41;
    }
    v48 = (unsigned __int64)v52;
  }
  if ( v48 )
    return v23;
  v37 = 0;
LABEL_41:
  v60 = v23;
  v49 = qalloc();
  v39 = v49;
  if ( !v49 )
  {
    v6 = __cxa_allocate_exception(8u);
    *v6 = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(v6, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v50 = _mm_load_si128(&v59);
  v23 = v60;
  *(_OWORD *)(v49 + 16) = 0;
  *(_OWORD *)v49 = 0;
  *(__m128i *)(v49 + 24) = v50;
  *(_QWORD *)v49 = v37 & 0xFFFFFFFFFFFFFFFCLL;
  v51 = _mm_loadl_epi64(a2);
  *(_QWORD *)v49 = v37 & 0xFFFFFFFFFFFFFFFCLL | 1;
  *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64(v51, v51);
  if ( v37 == a2->m128i_i64[0] )
  {
LABEL_52:
    *(_QWORD *)v37 = v39 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v37 & 3LL;
    *(_QWORD *)(a2->m128i_i64[0] + 8) = v39;
    *(_QWORD *)(a2->m128i_i64[0] + 16) = v39;
    v53 = *(_QWORD *)v39 & 2LL;
    *(_QWORD *)v39 &= ~1uLL;
    *(_QWORD *)v39 = v53 | a2->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    goto LABEL_31;
  }
  if ( v47 )
  {
    *(_QWORD *)(v37 + 8) = v49;
    v42 = a2->m128i_i64[0];
    if ( v37 == *(_QWORD *)(a2->m128i_i64[0] + 8) )
LABEL_45:
      *(_QWORD *)(v42 + 8) = v39;
  }
  else
  {
    *(_QWORD *)(v37 + 16) = v49;
    if ( v37 == *(_QWORD *)(a2->m128i_i64[0] + 16) )
      *(_QWORD *)(a2->m128i_i64[0] + 16) = v49;
  }
LABEL_30:
  v59.m128i_i32[0] = v23;
  sub_6C2B0(a2, (__int64 *)v39);
  v23 = v59.m128i_i32[0];
LABEL_31:
  ++a2->m128i_i64[1];
  return v23;
}

