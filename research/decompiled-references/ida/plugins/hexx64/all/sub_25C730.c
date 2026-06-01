__int64 __fastcall sub_25C730(__int64 a1, const __m128i *a2, const char *a3)
{
  _QWORD *exception; // rdi
  _QWORD *v4; // rdi
  unsigned __int64 **v8; // rdi
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int32 v12; // ecx
  size_t v14; // rax
  __int64 v15; // r13
  size_t v16; // r12
  _BYTE *v17; // rax
  __m128i *v18; // r13
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r12
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // r15
  __m128i v25; // xmm1
  _BYTE *v26; // r12
  __int64 v27; // rdi
  __m128i v28; // xmm1
  __int64 v29; // rdi
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rdx
  char v32; // cl
  _BYTE *v33; // rax
  char v34; // dl
  __int64 v35; // rdx
  __int64 v36; // rax
  __m128i v37; // xmm1
  __int32 v38; // eax
  __m128i v39; // [rsp+0h] [rbp-88h] BYREF
  const __m128i *v40; // [rsp+18h] [rbp-70h] BYREF
  _BYTE *v41; // [rsp+20h] [rbp-68h] BYREF
  __m128i v42; // [rsp+28h] [rbp-60h] BYREF
  char v43; // [rsp+38h] [rbp-50h]
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  if ( a3 && *a3 )
  {
    v41 = nullptr;
    v42 = 0;
    v14 = strlen(a3);
    v15 = v14 + 1;
    v16 = v14;
    v17 = (_BYTE *)qvector_reserve((__int64)&v41, 0, v14 + 1, 1);
    v42.m128i_i64[0] = v15;
    v41 = v17;
    memmove(v17, a3, v16);
    v40 = a2;
    v41[v16] = 0;
    v18 = *(__m128i **)(a1 + 72);
    v43 = 0;
    v19 = v18->m128i_i64[0];
    if ( !v18->m128i_i64[0] )
    {
      v36 = qalloc();
      v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v36, (__m128i)(unsigned __int64)v36);
      if ( !v36 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v36 + 64) = 0;
      *(_OWORD *)(v36 + 16) = 0;
      *(_OWORD *)(v36 + 32) = 0;
      *(_OWORD *)(v36 + 48) = 0;
      *(_QWORD *)v36 = v36 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(__m128i *)(v36 + 8) = v37;
      v18->m128i_i64[0] = v36;
      *(_QWORD *)v36 = v36 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v36 & 3LL;
      *(__m128i *)(v18->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)v18->m128i_u64[0], (__m128i)v18->m128i_u64[0]);
      *(_QWORD *)v18->m128i_i64[0] &= ~1uLL;
      *(_QWORD *)v18->m128i_i64[0] |= 2uLL;
      v19 = v18->m128i_i64[0];
      goto LABEL_17;
    }
    if ( !v18->m128i_i64[1] )
    {
LABEL_17:
      v20 = qalloc();
      v21 = v20;
      if ( !v20 )
      {
        v4 = __cxa_allocate_exception(8u);
        *v4 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v4,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v20 + 64) = 0;
      *(_OWORD *)(v20 + 32) = 0;
      *(_OWORD *)(v20 + 16) = 0;
      *(_OWORD *)(v20 + 48) = 0;
      *(_OWORD *)v20 = 0;
      v22 = _mm_loadu_si128(a2);
      *(_QWORD *)(v20 + 40) = 0;
      *(__m128i *)(v20 + 24) = v22;
      *(_BYTE *)(v20 + 64) = 0;
      *(_OWORD *)(v20 + 48) = 0;
      *(_QWORD *)v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
      v23 = _mm_loadl_epi64(v18);
      *(_QWORD *)v20 = v19 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(v23, v23);
      if ( v18->m128i_i64[0] == v19 )
      {
        *(_QWORD *)v19 = v20 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v19 & 3LL;
        *(_QWORD *)(v18->m128i_i64[0] + 8) = v20;
        *(_QWORD *)(v18->m128i_i64[0] + 16) = v20;
        v35 = *(_QWORD *)v20 & 2LL;
        *(_QWORD *)v20 &= ~1uLL;
        *(_QWORD *)v20 = v35 | v18->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v19 + 8) = v20;
        if ( *(_QWORD *)(v18->m128i_i64[0] + 8) == v19 )
          *(_QWORD *)(v18->m128i_i64[0] + 8) = v20;
        sub_25C390(v18, (__int64 *)v20);
      }
      ++v18->m128i_i64[1];
      v24 = v21 + 24;
      goto LABEL_23;
    }
    v30 = *(_QWORD *)v19 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v30 & 2) != 0 )
    {
      v34 = 1;
LABEL_36:
      v24 = sub_25C5D0(v18, (unsigned __int64 *)v19, v34, &v40) + 24;
LABEL_23:
      v25 = _mm_loadu_si128(&v42);
      v26 = v41;
      v41 = nullptr;
      v42 = 0;
      v27 = *(_QWORD *)(v24 + 16);
      if ( v27 )
      {
        *(_QWORD *)(v24 + 24) = 0;
        v39 = v25;
        qfree(v27);
        v28 = _mm_load_si128(&v39);
        *(_QWORD *)(v24 + 16) = v26;
        v29 = (__int64)v41;
        *(__m128i *)(v24 + 24) = v28;
        *(_BYTE *)(v24 + 40) = v43;
        if ( v29 )
        {
          v42.m128i_i64[0] = 0;
          qfree(v29);
        }
      }
      else
      {
        *(_QWORD *)(v24 + 16) = v26;
        *(__m128i *)(v24 + 24) = v25;
        *(_BYTE *)(v24 + 40) = v43;
      }
      return sub_33E140(*(_QWORD *)(a1 + 216), 0x73u, a1, a2, a3);
    }
    v31 = a2->m128i_i64[0];
    v32 = 1;
    while ( 1 )
    {
      v24 = v30 + 24;
      if ( v31 >= *(_QWORD *)(v30 + 24) )
      {
        if ( v31 != *(_QWORD *)(v30 + 24) )
          goto LABEL_33;
        v38 = a2->m128i_i32[2];
        if ( *(_DWORD *)(v30 + 32) <= v38 )
          break;
      }
      v33 = *(_BYTE **)(v30 + 8);
      v32 = 1;
LABEL_34:
      if ( (*v33 & 2) != 0 )
        goto LABEL_35;
      v30 = (unsigned __int64)v33;
    }
    if ( *(_DWORD *)(v30 + 32) >= v38 )
    {
      if ( !v30 )
      {
LABEL_35:
        v34 = v32;
        v19 = v30;
        goto LABEL_36;
      }
      goto LABEL_23;
    }
LABEL_33:
    v33 = *(_BYTE **)(v30 + 16);
    v32 = 0;
    goto LABEL_34;
  }
  v8 = *(unsigned __int64 ***)(a1 + 72);
  v9 = *v8;
  if ( *v8 )
  {
    v10 = *v9 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v10 )
      goto LABEL_13;
    if ( (*(_BYTE *)v10 & 2) == 0 )
    {
      v11 = a2->m128i_i64[0];
      while ( v11 >= *(_QWORD *)(v10 + 24) )
      {
        if ( v11 == *(_QWORD *)(v10 + 24) )
        {
          v12 = *(_DWORD *)(v10 + 32);
          if ( a2->m128i_i32[2] < v12 )
            break;
          if ( a2->m128i_i32[2] <= v12 )
          {
            if ( v9 != (unsigned __int64 *)v10 )
LABEL_13:
              sub_25BEC0(v8, (__int64 *)v10);
            return sub_33E140(*(_QWORD *)(a1 + 216), 0x73u, a1, a2, a3);
          }
        }
        v10 = *(_QWORD *)(v10 + 16);
LABEL_27:
        if ( (*(_BYTE *)v10 & 2) != 0 )
          return sub_33E140(*(_QWORD *)(a1 + 216), 0x73u, a1, a2, a3);
      }
      v10 = *(_QWORD *)(v10 + 8);
      goto LABEL_27;
    }
  }
  return sub_33E140(*(_QWORD *)(a1 + 216), 0x73u, a1, a2, a3);
}

