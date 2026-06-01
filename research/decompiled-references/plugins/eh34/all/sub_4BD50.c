__int64 __fastcall sub_4BD50(__int64 a1, int *a2)
{
  __int64 *v3; // r12
  __int64 v4; // rdi
  int v5; // eax
  __int64 v7; // rax
  __int64 v8; // r13
  _QWORD *v9; // r12
  size_t v10; // rbp
  void *v11; // rax

  if ( *(_DWORD *)a1 == 6 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v3 )
    {
      v4 = *v3;
      if ( *v3 )
      {
        v3[1] = 0;
        qfree(v4);
      }
      operator delete(v3, 0x18u);
    }
    *(_DWORD *)a1 = 0;
    *(_BYTE *)(a1 + 8) = 0;
  }
  v5 = *a2;
  *(_DWORD *)a1 = *a2;
  if ( v5 == 6 )
  {
    v7 = operator new(0x18u);
    v8 = *((_QWORD *)a2 + 1);
    *(_QWORD *)v7 = 0;
    v9 = (_QWORD *)v7;
    *(_OWORD *)(v7 + 8) = 0;
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 )
    {
      v11 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 8));
      *v9 = v11;
      v9[2] = v10;
      memcpy(v11, *(const void **)v8, v10);
      v9[1] = v10;
    }
    *(_QWORD *)(a1 + 8) = v9;
    return a1;
  }
  else if ( v5 == 7 )
  {
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 2));
    *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)(a2 + 6));
    *(__m128i *)(a1 + 36) = _mm_loadu_si128((const __m128i *)(a2 + 9));
    return a1;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
    return a1;
  }
}
