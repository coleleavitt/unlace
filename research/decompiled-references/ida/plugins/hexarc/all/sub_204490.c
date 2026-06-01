__int64 __fastcall sub_204490(__m128i *a1, unsigned __int64 *a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v10; // rdx
  _QWORD *exception; // rax

  v4 = qalloc();
  if ( !v4 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v5 = v4;
  *(_OWORD *)(v4 + 16) = 0;
  *(_OWORD *)v4 = 0;
  *(_OWORD *)(v4 + 32) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  copy_argloc();
  v6 = *(_QWORD *)v5;
  *(_QWORD *)(v5 + 40) = 0;
  *(_OWORD *)(v5 + 48) = 0;
  v7 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | v6 & 1;
  *(_QWORD *)v5 = v7;
  v8 = _mm_loadl_epi64(a1);
  *(_QWORD *)v5 = v7 | 1;
  *(__m128i *)(v5 + 8) = _mm_unpacklo_epi64(v8, v8);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v5 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v5;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v5;
    v10 = *(_QWORD *)v5 & 2LL;
    *(_QWORD *)v5 &= ~1uLL;
    *(_QWORD *)v5 = v10 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      a2[1] = v5;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v5;
    }
    else
    {
      a2[2] = v5;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v5;
    }
    sub_2040B0(a1, (__int64 *)v5);
  }
  ++a1->m128i_i64[1];
  return v5;
}

