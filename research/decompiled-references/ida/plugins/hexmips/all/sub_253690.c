__int64 __fastcall sub_253690(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // rdx
  __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  void *v10; // r13
  __m128i si128; // xmm0
  size_t v12; // rbp
  __m128i v13[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = **(_QWORD ***)(a1 + 96);
  if ( !v4 )
    return 0;
  v5 = 24;
  v6 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v6 )
    goto LABEL_11;
  if ( (*(_BYTE *)v6 & 2) != 0 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 24);
      v5 = v6 + 24;
      if ( a2 >= v8 )
        break;
      v6 = *(_QWORD *)(v6 + 8);
      if ( (*(_BYTE *)v6 & 2) != 0 )
        return 0;
    }
    if ( v8 >= a2 )
      break;
    v6 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)v6 & 2) != 0 )
      return 0;
  }
  if ( v4 == (_QWORD *)v6 )
    return 0;
LABEL_11:
  v9 = *(_QWORD *)(v5 + 16);
  v10 = nullptr;
  si128 = _mm_unpacklo_epi64((__m128i)v9, (__m128i)v9);
  if ( v9 )
  {
    v12 = 4 * v9;
    v13[0] = si128;
    v10 = (void *)qalloc_or_throw();
    memcpy(v10, *(const void **)(v5 + 8), v12);
    si128 = _mm_load_si128(v13);
  }
  if ( *a3 )
  {
    a3[1] = 0;
    v13[0] = si128;
    qfree();
    si128 = _mm_load_si128(v13);
  }
  *a3 = v10;
  *(__m128i *)(a3 + 1) = si128;
  return 1;
}

