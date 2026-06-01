__int64 __fastcall sub_106520(__m128i *a1, __int64 a2, const __m128i **a3)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbx
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // r14
  char v12; // r13
  unsigned __int8 v13; // al
  _BYTE *v14; // rax
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i v18; // xmm0
  _QWORD *exception; // rax

  v4 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v17 = qalloc();
    v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v17);
    if ( !v17 )
      goto LABEL_26;
    *(_QWORD *)(v17 + 32) = 0;
    *(_OWORD *)(v17 + 16) = 0;
    *(__m128i *)(v17 + 8) = v18;
    *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v17;
    *(_QWORD *)v17 = v17 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v17 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v4 = a1->m128i_i64[0];
LABEL_3:
    v5 = qalloc();
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)(v5 + 32) = 0;
      *(_OWORD *)v5 = 0;
      *(_OWORD *)(v5 + 16) = 0;
      v7 = _mm_loadu_si128(*a3);
      *(_QWORD *)v5 = v4 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v5 + 24) = v7;
      v8 = _mm_loadl_epi64(a1);
      *(_QWORD *)v5 = v4 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v5 + 8) = _mm_unpacklo_epi64(v8, v8);
      if ( a1->m128i_i64[0] == v4 )
      {
        *(_QWORD *)v4 = v5 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v4 & 3LL;
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v5;
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v5;
        v16 = *(_QWORD *)v5 & 2LL;
        *(_QWORD *)v5 &= ~1uLL;
        *(_QWORD *)v5 = v16 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v4 + 8) = v5;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v4 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v5;
        sub_106140(a1, (__int64 *)v5);
      }
      ++a1->m128i_i64[1];
      return v6;
    }
LABEL_26:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !a1->m128i_i64[1] )
    goto LABEL_3;
  v10 = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v10 & 2) != 0 )
  {
    v15 = 1;
    return sub_1062A0(a1, (unsigned __int64 *)v4, v15, a3);
  }
  v11 = *(_BYTE *)(a2 + 8);
  v12 = 1;
  while ( 1 )
  {
    v13 = *(_BYTE *)(v10 + 32);
    if ( v11 >= v13 && (v13 < v11 || *(_QWORD *)a2 >= *(_QWORD *)(v10 + 24)) )
      break;
    v14 = *(_BYTE **)(v10 + 8);
    v12 = 1;
    if ( (*v14 & 2) != 0 )
      goto LABEL_16;
LABEL_20:
    v10 = (unsigned __int64)v14;
  }
  if ( sub_FF080(v10 + 24, a2) )
  {
    v14 = *(_BYTE **)(v10 + 16);
    v12 = 0;
    if ( (*v14 & 2) != 0 )
      goto LABEL_16;
    goto LABEL_20;
  }
  if ( !v10 )
  {
LABEL_16:
    v15 = v12;
    v4 = v10;
    return sub_1062A0(a1, (unsigned __int64 *)v4, v15, a3);
  }
  return v10;
}

