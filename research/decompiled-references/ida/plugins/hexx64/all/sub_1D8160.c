__int64 __fastcall sub_1D8160(const __m128i *a1, __int64 a2, __int64 a3)
{
  _OWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  size_t v9; // r13
  __m128i v10; // xmm0
  void *v11; // rax
  _QWORD *exception; // rax

  if ( (*(_BYTE *)a2 & 2) != 0 )
    return a1->m128i_i64[0];
  v5 = (_OWORD *)qalloc();
  v8 = (__int64)v5;
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
  v9 = *(_QWORD *)(a2 + 32);
  if ( v9 )
  {
    v11 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 32), a2, v6, v7);
    *(_QWORD *)(v8 + 40) = v9;
    *(_QWORD *)(v8 + 24) = v11;
    memcpy(v11, *(const void **)(a2 + 24), v9);
    *(_QWORD *)(v8 + 32) = v9;
    v9 = *(_QWORD *)v8 & 0xFFFFFFFFFFFFFFFDLL;
  }
  *(_QWORD *)v8 = v9;
  *(_QWORD *)v8 = a3 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)a2 & 1LL;
  v10 = _mm_loadl_epi64(a1);
  *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v10, v10);
  *(_QWORD *)(v8 + 8) = sub_1D8160(a1, *(_QWORD *)(a2 + 8), v8);
  *(_QWORD *)(v8 + 16) = sub_1D8160(a1, *(_QWORD *)(a2 + 16), v8);
  return v8;
}

