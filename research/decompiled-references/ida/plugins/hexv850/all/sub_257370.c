__int64 __fastcall sub_257370(__int64 a1, const __m128i *a2, const char *a3, __int64 a4, __int64 a5, int a6)
{
  _QWORD *exception; // rdi
  _QWORD *v7; // rdi
  unsigned __int64 **v11; // rdi
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int32 v15; // ecx
  size_t v17; // r12
  __m128i *v18; // r13
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r12
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __int64 v24; // r15
  __m128i v25; // xmm1
  void *v26; // r12
  __m128i v27; // xmm1
  void *v28; // rdi
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rdx
  char v31; // cl
  _BYTE *v32; // rax
  char v33; // dl
  __int64 v34; // rdx
  __int64 v35; // rax
  __m128i v36; // xmm1
  __int32 v37; // eax
  __m128i v38; // [rsp+0h] [rbp-88h] BYREF
  const __m128i *v39; // [rsp+18h] [rbp-70h] BYREF
  void *v40; // [rsp+20h] [rbp-68h]
  __m128i v41; // [rsp+28h] [rbp-60h] BYREF
  char v42; // [rsp+38h] [rbp-50h]
  unsigned __int64 v43; // [rsp+48h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( a3 && *a3 )
  {
    v41 = 0;
    v17 = strlen(a3);
    v41.m128i_i64[0] = v17 + 1;
    v40 = (void *)qvector_reserve();
    memmove(v40, a3, v17);
    v39 = a2;
    *((_BYTE *)v40 + v17) = 0;
    v18 = *(__m128i **)(a1 + 72);
    v42 = 0;
    v19 = v18->m128i_i64[0];
    if ( !v18->m128i_i64[0] )
    {
      v35 = qalloc();
      v36 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v35, (__m128i)(unsigned __int64)v35);
      if ( !v35 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v35 + 64) = 0;
      *(_OWORD *)(v35 + 16) = 0;
      *(_OWORD *)(v35 + 32) = 0;
      *(_OWORD *)(v35 + 48) = 0;
      *(_QWORD *)v35 = v35 & 0xFFFFFFFFFFFFFFFCLL | 2;
      *(__m128i *)(v35 + 8) = v36;
      v18->m128i_i64[0] = v35;
      *(_QWORD *)v35 = v35 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v35 & 3LL;
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
        v7 = __cxa_allocate_exception(8u);
        *v7 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v7,
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
        v34 = *(_QWORD *)v20 & 2LL;
        *(_QWORD *)v20 &= ~1uLL;
        *(_QWORD *)v20 = v34 | v18->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v19 + 8) = v20;
        if ( *(_QWORD *)(v18->m128i_i64[0] + 8) == v19 )
          *(_QWORD *)(v18->m128i_i64[0] + 8) = v20;
        sub_256FD0(v18, (__int64 *)v20);
      }
      ++v18->m128i_i64[1];
      v24 = v21 + 24;
      goto LABEL_23;
    }
    v29 = *(_QWORD *)v19 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)v29 & 2) != 0 )
    {
      v33 = 1;
LABEL_36:
      v24 = sub_257210(v18, (unsigned __int64 *)v19, v33, &v39) + 24;
LABEL_23:
      v25 = _mm_loadu_si128(&v41);
      v26 = v40;
      v40 = nullptr;
      v41 = 0;
      if ( *(_QWORD *)(v24 + 16) )
      {
        *(_QWORD *)(v24 + 24) = 0;
        v38 = v25;
        qfree();
        v27 = _mm_load_si128(&v38);
        *(_QWORD *)(v24 + 16) = v26;
        v28 = v40;
        *(__m128i *)(v24 + 24) = v27;
        *(_BYTE *)(v24 + 40) = v42;
        if ( v28 )
        {
          v41.m128i_i64[0] = 0;
          qfree();
        }
      }
      else
      {
        *(_QWORD *)(v24 + 16) = v26;
        *(__m128i *)(v24 + 24) = v25;
        *(_BYTE *)(v24 + 40) = v42;
      }
      return sub_3380C0(*(_QWORD *)(a1 + 216), 115, a1, (_DWORD)a2, (_DWORD)a3, a6);
    }
    v30 = a2->m128i_i64[0];
    v31 = 1;
    while ( 1 )
    {
      v24 = v29 + 24;
      if ( v30 >= *(_QWORD *)(v29 + 24) )
      {
        if ( v30 != *(_QWORD *)(v29 + 24) )
          goto LABEL_33;
        v37 = a2->m128i_i32[2];
        if ( *(_DWORD *)(v29 + 32) <= v37 )
          break;
      }
      v32 = *(_BYTE **)(v29 + 8);
      v31 = 1;
LABEL_34:
      if ( (*v32 & 2) != 0 )
        goto LABEL_35;
      v29 = (unsigned __int64)v32;
    }
    if ( *(_DWORD *)(v29 + 32) >= v37 )
    {
      if ( !v29 )
      {
LABEL_35:
        v33 = v31;
        v19 = v29;
        goto LABEL_36;
      }
      goto LABEL_23;
    }
LABEL_33:
    v32 = *(_BYTE **)(v29 + 16);
    v31 = 0;
    goto LABEL_34;
  }
  v11 = *(unsigned __int64 ***)(a1 + 72);
  v12 = *v11;
  if ( *v11 )
  {
    v13 = *v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v13 )
      goto LABEL_13;
    if ( (*(_BYTE *)v13 & 2) == 0 )
    {
      v14 = a2->m128i_i64[0];
      while ( v14 >= *(_QWORD *)(v13 + 24) )
      {
        if ( v14 == *(_QWORD *)(v13 + 24) )
        {
          v15 = *(_DWORD *)(v13 + 32);
          if ( a2->m128i_i32[2] < v15 )
            break;
          if ( a2->m128i_i32[2] <= v15 )
          {
            if ( v12 != (unsigned __int64 *)v13 )
LABEL_13:
              sub_256B00(v11, (__int64 *)v13);
            return sub_3380C0(*(_QWORD *)(a1 + 216), 115, a1, (_DWORD)a2, (_DWORD)a3, a6);
          }
        }
        v13 = *(_QWORD *)(v13 + 16);
LABEL_27:
        if ( (*(_BYTE *)v13 & 2) != 0 )
          return sub_3380C0(*(_QWORD *)(a1 + 216), 115, a1, (_DWORD)a2, (_DWORD)a3, a6);
      }
      v13 = *(_QWORD *)(v13 + 8);
      goto LABEL_27;
    }
  }
  return sub_3380C0(*(_QWORD *)(a1 + 216), 115, a1, (_DWORD)a2, (_DWORD)a3, a6);
}

