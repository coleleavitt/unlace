__int64 *__fastcall sub_314950(__int64 *a1, __int64 *a2)
{
  _QWORD *exception; // rax
  size_t v3; // r14
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // r12
  bool v9; // zf
  size_t v10; // r14
  __int64 v12; // rax
  __m128i v13; // xmm0
  _QWORD *v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  void *v17; // rax
  void *v18; // rax
  __int64 i; // rdx
  __int64 v20; // rdx
  void *v21; // rdi

  if ( a1 != a2 )
  {
    v5 = *a1;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = (_QWORD *)*a2;
    if ( !*a2 )
      goto LABEL_10;
    v7 = (_QWORD *)operator new(0x50u);
    v8 = (_QWORD *)*a2;
    v6 = v7;
    *v7 = &off_4B6C98;
    v9 = v8[2] == 0;
    v7[1] = 0;
    v7[2] = 0;
    if ( v9 )
    {
LABEL_6:
      v6[3] = 0;
      *((_OWORD *)v6 + 2) = 0;
      v10 = v8[4];
      if ( v10 )
      {
        v18 = (void *)qalloc_or_throw();
        v6[3] = v18;
        v6[5] = v10;
        memcpy(v18, (const void *)v8[3], v10);
        v6[4] = v10;
      }
      v6[6] = 0;
      *(_OWORD *)(v6 + 7) = 0;
      v3 = v8[7];
      if ( !v3 )
        goto LABEL_9;
      goto LABEL_19;
    }
    v12 = qalloc();
    v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
    if ( !v12 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v12 + 32) = 0;
    *(_OWORD *)(v12 + 16) = 0;
    *(__m128i *)(v12 + 8) = v13;
    *(_QWORD *)v12 = v12 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v6[1] = v12;
    v6[2] = 0;
    *(_QWORD *)v12 = v12 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v12 & 3LL;
    *(__m128i *)(v6[1] + 8LL) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6[1], (__m128i)(unsigned __int64)v6[1]);
    *(_QWORD *)v6[1] &= ~1uLL;
    *(_QWORD *)v6[1] |= 2uLL;
    if ( v8[2] )
    {
      v14 = (_QWORD *)v8[1];
      if ( v14 )
        v15 = *v14 & 0xFFFFFFFFFFFFFFFCLL;
      else
        v15 = 0;
      v16 = sub_314840((const __m128i *)(v6 + 1), v15, v6[1]);
      *(_QWORD *)v6[1] = v16 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v6[1] & 3LL;
      if ( (*(_BYTE *)v16 & 2) == 0 )
      {
        for ( i = v16; (**(_BYTE **)(i + 8) & 2) == 0; i = *(_QWORD *)(i + 8) )
          ;
        *(_QWORD *)(v6[1] + 8LL) = i;
        if ( (*(_BYTE *)v16 & 2) != 0 )
        {
          if ( under_debugger )
            goto LABEL_35;
          v16 = interr();
        }
        do
        {
          v20 = v16;
          v16 = *(_QWORD *)(v16 + 16);
        }
        while ( (*(_BYTE *)v16 & 2) == 0 );
        *(_QWORD *)(v6[1] + 16LL) = v20;
        v6[2] = v8[2];
        goto LABEL_6;
      }
      if ( !under_debugger )
      {
        interr();
LABEL_19:
        v17 = (void *)qalloc_or_throw();
        v6[6] = v17;
        v6[8] = v3;
        memcpy(v17, (const void *)v8[6], v3);
        v6[7] = v3;
LABEL_9:
        v6[9] = v8[9];
        *v6 = &off_4B6C70;
LABEL_10:
        *a1 = (__int64)v6;
        return a1;
      }
    }
    else if ( !under_debugger )
    {
      v21 = (void *)interr();
      __cxa_begin_catch(v21);
      if ( v6[1] )
        qfree();
      __cxa_rethrow();
    }
LABEL_35:
    BUG();
  }
  return a1;
}

