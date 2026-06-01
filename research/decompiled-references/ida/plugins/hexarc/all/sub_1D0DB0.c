__int64 __fastcall sub_1D0DB0(const __m128i *a1, __int64 a2, __int64 a3)
{
  _OWORD *v5; // rax
  _OWORD *v6; // rbx
  size_t v7; // r13
  __m128i v8; // xmm0
  void *v9; // rax
  _QWORD *exception; // rax

  if ( (*(_BYTE *)a2 & 2) != 0 )
    return a1->m128i_i64[0];
  v5 = (_OWORD *)qalloc();
  v6 = v5;
  if ( !v5 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v7 = *(_QWORD *)(a2 + 32);
  if ( v7 )
  {
    v9 = (void *)qalloc_or_throw();
    *((_QWORD *)v6 + 5) = v7;
    *((_QWORD *)v6 + 3) = v9;
    memcpy(v9, *(const void **)(a2 + 24), v7);
    *((_QWORD *)v6 + 4) = v7;
    v7 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFDLL;
  }
  *(_QWORD *)v6 = v7;
  *(_QWORD *)v6 = a3 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)a2 & 1LL;
  v8 = _mm_loadl_epi64(a1);
  *(__m128i *)((char *)v6 + 8) = _mm_unpacklo_epi64(v8, v8);
  *((_QWORD *)v6 + 1) = sub_1D0DB0(a1, *(_QWORD *)(a2 + 8), v6);
  *((_QWORD *)v6 + 2) = sub_1D0DB0(a1, *(_QWORD *)(a2 + 16), v6);
  return (__int64)v6;
}

