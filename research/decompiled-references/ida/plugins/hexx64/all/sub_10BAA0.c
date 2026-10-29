char __fastcall sub_10BAA0(__m128i *a1, __int64 a2, const __m128i **a3)
{
  _QWORD *exception; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _QWORD *v7; // rsi
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int8 v12; // r14
  char v13; // r13
  unsigned __int8 v14; // al
  _BYTE *v15; // rax
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128i v19; // xmm0

  v5 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v18 = qalloc();
    v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v18, (__m128i)(unsigned __int64)v18);
    if ( !v18 )
      goto LABEL_26;
    *(_QWORD *)(v18 + 32) = 0;
    *(_OWORD *)(v18 + 16) = 0;
    *(__m128i *)(v18 + 8) = v19;
    *(_QWORD *)v18 = v18 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v18;
    *(_QWORD *)v18 = v18 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v18 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v5 = a1->m128i_i64[0];
LABEL_3:
    v6 = qalloc();
    v7 = (_QWORD *)v6;
    if ( v6 )
    {
      *(_QWORD *)(v6 + 32) = 0;
      *(_OWORD *)v6 = 0;
      *(_OWORD *)(v6 + 16) = 0;
      v8 = _mm_loadu_si128(*a3);
      *(_QWORD *)v6 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(v6 + 24) = v8;
      v9 = _mm_loadl_epi64(a1);
      *(_QWORD *)v6 = v5 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v9, v9);
      if ( a1->m128i_i64[0] == v5 )
      {
        *(_QWORD *)v5 = v6 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v6;
        v17 = *(_QWORD *)v6 & 2LL;
        *(_QWORD *)v6 &= ~1uLL;
        v10 = v17 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
        *v7 = v10;
      }
      else
      {
        *(_QWORD *)(v5 + 8) = v6;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v5 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v6;
        LOBYTE(v10) = (unsigned __int8)sub_10AD00(a1, (__int64 *)v6);
      }
      ++a1->m128i_i64[1];
      return v10;
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
  v11 = *(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v11 & 2) != 0 )
  {
    v16 = 1;
LABEL_18:
    LOBYTE(v10) = sub_10AFA0(a1, (unsigned __int64 *)v5, v16, a3);
    return v10;
  }
  v12 = *(_BYTE *)(a2 + 8);
  v13 = 1;
  while ( 1 )
  {
    v14 = *(_BYTE *)(v11 + 32);
    if ( v12 >= v14 && (v14 < v12 || *(_QWORD *)a2 >= *(_QWORD *)(v11 + 24)) )
      break;
    v15 = *(_BYTE **)(v11 + 8);
    v13 = 1;
    if ( (*v15 & 2) != 0 )
      goto LABEL_16;
LABEL_20:
    v11 = (unsigned __int64)v15;
  }
  LOBYTE(v10) = sub_103C40(v11 + 24, a2);
  if ( (_BYTE)v10 )
  {
    v15 = *(_BYTE **)(v11 + 16);
    v13 = 0;
    if ( (*v15 & 2) != 0 )
      goto LABEL_16;
    goto LABEL_20;
  }
  if ( !v11 )
  {
LABEL_16:
    v16 = v13;
    v5 = v11;
    goto LABEL_18;
  }
  return v10;
}

