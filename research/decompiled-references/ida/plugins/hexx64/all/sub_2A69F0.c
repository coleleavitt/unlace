unsigned __int64 __fastcall sub_2A69F0(__int64 a1, unsigned __int64 a2, __int64 *a3, char a4, double a5)
{
  __int64 v5; // rax
  __int64 v6; // r13
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __m128i *v11; // rbx
  __int64 v13; // rax
  __m128i v14; // xmm0
  unsigned __int64 v15; // rax
  char v16; // cl
  unsigned __int64 v17; // rdx
  _BYTE *v18; // rdx
  char v19; // dl
  _QWORD *exception; // rdi
  unsigned __int64 v21; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 *v22; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v5 = *(_QWORD *)(a1 + 8);
  v21 = a2;
  v6 = *(_QWORD *)(v5 + 8);
  v23 = __readfsqword(0x28u);
  v8 = *(unsigned __int64 **)(v6 + 1376);
  if ( !v8 )
  {
    v11 = (__m128i *)(v6 + 1376);
    v22 = &v21;
    goto LABEL_16;
  }
  v9 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v9 )
    goto LABEL_13;
  if ( (*(_BYTE *)v9 & 2) != 0 )
    goto LABEL_7;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v9 + 24);
    if ( v21 >= v10 )
      break;
    v9 = *(_QWORD *)(v9 + 8);
LABEL_6:
    if ( (*(_BYTE *)v9 & 2) != 0 )
      goto LABEL_7;
  }
  if ( v10 < v21 )
  {
    v9 = *(_QWORD *)(v9 + 16);
    goto LABEL_6;
  }
  if ( v8 == (unsigned __int64 *)v9 )
  {
LABEL_7:
    v11 = (__m128i *)(v6 + 1376);
    v22 = &v21;
    goto LABEL_8;
  }
LABEL_13:
  if ( (!a4 || !(unsigned int)lexcompare_tinfo())
    && !(unsigned __int8)sub_29A3A0(*(_QWORD *)a1, (__int64 *)(v9 + 32), a3, 0, a5) )
  {
    return v23 - __readfsqword(0x28u);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  v8 = *(unsigned __int64 **)(v6 + 1376);
  v11 = (__m128i *)(v6 + 1376);
  v22 = &v21;
  if ( !v8 )
  {
LABEL_16:
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
    *(_QWORD *)(v13 + 32) = 0;
    *(_OWORD *)(v13 + 16) = 0;
    *(__m128i *)(v13 + 8) = v14;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(_QWORD *)(v6 + 1376) = v13;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v13 & 3LL;
    *(__m128i *)(*(_QWORD *)(v6 + 1376) + 8LL) = _mm_unpacklo_epi64(
                                                   (__m128i)*(unsigned __int64 *)(v6 + 1376),
                                                   (__m128i)*(unsigned __int64 *)(v6 + 1376));
    **(_QWORD **)(v6 + 1376) &= ~1uLL;
    **(_QWORD **)(v6 + 1376) |= 2uLL;
    v8 = *(unsigned __int64 **)(v6 + 1376);
    goto LABEL_9;
  }
LABEL_8:
  if ( !*(_QWORD *)(v6 + 1384) )
  {
LABEL_9:
    sub_C7DB0(v11, v8, 1, &v22);
    goto LABEL_10;
  }
  v15 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v15 & 2) != 0 )
  {
    v19 = 1;
LABEL_30:
    sub_C7DB0(v11, v8, v19, &v22);
    goto LABEL_10;
  }
  v16 = 1;
  while ( 2 )
  {
    v17 = *(_QWORD *)(v15 + 24);
    if ( v21 < v17 )
    {
      v18 = *(_BYTE **)(v15 + 8);
      v16 = 1;
LABEL_26:
      if ( (*v18 & 2) != 0 )
        goto LABEL_27;
      v15 = (unsigned __int64)v18;
      continue;
    }
    break;
  }
  if ( v17 < v21 )
  {
    v18 = *(_BYTE **)(v15 + 16);
    v16 = 0;
    goto LABEL_26;
  }
  if ( !v15 )
  {
LABEL_27:
    v19 = v16;
    v8 = (unsigned __int64 *)v15;
    goto LABEL_30;
  }
LABEL_10:
  copy_tinfo_t();
  ++*(_DWORD *)(a1 + 76);
  return v23 - __readfsqword(0x28u);
}

