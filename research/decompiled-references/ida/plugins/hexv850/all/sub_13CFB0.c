void __fastcall sub_13CFB0(__int64 a1, const __m128i *a2, int a3)
{
  _QWORD *exception; // rdi
  __int64 *v4; // rbp
  unsigned __int64 v5; // r14
  __int64 *v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  __m128i v14; // xmm1
  char v15; // r15
  unsigned __int64 v16; // rbx
  char v17; // dl
  _BYTE *v18; // rax
  __int64 v19; // rdx
  const __m128i *v20[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = *(__int64 **)(a1 + 1344);
  v20[1] = (const __m128i *)__readfsqword(0x28u);
  v5 = *v4;
  if ( !a3 )
  {
    if ( v5 )
    {
      v6 = (__int64 *)(*(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL);
      if ( v6 )
      {
        while ( (*(_BYTE *)v6 & 2) == 0 )
        {
          while ( (int)sub_252880(a2) < 0 )
          {
            v6 = (__int64 *)v6[1];
            if ( (*(_BYTE *)v6 & 2) != 0 )
              return;
          }
          if ( (int)sub_252880(v6 + 3) >= 0 )
          {
            if ( (__int64 *)*v4 == v6 )
              return;
            goto LABEL_18;
          }
          v6 = (__int64 *)v6[2];
        }
      }
      else
      {
LABEL_18:
        sub_13C880((unsigned __int64 **)v4, v6);
      }
    }
    return;
  }
  v20[0] = a2;
  if ( !v5 )
  {
    v13 = qalloc();
    v14 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)(unsigned __int64)v13);
    if ( !v13 )
      goto LABEL_36;
    *(_OWORD *)(v13 + 16) = 0;
    *(_OWORD *)(v13 + 32) = 0;
    *(__m128i *)(v13 + 8) = v14;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | 2;
    *v4 = v13;
    *(_QWORD *)v13 = v13 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v13 & 3LL;
    *(__m128i *)(*v4 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)*v4, (__m128i)(unsigned __int64)*v4);
    *(_QWORD *)*v4 &= ~1uLL;
    *(_QWORD *)*v4 |= 2uLL;
    v5 = *v4;
LABEL_10:
    v8 = qalloc();
    v9 = v8;
    if ( v8 )
    {
      *(_OWORD *)(v8 + 32) = 0;
      *(_OWORD *)(v8 + 16) = 0;
      *(_OWORD *)v8 = 0;
      v10 = _mm_loadu_si128(a2);
      *(_DWORD *)(v8 + 40) = 0;
      *(__m128i *)(v8 + 24) = v10;
      *(_QWORD *)v8 = v5 & 0xFFFFFFFFFFFFFFFCLL;
      v11 = _mm_loadl_epi64((const __m128i *)v4);
      *(_QWORD *)v8 = v5 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v11, v11);
      if ( *v4 == v5 )
      {
        *(_QWORD *)v5 = v8 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v5 & 3LL;
        *(_QWORD *)(*v4 + 8) = v8;
        *(_QWORD *)(*v4 + 16) = v8;
        v19 = *(_QWORD *)v8 & 2LL;
        *(_QWORD *)v8 &= ~1uLL;
        *(_QWORD *)v8 = v19 | *v4 & 0xFFFFFFFFFFFFFFFCLL;
      }
      else
      {
        *(_QWORD *)(v5 + 8) = v8;
        if ( *(_QWORD *)(*v4 + 8) == v5 )
          *(_QWORD *)(*v4 + 8) = v8;
        sub_13CC20(v4, (__int64 *)v8);
      }
      ++v4[1];
      v12 = v9 + 24;
      goto LABEL_16;
    }
LABEL_36:
    exception = __cxa_allocate_exception(8u);
    *exception = (char *)&`vtable for'std::bad_alloc + 16;
    __cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::bad_alloc,
      (void (*)(void *))&std::bad_alloc::~bad_alloc);
  }
  if ( !v4[1] )
    goto LABEL_10;
  v15 = 1;
  v16 = *(_QWORD *)v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)v16 & 2) != 0 )
  {
    v17 = 1;
LABEL_25:
    v12 = sub_13CE60((__m128i *)v4, (unsigned __int64 *)v5, v17, v20) + 24;
    goto LABEL_16;
  }
  while ( 1 )
  {
    v12 = v16 + 24;
    if ( (int)sub_252880(a2) < 0 )
    {
      v18 = *(_BYTE **)(v16 + 8);
      v15 = 1;
      goto LABEL_29;
    }
    if ( (int)sub_252880(v16 + 24) >= 0 )
      break;
    v18 = *(_BYTE **)(v16 + 16);
    v15 = 0;
LABEL_29:
    if ( (*v18 & 2) != 0 )
      goto LABEL_30;
    v16 = (unsigned __int64)v18;
  }
  if ( !v16 )
  {
LABEL_30:
    v17 = v15;
    v5 = v16;
    goto LABEL_25;
  }
LABEL_16:
  *(_DWORD *)(v12 + 16) = a3;
}

