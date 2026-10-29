__int64 __fastcall sub_235EA0(__m128i *a1, __int64 a2, char a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r14
  size_t v10; // r15
  int v11; // eax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __m128i v14; // xmm0
  void *v16; // rax
  __int64 v17; // rdx
  _QWORD *exception; // rax

  v6 = qalloc();
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v8 = v6;
  memset((void *)v6, 0, 0x70u);
  v9 = *a4;
  *(_QWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  v10 = *(_QWORD *)(v9 + 8);
  if ( v10 )
  {
    v16 = (void *)qalloc_or_throw(*(_QWORD *)(v9 + 8), a2, v7, 0);
    *(_QWORD *)(v8 + 24) = v16;
    *(_QWORD *)(v8 + 40) = v10;
    memcpy(v16, *(const void **)v9, v10);
    *(_QWORD *)(v8 + 32) = v10;
  }
  *(_QWORD *)(v8 + 48) = 0;
  copy_tinfo_t();
  *(_QWORD *)(v8 + 56) = *(_QWORD *)(v9 + 32);
  *(_QWORD *)(v8 + 64) = *(_QWORD *)(v9 + 40);
  *(_QWORD *)(v8 + 72) = *(_QWORD *)(v9 + 48);
  v11 = *(_DWORD *)(v9 + 56);
  *(_QWORD *)(v8 + 88) = 0;
  *(_DWORD *)(v8 + 80) = v11;
  v12 = *(_QWORD *)v8;
  *(_OWORD *)(v8 + 96) = 0;
  v13 = a2 & 0xFFFFFFFFFFFFFFFCLL | v12 & 1;
  *(_QWORD *)v8 = v13;
  v14 = _mm_loadl_epi64(a1);
  *(_QWORD *)v8 = v13 | 1;
  *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v14, v14);
  if ( a1->m128i_i64[0] == a2 )
  {
    *(_QWORD *)a2 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)a2 & 3LL;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
    v17 = *(_QWORD *)v8 & 2LL;
    *(_QWORD *)v8 &= ~1uLL;
    *(_QWORD *)v8 = v17 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      *(_QWORD *)(a2 + 8) = v8;
      if ( a2 == *(_QWORD *)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
    }
    else
    {
      *(_QWORD *)(a2 + 16) = v8;
      if ( a2 == *(_QWORD *)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
    }
    sub_235AC0(a1, (__int64 *)v8);
  }
  ++a1->m128i_i64[1];
  return v8;
}

