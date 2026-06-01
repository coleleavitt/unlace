unsigned __int64 __fastcall sub_2D0640(__m128i *a1, __int64 a2)
{
  int i; // r13d
  __m128i v5; // xmm0
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rsi
  __m128i v9; // xmm0
  void *v10; // rax
  unsigned __int64 v11; // rax
  __m128i v12; // xmm0
  void *v13; // rdi
  int v14; // r12d
  const char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  size_t v18; // r15
  void *v19; // rax
  char v20; // cl
  unsigned __int64 v21; // rax
  char v22; // dl
  _BYTE *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  __m128i v26; // xmm1
  _QWORD *v28; // rdi
  _QWORD *exception; // rdi
  int v30; // [rsp+4h] [rbp-A4h]
  const __m128i *v31; // [rsp+18h] [rbp-90h] BYREF
  void *src; // [rsp+20h] [rbp-88h] BYREF
  size_t n; // [rsp+28h] [rbp-80h]
  int v34; // [rsp+40h] [rbp-68h] BYREF
  void *v35; // [rsp+48h] [rbp-60h]
  __m128i v36; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v30 = unpack_dd();
  if ( v30 > 0 )
  {
    for ( i = 0; v30 != i; ++i )
    {
      v14 = unpack_dd();
      v15 = sub_332380((const char **)a2, *(_QWORD *)(a2 + 8));
      sub_81980((__int64)&src, v15);
      v18 = n;
      v13 = nullptr;
      if ( n )
      {
        v19 = (void *)qalloc_or_throw(n, (__int64)v15, v16, v17);
        v13 = memcpy(v19, src, v18);
      }
      v5 = (__m128i)v18;
      v6 = a1->m128i_i64[0];
      v34 = v14;
      v35 = v13;
      v31 = (const __m128i *)&v34;
      v36 = _mm_unpacklo_epi64(v5, v5);
      if ( !v6 )
      {
        v25 = qalloc();
        v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
        if ( !v25 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v25 + 48) = 0;
        *(_OWORD *)(v25 + 16) = 0;
        *(_OWORD *)(v25 + 32) = 0;
        *(__m128i *)(v25 + 8) = v26;
        *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | 2;
        a1->m128i_i64[0] = v25;
        *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v25 & 3LL;
        *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
        *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
        v6 = a1->m128i_i64[0];
LABEL_5:
        v7 = qalloc();
        v8 = v7;
        if ( !v7 )
        {
          v28 = __cxa_allocate_exception(8u);
          *v28 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v28,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)v7 = 0;
        *(_OWORD *)(v7 + 16) = 0;
        *(_DWORD *)(v7 + 24) = v34;
        v9 = _mm_load_si128(&v36);
        v10 = v35;
        v35 = nullptr;
        *(__m128i *)(v8 + 40) = v9;
        v36 = 0;
        *(_QWORD *)(v8 + 32) = v10;
        v11 = v6 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 1LL;
        *(_QWORD *)v8 = v11;
        v12 = _mm_loadl_epi64(a1);
        *(_QWORD *)v8 = v11 | 1;
        *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v12, v12);
        if ( a1->m128i_i64[0] == v6 )
        {
          *(_QWORD *)v6 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v6 & 3LL;
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
          *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
          v24 = *(_QWORD *)v8 & 2LL;
          *(_QWORD *)v8 &= ~1uLL;
          *(_QWORD *)v8 = v24 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          *(_QWORD *)(v6 + 8) = v8;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v6 )
            *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
          sub_8F240(a1, (__int64 *)v8);
        }
        ++a1->m128i_i64[1];
        v13 = v35;
        goto LABEL_11;
      }
      if ( !a1->m128i_i64[1] )
        goto LABEL_5;
      v20 = 1;
      v21 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v21 & 2) != 0 )
      {
        v22 = 1;
LABEL_20:
        sub_2D04C0(a1, (unsigned __int64 *)v6, v22, &v31);
        v13 = v35;
        goto LABEL_11;
      }
      while ( 1 )
      {
        if ( v14 < *(_DWORD *)(v21 + 24) )
        {
          v23 = *(_BYTE **)(v21 + 8);
          v20 = 1;
          goto LABEL_24;
        }
        if ( v14 <= *(_DWORD *)(v21 + 24) )
          break;
        v23 = *(_BYTE **)(v21 + 16);
        v20 = 0;
LABEL_24:
        if ( (*v23 & 2) != 0 )
          goto LABEL_25;
        v21 = (unsigned __int64)v23;
      }
      if ( !v21 )
      {
LABEL_25:
        v22 = v20;
        v6 = v21;
        goto LABEL_20;
      }
LABEL_11:
      if ( v13 )
      {
        v36.m128i_i64[0] = 0;
        qfree((__int64)v13);
      }
      if ( src )
      {
        n = 0;
        qfree((__int64)src);
      }
    }
  }
  return v37 - __readfsqword(0x28u);
}

