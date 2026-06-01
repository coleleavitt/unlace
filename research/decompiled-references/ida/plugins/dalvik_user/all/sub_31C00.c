__int64 __fastcall sub_31C00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  size_t v4; // r13
  __m128i v5; // xmm0
  size_t v6; // r13
  int v7; // eax
  __int64 result; // rax
  void *v9; // rax
  void *v10; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = operator new(0x58u);
  *(_QWORD *)v3 = &off_7D580;
  *(_QWORD *)(v3 + 8) = 0;
  *(_OWORD *)(v3 + 16) = 0;
  v4 = *(_QWORD *)(v2 + 16);
  if ( v4 )
  {
    v9 = (void *)qalloc_or_throw();
    *(_QWORD *)(v3 + 8) = v9;
    *(_QWORD *)(v3 + 24) = v4;
    memcpy(v9, *(const void **)(v2 + 8), v4);
    *(_QWORD *)(v3 + 16) = v4;
  }
  v5 = _mm_loadu_si128((const __m128i *)(v2 + 32));
  *(_QWORD *)(v3 + 48) = 0;
  *(__m128i *)(v3 + 32) = v5;
  *(_OWORD *)(v3 + 56) = 0;
  v6 = *(_QWORD *)(v2 + 56);
  if ( v6 )
  {
    v10 = (void *)qalloc_or_throw();
    *(_QWORD *)(v3 + 48) = v10;
    *(_QWORD *)(v3 + 64) = v6;
    memcpy(v10, *(const void **)(v2 + 48), v6);
    *(_QWORD *)(v3 + 56) = v6;
  }
  *(_QWORD *)(v3 + 72) = *(_QWORD *)(v2 + 72);
  v7 = *(_DWORD *)(v2 + 80);
  *(_QWORD *)(a1 + 8) = v3;
  *(_DWORD *)(v3 + 80) = v7;
  result = (unsigned int)dword_7FC28;
  *(_DWORD *)a1 = dword_7FC28;
  return result;
}

