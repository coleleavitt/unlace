unsigned __int64 __fastcall sub_2A0D50(__m128i *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned __int64 *v3; // rsi
  unsigned __int64 v5; // rax
  char v6; // cl
  unsigned __int64 v7; // rdx
  _BYTE *v8; // rdx
  char v9; // dl
  __int64 v10; // rax
  __m128i v11; // xmm1
  _QWORD *exception; // rdi
  unsigned int *v13[2]; // [rsp+8h] [rbp-60h] BYREF
  unsigned int v14[6]; // [rsp+18h] [rbp-50h] BYREF
  unsigned int *v15; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v16[4]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v13[1] = a2;
  v14[0] = 0;
  sub_29AB70((__int64)v14, a3);
  v16[0] = 0;
  v15 = a2;
  sub_29AB70((__int64)v16, v14);
  v3 = (unsigned __int64 *)a1->m128i_i64[0];
  v13[0] = (unsigned int *)&v15;
  if ( !v3 )
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
    *(_OWORD *)(v10 + 16) = 0;
    *(_OWORD *)(v10 + 32) = 0;
    *(__m128i *)(v10 + 8) = v11;
    *(_QWORD *)v10 = v10 & 0xFFFFFFFFFFFFFFFCLL | 2;
    a1->m128i_i64[0] = v10;
    *(_QWORD *)v10 = v10 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v10 & 3LL;
    *(__m128i *)(a1->m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1->m128i_u64[0], (__m128i)a1->m128i_u64[0]);
    *(_QWORD *)a1->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)a1->m128i_i64[0] |= 2uLL;
    v3 = (unsigned __int64 *)a1->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !a1->m128i_i64[1] )
  {
LABEL_3:
    sub_2A0BD0(a1, v3, 1, v13);
    goto LABEL_4;
  }
  v5 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v5 & 2) != 0 )
  {
    v9 = 1;
LABEL_11:
    sub_2A0BD0(a1, v3, v9, v13);
    goto LABEL_4;
  }
  v6 = 1;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v5 + 24);
    if ( (unsigned __int64)v15 < v7 )
    {
      v8 = *(_BYTE **)(v5 + 8);
      v6 = 1;
      if ( (*v8 & 2) != 0 )
        goto LABEL_9;
      goto LABEL_14;
    }
    if ( v7 >= (unsigned __int64)v15 )
      break;
    v8 = *(_BYTE **)(v5 + 16);
    v6 = 0;
    if ( (*v8 & 2) != 0 )
      goto LABEL_9;
LABEL_14:
    v5 = (unsigned __int64)v8;
  }
  if ( !v5 )
  {
LABEL_9:
    v9 = v6;
    v3 = (unsigned __int64 *)v5;
    goto LABEL_11;
  }
LABEL_4:
  sub_29A030((__int64)v16);
  sub_29A030((__int64)v14);
  return v17 - __readfsqword(0x28u);
}

