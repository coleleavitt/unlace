__int64 __fastcall sub_32180(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  size_t v4; // r13
  __int64 v5; // rax
  size_t v6; // r13
  size_t v7; // r13
  size_t v8; // r13
  __m128i v9; // xmm0
  int v10; // eax
  __int64 result; // rax
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax
  void *v15; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = operator new(0xA0u);
  *(_QWORD *)v3 = &off_7D548;
  *(_QWORD *)(v3 + 8) = 0;
  *(_OWORD *)(v3 + 16) = 0;
  v4 = *(_QWORD *)(v2 + 16);
  if ( v4 )
  {
    v12 = (void *)qalloc_or_throw();
    *(_QWORD *)(v3 + 8) = v12;
    *(_QWORD *)(v3 + 24) = v4;
    memcpy(v12, *(const void **)(v2 + 8), v4);
    *(_QWORD *)(v3 + 16) = v4;
  }
  *(_QWORD *)(v3 + 32) = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v3 + 40) = *(_QWORD *)(v2 + 40);
  v5 = *(_QWORD *)(v2 + 48);
  *(_QWORD *)(v3 + 56) = 0;
  *(_QWORD *)(v3 + 48) = v5;
  *(_OWORD *)(v3 + 64) = 0;
  v6 = *(_QWORD *)(v2 + 64);
  if ( v6 )
  {
    v15 = (void *)qalloc_or_throw();
    *(_QWORD *)(v3 + 56) = v15;
    *(_QWORD *)(v3 + 72) = v6;
    memcpy(v15, *(const void **)(v2 + 56), v6);
    *(_QWORD *)(v3 + 64) = v6;
  }
  *(_QWORD *)(v3 + 80) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  v7 = *(_QWORD *)(v2 + 88);
  if ( v7 )
  {
    v14 = (void *)qalloc_or_throw();
    *(_QWORD *)(v3 + 80) = v14;
    *(_QWORD *)(v3 + 96) = v7;
    memcpy(v14, *(const void **)(v2 + 80), v7);
    *(_QWORD *)(v3 + 88) = v7;
  }
  *(_QWORD *)(v3 + 104) = 0;
  *(_OWORD *)(v3 + 112) = 0;
  v8 = *(_QWORD *)(v2 + 112);
  if ( v8 )
  {
    v13 = (void *)qalloc_or_throw();
    *(_QWORD *)(v3 + 104) = v13;
    *(_QWORD *)(v3 + 120) = v8;
    memcpy(v13, *(const void **)(v2 + 104), v8);
    *(_QWORD *)(v3 + 112) = v8;
  }
  v9 = _mm_loadu_si128((const __m128i *)(v2 + 136));
  *(_DWORD *)(v3 + 128) = *(_DWORD *)(v2 + 128);
  *(__m128i *)(v3 + 136) = v9;
  v10 = *(_DWORD *)(v2 + 152);
  *(_QWORD *)(a1 + 8) = v3;
  *(_DWORD *)(v3 + 152) = v10;
  result = (unsigned int)dword_7FC2C;
  *(_DWORD *)a1 = dword_7FC2C;
  return result;
}

