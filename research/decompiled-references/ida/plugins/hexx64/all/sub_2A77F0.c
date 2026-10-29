unsigned __int64 __fastcall sub_2A77F0(__int64 a1, unsigned int *a2, int a3, double a4)
{
  _QWORD *exception; // rdi
  int v5; // r13d
  unsigned __int64 *v7; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  __m128i *v10; // r14
  unsigned __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  __int64 v15; // rax
  __m128i v16; // xmm1
  char v17; // r15
  unsigned __int64 v18; // r12
  char v19; // dl
  int v20; // eax
  _BYTE *v21; // rax
  int v22; // eax
  unsigned int *v23; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-40h]

  v5 = a3 + 1;
  v24 = __readfsqword(0x28u);
  v7 = *(unsigned __int64 **)(a1 + 16);
  if ( !v7 )
  {
    v23 = a2;
    v10 = (__m128i *)(a1 + 16);
    goto LABEL_26;
  }
  v8 = 24;
  v9 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v9 )
  {
LABEL_21:
    *(_DWORD *)(v8 + 40) += v5;
    return v24 - __readfsqword(0x28u);
  }
  if ( (*(_BYTE *)(*v7 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
  {
    v23 = a2;
    v10 = (__m128i *)(a1 + 16);
    goto LABEL_5;
  }
  while ( 1 )
  {
    v8 = v9 + 24;
    v12 = sub_29E6F0((__int64)a2, v9 + 24, a4);
    if ( !v12 )
    {
      v12 = sub_29E6F0((__int64)(a2 + 4), v9 + 40, a4);
      if ( !v12 )
        break;
    }
    if ( v12 >= 0 )
      goto LABEL_17;
LABEL_10:
    v9 = *(_QWORD *)(v9 + 8);
LABEL_11:
    if ( (*(_BYTE *)v9 & 2) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      goto LABEL_13;
    }
  }
  if ( (signed int)a2[8] < *(_DWORD *)(v9 + 56) )
    goto LABEL_10;
LABEL_17:
  v13 = sub_29E6F0(v9 + 24, (__int64)a2, a4);
  if ( !v13 )
  {
    v13 = sub_29E6F0(v9 + 40, (__int64)(a2 + 4), a4);
    if ( !v13 )
    {
      if ( *(_DWORD *)(v9 + 56) >= (signed int)a2[8] )
        goto LABEL_20;
      goto LABEL_24;
    }
  }
  if ( v13 < 0 )
  {
LABEL_24:
    v9 = *(_QWORD *)(v9 + 16);
    goto LABEL_11;
  }
LABEL_20:
  if ( *(_QWORD *)(a1 + 16) != v9 )
    goto LABEL_21;
LABEL_13:
  v23 = a2;
  v10 = (__m128i *)(a1 + 16);
  if ( !v9 )
  {
LABEL_26:
    v15 = qalloc();
    v16 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v15, (__m128i)(unsigned __int64)v15);
    if ( !v15 )
    {
      exception = __cxa_allocate_exception(8u);
      *exception = (char *)&`vtable for'std::bad_alloc + 16;
      __cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'std::bad_alloc,
        (void (*)(void *))&std::bad_alloc::~bad_alloc);
    }
    *(_QWORD *)(v15 + 64) = 0;
    *(_OWORD *)(v15 + 16) = 0;
    *(_OWORD *)(v15 + 32) = 0;
    *(_OWORD *)(v15 + 48) = 0;
    *(_QWORD *)v15 = v15 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *(__m128i *)(v15 + 8) = v16;
    *(_QWORD *)(a1 + 16) = v15;
    *(_QWORD *)v15 = v15 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v15 & 3LL;
    *(__m128i *)(*(_QWORD *)(a1 + 16) + 8LL) = _mm_unpacklo_epi64(
                                                 (__m128i)*(unsigned __int64 *)(a1 + 16),
                                                 (__m128i)*(unsigned __int64 *)(a1 + 16));
    **(_QWORD **)(a1 + 16) &= ~1uLL;
    **(_QWORD **)(a1 + 16) |= 2uLL;
    goto LABEL_6;
  }
  v7 = (unsigned __int64 *)v9;
LABEL_5:
  if ( !*(_QWORD *)(a1 + 24) )
  {
LABEL_6:
    v11 = sub_2A7620(v10, *(unsigned __int64 **)(a1 + 16), 1, &v23) + 24;
    goto LABEL_7;
  }
  v17 = 1;
  v18 = *v7 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v18 & 2) != 0 )
  {
    v19 = 1;
LABEL_30:
    v11 = sub_2A7620(v10, v7, v19, &v23) + 24;
    goto LABEL_7;
  }
  while ( 2 )
  {
    v11 = v18 + 24;
    v20 = sub_29E6F0((__int64)a2, v18 + 24, a4);
    if ( !v20 )
    {
      v20 = sub_29E6F0((__int64)(a2 + 4), v18 + 40, a4);
      if ( !v20 )
      {
        if ( (signed int)a2[8] >= *(_DWORD *)(v18 + 56) )
          goto LABEL_39;
LABEL_34:
        v21 = *(_BYTE **)(v18 + 8);
        v17 = 1;
LABEL_35:
        if ( (*v21 & 2) != 0 )
          goto LABEL_36;
        v18 = (unsigned __int64)v21;
        continue;
      }
    }
    break;
  }
  if ( v20 < 0 )
    goto LABEL_34;
LABEL_39:
  v22 = sub_29E6F0(v18 + 24, (__int64)a2, a4);
  if ( v22 || (v22 = sub_29E6F0(v18 + 40, (__int64)(a2 + 4), a4)) != 0 )
  {
    if ( v22 >= 0 )
      goto LABEL_44;
    goto LABEL_41;
  }
  if ( *(_DWORD *)(v18 + 56) < (signed int)a2[8] )
  {
LABEL_41:
    v21 = *(_BYTE **)(v18 + 16);
    v17 = 0;
    goto LABEL_35;
  }
LABEL_44:
  if ( !v18 )
  {
LABEL_36:
    v19 = v17;
    v7 = (unsigned __int64 *)v18;
    goto LABEL_30;
  }
LABEL_7:
  *(_DWORD *)(v11 + 40) = v5;
  return v24 - __readfsqword(0x28u);
}

