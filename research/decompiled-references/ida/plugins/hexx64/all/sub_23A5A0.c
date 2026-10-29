__int64 __fastcall sub_23A5A0(__int64 a1, __m128i *a2, __int64 a3, int a4, double a5, __m128 a6)
{
  __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __m128i v16; // xmm0
  char v18; // r14
  unsigned __int64 v19; // rax
  bool v20; // cc
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 *v27; // rdx
  char v28; // al
  _QWORD *exception; // rax
  _QWORD *v30; // [rsp+0h] [rbp-48h]
  __int64 *v31; // [rsp+8h] [rbp-40h]

  if ( (get_tinfo_property() & 0xF) == 0xB || a4 != get_tinfo_size() )
    v30 = nullptr;
  else
    v30 = (_QWORD *)(a3 + 24);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD *)(a3 + 32);
  if ( v10 >= sub_18D080(v9) )
  {
    if ( (*(_BYTE *)(v9 + 5) & 0x10) == 0
      || (v27 = *(__int64 **)(v9 + 944), v27[1] == -1)
      && (v31 = *(__int64 **)(v9 + 944), v28 = sub_21E760(v31, a5), v27 = v31, !v28)
      || !v27[2]
      || v10 < v27[1] )
    {
      a4 = sub_228210(*(_QWORD *)(a1 + 8), *(_QWORD *)(a3 + 32), v30, a4, a5);
    }
  }
  if ( !a4 )
    a4 = 1;
  v11 = (int)sub_235430(a1, a3, a4, 256, a5, a6);
  if ( v11 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 440LL) - 1LL )
  {
    if ( !under_debugger )
      sub_383060(0xCC3Eu, a5);
    BUG();
  }
  v12 = *(_QWORD *)(a3 + 32);
  v13 = a2->m128i_i64[0];
  if ( !a2->m128i_i64[0] )
  {
    v25 = qalloc();
    v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
    if ( !v25 )
      goto LABEL_45;
    *(_QWORD *)(v25 + 32) = 0;
    *(_OWORD *)(v25 + 16) = 0;
    *(__m128i *)(v25 + 8) = v26;
    *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a2->m128i_i64[0] = v25;
    *(_QWORD *)v25 = v25 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v25 & 3LL;
    *(__m128i *)(a2->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a2->m128i_u64[0], (__m128i)a2->m128i_u64[0]);
    *(_QWORD *)a2->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a2->m128i_i64[0] |= 2uLL;
    v13 = a2->m128i_i64[0];
    goto LABEL_9;
  }
  if ( !a2->m128i_i64[1] )
  {
LABEL_9:
    v14 = qalloc();
    v15 = v14;
    if ( v14 )
    {
      *(_QWORD *)(v14 + 32) = 0;
      *(_OWORD *)(v14 + 16) = 0;
      *(_DWORD *)(v14 + 32) = v11;
      *(_QWORD *)(v14 + 24) = v12;
      *(_OWORD *)v14 = 0;
      *(_QWORD *)v14 = v13 & 0xFFFFFFFFFFFFFFFCLL;
      v16 = _mm_loadl_epi64(a2);
      *(_QWORD *)v14 = v13 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v16, v16);
      if ( a2->m128i_i64[0] != v13 )
        goto LABEL_11;
      goto LABEL_32;
    }
    goto LABEL_45;
  }
  v18 = 1;
  v19 = *(_QWORD *)v13 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v19 & 2) != 0 )
  {
LABEL_27:
    v22 = qalloc();
    v15 = v22;
    if ( v22 )
    {
      *(_QWORD *)(v22 + 32) = 0;
      *(_OWORD *)(v22 + 16) = 0;
      *(_DWORD *)(v22 + 32) = v11;
      *(_QWORD *)(v22 + 24) = v12;
      *(_OWORD *)v22 = 0;
      *(_QWORD *)v22 = v13 & 0xFFFFFFFFFFFFFFFCLL;
      v23 = _mm_loadl_epi64(a2);
      *(_QWORD *)v22 = v13 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v23, v23);
      if ( a2->m128i_i64[0] != v13 )
      {
        if ( !v18 )
        {
          *(_QWORD *)(v13 + 16) = v22;
          if ( *(_QWORD *)(a2->m128i_i64[0] + 16) == v13 )
            *(_QWORD *)(a2->m128i_i64[0] + 16) = v22;
          goto LABEL_13;
        }
LABEL_11:
        *(_QWORD *)(v13 + 8) = v15;
        if ( *(_QWORD *)(a2->m128i_i64[0] + 8) == v13 )
          *(_QWORD *)(a2->m128i_i64[0] + 8) = v15;
LABEL_13:
        sub_D7DE0(a2, (__int64 *)v15);
LABEL_14:
        ++a2->m128i_i64[1];
        return (unsigned int)v11;
      }
LABEL_32:
      *(_QWORD *)v13 = v15 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v13 & 3LL;
      *(_QWORD *)(a2->m128i_i64[0] + 8) = v15;
      *(_QWORD *)(a2->m128i_i64[0] + 16) = v15;
      v24 = *(_QWORD *)v15 & 2LL;
      *(_QWORD *)v15 &= ~1uLL;
      *(_QWORD *)v15 = v24 | a2->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_14;
    }
LABEL_45:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v20 = v12 <= *(_QWORD *)(v19 + 24);
  if ( v12 >= *(_QWORD *)(v19 + 24) )
    goto LABEL_24;
LABEL_22:
  v21 = *(_QWORD *)(v19 + 8);
  v18 = 1;
  if ( (*(_BYTE *)v21 & 2) != 0 )
  {
LABEL_26:
    v13 = v19;
    goto LABEL_27;
  }
  while ( 1 )
  {
    v19 = v21;
    v20 = v12 <= *(_QWORD *)(v21 + 24);
    if ( v12 < *(_QWORD *)(v21 + 24) )
      goto LABEL_22;
LABEL_24:
    if ( v20 )
      break;
    v21 = *(_QWORD *)(v19 + 16);
    v18 = 0;
    if ( (*(_BYTE *)v21 & 2) != 0 )
      goto LABEL_26;
  }
  if ( !v19 )
  {
    v13 = 0;
    goto LABEL_27;
  }
  return (unsigned int)v11;
}

