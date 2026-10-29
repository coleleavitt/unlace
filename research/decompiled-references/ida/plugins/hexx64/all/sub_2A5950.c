unsigned __int64 __fastcall sub_2A5950(__m128i *a1, unsigned int *a2, unsigned int *a3, __m128 a4)
{
  unsigned __int64 *v4; // rsi
  unsigned __int64 v6; // rax
  char v7; // cl
  unsigned __int64 v8; // rdx
  _BYTE *v9; // rdx
  char v10; // dl
  __int64 v11; // rax
  __m128i v12; // xmm1
  _QWORD *exception; // rdi
  unsigned int *v14[2]; // [rsp+8h] [rbp-60h] BYREF
  unsigned int v15[6]; // [rsp+18h] [rbp-50h] BYREF
  unsigned int *v16; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v17[4]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  v14[1] = a2;
  v15[0] = 0;
  sub_29F770((__int64)v15, a3, *(double *)a4.m128_u64);
  v17[0] = 0;
  v16 = a2;
  sub_29F770((__int64)v17, v15, *(double *)a4.m128_u64);
  v4 = (unsigned __int64 *)a1->m128i_i64[0];
  v14[0] = (unsigned int *)&v16;
  if ( !v4 )
  {
    v11 = qalloc();
    v12 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v11, (__m128i)(unsigned __int64)v11);
    if ( !v11 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v11 + 16) = 0;
    *(_OWORD *)(v11 + 32) = 0;
    *(__m128i *)(v11 + 8) = v12;
    *(_QWORD *)v11 = v11 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v11;
    *(_QWORD *)v11 = v11 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v11 & 3LL;
    a4 = (__m128)_mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(__m128 *)(a1->m128i_i64[0] + 8) = a4;
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v4 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    sub_2A57D0(a1, v4, 1, v14);
    goto LABEL_4;
  }
  v6 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v6 & 2) != 0 )
  {
    v10 = 1;
LABEL_11:
    sub_2A57D0(a1, v4, v10, v14);
    goto LABEL_4;
  }
  v7 = 1;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v6 + 24);
    if ( (unsigned __int64)v16 < v8 )
    {
      v9 = *(_BYTE **)(v6 + 8);
      v7 = 1;
      if ( (*v9 & 2) != 0 )
        goto LABEL_9;
      goto LABEL_14;
    }
    if ( v8 >= (unsigned __int64)v16 )
      break;
    v9 = *(_BYTE **)(v6 + 16);
    v7 = 0;
    if ( (*v9 & 2) != 0 )
      goto LABEL_9;
LABEL_14:
    v6 = (unsigned __int64)v9;
  }
  if ( !v6 )
  {
LABEL_9:
    v10 = v7;
    v4 = (unsigned __int64 *)v6;
    goto LABEL_11;
  }
LABEL_4:
  sub_29EC30((__int64)v17, *(double *)a4.m128_u64);
  sub_29EC30((__int64)v15, *(double *)a4.m128_u64);
  return v18 - __readfsqword(0x28u);
}

