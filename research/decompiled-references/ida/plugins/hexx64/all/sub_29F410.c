__int64 __fastcall sub_29F410(const __m128i *a1, __int64 a2, __int64 a3)
{
  _OWORD *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __m128i v10; // xmm0
  _QWORD *exception; // rax

  if ( (*(_BYTE *)a2 & 2) != 0 )
    return a1->m128i_i64[0];
  v6 = (_OWORD *)qalloc();
  v7 = (__int64)v6;
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v8 = (__int64)(v6 + 2);
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v9 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 24) = v9;
  sub_29F770(v8, (unsigned int *)(a2 + 32));
  *(_QWORD *)v7 &= ~2uLL;
  *(_QWORD *)v7 = a3 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)a2 & 1LL;
  v10 = _mm_loadl_epi64(a1);
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v10, v10);
  *(_QWORD *)(v7 + 8) = sub_29F410(a1, *(_QWORD *)(a2 + 8), v7);
  *(_QWORD *)(v7 + 16) = sub_29F410(a1, *(_QWORD *)(a2 + 16), v7);
  return v7;
}

