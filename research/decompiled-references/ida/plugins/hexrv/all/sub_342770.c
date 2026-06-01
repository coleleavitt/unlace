__int64 __fastcall sub_342770(__m128i *a1, const __m128i *a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  unsigned __int64 v4; // rbx
  __m128i v5; // xmm0
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __m128i v8; // xmm0
  char v10; // dl
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  _BYTE *v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm1
  __int64 v16; // rdx
  _QWORD *exception; // rdi
  const __m128i *v18[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1->m128i_i64[0];
  v18[1] = (const __m128i *)__readfsqword(0x28u);
  v18[0] = a2;
  if ( !v2 )
  {
    v14 = qalloc();
    v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
    if ( !v14 )
      goto LABEL_24;
    *(_QWORD *)(v14 + 48) = 0;
    *(_OWORD *)(v14 + 16) = 0;
    *(_OWORD *)(v14 + 32) = 0;
    *(__m128i *)(v14 + 8) = v15;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v14;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v14 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v2 = a1->m128i_i64[0];
LABEL_3:
    v3 = qalloc();
    v4 = v3;
    if ( v3 )
    {
      *(_QWORD *)(v3 + 48) = 0;
      *(_OWORD *)v3 = 0;
      *(_OWORD *)(v3 + 16) = 0;
      *(_OWORD *)(v3 + 32) = 0;
      *(_QWORD *)(v3 + 24) = a2->m128i_i64[0];
      v5 = _mm_loadu_si128(a2 + 1);
      v6 = a2->m128i_i64[1];
      a2->m128i_i64[1] = 0;
      *(__m128i *)(v4 + 40) = v5;
      a2[1] = 0;
      *(_QWORD *)(v4 + 32) = v6;
      v7 = v2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v4 & 1LL;
      *(_QWORD *)v4 = v7;
      v8 = _mm_loadl_epi64(a1);
      *(_QWORD *)v4 = v7 | 1;
      *(__m128i *)(v4 + 8) = _mm_unpacklo_epi64(v8, v8);
      if ( a1->m128i_i64[0] == v2 )
      {
        *(_QWORD *)v2 = v4 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v2 & 3LL;
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v4;
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v4;
        v16 = *(_QWORD *)v4 & 2LL;
        *(_QWORD *)v4 &= ~1uLL;
        *(_QWORD *)v4 = v16 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v2 + 8) = v4;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v2 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v4;
        sub_2599C0(a1, (__int64 *)v4);
      }
      ++a1->m128i_i64[1];
      return v4;
    }
LABEL_24:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !a1->m128i_i64[1] )
    goto LABEL_3;
  v10 = 1;
  v4 = *(_QWORD *)v2 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v4 & 2) != 0 )
    return sub_342600(a1, (unsigned __int64 *)v2, v10, v18);
  v11 = a2->m128i_i64[0];
  while ( 1 )
  {
    v12 = *(_QWORD *)(v4 + 24);
    if ( v11 < v12 )
    {
      v13 = *(_BYTE **)(v4 + 8);
      v10 = 1;
      if ( (*v13 & 2) != 0 )
        goto LABEL_14;
      goto LABEL_18;
    }
    if ( v12 >= v11 )
      break;
    v13 = *(_BYTE **)(v4 + 16);
    v10 = 0;
    if ( (*v13 & 2) != 0 )
      goto LABEL_14;
LABEL_18:
    v4 = (unsigned __int64)v13;
  }
  if ( !v4 )
  {
LABEL_14:
    v2 = v4;
    return sub_342600(a1, (unsigned __int64 *)v2, v10, v18);
  }
  return v4;
}

