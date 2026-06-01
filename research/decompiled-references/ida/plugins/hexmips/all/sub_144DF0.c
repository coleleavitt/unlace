unsigned __int64 __fastcall sub_144DF0(__m128i *a1, unsigned __int64 *a2, char a3, _DWORD **a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 *v9; // rdi
  _DWORD *v10; // rax
  __m128i v11; // xmm0
  unsigned __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v15; // rdx
  _QWORD *exception; // rdi
  _QWORD v17[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+10h] [rbp-48h]
  __m128i v19; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v7 = qalloc();
  if ( !v7 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v8 = v7;
  *(_QWORD *)(v7 + 64) = 0;
  *(_OWORD *)v7 = 0;
  v9 = (__int64 *)(v7 + 32);
  *(_OWORD *)(v7 + 16) = 0;
  *(_OWORD *)(v7 + 32) = 0;
  *(_OWORD *)(v7 + 48) = 0;
  v10 = *a4;
  v19 = 0;
  v17[0] = 0;
  v17[1] = 0;
  v18 = 0;
  *(_DWORD *)(v8 + 24) = *v10;
  sub_5FE00(v9, (__int64)v17);
  v11 = _mm_loadu_si128(&v19);
  *(_QWORD *)(v8 + 48) = v18;
  *(__m128i *)(v8 + 56) = v11;
  qfree();
  v12 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 1LL;
  *(_QWORD *)v8 = v12;
  v13 = _mm_loadl_epi64(a1);
  *(_QWORD *)v8 = v12 | 1;
  *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v13, v13);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v8 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
    v15 = *(_QWORD *)v8 & 2LL;
    *(_QWORD *)v8 &= ~1uLL;
    *(_QWORD *)v8 = v15 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  }
  else
  {
    if ( a3 )
    {
      a2[1] = v8;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 8) )
        *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
    }
    else
    {
      a2[2] = v8;
      if ( a2 == *(unsigned __int64 **)(a1->m128i_i64[0] + 16) )
        *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
    }
    sub_144AB0(a1, v8);
  }
  ++a1->m128i_i64[1];
  return v8;
}

