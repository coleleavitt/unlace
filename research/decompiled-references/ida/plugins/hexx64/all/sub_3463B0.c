unsigned __int64 __fastcall sub_3463B0(__m128i *a1, int *a2, double a3)
{
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rbx
  char v7; // r14
  char v8; // dl
  _BYTE *v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm1
  _QWORD *exception; // rdi
  __int64 v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v13[1] = __readfsqword(0x28u);
  v13[0] = (__int64)a2;
  v4 = (unsigned __int64 *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v10 = qalloc();
    v11 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
    if ( !v10 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v10 + 64) = 0;
    *(_OWORD *)(v10 + 16) = 0;
    *(_OWORD *)(v10 + 32) = 0;
    *(_OWORD *)(v10 + 48) = 0;
    *(_QWORD *)v10 = v10 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v10 + 8) = v11;
    a1->m128i_i64[0] = v10;
    *(_QWORD *)v10 = v10 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v10 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v4 = (unsigned __int64 *)a1->m128i_i64[0];
    return sub_3461E0(a1, v4, 1, v13);
  }
  if ( !a1->m128i_i64[1] )
    return sub_3461E0(a1, v4, 1, v13);
  v7 = 1;
  v5 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v5 & 2) != 0 )
  {
    v8 = 1;
    return sub_3461E0(a1, v4, v8, v13);
  }
  while ( 1 )
  {
    if ( (int)sub_3307E0(a2, (int *)(v5 + 24), a3) < 0 )
    {
      v9 = *(_BYTE **)(v5 + 8);
      v7 = 1;
      goto LABEL_11;
    }
    if ( (int)sub_3307E0((int *)(v5 + 24), a2, a3) >= 0 )
      break;
    v9 = *(_BYTE **)(v5 + 16);
    v7 = 0;
LABEL_11:
    if ( (*v9 & 2) != 0 )
      goto LABEL_12;
    v5 = (unsigned __int64)v9;
  }
  if ( !v5 )
  {
LABEL_12:
    v8 = v7;
    v4 = (unsigned __int64 *)v5;
    return sub_3461E0(a1, v4, v8, v13);
  }
  return v5;
}

