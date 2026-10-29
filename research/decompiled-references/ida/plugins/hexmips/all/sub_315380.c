__int64 __fastcall sub_315380(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  __m128i v7; // xmm0
  _QWORD *exception; // rax

  if ( (*(_BYTE *)a2 & 2) != 0 )
    return a1->m128i_i64[0];
  v5 = qalloc();
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
  *(_QWORD *)(v5 + 32) = 0;
  *(_OWORD *)(v5 + 16) = 0;
  *(_OWORD *)v5 = 0;
  *(__m128i *)(v5 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)v5 = a3 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)a2 & 1LL;
  v7 = _mm_loadl_epi64(a1);
  *(__m128i *)(v5 + 8) = _mm_unpacklo_epi64(v7, v7);
  *(_QWORD *)(v5 + 8) = sub_315380(a1, *(_QWORD *)(a2 + 8), v5);
  *(_QWORD *)(v6 + 16) = sub_315380(a1, *(_QWORD *)(a2 + 16), v6);
  return v6;
}

