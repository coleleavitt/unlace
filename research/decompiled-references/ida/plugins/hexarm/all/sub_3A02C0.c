__int64 __fastcall sub_3A02C0(__int64 a1, __int64 a2, int a3, __m128 a4)
{
  _QWORD *exception; // rdi
  int v7; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // rdx
  __m128i *v12; // r15
  unsigned __int64 *v13; // rsi
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  size_t v21; // r8
  const void *v22; // r9
  void *v23; // rdi
  int v24; // eax
  _BYTE *v25; // rax
  char v26; // dl
  __int64 v27; // rax
  __m128i v28; // xmm1
  __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-78h]
  char v31; // [rsp+8h] [rbp-70h]
  const void *v32; // [rsp+8h] [rbp-70h]
  const __m128i *v33; // [rsp+18h] [rbp-60h] BYREF
  __int64 v34; // [rsp+20h] [rbp-58h] BYREF
  int v35; // [rsp+28h] [rbp-50h]
  unsigned __int64 v36; // [rsp+38h] [rbp-40h]

  v7 = *(char *)(a2 + 12);
  v36 = __readfsqword(0x28u);
  v9 = **(_QWORD **)(a1 + 88);
  v35 = v7;
  v10 = *(_QWORD *)(a1 + 32);
  v34 = v9;
  v11 = &v34;
  v12 = *(__m128i **)(v10 + 80);
  v33 = (const __m128i *)&v34;
  v13 = (unsigned __int64 *)v12->m128i_i64[0];
  if ( !v12->m128i_i64[0] )
  {
    v27 = qalloc();
    v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v27);
    if ( !v27 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v27 + 16) = 0;
    *(_OWORD *)(v27 + 32) = 0;
    *(_OWORD *)(v27 + 48) = 0;
    *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_OWORD *)(v27 + 64) = 0;
    *(__m128i *)(v27 + 8) = v28;
    v12->m128i_i64[0] = v27;
    *(_QWORD *)v27 = v27 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v27 & 3LL;
    a4 = (__m128)_mm_unpacklo_epi64((__m128i)v12->m128i_u64[0], (__m128i)v12->m128i_u64[0]);
    *(__m128 *)(v12->m128i_i64[0] + 8) = a4;
    *(_QWORD *)v12->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)v12->m128i_i64[0] |= 2uLL;
    v13 = (unsigned __int64 *)v12->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !v12->m128i_i64[1] )
  {
LABEL_3:
    v14 = sub_30C940(v12, v13, 1, &v33);
    v15 = v14 + 24;
    goto LABEL_4;
  }
  v14 = *v13 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v14 & 2) != 0 )
  {
    v26 = 1;
LABEL_19:
    v14 = sub_30C940(v12, v13, v26, &v33);
    v15 = v14 + 24;
    goto LABEL_4;
  }
  v31 = 1;
  while ( 1 )
  {
    v15 = v14 + 24;
    v30 = (__int64)v11;
    v24 = sub_258000((__int64)v11, v14 + 24);
    v11 = (__int64 *)v30;
    if ( v24 < 0 )
    {
      v31 = 1;
      v25 = *(_BYTE **)(v14 + 8);
      goto LABEL_16;
    }
    if ( (int)sub_258000(v14 + 24, v30) >= 0 )
      break;
    v25 = *(_BYTE **)(v14 + 16);
    v11 = (__int64 *)v30;
    v31 = 0;
LABEL_16:
    if ( (*v25 & 2) != 0 )
      goto LABEL_17;
    v14 = (unsigned __int64)v25;
  }
  if ( !v14 )
  {
LABEL_17:
    v26 = v31;
    v13 = (unsigned __int64 *)v14;
    goto LABEL_19;
  }
LABEL_4:
  *(_DWORD *)(v15 + 16) = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(v15 + 20) = *(_BYTE *)(a2 + 12);
  *(_BYTE *)(v15 + 21) = *(_BYTE *)(a2 + 13);
  *(_BYTE *)(v15 + 22) = *(_BYTE *)(a2 + 14);
  *(_BYTE *)(v15 + 23) = *(_BYTE *)(a2 + 15);
  if ( v14 + 48 != a2 + 16 )
  {
    v16 = *(_QWORD *)(a2 + 24);
    if ( !v16 || (v21 = v16 - 1, v16 == 1) )
    {
      *(_QWORD *)(v15 + 32) = 0;
    }
    else
    {
      v22 = *(const void **)(a2 + 16);
      v23 = *(void **)(v15 + 24);
      if ( *(_QWORD *)(v15 + 40) < v16 )
      {
        v32 = *(const void **)(a2 + 16);
        v29 = qvector_reserve();
        v22 = v32;
        v21 = v16 - 1;
        *(_QWORD *)(v15 + 24) = v29;
        v23 = (void *)v29;
      }
      *(_QWORD *)(v15 + 32) = v16;
      memmove(v23, v22, v21);
      *(_BYTE *)(*(_QWORD *)(v15 + 24) + v16 - 1) = 0;
    }
  }
  *(_QWORD *)(v15 + 48) = *(_QWORD *)(a2 + 40);
  sub_2B6AD0(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 112LL),
    **(_QWORD **)(a1 + 32),
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 80LL));
  sub_395FD0(a1, a3, *(double *)a4.m128_u64, v17, v18, v19);
  return 1;
}

