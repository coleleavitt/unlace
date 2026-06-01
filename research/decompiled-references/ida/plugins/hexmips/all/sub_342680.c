unsigned __int64 __fastcall sub_342680(__m128i *a1, const __m128i *a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __m128i v5; // xmm0
  char v7; // r14
  _BYTE *v8; // rax
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rax
  __m128i v13; // xmm1
  _QWORD *exception; // rax

  v2 = a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v12 = qalloc();
    v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
    if ( !v12 )
      goto LABEL_28;
    *(_OWORD *)(v12 + 16) = 0;
    *(_OWORD *)(v12 + 32) = 0;
    *(__m128i *)(v12 + 8) = v13;
    *(_QWORD *)v12 = v12 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v12;
    *(_QWORD *)v12 = v12 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v12 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v2 = a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v3 = qalloc();
    v4 = v3;
    if ( v3 )
    {
      *(_OWORD *)(v3 + 16) = 0;
      *(_OWORD *)(v3 + 32) = 0;
      *(_OWORD *)v3 = 0;
      *(__m128i *)(v3 + 24) = _mm_loadu_si128(a2);
      *(_QWORD *)(v3 + 40) = a2[1].m128i_i64[0];
      *(_QWORD *)v3 = v2 & 0xFFFFFFFFFFFFFFFCLL;
      v5 = _mm_loadl_epi64(a1);
      *(_QWORD *)v3 = v2 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v3 + 8) = _mm_unpacklo_epi64(v5, v5);
      if ( a1->m128i_i64[0] != v2 )
        goto LABEL_5;
      goto LABEL_20;
    }
    goto LABEL_28;
  }
  if ( (*(_BYTE *)(*(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
  {
    v7 = 1;
    goto LABEL_14;
  }
  v2 = *(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFCLL;
  v7 = 1;
  while ( 1 )
  {
    if ( (int)sub_2533F0((__int64)a2, v2 + 24) < 0 )
    {
      v8 = *(_BYTE **)(v2 + 8);
      v7 = 1;
      goto LABEL_13;
    }
    if ( (int)sub_2533F0(v2 + 24, (__int64)a2) >= 0 )
      break;
    v8 = *(_BYTE **)(v2 + 16);
    v7 = 0;
LABEL_13:
    if ( (*v8 & 2) != 0 )
      goto LABEL_14;
    v2 = (unsigned __int64)v8;
  }
  if ( !v2 )
  {
LABEL_14:
    v9 = qalloc();
    v4 = v9;
    if ( v9 )
    {
      *(_OWORD *)(v9 + 16) = 0;
      *(_OWORD *)(v9 + 32) = 0;
      *(_OWORD *)v9 = 0;
      *(__m128i *)(v9 + 24) = _mm_loadu_si128(a2);
      *(_QWORD *)(v9 + 40) = a2[1].m128i_i64[0];
      *(_QWORD *)v9 = v2 & 0xFFFFFFFFFFFFFFFCLL;
      v10 = _mm_loadl_epi64(a1);
      *(_QWORD *)v9 = v2 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64(v10, v10);
      if ( a1->m128i_i64[0] != v2 )
      {
        if ( !v7 )
        {
          *(_QWORD *)(v2 + 16) = v9;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 16) == v2 )
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v9;
          goto LABEL_7;
        }
LABEL_5:
        *(_QWORD *)(v2 + 8) = v4;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v2 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v4;
LABEL_7:
        sub_258D00(a1, (__int64 *)v4);
LABEL_8:
        ++a1->m128i_i64[1];
        return v4;
      }
LABEL_20:
      *(_QWORD *)v2 = v4 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v2 & 3LL;
      *(_QWORD *)(a1->m128i_i64[0] + 8) = v4;
      *(_QWORD *)(a1->m128i_i64[0] + 16) = v4;
      v11 = *(_QWORD *)v4 & 2LL;
      *(_QWORD *)v4 &= ~1uLL;
      *(_QWORD *)v4 = v11 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_8;
    }
LABEL_28:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  return v2;
}

