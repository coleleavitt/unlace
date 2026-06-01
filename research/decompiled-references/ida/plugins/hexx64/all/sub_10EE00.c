__int64 __fastcall sub_10EE00(const __m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r15
  __m128i v10; // xmm0
  char v11; // al
  __m128i v12; // xmm0
  void *v13; // rax
  _QWORD *exception; // rax

  if ( (*(_BYTE *)a2 & 2) != 0 )
    return a1->m128i_i64[0];
  v6 = (_OWORD *)qalloc();
  v3 = (__int64)v6;
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
  v6[4] = 0;
  v9 = *(_QWORD *)(a2 + 32);
  if ( v9 )
  {
    v13 = (void *)qalloc_or_throw(4 * v9, a2, v7, v8);
    *(_QWORD *)(v3 + 40) = v9;
    *(_QWORD *)(v3 + 24) = v13;
    memcpy(v13, *(const void **)(a2 + 24), 4 * v9);
    *(_QWORD *)(v3 + 32) = v9;
    v9 = *(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFDLL;
  }
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  *(_QWORD *)(v3 + 64) = *(_QWORD *)(a2 + 64);
  v11 = *(_BYTE *)(a2 + 72);
  *(__m128i *)(v3 + 48) = v10;
  *(_QWORD *)v3 = v9;
  *(_BYTE *)(v3 + 72) = v11;
  *(_QWORD *)v3 = *(_QWORD *)a2 & 1LL | a3 & 0xFFFFFFFFFFFFFFFCLL;
  v12 = _mm_loadl_epi64(a1);
  *(__m128i *)(v3 + 8) = _mm_unpacklo_epi64(v12, v12);
  *(_QWORD *)(v3 + 8) = sub_10EE00(a1, *(_QWORD *)(a2 + 8), v3);
  *(_QWORD *)(v3 + 16) = sub_10EE00(a1, *(_QWORD *)(a2 + 16), v3);
  return v3;
}

