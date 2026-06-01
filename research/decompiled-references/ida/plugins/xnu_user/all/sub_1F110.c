unsigned __int64 __fastcall sub_1F110(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int16 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rax
  void *v12; // r13
  char *src; // [rsp+30h] [rbp-88h]
  __int16 v14; // [rsp+68h] [rbp-50h]
  unsigned __int64 v15; // [rsp+78h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( a3 != a4 )
  {
    src = (char *)qvector_reserve();
    strcpy(src, "MEMORY");
    HIBYTE(v14) = 6;
    LOBYTE(v14) = (*(_DWORD *)(qword_9AD30 + 144LL * *(int *)(a1 + 1176) + 128) > 4) + 1;
    v12 = (void *)qalloc_or_throw();
    memcpy(v12, src, 7u);
    v8 = a2[1];
    v9 = v14;
    v10 = *a2;
    if ( a2[2] < (unsigned __int64)(v8 + 1) )
    {
      v10 = qvector_reserve();
      v9 = v14;
      *a2 = v10;
      v8 = a2[1];
    }
    v11 = v10 + 80 * v8;
    *(__m128i *)(v11 + 24) = _mm_unpacklo_epi64((__m128i)7uLL, (__m128i)7uLL);
    *(_QWORD *)v11 = a3;
    *(_QWORD *)(v11 + 8) = a4;
    *(_QWORD *)(v11 + 16) = v12;
    *(_QWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 64) = 0;
    *(_WORD *)(v11 + 72) = v9;
    *(__m128i *)(v11 + 48) = _mm_unpacklo_epi64((__m128i)0LL, (__m128i)0LL);
    ++a2[1];
    if ( src )
      qfree();
  }
  return v15 - __readfsqword(0x28u);
}

