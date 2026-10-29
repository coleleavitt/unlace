__int64 __fastcall sub_18C450(__int64 a1, __int64 *a2)
{
  __int64 v2; // r14
  __m128i *v3; // r12
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // r13
  __int64 v8; // r13
  __int64 v9; // r13
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 result; // rax
  __m128i v13; // xmm0
  void *v14; // rax
  const void *v15; // rsi
  void *v16; // rax
  const void *v17; // rsi
  void *v18; // rax
  const void *v19; // rsi
  void *v20; // rax
  const void *v21; // rsi
  __int64 v22; // rax
  __m128i v23; // xmm1
  _QWORD *v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  struct _Unwind_Exception *v30; // rbp
  _QWORD *exception; // rax

  v3 = (__m128i *)(a1 + 8);
  v5 = *a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = v5;
  if ( !a2[2] )
    goto LABEL_2;
  v22 = qalloc();
  v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v22, (__m128i)(unsigned __int64)v22);
  if ( !v22 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  *(_QWORD *)(v22 + 48) = 0;
  *(_OWORD *)(v22 + 16) = 0;
  *(_OWORD *)(v22 + 32) = 0;
  *(__m128i *)(v22 + 8) = v23;
  *(_QWORD *)v22 = v22 & 0xFFFFFFFFFFFFFFFCLL | 2;
  *(_QWORD *)(a1 + 8) = v22;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)v22 = v22 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v22 & 3LL;
  *(__m128i *)(*(_QWORD *)(a1 + 8) + 8LL) = _mm_unpacklo_epi64(
                                              (__m128i)*(unsigned __int64 *)(a1 + 8),
                                              (__m128i)*(unsigned __int64 *)(a1 + 8));
  **(_QWORD **)(a1 + 8) &= ~1uLL;
  **(_QWORD **)(a1 + 8) |= 2uLL;
  if ( !a2[2] )
  {
    if ( !under_debugger )
    {
      v30 = (struct _Unwind_Exception *)interr();
      sub_90100(v2);
      if ( *(_QWORD *)(a1 + 24) )
      {
        *(_QWORD *)(a1 + 32) = 0;
        qfree();
      }
      sub_189FF0(v3->m128i_i64);
      _Unwind_Resume(v30);
    }
    goto LABEL_30;
  }
  v24 = (_QWORD *)a2[1];
  if ( v24 )
    v25 = *v24 & 0xFFFFFFFFFFFFFFFCLL;
  else
    v25 = 0;
  v26 = sub_18C2B0(v3, v25, *(_QWORD *)(a1 + 8));
  **(_QWORD **)(a1 + 8) = v26 & 0xFFFFFFFFFFFFFFFCLL | **(_QWORD **)(a1 + 8) & 3LL;
  if ( (*(_BYTE *)v26 & 2) != 0 )
  {
    if ( under_debugger )
      goto LABEL_30;
    v26 = interr();
  }
  v27 = v26;
  do
  {
    v28 = v27;
    v27 = *(_QWORD *)(v27 + 8);
  }
  while ( (*(_BYTE *)v27 & 2) == 0 );
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = v28;
  if ( (*(_BYTE *)v26 & 2) != 0 )
  {
    if ( !under_debugger )
    {
      v26 = interr();
      goto LABEL_23;
    }
LABEL_30:
    BUG();
  }
  do
  {
LABEL_23:
    v29 = v26;
    v26 = *(_QWORD *)(v26 + 16);
  }
  while ( (*(_BYTE *)v26 & 2) == 0 );
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) = v29;
  *(_QWORD *)(a1 + 16) = a2[2];
LABEL_2:
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v6 = a2[4];
  if ( v6 )
  {
    v20 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 24) = v20;
    v21 = (const void *)a2[3];
    *(_QWORD *)(a1 + 40) = v6;
    memcpy(v20, v21, 8 * v6);
    *(_QWORD *)(a1 + 32) = v6;
  }
  sub_605C0((__int64 *)(a1 + 48), (__int64)(a2 + 6));
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 72) = 0;
  v7 = a2[9];
  if ( v7 )
  {
    v18 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 64) = v18;
    v19 = (const void *)a2[8];
    *(_QWORD *)(a1 + 80) = v7;
    memcpy(v18, v19, 16 * v7);
    *(_QWORD *)(a1 + 72) = v7;
  }
  sub_605C0((__int64 *)(a1 + 88), (__int64)(a2 + 11));
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  v8 = a2[14];
  if ( v8 )
  {
    v16 = (void *)qalloc_or_throw();
    v17 = (const void *)a2[13];
    *(_QWORD *)(a1 + 104) = v16;
    *(_QWORD *)(a1 + 120) = v8;
    memcpy(v16, v17, 16 * v8);
    *(_QWORD *)(a1 + 112) = v8;
  }
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  v9 = a2[17];
  if ( v9 )
  {
    v14 = (void *)qalloc_or_throw();
    *(_QWORD *)(a1 + 128) = v14;
    v15 = (const void *)a2[16];
    *(_QWORD *)(a1 + 144) = v9;
    memcpy(v14, v15, 16 * v9);
    *(_QWORD *)(a1 + 136) = v9;
  }
  v10 = a2[25];
  *(__m128i *)(a1 + 152) = _mm_loadu_si128((const __m128i *)(a2 + 19));
  v11 = _mm_loadu_si128((const __m128i *)(a2 + 21));
  *(_QWORD *)(a1 + 200) = v10;
  result = *((unsigned __int8 *)a2 + 208);
  *(__m128i *)(a1 + 168) = v11;
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 23));
  *(_BYTE *)(a1 + 208) = result;
  *(__m128i *)(a1 + 184) = v13;
  return result;
}

