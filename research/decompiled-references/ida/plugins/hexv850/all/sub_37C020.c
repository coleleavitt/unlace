unsigned __int64 __fastcall sub_37C020(__m128i *a1, unsigned __int64 *a2, char a3, __int64 **a4)
{
  void *v7; // rax
  unsigned __int64 v8; // rbx
  __int64 *v9; // rdx
  __int64 v10; // rax
  _QWORD **v11; // rbp
  void *v12; // rdi
  unsigned __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v16; // rdx
  _QWORD *exception; // rdi
  int v18; // [rsp+8h] [rbp-80h] BYREF
  void *v19; // [rsp+10h] [rbp-78h]
  int *v20; // [rsp+18h] [rbp-70h]
  int *v21; // [rsp+20h] [rbp-68h]
  __int128 v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v7 = (void *)qalloc();
  if ( !v7 )
  {
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  v8 = (unsigned __int64)v7;
  memset(v7, 0, 0x60u);
  v23 = 0;
  v9 = *a4;
  v22 = 0;
  v20 = &v18;
  v21 = &v18;
  v18 = 0;
  v19 = nullptr;
  v10 = *v9;
  *(_DWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 24) = v10;
  *(_QWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 56) = v8 + 40;
  *(_QWORD *)(v8 + 64) = v8 + 40;
  *(_OWORD *)(v8 + 72) = 0;
  copy_tinfo_t();
  *(_QWORD *)(v8 + 88) = v23;
  clear_tinfo_t();
  v11 = (_QWORD **)v19;
  if ( v19 )
  {
    do
    {
      sub_365B50(v11[3]);
      v12 = v11;
      v11 = (_QWORD **)v11[2];
      operator delete(v12, 0x28u);
    }
    while ( v11 );
  }
  v13 = (unsigned __int64)a2 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v8 & 1LL;
  *(_QWORD *)v8 = v13;
  v14 = _mm_loadl_epi64(a1);
  *(_QWORD *)v8 = v13 | 1;
  *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v14, v14);
  if ( (unsigned __int64 *)a1->m128i_i64[0] == a2 )
  {
    *a2 = v8 & 0xFFFFFFFFFFFFFFFCLL | *a2 & 3;
    *(_QWORD *)(a1->m128i_i64[0] + 8) = v8;
    *(_QWORD *)(a1->m128i_i64[0] + 16) = v8;
    v16 = *(_QWORD *)v8 & 2LL;
    *(_QWORD *)v8 &= ~1uLL;
    *(_QWORD *)v8 = v16 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
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
    sub_378660(a1, (__int64 *)v8);
  }
  ++a1->m128i_i64[1];
  return v8;
}

