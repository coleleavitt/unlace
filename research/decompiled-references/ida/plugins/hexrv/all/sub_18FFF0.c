__int64 __fastcall sub_18FFF0(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __m128i v7; // xmm0
  unsigned __int64 v8; // r14
  __m128i v9; // xmm0
  void *v10; // rax
  _QWORD *exception; // rax

  if ( (*(_BYTE *)a2 & 2) != 0 )
    return a1->m128i_i64[0];
  v6 = qalloc();
  v3 = v6;
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  *(_OWORD *)v6 = 0;
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(v6 + 40) = 0;
  *(__m128i *)(v6 + 24) = v7;
  *(_OWORD *)(v6 + 48) = 0;
  v8 = *(_QWORD *)(a2 + 48);
  if ( v8 )
  {
    v10 = (void *)qalloc_or_throw();
    *(_QWORD *)(v3 + 56) = v8;
    *(_QWORD *)(v3 + 40) = v10;
    memcpy(v10, *(const void **)(a2 + 40), 24 * v8);
    *(_QWORD *)(v3 + 48) = v8;
    v8 = *(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFDLL;
  }
  *(_QWORD *)v3 = v8;
  *(_QWORD *)v3 = *(_QWORD *)a2 & 1LL | a3 & 0xFFFFFFFFFFFFFFFCLL;
  v9 = _mm_loadl_epi64(a1);
  *(__m128i *)(v3 + 8) = _mm_unpacklo_epi64(v9, v9);
  *(_QWORD *)(v3 + 8) = sub_18FFF0(a1, *(_QWORD *)(a2 + 8), v3);
  *(_QWORD *)(v3 + 16) = sub_18FFF0(a1, *(_QWORD *)(a2 + 16), v3);
  return v3;
}

