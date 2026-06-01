unsigned __int64 __fastcall sub_2CC4A0(__int64 a1, __m128i *a2, __int64 a3)
{
  int i; // r13d
  int v7; // ecx
  size_t v8; // r12
  void *v9; // rdi
  __m128i v10; // xmm0
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  __m128i v14; // xmm0
  void *v15; // rax
  unsigned __int64 v16; // rax
  __m128i v17; // xmm0
  int v18; // r12d
  const char *v19; // rax
  __int64 v20; // rdi
  void *v21; // rax
  void *v22; // rax
  char v23; // si
  unsigned __int64 v24; // rax
  char v25; // dl
  _BYTE *v26; // rdx
  __int64 v27; // rax
  __m128i v28; // xmm1
  __int64 v29; // rdx
  _QWORD *v31; // rdi
  _QWORD *exception; // rdi
  unsigned __int64 v33; // [rsp+8h] [rbp-B0h]
  int v34; // [rsp+8h] [rbp-B0h]
  int v35; // [rsp+14h] [rbp-A4h]
  const __m128i *v36; // [rsp+28h] [rbp-90h] BYREF
  void *src; // [rsp+30h] [rbp-88h] BYREF
  size_t n; // [rsp+38h] [rbp-80h]
  int v39; // [rsp+50h] [rbp-68h] BYREF
  void *v40; // [rsp+58h] [rbp-60h]
  __m128i v41; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v35 = unpack_dd();
  if ( v35 > 0 )
  {
    for ( i = 0; v35 != i; ++i )
    {
      v18 = unpack_dd();
      v33 = sub_32D380(a3, *(_QWORD *)(a1 + 8));
      v19 = (const char *)sub_32D340(a3, *(_QWORD *)(a3 + 8));
      sub_7D780((__int64)&src, v19);
      v20 = *(_QWORD *)(a1 + 24);
      if ( !v20 || (v7 = sub_23B230(v20, v33, 0), v7 == -1) )
      {
        v7 = v18;
        v8 = n;
        v9 = nullptr;
        if ( n )
        {
LABEL_20:
          v34 = v7;
          v21 = (void *)qalloc_or_throw();
          v22 = memcpy(v21, src, v8);
          v7 = v34;
          v9 = v22;
        }
      }
      else
      {
        v8 = n;
        v9 = nullptr;
        if ( n )
          goto LABEL_20;
      }
      v10 = (__m128i)v8;
      v11 = a2->m128i_i64[0];
      v39 = v7;
      v40 = v9;
      v36 = (const __m128i *)&v39;
      v41 = _mm_unpacklo_epi64(v10, v10);
      if ( !v11 )
      {
        v27 = qalloc();
        v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v27);
        if ( !v27 )
        {
          exception = __cxa_allocate_exception(8u);
          *exception = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            exception,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_QWORD *)(v27 + 48) = 0;
        *(_OWORD *)(v27 + 16) = 0;
        *(_OWORD *)(v27 + 32) = 0;
        *(__m128i *)(v27 + 8) = v28;
        *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | 2;
        a2->m128i_i64[0] = v27;
        *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v27 & 3LL;
        *(__m128i *)(a2->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a2->m128i_u64[0], (__m128i)a2->m128i_u64[0]);
        *(_QWORD *)a2->m128i_i64[0] &= ~1uLL;
        *(_QWORD *)a2->m128i_i64[0] |= 2uLL;
        v11 = a2->m128i_i64[0];
LABEL_7:
        v12 = qalloc();
        v13 = v12;
        if ( !v12 )
        {
          v31 = __cxa_allocate_exception(8u);
          *v31 = (char *)&`vtable for'std::bad_alloc + 16;
          __cxa_throw(
            v31,
            (struct type_info *)&`typeinfo for'std::bad_alloc,
            (void (*)(void *))&std::bad_alloc::~bad_alloc);
        }
        *(_OWORD *)v12 = 0;
        *(_OWORD *)(v12 + 16) = 0;
        *(_DWORD *)(v12 + 24) = v39;
        v14 = _mm_load_si128(&v41);
        v15 = v40;
        v40 = nullptr;
        *(__m128i *)(v13 + 40) = v14;
        v41 = 0;
        *(_QWORD *)(v13 + 32) = v15;
        v16 = v11 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v13 & 1LL;
        *(_QWORD *)v13 = v16;
        v17 = _mm_loadl_epi64(a2);
        *(_QWORD *)v13 = v16 | 1;
        *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64(v17, v17);
        if ( a2->m128i_i64[0] == v11 )
        {
          *(_QWORD *)v11 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v11 & 3LL;
          *(_QWORD *)(a2->m128i_i64[0] + 8) = v13;
          *(_QWORD *)(a2->m128i_i64[0] + 16) = v13;
          v29 = *(_QWORD *)v13 & 2LL;
          *(_QWORD *)v13 &= ~1uLL;
          *(_QWORD *)v13 = v29 | a2->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        }
        else
        {
          *(_QWORD *)(v11 + 8) = v13;
          if ( *(_QWORD *)(a2->m128i_i64[0] + 8) == v11 )
            *(_QWORD *)(a2->m128i_i64[0] + 8) = v13;
          sub_8B040(a2, (__int64 *)v13);
        }
        ++a2->m128i_i64[1];
        v9 = v40;
        goto LABEL_13;
      }
      if ( !a2->m128i_i64[1] )
        goto LABEL_7;
      v23 = 1;
      v24 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_BYTE *)v24 & 2) != 0 )
      {
        v25 = 1;
LABEL_23:
        sub_2CBC40(a2, (unsigned __int64 *)v11, v25, &v36);
        v9 = v40;
        goto LABEL_13;
      }
      while ( 1 )
      {
        if ( v7 < *(_DWORD *)(v24 + 24) )
        {
          v26 = *(_BYTE **)(v24 + 8);
          v23 = 1;
          goto LABEL_27;
        }
        if ( v7 <= *(_DWORD *)(v24 + 24) )
          break;
        v26 = *(_BYTE **)(v24 + 16);
        v23 = 0;
LABEL_27:
        if ( (*v26 & 2) != 0 )
          goto LABEL_28;
        v24 = (unsigned __int64)v26;
      }
      if ( !v24 )
      {
LABEL_28:
        v25 = v23;
        v11 = v24;
        goto LABEL_23;
      }
LABEL_13:
      if ( v9 )
      {
        v41.m128i_i64[0] = 0;
        qfree();
      }
      if ( src )
      {
        n = 0;
        qfree();
      }
    }
  }
  return v42 - __readfsqword(0x28u);
}

