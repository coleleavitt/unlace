_QWORD *__fastcall sub_67FA0(_QWORD *a1, __int64 a2)
{
  void (__fastcall *v2)(_QWORD *); // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // r14
  _QWORD *v7; // rbx
  size_t v8; // r13
  void *v10; // rax

  v2 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)a2 + 24LL);
  if ( (char *)v2 == (char *)sub_67EE0 )
  {
    v3 = *(_QWORD *)(a2 + 16) + 48LL * *(int *)(a2 + 40);
    v4 = operator new(0x40u);
    v5 = _mm_loadu_si128((const __m128i *)v3);
    v6 = *(_QWORD *)(v3 + 40);
    v7 = (_QWORD *)v4;
    *(_DWORD *)(v4 + 8) = 1;
    *(__m128i *)(v4 + 16) = v5;
    *(_QWORD *)v4 = &off_C8AD0;
    *(_QWORD *)(v4 + 32) = 0;
    *(_OWORD *)(v4 + 40) = 0;
    v8 = *(_QWORD *)(v3 + 24);
    if ( v8 )
    {
      v10 = (void *)qalloc_or_throw(*(_QWORD *)(v3 + 24));
      v7[4] = v10;
      v7[6] = v8;
      memcpy(v10, *(const void **)(v3 + 16), v8);
      v7[5] = v8;
    }
    v7[7] = v6;
    *a1 = v7;
  }
  else
  {
    v2(a1);
  }
  return a1;
}
