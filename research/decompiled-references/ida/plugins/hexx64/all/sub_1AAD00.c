unsigned __int64 __fastcall sub_1AAD00(__m128i *a1, unsigned __int8 **a2, _QWORD **a3, __int64 a4, double a5)
{
  __int64 v6; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __m128i v10; // xmm0
  unsigned __int64 v12; // rbx
  __int64 v14; // rsi
  _BYTE *v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm0
  unsigned __int8 *v18; // rdi
  int v19; // r15d
  unsigned __int8 *v20; // rsi
  unsigned __int8 *v21; // rdi
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rax
  __m128i v25; // xmm0
  _QWORD *exception; // rdi
  char v27; // [rsp+7h] [rbp-61h]
  unsigned __int8 **v28; // [rsp+8h] [rbp-60h]
  int v29; // [rsp+8h] [rbp-60h]
  unsigned __int8 v30[4]; // [rsp+10h] [rbp-58h] BYREF
  int v31; // [rsp+14h] [rbp-54h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v6 = a1->m128i_i64[0];
  v32 = __readfsqword(0x28u);
  if ( !v6 )
  {
    v24 = qalloc();
    v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v24, (__m128i)(unsigned __int64)v24);
    if ( !v24 )
      goto LABEL_36;
    *(_QWORD *)(v24 + 32) = 0;
    *(_OWORD *)(v24 + 16) = 0;
    *(__m128i *)(v24 + 8) = v25;
    *(_QWORD *)v24 = v24 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v24;
    *(_QWORD *)v24 = v24 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v24 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v6 = a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    v8 = qalloc();
    v9 = v8;
    if ( v8 )
    {
      *(_QWORD *)(v8 + 32) = 0;
      *(_OWORD *)v8 = 0;
      *(_OWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = **a3;
      *(_QWORD *)v8 = v6 & 0xFFFFFFFFFFFFFFFCLL;
      v10 = _mm_loadl_epi64(a1);
      *(_QWORD *)v8 = v6 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v10, v10);
      if ( a1->m128i_i64[0] != v6 )
        goto LABEL_5;
      goto LABEL_29;
    }
    goto LABEL_36;
  }
  v12 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v12 & 2) != 0 )
  {
    v27 = 1;
    goto LABEL_17;
  }
  v27 = 1;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v12 + 24);
    v28 = (unsigned __int8 **)(v12 + 24);
    if ( *((_DWORD *)*a2 + 1) == -1 || *(_DWORD *)(v14 + 4) == -1 )
      break;
    if ( sub_11DA40(*a2, (unsigned __int8 *)v14, a5) >= 0 )
      goto LABEL_23;
LABEL_14:
    v15 = *(_BYTE **)(v12 + 8);
    v27 = 1;
    if ( (*v15 & 2) != 0 )
      goto LABEL_28;
LABEL_15:
    v12 = (unsigned __int64)v15;
  }
  sub_123A40((__int64)v30, (unsigned __int8 *)v14, (__int64)a3, a4);
  v18 = *a2;
  v31 = *((_DWORD *)*a2 + 1);
  v19 = sub_11DA40(v18, v30, a5);
  sub_11CDA0((__int64)v30);
  if ( v19 < 0 )
    goto LABEL_14;
LABEL_23:
  v20 = *a2;
  if ( *((_DWORD *)*v28 + 1) == -1 || *((_DWORD *)v20 + 1) == -1 )
  {
    sub_123A40((__int64)v30, v20, (__int64)a3, a4);
    v21 = *v28;
    v31 = *((_DWORD *)*v28 + 1);
    v29 = sub_11DA40(v21, v30, a5);
    sub_11CDA0((__int64)v30);
    v22 = v29;
  }
  else
  {
    v22 = sub_11DA40(*v28, v20, a5);
  }
  if ( v22 < 0 )
  {
    v15 = *(_BYTE **)(v12 + 16);
    v27 = 0;
    if ( (*v15 & 2) == 0 )
      goto LABEL_15;
LABEL_28:
    v6 = v12;
LABEL_17:
    v16 = qalloc();
    v9 = v16;
    if ( v16 )
    {
      *(_QWORD *)(v16 + 32) = 0;
      *(_OWORD *)v16 = 0;
      *(_OWORD *)(v16 + 16) = 0;
      *(_QWORD *)(v16 + 24) = **a3;
      *(_QWORD *)v16 = v6 & 0xFFFFFFFFFFFFFFFCLL;
      v17 = _mm_loadl_epi64(a1);
      *(_QWORD *)v16 = v6 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64(v17, v17);
      if ( a1->m128i_i64[0] != v6 )
      {
        if ( !v27 )
        {
          *(_QWORD *)(v6 + 16) = v16;
          if ( *(_QWORD *)(a1->m128i_i64[0] + 16) == v6 )
            *(_QWORD *)(a1->m128i_i64[0] + 16) = v16;
          goto LABEL_7;
        }
LABEL_5:
        *(_QWORD *)(v6 + 8) = v9;
        if ( *(_QWORD *)(a1->m128i_i64[0] + 8) == v6 )
          *(_QWORD *)(a1->m128i_i64[0] + 8) = v9;
LABEL_7:
        sub_1AA920(a1, (__int64 *)v9);
LABEL_8:
        ++a1->m128i_i64[1];
        return v9;
      }
LABEL_29:
      *(_QWORD *)v6 = v9 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v6 & 3LL;
      *(_QWORD *)(a1->m128i_i64[0] + 8) = v9;
      *(_QWORD *)(a1->m128i_i64[0] + 16) = v9;
      v23 = *(_QWORD *)v9 & 2LL;
      *(_QWORD *)v9 &= ~1uLL;
      *(_QWORD *)v9 = v23 | a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_8;
    }
LABEL_36:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !v12 )
  {
    v6 = 0;
    goto LABEL_17;
  }
  return v12;
}

