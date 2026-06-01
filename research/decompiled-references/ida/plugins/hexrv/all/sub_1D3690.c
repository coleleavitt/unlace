void __fastcall sub_1D3690(__int64 *a1, __int64 a2)
{
  bool v2; // zf
  __int64 v5; // rax
  __m128i v6; // xmm1
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  void *v12; // rdi
  _QWORD *exception; // rax

  v2 = *(_QWORD *)(a2 + 8) == 0;
  *a1 = 0;
  a1[1] = 0;
  if ( v2 )
    return;
  v5 = qalloc();
  v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)v5);
  if ( !v5 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_OWORD *)(v5 + 16) = 0;
  *(_OWORD *)(v5 + 32) = 0;
  *(__m128i *)(v5 + 8) = v6;
  *(_QWORD *)v5 = v5 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *a1 = v5;
  a1[1] = 0;
  *(_QWORD *)v5 = v5 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
  *(__m128i *)(*a1 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*a1, (__m128i)(unsigned __int64)*a1);
  *(_QWORD *)*a1 &= ~1uLL;
  *(_QWORD *)*a1 |= 2uLL;
  if ( !*(_QWORD *)(a2 + 8) )
  {
    if ( !under_debugger )
    {
      v12 = (void *)interr();
      __cxa_begin_catch(v12);
      sub_7E780((unsigned __int64 **)a1);
      __cxa_rethrow();
    }
    goto LABEL_19;
  }
  if ( *(_QWORD *)a2 )
    v7 = **(_QWORD **)a2 & 0xFFFFFFFFFFFFFFFCLL;
  else
    v7 = 0;
  v8 = sub_1D3530((const __m128i *)a1, v7, *a1);
  *(_QWORD *)*a1 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)*a1 & 3LL;
  if ( (*(_BYTE *)v8 & 2) != 0 )
  {
    if ( under_debugger )
      goto LABEL_19;
    v8 = interr();
  }
  v9 = v8;
  do
  {
    v10 = v9;
    v9 = *(_QWORD *)(v9 + 8);
  }
  while ( (*(_BYTE *)v9 & 2) == 0 );
  *(_QWORD *)(*a1 + 8) = v10;
  if ( (*(_BYTE *)v8 & 2) != 0 )
  {
    if ( !under_debugger )
    {
      v8 = interr();
      goto LABEL_14;
    }
LABEL_19:
    BUG();
  }
  do
  {
LABEL_14:
    v11 = v8;
    v8 = *(_QWORD *)(v8 + 16);
  }
  while ( (*(_BYTE *)v8 & 2) == 0 );
  *(_QWORD *)(*a1 + 16) = v11;
  a1[1] = *(_QWORD *)(a2 + 8);
}

