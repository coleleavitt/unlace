__int64 __fastcall sub_257F10(__int64 a1, unsigned __int64 a2, __int64 *a3, unsigned __int64 a4)
{
  _QWORD *v5; // rdx
  __int64 v6; // r12
  unsigned __int64 v7; // rax
  __int64 v9; // rdx
  void *v10; // r13
  __m128i si128; // xmm0
  __int64 v12; // rdi
  size_t v13; // rbp
  __m128i v14[3]; // [rsp+0h] [rbp-38h] BYREF

  v5 = **(_QWORD ***)(a1 + 96);
  if ( !v5 )
    return 0;
  v6 = 24;
  v7 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v7 )
    goto LABEL_11;
  if ( (*(_BYTE *)v7 & 2) != 0 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      a4 = *(_QWORD *)(v7 + 24);
      v6 = v7 + 24;
      if ( a2 >= a4 )
        break;
      v7 = *(_QWORD *)(v7 + 8);
      if ( (*(_BYTE *)v7 & 2) != 0 )
        return 0;
    }
    if ( a4 >= a2 )
      break;
    v7 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)v7 & 2) != 0 )
      return 0;
  }
  if ( v5 == (_QWORD *)v7 )
    return 0;
LABEL_11:
  v9 = *(_QWORD *)(v6 + 16);
  v10 = nullptr;
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v9, (__m128i)(unsigned __int64)v9);
  if ( v9 )
  {
    v13 = 4 * v9;
    v14[0] = si128;
    v10 = (void *)qalloc_or_throw(4 * v9, a2, v9, a4);
    memcpy(v10, *(const void **)(v6 + 8), v13);
    si128 = _mm_load_si128(v14);
  }
  v12 = *a3;
  if ( *a3 )
  {
    a3[1] = 0;
    v14[0] = si128;
    qfree(v12);
    si128 = _mm_load_si128(v14);
  }
  *a3 = (__int64)v10;
  *(__m128i *)(a3 + 1) = si128;
  return 1;
}

