unsigned __int64 __fastcall sub_1E26C0(__m128i *a1, unsigned __int64 a2, const __m128i *a3)
{
  _QWORD *exception; // rdi
  unsigned __int64 *v4; // r12
  char v8; // dl
  unsigned __int64 v9; // rax
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // si
  __int64 v12; // rdi
  __int64 v13; // rax
  __m128i v14; // xmm1
  _BYTE *v15; // rsi
  char v16; // [rsp+Fh] [rbp-39h] BYREF
  const __m128i *v17; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 *v18; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-20h]

  v4 = (unsigned __int64 *)a1->m128i_i64[0];
  v20 = __readfsqword(0x28u);
  v17 = a3;
  if ( !v4 )
  {
    v13 = qalloc();
    v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v13);
    if ( !v13 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v13 + 64) = 0;
    *(_OWORD *)(v13 + 16) = 0;
    *(_OWORD *)(v13 + 32) = 0;
    *(_OWORD *)(v13 + 48) = 0;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v13 + 8) = v14;
    a1->m128i_i64[0] = v13;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v13 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v4 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    sub_1E2530(a1, v4, 1, &v17);
    return v20 - __readfsqword(0x28u);
  }
  v18 = v4;
  v16 = 1;
  v19 = 0;
  if ( a2 && (unsigned __int8)sub_82780((unsigned __int64 *)a1, (__int64)a3, a2, (unsigned __int64 *)&v18, &v16, &v19) )
  {
    if ( !v19 )
      sub_1E2530(a1, v18, v16, &v17);
    return v20 - __readfsqword(0x28u);
  }
  v8 = 1;
  v9 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v9 & 2) != 0 )
    goto LABEL_17;
  v10 = a3->m128i_u8[8];
  while ( 1 )
  {
    v11 = *(_BYTE *)(v9 + 32);
    if ( v10 < v11 )
    {
LABEL_20:
      v15 = *(_BYTE **)(v9 + 8);
      v8 = 1;
      goto LABEL_21;
    }
    if ( v11 >= v10 )
    {
      v12 = *(_QWORD *)(v9 + 24);
      if ( a3->m128i_i64[0] < v12 )
        goto LABEL_20;
      if ( a3->m128i_i64[0] <= v12 )
        break;
    }
    v15 = *(_BYTE **)(v9 + 16);
    v8 = 0;
LABEL_21:
    if ( (*v15 & 2) != 0 )
      goto LABEL_16;
    v9 = (unsigned __int64)v15;
  }
  if ( v9 )
    return v20 - __readfsqword(0x28u);
LABEL_16:
  v4 = (unsigned __int64 *)v9;
LABEL_17:
  sub_1E2530(a1, v4, v8, &v17);
  return v20 - __readfsqword(0x28u);
}

