unsigned __int64 __fastcall sub_141370(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *exception; // rdi
  _QWORD **v4; // rdi
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v14; // rax
  __m128i v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rax
  __m128i v18; // xmm0
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _BYTE *v23; // rcx
  __m128i v24; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+18h] [rbp-20h]

  v4 = *(_QWORD ***)(a1 + 792);
  v25 = __readfsqword(0x28u);
  v6 = sub_13A0F0(v4, a2);
  if ( !v6 )
    return v25 - __readfsqword(0x28u);
  v7 = *v6;
  if ( !v7 )
    return v25 - __readfsqword(0x28u);
  v8 = *(_QWORD *)(v7 + 8);
  if ( a3 == v8 + 1312 )
    return v25 - __readfsqword(0x28u);
  v9 = *(_QWORD *)(a3 + 8);
  v24 = 0u;
  v10 = 0;
  if ( v9 )
  {
    v14 = qalloc();
    v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v14, (__m128i)(unsigned __int64)v14);
    if ( !v14 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v14 + 16) = 0;
    *(__m128i *)(v14 + 8) = v15;
    *(_OWORD *)(v14 + 32) = 0;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | 2;
    v24 = (__m128i)(unsigned __int64)v14;
    v16 = *(_QWORD *)v14;
    *(_OWORD *)(v14 + 48) = 0;
    *(_QWORD *)v14 = v14 & 0xFFFFFFFFFFFFFFFCLL | v16 & 3;
    v17 = v24.m128i_i64[0];
    v18 = (__m128i)v24.m128i_u64[0];
    *(_QWORD *)v24.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v18, v18);
    *(_QWORD *)v24.m128i_i64[0] |= 2uLL;
    if ( !*(_QWORD *)(a3 + 8) )
      sub_130E50(64);
    if ( *(_QWORD *)a3 )
      v19 = **(_QWORD **)a3 & 0xFFFFFFFFFFFFFFFCLL;
    else
      v19 = 0;
    v20 = sub_1411B0(&v24, v19, v24.m128i_i64[0]);
    *(_QWORD *)v24.m128i_i64[0] = v20 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v24.m128i_i64[0] & 3LL;
    if ( (*(_BYTE *)v20 & 2) != 0 )
    {
      if ( under_debugger )
        goto LABEL_27;
      v20 = interr();
    }
    v21 = v20;
    do
    {
      v22 = v21;
      v21 = *(_QWORD *)(v21 + 8);
    }
    while ( (*(_BYTE *)v21 & 2) == 0 );
    v10 = v24.m128i_i64[0];
    *(_QWORD *)(v24.m128i_i64[0] + 8) = v22;
    if ( (*(_BYTE *)v20 & 2) == 0 )
      goto LABEL_22;
    if ( !under_debugger )
    {
      interr();
      do
      {
        v20 = (__int64)v23;
LABEL_22:
        v23 = *(_BYTE **)(v20 + 16);
      }
      while ( (*v23 & 2) == 0 );
      *(_QWORD *)(v10 + 16) = v20;
      v9 = *(_QWORD *)(a3 + 8);
      goto LABEL_5;
    }
LABEL_27:
    BUG();
  }
LABEL_5:
  v11 = *(_QWORD *)(v8 + 1312);
  *(_QWORD *)(v8 + 1312) = v10;
  v12 = *(_QWORD *)(v8 + 1320);
  *(_QWORD *)(v8 + 1320) = v9;
  v24.m128i_i64[0] = v11;
  v24.m128i_i64[1] = v12;
  if ( v11 )
  {
    sub_80530((unsigned __int64 **)&v24);
    if ( v24.m128i_i64[0] )
      qfree();
  }
  return v25 - __readfsqword(0x28u);
}

