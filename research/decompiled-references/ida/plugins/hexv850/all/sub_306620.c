unsigned __int64 __fastcall sub_306620(__m128i *a1, unsigned __int64 *a2, char a3, __int64 **a4)
{
  _OWORD *v6; // rax
  unsigned __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v13; // rdx
  _QWORD *exception; // rdi
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  __int128 v16; // [rsp+8h] [rbp-50h]
  __int64 v17; // [rsp+18h] [rbp-40h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v6 = (_OWORD *)qalloc();
  if ( !v6 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v7 = (unsigned __int64)v6;
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v8 = *a4;
  v17 = 0;
  v15 = 0;
  v16 = 0;
  v9 = *v8;
  *(_QWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 24) = v9;
  *(_QWORD *)(v7 + 56) = 0;
  *(_OWORD *)(v7 + 40) = 0;
  copy_tinfo_t();
  sub_2AFDA0(&v15);
  v10 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v7 & 1LL;
  *(_QWORD *)v7 = v10;
  v11 = _mm_loadl_epi64(a1);
  *(_QWORD *)v7 = v10 | 1;
  *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v11, v11);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v7 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
    v13 = *(_QWORD *)v7 & 2LL;
    *(_QWORD *)v7 &= ~1uLL;
    *(_QWORD *)v7 = v13 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      a2[1] = v7;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v7;
    }
    else
    {
      a2[2] = v7;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v7;
    }
    sub_2CF2D0(a1, (__int64 *)v7);
  }
  ++a1->m128i_i64[1];
  return v7;
}

