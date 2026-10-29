__int64 *__fastcall sub_31A210(__int64 *a1, __int64 *a2)
{
  _QWORD *exception; // rax
  __int64 v3; // rdi
  size_t v4; // r14
  __int64 v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  bool v12; // zf
  size_t v13; // r14
  __int64 v15; // rax
  __m128i v16; // xmm0
  _QWORD *v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  void *v20; // rax
  void *v21; // rax
  __int64 i; // rdx
  void *v23; // rdi

  if ( a1 != a2 )
  {
    v6 = *a1;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = *a2;
    if ( !*a2 )
      goto LABEL_10;
    v8 = (_QWORD *)operator new(0x50u);
    v11 = *a2;
    v7 = (__int64)v8;
    *v8 = &off_4E3320;
    v12 = *(_QWORD *)(v11 + 16) == 0;
    v8[1] = 0;
    v8[2] = 0;
    if ( v12 )
    {
LABEL_6:
      *(_QWORD *)(v7 + 24) = 0;
      *(_OWORD *)(v7 + 32) = 0;
      v13 = *(_QWORD *)(v11 + 32);
      if ( v13 )
      {
        v21 = (void *)qalloc_or_throw(*(_QWORD *)(v11 + 32), (__int64)a2, v9, v10);
        *(_QWORD *)(v7 + 24) = v21;
        *(_QWORD *)(v7 + 40) = v13;
        a2 = *(__int64 **)(v11 + 24);
        memcpy(v21, a2, v13);
        *(_QWORD *)(v7 + 32) = v13;
      }
      *(_QWORD *)(v7 + 48) = 0;
      *(_OWORD *)(v7 + 56) = 0;
      v4 = *(_QWORD *)(v11 + 56);
      if ( !v4 )
        goto LABEL_9;
      goto LABEL_19;
    }
    v15 = qalloc();
    v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
    if ( !v15 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v15 + 32) = 0;
    *(_OWORD *)(v15 + 16) = 0;
    *(__m128i *)(v15 + 8) = v16;
    *(_QWORD *)v15 = v15 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(v7 + 8) = v15;
    *(_QWORD *)(v7 + 16) = 0;
    *(_QWORD *)v15 = v15 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v15 & 3LL;
    *(__m128i *)(*(_QWORD *)(v7 + 8) + 8LL) = _mm_unpacklo_epi64(
                                                (__m128i)*(unsigned __int64 *)(v7 + 8),
                                                (__m128i)*(unsigned __int64 *)(v7 + 8));
    **(_QWORD **)(v7 + 8) &= ~1uLL;
    **(_QWORD **)(v7 + 8) |= 2uLL;
    if ( *(_QWORD *)(v11 + 16) )
    {
      v17 = *(_QWORD **)(v11 + 8);
      if ( v17 )
        v18 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
      else
        v18 = 0;
      v19 = sub_31A100((const __m128i *)(v7 + 8), v18, *(_QWORD *)(v7 + 8));
      a2 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
      **(_QWORD **)(v7 + 8) = v19 & 0xFFFFFFFFFFFFFFFCLL | **(_QWORD **)(v7 + 8) & 3LL;
      if ( (*(_BYTE *)v19 & 2) == 0 )
      {
        for ( i = v19; (**(_BYTE **)(i + 8) & 2) == 0; i = *(_QWORD *)(i + 8) )
          ;
        v10 = *(_QWORD *)(v7 + 8);
        *(_QWORD *)(v10 + 8) = i;
        if ( (*(_BYTE *)v19 & 2) != 0 )
        {
          if ( under_debugger )
            goto LABEL_35;
          v19 = interr();
        }
        do
        {
          v9 = v19;
          v19 = *(_QWORD *)(v19 + 16);
        }
        while ( (*(_BYTE *)v19 & 2) == 0 );
        *(_QWORD *)(*(_QWORD *)(v7 + 8) + 16LL) = v9;
        *(_QWORD *)(v7 + 16) = *(_QWORD *)(v11 + 16);
        goto LABEL_6;
      }
      if ( !under_debugger )
      {
        interr();
LABEL_19:
        v20 = (void *)qalloc_or_throw(v4, (__int64)a2, v9, v10);
        *(_QWORD *)(v7 + 48) = v20;
        *(_QWORD *)(v7 + 64) = v4;
        memcpy(v20, *(const void **)(v11 + 48), v4);
        *(_QWORD *)(v7 + 56) = v4;
LABEL_9:
        *(_QWORD *)(v7 + 72) = *(_QWORD *)(v11 + 72);
        *(_QWORD *)v7 = &off_4E32F8;
LABEL_10:
        *a1 = v7;
        return a1;
      }
    }
    else if ( !under_debugger )
    {
      v23 = (void *)interr();
      __cxa_begin_catch(v23);
      v3 = *(_QWORD *)(v7 + 8);
      if ( v3 )
        qfree(v3);
      __cxa_rethrow();
    }
LABEL_35:
    BUG();
  }
  return a1;
}

