__int64 __fastcall sub_14660(_QWORD *a1, __int64 a2)
{
  void *v2; // r13
  size_t v4; // r12
  __int64 v5; // rdx
  __int64 v6; // r15
  int v7; // r14d
  __int64 v8; // rsi
  __int16 v9; // bp
  __int64 v10; // rax
  __int64 v12; // rax

  v2 = nullptr;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
  {
    v2 = (void *)qalloc_or_throw();
    memcpy(v2, *(const void **)a2, v4);
  }
  v5 = a1[3];
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_DWORD *)(a2 + 32);
  v8 = a1[2];
  v9 = *(_WORD *)(a2 + 36);
  if ( a1[4] < (unsigned __int64)(v5 + 1) )
  {
    v12 = qvector_reserve();
    a1[2] = v12;
    v5 = a1[3];
    v8 = v12;
  }
  v10 = v8 + 40 * v5;
  *(_QWORD *)v10 = v2;
  *(_QWORD *)(v10 + 24) = v6;
  *(_DWORD *)(v10 + 32) = v7;
  *(_WORD *)(v10 + 36) = v9;
  *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  ++a1[3];
  return 0;
}

