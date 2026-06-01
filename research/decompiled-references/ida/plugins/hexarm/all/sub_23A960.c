__int64 __fastcall sub_23A960(__int64 a1, __m128i *a2, __int64 a3, int a4)
{
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __m128i v14; // xmm0
  char v16; // r14
  unsigned __int64 v17; // rax
  bool v18; // cc
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __m128i v21; // xmm0
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 *v25; // rdx
  char v26; // al
  _QWORD *exception; // rax
  _QWORD *v28; // [rsp+0h] [rbp-48h]
  __int64 *v29; // [rsp+8h] [rbp-40h]

  if ( (get_tinfo_property() & 0xF) == 0xB || a4 != get_tinfo_size() )
    v28 = nullptr;
  else
    v28 = (_QWORD *)(a3 + 24);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a3 + 32);
  if ( v8 >= sub_18CAC0(v7) )
  {
    if ( (*(_BYTE *)(v7 + 5) & 0x10) == 0
      || (v25 = *(__int64 **)(v7 + 944), v25[1] == -1)
      && (v29 = *(__int64 **)(v7 + 944), v26 = sub_21EB20(v29), v25 = v29, !v26)
      || !v25[2]
      || v8 < v25[1] )
    {
      a4 = sub_2285D0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a3 + 32), v28, a4);
    }
  }
  if ( !a4 )
    a4 = 1;
  v9 = (int)sub_2357F0(a1, a3, a4, 256);
  if ( v9 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 440LL) - 1LL )
  {
    if ( !under_debugger )
      sub_3835A0(52286);
    BUG();
  }
  v10 = *(_QWORD *)(a3 + 32);
  v11 = a2->m128i_i64[0];
  if ( !a2->m128i_i64[0] )
  {
    v23 = qalloc();
    v24 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v23);
    if ( !v23 )
      goto LABEL_45;
    *(_QWORD *)(v23 + 32) = 0;
    *(_OWORD *)(v23 + 16) = 0;
    *(__m128i *)(v23 + 8) = v24;
    *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a2->m128i_i64[0] = v23;
    *(_QWORD *)v23 = v23 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v23 & 3LL;
    *(__m128i *)(a2->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a2->m128i_u64[0], (__m128i)a2->m128i_u64[0]);
    *(_QWORD *)a2->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a2->m128i_i64[0] |= 2uLL;
    v11 = a2->m128i_i64[0];
    goto LABEL_9;
  }
  if ( !a2->m128i_i64[1] )
  {
LABEL_9:
    v12 = qalloc();
    v13 = v12;
    if ( v12 )
    {
      *(_QWORD *)(v12 + 32) = 0;
      *(_OWORD *)(v12 + 16) = 0;
      *(_DWORD *)(v12 + 32) = v9;
      *(_QWORD *)(v12 + 24) = v10;
      *(_OWORD *)v12 = 0;
      *(_QWORD *)v12 = v11 & 0xFFFFFFFFFFFFFFFCLL;
      v14 = _mm_loadl_epi64(a2);
      *(_QWORD *)v12 = v11 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64(v14, v14);
      if ( a2->m128i_i64[0] != v11 )
        goto LABEL_11;
      goto LABEL_32;
    }
    goto LABEL_45;
  }
  v16 = 1;
  v17 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v17 & 2) != 0 )
  {
LABEL_27:
    v20 = qalloc();
    v13 = v20;
    if ( v20 )
    {
      *(_QWORD *)(v20 + 32) = 0;
      *(_OWORD *)(v20 + 16) = 0;
      *(_DWORD *)(v20 + 32) = v9;
      *(_QWORD *)(v20 + 24) = v10;
      *(_OWORD *)v20 = 0;
      *(_QWORD *)v20 = v11 & 0xFFFFFFFFFFFFFFFCLL;
      v21 = _mm_loadl_epi64(a2);
      *(_QWORD *)v20 = v11 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(v21, v21);
      if ( a2->m128i_i64[0] != v11 )
      {
        if ( !v16 )
        {
          *(_QWORD *)(v11 + 16) = v20;
          if ( *(_QWORD *)(a2->m128i_i64[0] + 16) == v11 )
            *(_QWORD *)(a2->m128i_i64[0] + 16) = v20;
          goto LABEL_13;
        }
LABEL_11:
        *(_QWORD *)(v11 + 8) = v13;
        if ( *(_QWORD *)(a2->m128i_i64[0] + 8) == v11 )
          *(_QWORD *)(a2->m128i_i64[0] + 8) = v13;
LABEL_13:
        sub_D7820(a2, (__int64 *)v13);
LABEL_14:
        ++a2->m128i_i64[1];
        return (unsigned int)v9;
      }
LABEL_32:
      *(_QWORD *)v11 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v11 & 3LL;
      *(_QWORD *)(a2->m128i_i64[0] + 8) = v13;
      *(_QWORD *)(a2->m128i_i64[0] + 16) = v13;
      v22 = *(_QWORD *)v13 & 2LL;
      *(_QWORD *)v13 &= ~1uLL;
      *(_QWORD *)v13 = v22 | a2->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
  v18 = v10 <= *(_QWORD *)(v17 + 24);
  if ( v10 >= *(_QWORD *)(v17 + 24) )
    goto LABEL_24;
LABEL_22:
  v19 = *(_QWORD *)(v17 + 8);
  v16 = 1;
  if ( (*(_BYTE *)v19 & 2) != 0 )
  {
LABEL_26:
    v11 = v17;
    goto LABEL_27;
  }
  while ( 1 )
  {
    v17 = v19;
    v18 = v10 <= *(_QWORD *)(v19 + 24);
    if ( v10 < *(_QWORD *)(v19 + 24) )
      goto LABEL_22;
LABEL_24:
    if ( v18 )
      break;
    v19 = *(_QWORD *)(v17 + 16);
    v16 = 0;
    if ( (*(_BYTE *)v19 & 2) != 0 )
      goto LABEL_26;
  }
  if ( !v17 )
  {
    v11 = 0;
    goto LABEL_27;
  }
  return (unsigned int)v9;
}

