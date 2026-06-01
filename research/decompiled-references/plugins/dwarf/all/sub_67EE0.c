_QWORD *__fastcall sub_67EE0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // r14
  _QWORD *v6; // rbx
  size_t v7; // r13
  void *v9; // rax

  v2 = *(_QWORD *)(a2 + 16) + 48LL * *(int *)(a2 + 40);
  v3 = operator new(0x40u);
  v4 = _mm_loadu_si128((const __m128i *)v2);
  v5 = *(_QWORD *)(v2 + 40);
  v6 = (_QWORD *)v3;
  *(_DWORD *)(v3 + 8) = 1;
  *(__m128i *)(v3 + 16) = v4;
  *(_QWORD *)v3 = &off_C8AD0;
  *(_QWORD *)(v3 + 32) = 0;
  *(_OWORD *)(v3 + 40) = 0;
  v7 = *(_QWORD *)(v2 + 24);
  if ( v7 )
  {
    v9 = (void *)qalloc_or_throw(*(_QWORD *)(v2 + 24));
    v6[4] = v9;
    v6[6] = v7;
    memcpy(v9, *(const void **)(v2 + 16), v7);
    v6[5] = v7;
  }
  v6[7] = v5;
  *a1 = v6;
  return a1;
}
