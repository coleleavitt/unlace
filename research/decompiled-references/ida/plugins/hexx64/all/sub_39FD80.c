__int64 __fastcall sub_39FD80(__int64 a1, __int64 a2, unsigned int a3, __m128 a4, __m128 a5, __m128i a6, double a7)
{
  _QWORD *exception; // rdi
  int v10; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 *v14; // rdx
  __m128i *v15; // r15
  unsigned __int64 *v16; // rsi
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // rbp
  __int64 v19; // r12
  unsigned __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  size_t v25; // r8
  const void *v26; // r9
  void *v27; // rdi
  int v28; // eax
  _BYTE *v29; // rax
  char v30; // dl
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+0h] [rbp-78h]
  char v34; // [rsp+8h] [rbp-70h]
  const void *v35; // [rsp+8h] [rbp-70h]
  const __m128i *v36; // [rsp+18h] [rbp-60h] BYREF
  __int64 v37; // [rsp+20h] [rbp-58h] BYREF
  int v38; // [rsp+28h] [rbp-50h]
  unsigned __int64 v39; // [rsp+38h] [rbp-40h]

  v10 = *(char *)(a2 + 12);
  v39 = __readfsqword(0x28u);
  v12 = **(_QWORD **)(a1 + 88);
  v38 = v10;
  v13 = *(_QWORD *)(a1 + 32);
  v37 = v12;
  v14 = &v37;
  v15 = *(__m128i **)(v13 + 80);
  v36 = (const __m128i *)&v37;
  v16 = (unsigned __int64 *)v15->m128i_i64[0];
  if ( !v15->m128i_i64[0] )
  {
    v31 = qalloc();
    a5 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v31, (__m128i)(unsigned __int64)v31);
    if ( !v31 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_OWORD *)(v31 + 16) = 0;
    *(_OWORD *)(v31 + 32) = 0;
    *(_OWORD *)(v31 + 48) = 0;
    *(_QWORD *)v31 = v31 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_OWORD *)(v31 + 64) = 0;
    *(__m128 *)(v31 + 8) = a5;
    v15->m128i_i64[0] = v31;
    *(_QWORD *)v31 = v31 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v31 & 3LL;
    a4 = (__m128)_mm_unpacklo_epi64((__m128i)v15->m128i_u64[0], (__m128i)v15->m128i_u64[0]);
    *(__m128 *)(v15->m128i_i64[0] + 8) = a4;
    *(_QWORD *)v15->m128i_i64[0] &= ~1uLL;
    *(_QWORD *)v15->m128i_i64[0] |= 2uLL;
    v16 = (unsigned __int64 *)v15->m128i_i64[0];
    goto LABEL_3;
  }
  if ( !v15->m128i_i64[1] )
  {
LABEL_3:
    v17 = sub_30C580(v15, v16, 1, &v36);
    v18 = v17 + 24;
    goto LABEL_4;
  }
  v17 = *v16 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v17 & 2) != 0 )
  {
    v30 = 1;
LABEL_19:
    v17 = sub_30C580(v15, v16, v30, &v36);
    v18 = v17 + 24;
    goto LABEL_4;
  }
  v34 = 1;
  while ( 1 )
  {
    v18 = v17 + 24;
    v33 = (__int64)v14;
    v28 = sub_257C40((__int64)v14, v17 + 24);
    v14 = (__int64 *)v33;
    if ( v28 < 0 )
    {
      v34 = 1;
      v29 = *(_BYTE **)(v17 + 8);
      goto LABEL_16;
    }
    if ( (int)sub_257C40(v17 + 24, v33) >= 0 )
      break;
    v29 = *(_BYTE **)(v17 + 16);
    v14 = (__int64 *)v33;
    v34 = 0;
LABEL_16:
    if ( (*v29 & 2) != 0 )
      goto LABEL_17;
    v17 = (unsigned __int64)v29;
  }
  if ( !v17 )
  {
LABEL_17:
    v30 = v34;
    v16 = (unsigned __int64 *)v17;
    goto LABEL_19;
  }
LABEL_4:
  v19 = v17 + 48;
  *(_DWORD *)(v18 + 16) = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(v18 + 20) = *(_BYTE *)(a2 + 12);
  *(_BYTE *)(v18 + 21) = *(_BYTE *)(a2 + 13);
  *(_BYTE *)(v18 + 22) = *(_BYTE *)(a2 + 14);
  *(_BYTE *)(v18 + 23) = *(_BYTE *)(a2 + 15);
  if ( v19 != a2 + 16 )
  {
    v20 = *(_QWORD *)(a2 + 24);
    if ( !v20 || (v25 = v20 - 1, v20 == 1) )
    {
      *(_QWORD *)(v18 + 32) = 0;
    }
    else
    {
      v26 = *(const void **)(a2 + 16);
      v27 = *(void **)(v18 + 24);
      if ( *(_QWORD *)(v18 + 40) < v20 )
      {
        v35 = *(const void **)(a2 + 16);
        v32 = qvector_reserve(v19, *(_QWORD *)(v18 + 24), *(_QWORD *)(a2 + 24), 1);
        v26 = v35;
        v25 = v20 - 1;
        *(_QWORD *)(v18 + 24) = v32;
        v27 = (void *)v32;
      }
      *(_QWORD *)(v18 + 32) = v20;
      memmove(v27, v26, v25);
      *(_BYTE *)(*(_QWORD *)(v18 + 24) + v20 - 1) = 0;
    }
  }
  *(_QWORD *)(v18 + 48) = *(_QWORD *)(a2 + 40);
  sub_2B6710(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 216LL) + 112LL),
    **(_QWORD **)(a1 + 32),
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 80LL));
  sub_395A90(a1, a3, *(double *)a4.m128_u64, v21, v22, v23, *(double *)a5.m128_u64, a6, a7);
  return 1;
}

