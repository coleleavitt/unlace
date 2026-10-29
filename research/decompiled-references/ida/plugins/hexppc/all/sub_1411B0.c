__int64 __fastcall sub_1411B0(const __m128i *a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  _OWORD *v6; // rax
  __int64 v7; // rax
  size_t v8; // r15
  __m128i v9; // xmm0
  void *v10; // rax
  _QWORD *exception; // rax

  if ( (*(_BYTE *)a2 & 2) != 0 )
    return a1->m128i_i64[0];
  v6 = (_OWORD *)qalloc();
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
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v7 = *(_QWORD *)(a2 + 24);
  *((_QWORD *)v3 + 4) = 0;
  *((_QWORD *)v3 + 3) = v7;
  *(_OWORD *)((char *)v3 + 40) = 0;
  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 )
  {
    v10 = (void *)qalloc_or_throw();
    *((_QWORD *)v3 + 4) = v10;
    *((_QWORD *)v3 + 6) = v8;
    memcpy(v10, *(const void **)(a2 + 32), v8);
    *((_QWORD *)v3 + 5) = v8;
  }
  *((_QWORD *)v3 + 7) = 0;
  copy_tinfo_t();
  *(_QWORD *)v3 &= ~2uLL;
  *(_QWORD *)v3 = *(_QWORD *)a2 & 1LL | a3 & 0xFFFFFFFFFFFFFFFCLL;
  v9 = _mm_loadl_epi64(a1);
  *(__m128i *)((char *)v3 + 8) = _mm_unpacklo_epi64(v9, v9);
  *((_QWORD *)v3 + 1) = sub_1411B0(a1, *(_QWORD *)(a2 + 8), v3);
  *((_QWORD *)v3 + 2) = sub_1411B0(a1, *(_QWORD *)(a2 + 16), v3);
  return (__int64)v3;
}

