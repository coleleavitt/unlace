void __fastcall sub_259090(__int64 a1, const __m128i *a2, int a3)
{
  _QWORD *exception; // rdi
  __int64 *v4; // rbp
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int32 v10; // ecx
  unsigned __int64 v11; // r14
  __int64 v13; // rax
  __int64 v14; // rbx
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __m128i v19; // xmm1
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  char v22; // si
  unsigned __int64 v23; // rcx
  __int32 v24; // ecx
  _BYTE *v25; // rax
  char v26; // dl
  __int64 v27; // rdx
  const __m128i *v28[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(__int64 **)(a1 + 88);
  v28[1] = (const __m128i *)__readfsqword(0x28u);
  if ( !a3 )
  {
    v6 = (unsigned __int64 *)*v4;
    if ( !*v4 )
      return;
    v7 = *v6 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v7 )
    {
      if ( (*(_BYTE *)v7 & 2) != 0 )
        return;
      v8 = a2->m128i_i64[0];
      v9 = *(_QWORD *)(v7 + 24);
      if ( a2->m128i_i64[0] < v9 )
        goto LABEL_26;
LABEL_6:
      if ( v9 < v8 )
        goto LABEL_23;
      v10 = *(_DWORD *)(v7 + 32);
      if ( a2->m128i_i32[2] < v10 )
      {
LABEL_26:
        while ( 1 )
        {
          v7 = *(_QWORD *)(v7 + 8);
LABEL_24:
          if ( (*(_BYTE *)v7 & 2) != 0 )
            return;
          v9 = *(_QWORD *)(v7 + 24);
          if ( v8 >= v9 )
            goto LABEL_6;
        }
      }
      if ( a2->m128i_i32[2] > v10 )
      {
LABEL_23:
        v7 = *(_QWORD *)(v7 + 16);
        goto LABEL_24;
      }
      if ( v6 == (unsigned __int64 *)v7 )
        return;
    }
    sub_258960((unsigned __int64 **)v4, (__int64 *)v7);
    return;
  }
  v28[0] = a2;
  v11 = *v4;
  if ( !*v4 )
  {
    v18 = qalloc();
    v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
    if ( !v18 )
      goto LABEL_43;
    *(_OWORD *)(v18 + 16) = 0;
    *(_OWORD *)(v18 + 32) = 0;
    *(__m128i *)(v18 + 8) = v19;
    *(_QWORD *)v18 = v18 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *v4 = v18;
    *(_QWORD *)v18 = v18 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v18 & 3LL;
    *(__m128i *)(*v4 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v4, (__m128i)(unsigned __int64)*v4);
    *(_QWORD *)*v4 &= ~1uLL;
    *(_QWORD *)*v4 |= 2uLL;
    v11 = *v4;
LABEL_13:
    v13 = qalloc();
    v14 = v13;
    if ( v13 )
    {
      *(_OWORD *)(v13 + 32) = 0;
      *(_OWORD *)(v13 + 16) = 0;
      *(_OWORD *)v13 = 0;
      v15 = _mm_loadu_si128(a2);
      *(_DWORD *)(v13 + 40) = 0;
      *(__m128i *)(v13 + 24) = v15;
      *(_QWORD *)v13 = v11 & 0xFFFFFFFFFFFFFFFCLL;
      v16 = _mm_loadl_epi64((const __m128i *)v4);
      *(_QWORD *)v13 = v11 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64(v16, v16);
      if ( *v4 == v11 )
      {
        *(_QWORD *)v11 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v11 & 3LL;
        *(_QWORD *)(*v4 + 8) = v13;
        *(_QWORD *)(*v4 + 16) = v13;
        v27 = *(_QWORD *)v13 & 2LL;
        *(_QWORD *)v13 &= ~1uLL;
        *(_QWORD *)v13 = v27 | *v4 & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v11 + 8) = v13;
        if ( *(_QWORD *)(*v4 + 8) == v11 )
          *(_QWORD *)(*v4 + 8) = v13;
        sub_258D00(v4, (__int64 *)v13);
      }
      ++v4[1];
      v17 = v14 + 24;
      goto LABEL_19;
    }
LABEL_43:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !v4[1] )
    goto LABEL_13;
  v20 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v20 & 2) != 0 )
  {
    v26 = 1;
    goto LABEL_39;
  }
  v21 = a2->m128i_i64[0];
  v22 = 1;
  while ( 1 )
  {
    v23 = *(_QWORD *)(v20 + 24);
    v17 = v20 + 24;
    if ( v21 >= v23 )
    {
      if ( v23 < v21 )
        goto LABEL_35;
      v24 = *(_DWORD *)(v20 + 32);
      if ( a2->m128i_i32[2] >= v24 )
        break;
    }
    v25 = *(_BYTE **)(v20 + 8);
    v22 = 1;
LABEL_36:
    if ( (*v25 & 2) != 0 )
      goto LABEL_37;
    v20 = (unsigned __int64)v25;
  }
  if ( a2->m128i_i32[2] > v24 )
  {
LABEL_35:
    v25 = *(_BYTE **)(v20 + 16);
    v22 = 0;
    goto LABEL_36;
  }
  if ( v20 )
    goto LABEL_19;
LABEL_37:
  v26 = v22;
  v11 = v20;
LABEL_39:
  v17 = sub_258F40((__m128i *)v4, (unsigned __int64 *)v11, v26, v28) + 24;
LABEL_19:
  *(_DWORD *)(v17 + 16) = a3;
}

